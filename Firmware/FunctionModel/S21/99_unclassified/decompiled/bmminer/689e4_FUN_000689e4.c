// FUN_000689e4 @ 000689e4  size=200  callers=1
// program: bmminer


int * FUN_000689e4(int param_1,int param_2,int param_3)

{
  int *__s;
  
  __s = malloc(0x28);
  if (__s == (int *)0x0) {
    __s = (int *)0x0;
  }
  else {
    memset(__s,0,0x28);
    __s[9] = param_1;
    __s[7] = param_2;
    __s[8] = param_3;
    *__s = (int)(__s + 1);
    __s[1] = (int)(__s + 1);
    __s[2] = (int)(__s + 1);
    __s[3] = 0;
    __s[4] = 0;
  }
  return __s;
}

