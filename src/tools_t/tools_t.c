#include "src/tools_t/tools_t.h"


#define GENERATE_FUNCTION_NUMERIC(type)\
  int COMPARE_N_##type(const void *a, const  void *b){ \
    if (*(type*)a == *(type*)b) return 0; \
    if (*(type*)a > *(type*)b) return 1; \
    return -1; }\
    \
  void COPY_ARRAY_##type(type *dst, const type *src, size_t size){\
    for(size_t i = 0; i < size; ++i) dst[i]=src[i]; }\
\

int 
COMPARE_N_TYPE_STRING(const void *a,const  void* b)
{
  return strcmp(( char*)a,( char*)b);
}

void COPY_ARRAY_TYPE_STRING(char** dst, const char** src, size_t size)
{
  for(size_t i = 0; i < size; ++i) strcpy(dst[i],src[i]);
}


GENERATE_FUNCTION_NUMERIC(TYPE_CHAR)
GENERATE_FUNCTION_NUMERIC(TYPE_U_CHAR)
GENERATE_FUNCTION_NUMERIC(TYPE_INT)
GENERATE_FUNCTION_NUMERIC(TYPE_U_INT)
GENERATE_FUNCTION_NUMERIC(TYPE_L_INT)
GENERATE_FUNCTION_NUMERIC(TYPE_U_L_INT)
GENERATE_FUNCTION_NUMERIC(TYPE_SIZE_T)
GENERATE_FUNCTION_NUMERIC(TYPE_FLOAT)
GENERATE_FUNCTION_NUMERIC(TYPE_DOUBLE)
GENERATE_FUNCTION_NUMERIC(TYPE_L_DOUBLE)

#define GENERATE_FUNCTION_ALL(type)\
  type MAX_ARRAY_##type(const type *array, size_t size){\
    if(array == NULL) return 0;\
    type mx =(type)array[0];\
    for(size_t i = 0; i < size; ++i)\
      if(COMPARE_N_##type(&mx,&array[i]) < 0) mx =(type)array[i];\
    return mx;}\
\
  size_t ARG_MAX_ARRAY_##type(const type *array, size_t size){\
    if(array == NULL) return 0;\
    size_t i_mx = 0;\
    for(size_t i = 0; i < size; ++i)\
      if(COMPARE_N_##type(&array[i_mx],&array[i]) < 0) i_mx = i;\
    return i_mx;}\
\
  type MIN_ARRAY_##type(const type *array, size_t size){\
    if(array == NULL) return 0;\
    type mn =(type)array[0];\
    for(size_t i = 0; i < size; ++i)\
      if(COMPARE_N_##type(&mn,&array[i]) > 0) mn =(type)array[i];\
    return mn;}\
\
  size_t ARG_MIN_ARRAY_##type(const type *array, size_t size){\
    if(array == NULL) return 0;\
    size_t i_mn = 0;\
    for(size_t i = 0; i < size; ++i)\
      if(COMPARE_N_##type(&array[i_mn],&array[i]) > 0) i_mn = i;\
    return i_mn;}\
\


GENERATE_FUNCTION_ALL(TYPE_CHAR)
GENERATE_FUNCTION_ALL(TYPE_U_CHAR)
GENERATE_FUNCTION_ALL(TYPE_INT)
GENERATE_FUNCTION_ALL(TYPE_U_INT)
GENERATE_FUNCTION_ALL(TYPE_L_INT)
GENERATE_FUNCTION_ALL(TYPE_U_L_INT)
GENERATE_FUNCTION_ALL(TYPE_SIZE_T)
GENERATE_FUNCTION_ALL(TYPE_FLOAT)
GENERATE_FUNCTION_ALL(TYPE_DOUBLE)
GENERATE_FUNCTION_ALL(TYPE_L_DOUBLE)
GENERATE_FUNCTION_ALL(TYPE_STRING)




/*
int main()
{
  unsigned int ui1 = 2545466;
  unsigned int ui2 = 2544566;
  printf(" %u >? %u = %d \n",ui1,ui2,COMPARE_N_TYPE_U_INT(&ui1,&ui2));
  printf(" %u >? %u = %d \n",ui1,ui1,COMPARE_N_TYPE_U_INT(&ui1,&ui1));
  printf(" %u >? %u = %d \n",ui2,ui1,COMPARE_N_TYPE_U_INT(&ui2,&ui1));
  int i1 = 2545466;
  int i2 = 2544566;
  printf(" %d >? %d = %d \n",i1,i2,COMPARE_N_TYPE_U_INT(&i1,&i2));
  printf(" %d >? %d = %d \n",i1,i1,COMPARE_N_TYPE_U_INT(&i1,&i1));
  printf(" %d >? %d = %d \n",i2,i1,COMPARE_N_TYPE_U_INT(&i2,&i1));
  
  int tabi[]={5,2,6,4,3,1};
  int tabr[6]={0};
  COPY_ARRAY_TYPE_INT(tabr,tabi,6);

  for(size_t i=0; i<6; ++i) printf(" %d \n", tabr[i]);

  printf("MIN = %d \n",MIN_ARRAY_TYPE_INT(tabr,6));

  return 0;
}*/

