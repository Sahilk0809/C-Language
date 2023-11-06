#include<stdio.h>

main() 
{
   int a,b,c,d,e,f;

   printf("Enter The Values Of a,b,c,d,e,f : ");
   scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

   if (a > b) 
   {
      if (a > c) 
      {
         if (a > d) 
         {
            if (a > e) 
            {
               if (a > f) 
               {
                  printf("A is Max");
               } 
               else 
               {
                  printf("F is Max");
               }
            } 
            else 
            {
               if (e > f) 
               {
                  printf("E is Max");
               } else 
               {
                  printf("F is Max");
               }
            }
         } 
         else 
         {
            if (d > e) 
            {
               if (d > f) 
               {
                  printf("D is Max");
               } else 
               {
                  printf("F is Max");
               }
            } 
            else 
            {
               if (e > f) 
               {
                   printf("E is Max");
               } 
               else 
               {
                   printf("F is Max");
               }
            }
         }
      } 
      else 
      {
         if (c > d) 
         {
            if (c > e) 
            {
               if (c > f) 
               {
                  printf("C is Max");
               } 
               else 
               {
                   printf("F is Max");
               }
            } 
            else 
            {
               if (e > f) 
               {
                  printf("E is Max");
               } 
               else 
               {
                   printf("F is Max");
               }
            }
         } 
         else 
         {
            if (d > e) 
            {
               if (d > f) 
               {
                   printf("D is Max");
               } 
               else 
               {
                  printf("F is Max");
               }
            } 
            else
            {
               if (e > f) 
               {
                  printf("E is Max");
               } 
               else 
               {
                  printf("F is Max");
               }
            }
         }
      }
   } 
   else 
   {
      if (b > c) 
      {
         if (b > d)
         {
            if (b > e)
            {
               if (b > f) 
               {
                  printf("B is Max");
               } 
               else 
               {
                  printf("F is Max");
               }
            } 
            else 
            {
               if (e > f)
               {
                   printf("E is Max");
               } 
               else 
               {
                   printf("F is Max");
               }
            }
         } 
         else 
         {
            if (d > e) 
            {
               if (d > f) 
               {
                   printf("D is Max");
               } else 
               {
                   printf("F is Max");
               }
            }
            else 
            {
               if (e > f) 
               {
                  printf("E is Max");
               } 
               else 
               {
                  printf("F is Max");
               }
            }
         }
      } 
      else 
      {
         if (c > d) 
         {
            if (c > e) 
            {
               if (c > f) 
               {
                   printf("C is Max");
               }
               else 
               {
                   printf("F is Max");
               }
            } 
            else 
            {
               if (e > f)
               {
                   printf("E is Max");
               } 
               else 
               {
                   printf("F is Max");
               }
            }
         }
         else 
         {
            if (d > e) 
            {
               if (d > f) 
               {
                   printf("D is Max");
               } 
               else
               {
                   printf("F is Max");
               }
            } 
            else
            {
               if (e > f) 
               {
                  printf("E is Max");
               } 
               else 
               {
                  printf("F is Max");
               }
            }
         }
      }
   }
}
