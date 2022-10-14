#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
void*mythreadfun(void*vargp)
{
	sleep(3);
	printf("hello");
	return NULL;
}
int main()
{
	pthread_t thread_id;
	printf("\n first shread");
	pthread_create (&thread_id,NULL,&mythread fun NULL:);
	pthread_join (thread_id,null);
	exit(0);
}
