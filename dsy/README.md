# Distributed System              
    
### Definition              
    
> A distrubuted system is one in which hardware or software conponents located at **networked computers** communicate and coordinate their actions **only by passing messages**.              
    
#### Resources Sharing              
    
Typically distributed systems are built around sharing of resources, whether physical (printers, computers) or informational (web pages, documents) .               
​          
#### Services              
    
Resources are typically encapsulated and selectively exposed over the network as services.              
​          
### Characteristics              
    
##### 1. Concurrency :               
    
Typically all computers in the network are working at the same time.               
​          
##### 2.No global clock :              
    
There are limits to how precisely different computers can synchronise their actions using only messages.              
​          
##### 3.Independent failures :              
    
Each computer/network can fail independently, perhaps undetectably.              
​          
#### Common challenges              
    
+ heterogeneity (the system is comprised by different software, computers, network)              
+ openness ( be able to extend / re-implement the distrubuted system )              
+ security              
+ scalability (continue work effectively if user/resources increase)              
+ failure handling              
+ concurrency              
+ transparency  ( maybe hide some errors which are not that important, giving the appearance of simplicity to users and applications ) :              
  ​        
![屏幕快照%202017-05-05%2013.59.18](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2013.59.18.png)              
​          
+ quality of service (reliability and performance)              
  ​        
### World Wide Web              
    
a client-server style open distributed system based on standardized protocols and representations.              
​          
#### URL              
    
**A syntactic form known as a Uniform Resource Locator (URL) specifies a web page**.              
​          
`protocol://computer_name:port/document_name?parameters`              
​          
![屏幕快照%202017-05-05%2014.04.34](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2014.04.34.png)              
​          
![屏幕快照%202017-05-05%2014.48.24](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2014.48.24.png)              
​          
#### HTTP              
    
**HyperText Transfer Protocol (HTTP) is the protocol that a client (e.g. browser) uses to interact with a web server.**              
​          
Textual request-response protocol, e.g. GET, POST              
​          
![屏幕快照%202017-05-05%2014.49.33](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2014.49.33.png)              
​          
![屏幕快照%202017-05-05%2014.49.26](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-05%2014.49.26.png)              
​          
status code : 404 Not Found, 304 Not Modified              
​          
#### HTML              
    
**HyperText Markup Language (HTML) specifies the representation of a document for display in a browser**              
​          
+ Response can be either dynamic or static              
+ any form of information can be transpoted (eg. Javascript)              
  ​        
  ​            
## Modelling Distributed System              
    
![屏幕快照%202017-05-12%2021.56.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2021.56.25.png)              
​          
### Physical Model              
    
![屏幕快照%202017-05-12%2021.56.08](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2021.56.08.png)              
​          
![屏幕快照%202017-05-12%2021.57.20](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2021.57.20.png)              
​          
### Architectural models              
    
![屏幕快照%202017-05-12%2022.02.47](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.02.47.png)              
​          
#### Communicating entities               
    
![屏幕快照%202017-05-12%2022.06.16](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.06.16.png)              
​          
![屏幕快照%202017-05-12%2022.11.03](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.11.03.png)              
​          
#### Communication Paradigm              
    
![屏幕快照%202017-05-12%2022.13.38](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.13.38.png)              
​          
![屏幕快照%202017-05-12%2022.14.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.14.25.png)              
​          
![屏幕快照%202017-05-12%2022.15.51](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.15.51.png)              
​          
![屏幕快照%202017-05-12%2022.19.34](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.19.34.png)              
#### The entities and paradigms in summary              
    
![屏幕快照%202017-05-12%2022.22.34](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.22.34.png)              
​          
#### Role and Responsibility              
    
![屏幕快照%202017-05-12%2022.30.39](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.30.39.png)              
​          
![屏幕快照%202017-05-12%2022.31.05](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2022.31.05.png)                 
### Placement              
    
![屏幕快照%202017-05-12%2023.12.47](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.12.47.png)            
#### Some common placement strategies              
    
![屏幕快照%202017-05-12%2023.13.13](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.13.13.png)              
​          
### Architectual patterns              
    
