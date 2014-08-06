void mpri(const char* str,...)
{
  char* ptr = (char *)&str;
  
  ptr += sizeof(void*);
  printf("%s\n",*(char**)ptr);
  
  ptr += sizeof(void*);
  printf("%d\n",*(int*)ptr);
}
