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

![屏幕快照%202017-05-05%2013.59.18](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2013.59.18.png)

+ quality of service (reliability and performance)

### World Wide Web

a client-server style open distributed system based on standardized protocols and representations.

#### URL

**A syntactic form known as a Uniform Resource Locator (URL) specifies a web page**.

`protocol://computer_name:port/document_name?parameters`

![屏幕快照%202017-05-05%2014.04.34](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2014.04.34.png)

![屏幕快照%202017-05-05%2014.48.24](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2014.48.24.png)

#### HTTP

**HyperText Transfer Protocol (HTTP) is the protocol that a client (e.g. browser) uses to interact with a web server.**

Textual request-response protocol, e.g. GET, POST

![屏幕快照%202017-05-05%2014.49.33](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2014.49.33.png)

![屏幕快照%202017-05-05%2014.49.26](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2014.49.26.png)

status code : 404 Not Found, 304 Not Modified

#### HTML

**HyperText Markup Language (HTML) specifies the representation of a document for display in a browser**

+ Response can be either dynamic or static
+ any form of information can be transpoted (eg. Javascript)


## Modelling Distributed System

![屏幕快照%202017-05-12%2021.56.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2021.56.25.png)

### Physical Model

![屏幕快照%202017-05-12%2021.56.08](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2021.56.08.png)

![屏幕快照%202017-05-12%2021.57.20](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2021.57.20.png)

### Architectural models

![屏幕快照%202017-05-12%2022.02.47](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.02.47.png)

#### Communicating entities 

![屏幕快照%202017-05-12%2022.06.16](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.06.16.png)

![屏幕快照%202017-05-12%2022.11.03](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.11.03.png)

#### Communication Paradigm

![屏幕快照%202017-05-12%2022.13.38](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.13.38.png)

![屏幕快照%202017-05-12%2022.14.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.14.25.png)

![屏幕快照%202017-05-12%2022.15.51](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.15.51.png)

![屏幕快照%202017-05-12%2022.19.34](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.19.34.png)

#### The entities and paradigms in summary

![屏幕快照%202017-05-12%2022.22.34](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.22.34.png)

#### Role and Responsibility

![屏幕快照%202017-05-12%2022.30.39](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.30.39.png)

![屏幕快照%202017-05-12%2022.31.05](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.31.05.png)

### Placement

![屏幕快照%202017-05-12%2023.12.47](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.12.47.png)

#### Some common placement strategies

![屏幕快照%202017-05-12%2023.13.13](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.13.13.png)

### Architectual patterns

Some common strategies 

![屏幕快照%202017-05-12%2023.15.21](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.15.21.png)

![屏幕快照%202017-05-12%2023.15.41](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.15.41.png)

![屏幕快照%202017-05-12%2023.18.12](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.18.12.png)

![屏幕快照%202017-05-12%2023.17.28](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.17.28.png)

![屏幕快照%202017-05-12%2023.17.31](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.17.31.png)

![屏幕快照%202017-05-12%2023.18.01](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.18.01.png)

## Fundamental models

> contain only the essential elements to allow us to reason about some aspects of the system 

### Interaction models

![屏幕快照%202017-05-13%2020.01.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.01.25.png)

#### Distrubuted Algorithm

![屏幕快照%202017-05-13%2020.03.48](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.03.48.png)

#### Performance of communication channels

![屏幕快照%202017-05-13%2020.06.43](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.06.43.png)

#### Computer Clock and Timing Event

##### Synchronous Distributed System

![屏幕快照%202017-05-13%2020.11.09](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.11.09.png)

#### Asynchronous Distributed System

![屏幕快照%202017-05-13%2020.11.09](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.11.09.png)

#### Event Ordering

![屏幕快照%202017-05-13%2020.23.39](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.23.39.png)

![屏幕快照%202017-05-13%2020.23.18](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.23.18.png)

![屏幕快照%202017-05-13%2020.23.56](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.23.56.png)

### Failure Model

![屏幕快照%202017-05-13%2020.26.26](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.26.26.png)

#### Process Omission Failure

![屏幕快照%202017-05-13%2020.27.21](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.27.21.png)

#### Communication Omission Failure

![屏幕快照%202017-05-13%2020.38.01](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.38.01.png)

#### Arbitrary Failure

![屏幕快照%202017-05-13%2020.39.57](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.39.57.png)

![屏幕快照%202017-05-13%2020.42.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.42.25.png)

#### Timing Failure

![屏幕快照%202017-05-13%2020.45.07](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.45.07.png)

#### Failure Detection

![屏幕快照%202017-05-13%2020.47.40](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.47.40.png)

#### Masking Failure

![屏幕快照%202017-05-13%2020.49.52](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.49.52.png)

#### Reliable one-to-one Communication

![屏幕快照%202017-05-13%2020.51.54](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.51.54.png)



