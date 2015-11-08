name := "spring-boot-scala-web"

version := "1.0"

scalaVersion := "2.11.7"

sbtVersion := "0.13.1"

seq(webSettings : _*)

libraryDependencies ++= Seq(
  "org.springframework.boot" % "spring-boot-starter-web" % "1.2.7.RELEASE",
  "org.springframework.boot" % "spring-boot-starter-data-jpa" % "1.2.7.RELEASE",
  "org.webjars" % "bootstrap" % "3.1.1",
  "org.thymeleaf" % "thymeleaf-spring4" % "2.1.2.RELEASE",
  "org.hibernate" % "hibernate-validator" % "5.0.2.Final",
  "nz.net.ultraq.thymeleaf" % "thymeleaf-layout-dialect" % "1.2.1",
  "org.hsqldb" % "hsqldb" % "2.3.1",
  "org.springframework.boot" % "spring-boot-starter-tomcat" % "1.2.7.RELEASE" % "provided",
  "javax.servlet" % "javax.servlet-api" % "3.0.1" % "provided"
)


libraryDependencies ++= Seq(
  "org.apache.tomcat.embed" % "tomcat-embed-core"         % "8.0.28" % "container",
  "org.apache.tomcat.embed" % "tomcat-embed-logging-juli" % "8.0.28" % "container",
  "org.apache.tomcat.embed" % "tomcat-embed-jasper"       % "8.0.28" % "container"
)