Some common strategies               
​          
![屏幕快照%202017-05-12%2023.15.21](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.15.21.png)            
![屏幕快照%202017-05-12%2023.15.41](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.15.41.png)              
​          
![屏幕快照%202017-05-12%2023.18.12](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.18.12.png)              
​          
![屏幕快照%202017-05-12%2023.17.28](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.17.28.png)              
​          
![屏幕快照%202017-05-12%2023.17.31](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.17.31.png)              
​          
![屏幕快照%202017-05-12%2023.18.01](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-12%2023.18.01.png)              
​          
## Fundamental models              
    
> contain only the essential elements to allow us to reason about some aspects of the system               
    
![屏幕快照%202017-05-13%2020.01.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.01.25.png)              
​          
### Interaction models              
    
#### Distrubuted Algorithm              
    
![屏幕快照%202017-05-13%2020.03.48](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.03.48.png)              
​          
#### Performance of communication channels              
    
![屏幕快照%202017-05-13%2020.06.43](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.06.43.png)              
​          
#### Computer Clock and Timing Event              
    
##### Synchronous Distributed System              
    
![屏幕快照%202017-05-13%2020.11.09](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.11.09.png)              
​          
#### Asynchronous Distributed System              
    
![屏幕快照%202017-05-13%2020.11.09](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.11.09.png)              
​          
#### Event Ordering              
    
![屏幕快照%202017-05-13%2020.23.39](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.23.39.png)              
​          
![屏幕快照%202017-05-13%2020.23.18](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.23.18.png)              
​          
![屏幕快照%202017-05-13%2020.23.56](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.23.56.png)              
​          
### Failure Model              
    
![屏幕快照%202017-05-13%2020.26.26](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.26.26.png)              
​          
#### Process Omission Failure              
    
![屏幕快照%202017-05-13%2020.27.21](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.27.21.png)              
​          
#### Communication Omission Failure              
    
![屏幕快照%202017-05-13%2020.38.01](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.38.01.png)              
​          
#### Arbitrary Failure              
    
![屏幕快照%202017-05-13%2020.39.57](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.39.57.png)              
​          
![屏幕快照%202017-05-13%2020.42.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.42.25.png)              
​          
#### Timing Failure              
    
![屏幕快照%202017-05-13%2020.45.07](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.45.07.png)              
​          
#### Failure Detection              
    
![屏幕快照%202017-05-13%2020.47.40](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.47.40.png)              
​          
#### Masking Failure              
    
![屏幕快照%202017-05-13%2020.49.52](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.49.52.png)              
​          
#### Reliable one-to-one Communication              
    
![屏幕快照%202017-05-13%2020.51.54](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2020.51.54.png)              
​          
## Networking and Internet              
    
![屏幕快照%202017-05-13%2021.12.12](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2021.12.12.png)               
​          
#### Typical Network Protocol stack              
    
![屏幕快照%202017-05-13%2021.14.03](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2021.14.03.png)              
​          
#### Physical Perspective(layer 1 / 2)              
    
![屏幕快照%202017-05-13%2021.30.23](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2021.30.23.png)               
​          
![屏幕快照%202017-05-14%2013.43.19](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2013.43.19.png)               
​          
#### Layer 3 Perspective              
    
![屏幕快照%202017-05-13%2021.34.16](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2021.34.16.png)              
​          
![屏幕快照%202017-05-13%2021.43.27](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-13%2021.43.27.png)              
​          
![屏幕快照%202017-05-14%2013.42.00](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2013.42.00.png)              
​          
​              
​          
### Layer 4 perspective : transport              
    
####TCP and UDP : Streams and Messages              
    
![屏幕快照%202017-05-14%2013.39.12](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2013.39.12.png)              
​          
![屏幕快照%202017-05-14%2013.44.05](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2013.44.05.png)               
​          
### Layer 5 example :              
    
#### DNS : the domain name system              
    
![屏幕快照%202017-05-14%2013.52.58](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2013.52.58.png)               
​          
#### DHCP              
    
![屏幕快照%202017-05-14%2013.57.47](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2013.57.47.png)               
​          
####Revisit www example              
    
![屏幕快照%202017-05-14%2013.59.59](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2013.59.59.png)              
​          
![屏幕快照%202017-05-14%2014.03.03](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2014.03.03.png)               
​          
### NAT and firewalls              
    
![屏幕快照%202017-05-14%2014.15.22](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2014.15.22.png)               
​          
#### Network issue for distrubuted system              
    
![屏幕快照%202017-05-14%2014.23.03](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2014.23.03.png)               
​          
![屏幕快照%202017-05-14%2014.23.09](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2014.23.09.png)               
​          
## Interprocess communication              
    
