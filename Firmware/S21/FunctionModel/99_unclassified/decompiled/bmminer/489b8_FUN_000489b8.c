// FUN_000489b8 @ 000489b8  size=224  callers=0
// program: bmminer


void FUN_000489b8(undefined4 *param_1,undefined4 *param_2,char *param_3,char *param_4,int param_5)

{
  char acStack_2010 [8192];
  
  if ((char *)*param_2 != (char *)*param_1) {
    snprintf(acStack_2010,0x2000,
             "List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d",(char *)*param_1,
             "_k_add_head",(char *)*param_2,param_3,param_4,param_5,"klist.c","_k_add_head",0xcd);
    FUN_0004948c(3,acStack_2010,1);
    FUN_00043adc(1);
  }
  param_2[1] = 0;
  param_2[2] = param_1[3];
  if (param_1[3] != 0) {
    *(undefined4 **)(param_1[3] + 4) = param_2;
  }
  param_1[3] = param_2;
  if ((*(char *)(param_1 + 0xb) != '\0') && (param_1[4] == 0)) {
    param_1[4] = param_2;
  }
  param_1[7] = param_1[7] + 1;
  param_1[8] = param_1[8] + 1;
  return;
}

