// FUN_000444e0 @ 000444e0  size=76  callers=0
// program: bmminer


void FUN_000444e0(int param_1,int param_2,char *param_3)

{
  byte *pbVar1;
  char *__s;
  byte *pbVar2;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + -1);
    pbVar2 = pbVar1 + param_2;
    __s = param_3;
    do {
      pbVar1 = pbVar1 + 1;
      sprintf(__s,"%02x",(uint)*pbVar1);
      __s = __s + 2;
    } while (pbVar1 != pbVar2);
  }
  param_3[param_2 * 2] = '\0';
  return;
}