### Sockets and addresse              
    
#### Sockets              
    
![屏幕快照%202017-05-14%2016.34.46](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2016.34.46.png)               
​          
​              
​          
![屏幕快照%202017-05-14%2016.46.11](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2016.46.11.png)              
​          
#### Message Destination              
    
 ![屏幕快照%202017-05-14%2016.56.31](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2016.56.31.png)               
​          
#### Address resolution              
    
![屏幕快照%202017-05-14%2016.57.02](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2016.57.02.png)              
​          
​              
​          
### UDP datagram communication              
    
![屏幕快照%202017-05-14%2019.20.27](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2019.20.27.png)              
​          
![屏幕快照%202017-05-14%2019.22.16](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2019.22.16.png)              
​          
### TCP stream communication              
    
![屏幕快照%202017-05-14%2019.25.51](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2019.25.51.png)              
​          
![屏幕快照%202017-05-14%2019.26.09](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2019.26.09.png)              
​          
​              
​          
### External data representation and marshalling              
    
![屏幕快照%202017-05-14%2019.39.45](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2019.39.45.png)               
​          
#### Multicast Communication              
    
![屏幕快照%202017-05-14%2019.44.54](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2019.44.54.png)              
​          
![屏幕快照%202017-05-14%2020.00.46](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-14%2020.00.46.png)              
​          
### Request-Reply protocols            
    
![屏幕快照%202017-05-17%2018.48.28](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2018.48.28.png)            
​          
![屏幕快照%202017-05-17%2018.51.15](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2018.51.15.png)            
​          
### Request-reply API Note            
    
![屏幕快照%202017-05-17%2019.18.33](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.18.33.png)            
​          
### Request-Reply Implement Note            
    
![屏幕快照%202017-05-17%2019.02.21](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.02.21.png)            
​          
![屏幕快照%202017-05-17%2019.02.30](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.02.30.png)            
​          
### Request Reply : TCP vs UDP            
    
![屏幕快照%202017-05-17%2019.34.27](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.34.27.png)            
​          
## HTTP  revisited            
    
![屏幕快照%202017-05-17%2019.36.21](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.36.21.png)            
​          
![屏幕快照%202017-05-17%2019.39.41](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.39.41.png)            
​          
### HTTP Operation Paradigms            
    
#### HTML Form            
    
![屏幕快照%202017-05-17%2019.44.37](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.44.37.png)            
​          
![屏幕快照%202017-05-17%2019.54.13](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.54.13.png)            
​          
​            
​          
#### REST            
    
![屏幕快照%202017-05-17%2019.54.48](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.54.48.png)            
​          
![屏幕快照%202017-05-17%2019.54.56](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2019.54.56.png)            
​          
### Remote Procedure Calls            
    
![屏幕快照%202017-05-17%2020.05.11](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2020.05.11.png)            
​          
![屏幕快照%202017-05-17%2020.05.23](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2020.05.23.png)            
​          
![屏幕快照%202017-05-17%2020.14.14](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2020.14.14.png)            
​          
​            
​          
### Notes about HTTP servers            
    
![屏幕快照%202017-05-17%2020.19.09](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2020.19.09.png)            
​          
![屏幕快照%202017-05-17%2020.19.12](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-17%2020.19.12.png)              
​          
### RPC (remote procedure call)          
    
![屏幕快照%202017-05-18%2020.42.58](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2020.42.58.png)          
​          
#### Local vs Remote Procedure call          
    
![屏幕快照%202017-05-18%2020.53.50](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2020.53.50.png)          
​          
#### Interface definition languages (IDLs)          
    
![屏幕快照%202017-05-18%2020.56.37](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2020.56.37.png)          
​          
![屏幕快照%202017-05-18%2020.57.33](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2020.57.33.png)          
​          
#### RPC call semantics          
    
![屏幕快照%202017-05-18%2020.58.01](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2020.58.01.png)          
​          
![屏幕快照%202017-05-18%2021.01.28](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.01.28.png)          
​          
#### Transparency          
    
![屏幕快照%202017-05-18%2021.02.59](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.02.59.png)          
​          
### Remote Method Invocation          
    
![屏幕快照%202017-05-18%2021.06.21](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.06.21.png)          
​          
#### The Object Model          
    
