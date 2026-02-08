/******************************************************************************************
* Name: build_index_url                                                                   *
* Purpose: This function add "http://www." to the begining of a website's domain and      *
*          "/index.html" to the end of the domain. it's assumed that the variable that    *
*           hold the domain's index is long enough for the resulting string.              *
* Author: Wesley                                                                          *
* Context: practice programs while studying the C programming language.                   *
* Concepts used: Pointers, Loops, strcpy and strcat unctions.                             *
******************************************************************************************/

  void build_index_url(const char *domain, char *index_url){
      strcpy(index_url, domain);
      strcat(index_url, "index.html");
      return;
}
