spring-boot-scala-web
====================
A sample web application using spring-boot and Scala


Using gradle as the build tool:
-------------------------------

Build using `./gradlew build`
Run using `./gradlew bootRun`
OR
Run using: `java -jar build/libs/spring-boot-scala-web-0.1.0.jar`

A url listing the hotels is at [http://localhost:8080/hotels](http://localhost:8080/hotels)


Using sbt as the build tool:
----------------------------

Start up the sbt console using `sbt`
Run the Spring boot main program using `runMain mvctest.SampleWebApplication`


Using sbt-revolver for development:
-----------------------------------

Restart Tomcat container after each change in code `~reStart`

