# Distributed System

### Definition

> A distrubuted system is one in which hardware or software conponents located at **networked computers** communicate and coordinate their actions **only by passing messages**.

#### Resources Sharing

Typically distributed systems are built around sharing of resources, whether physical (printers, computers) or informational (web pages, documents) . 

#### Services

Resources are typically encapsulated and selectively exposed over the network as services.

### Characteristics

##### 1. Concurrency : 

Typically all computers in the network are working at the same time. 

##### 2.No global clock :

There are limits to how precisely different computers can synchronise their actions using only messages.

##### 3.Independent failures :

Each computer/network can fail independently, perhaps undetectably.

#### Common challenges

+ heterogeneity (the system is comprised by different software, computers, network)
+ openness ( be able to extend / re-implement the distrubuted system )
+ security
+ scalability (continue work effectively if user/resources increase)
+ failure handling
+ concurrency
+ transparency  ( maybe hide some errors which are not that important, giving the appearance of simplicity to users and applications ) :

![屏幕快照%202017-05-05%2013.59.18](../images/屏幕快照%202017-05-05%2013.59.18.png)

+ quality of service (reliability and performance)

### World Wide Web

a client-server style open distributed system based on standardized protocols and representations.

#### URL

**A syntactic form known as a Uniform Resource Locator (URL) specifies a web page**.

`protocol://computer_name:port/document_name?parameters`

![屏幕快照%202017-05-05%2014.04.34](../images/屏幕快照%202017-05-05%2014.04.34.png)

![屏幕快照%202017-05-05%2014.48.24](../images/屏幕快照%202017-05-05%2014.48.24.png)

#### HTTP

**HyperText Transfer Protocol (HTTP) is the protocol that a client (e.g. browser) uses to interact with a web server.**

Textual request-response protocol, e.g. GET, POST

![屏幕快照%202017-05-05%2014.49.33](../images/屏幕快照%202017-05-05%2014.49.33.png)

![屏幕快照%202017-05-05%2014.49.26](../images/屏幕快照%202017-05-05%2014.49.26.png)

status code : 404 Not Found, 304 Not Modified

#### HTML

**HyperText Markup Language (HTML) specifies the representation of a document for display in a browser**

+ Response can be either dynamic or static
+ any form of information can be transpoted (eg. Javascript)