![屏幕快照%202017-05-18%2021.20.14](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.20.14.png)          
​          
#### Distrubuted Obejct          
    
![屏幕快照%202017-05-18%2021.21.56](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.21.56.png)          
​          
#### Implementing RMI          
    
![屏幕快照%202017-05-18%2021.23.01](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.23.01.png)          
​          
![屏幕快照%202017-05-18%2021.32.25](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.32.25.png)          
​          
​          
​          
### Interface in Java RMI          
    
![屏幕快照%202017-05-18%2021.40.06](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.40.06.png)          
​          
![屏幕快照%202017-05-18%2021.40.12](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.40.12.png)          
​          
#### Serializable vs Remote          
    
![屏幕快照%202017-05-18%2021.42.05](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.42.05.png)          
​          
1. **Serializable object, primitive value will have a same class object created in caller proces.**          
2. **Remote object will have a proxy object created in caller process.**          
   ​        
   ​        
   ​        
#### Implementing a Remote Object          
    
![屏幕快照%202017-05-18%2021.57.45](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.57.45.png)          
​          
![屏幕快照%202017-05-18%2021.57.57](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.57.57.png)          
​          
​          
​          
#### RMI Registry          
    
![屏幕快照%202017-05-18%2021.58.58](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2021.58.58.png)          
​          
![屏幕快照%202017-05-18%2022.01.27](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2022.01.27.png)          
​          
#### Server Program          
    
![屏幕快照%202017-05-18%2022.04.48](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2022.04.48.png)          
​          
![屏幕快照%202017-05-18%2022.05.23](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2022.05.23.png)          
​          
​          
​          
#### Client Program          
    
![屏幕快照%202017-05-18%2022.06.20](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2022.06.20.png)          
​          
![屏幕快照%202017-05-18%2022.06.43](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2022.06.43.png)          
​          
#### In sum          
    
![屏幕快照%202017-05-18%2022.07.23](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2022.07.23.png)      
![屏幕快照%202017-05-18%2022.10.56](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2022.10.56.png)          
​          
![屏幕快照%202017-05-18%2022.11.01](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-18%2022.11.01.png)          
    
## Indirect Communication    
    
![屏幕快照%202017-05-20%2022.22.56](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.22.56.png)    
    
### Space and Time uncoupling    
    
![屏幕快照%202017-05-20%2022.26.14](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.26.14.png)    
    
![屏幕快照%202017-05-20%2022.28.42](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.28.42.png)    
    
    
    
#### Time uncoupling vs asynchronous communication    
    
![屏幕快照%202017-05-20%2022.31.00](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.31.00.png)    
    
![屏幕快照%202017-05-20%2022.33.04](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.33.04.png)    
    
### Group Communicaiton    
    
![屏幕快照%202017-05-20%2022.33.40](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.33.40.png)    
    
#### Group programming model    
    
![屏幕快照%202017-05-20%2022.36.24](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.36.24.png)    
    
### Group communication options    
    
![屏幕快照%202017-05-20%2022.37.50](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.37.50.png)    
    
### Implementation Issues    
    
#### Reliability    
    
![屏幕快照%202017-05-20%2022.40.11](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.40.11.png)    
    
####%20Ordering%20![屏幕快照%202017-05-20%2022.54.26](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.54.26.png)    
    
#### Group Member Management    
    
![屏幕快照%202017-05-20%2022.54.53](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.54.53.png)    
    
![屏幕快照%202017-05-20%2022.57.55](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.57.55.png)    
    
### Publish-Subscribe    
    
![屏幕快照%202017-05-20%2022.58.24](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2022.58.24.png)    
    
#### Applications    
    
![屏幕快照%202017-05-20%2023.02.43](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2023.02.43.png)    
    
#### Pub-Sub characteristics and options    
    
![屏幕快照%202017-05-20%2023.04.11](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2023.04.11.png)    
    
#### Subscription(filter) model    
    
![屏幕快照%202017-05-20%2023.06.35](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2023.06.35.png)    
    
![屏幕快照%202017-05-20%2023.07.14](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2023.07.14.png)    
    
### Centralized vs Distributed Implementations    
    
![屏幕快照%202017-05-20%2023.10.02](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2023.10.02.png)    
    
![屏幕快照%202017-05-20%2023.11.11](https://raw.githubusercontent.com/nzhl/review/master/images/屏幕快照%202017-05-20%2023.11.11.png)    
    
