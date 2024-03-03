package main

import (
	"fmt"
	"log"
	"github.com/gocolly/colly/v2"
)

func main() {
	// Create a new collector
	c := colly.NewCollector()

	// Set up a callback to be executed when a visited HTML element is found
	c.OnHTML("a[href]", func(e *colly.HTMLElement) {
		link := e.Attr("href")
		// Print the found link
		fmt.Println(link)
	})

	// Set up error handling
	c.OnError(func(r *colly.Response, err error) {
		log.Println("Request URL:", r.Request.URL, "failed with response:", r, "\nError:", err)
	})

	// Set up a callback to be executed before making a request
	c.OnRequest(func(r *colly.Request) {
		fmt.Println("Visiting", r.URL)
	})

	// Start the scraping process by visiting a URL
	err := c.Visit("https://free-proxy-list.net/")
	if err != nil {
		log.Fatal(err)
	}


	c.Wait()
}
