// FUN_0001d438 @ 0001d438  size=328  callers=0
// program: cgminer


void FUN_0001d438(undefined4 *param_1,undefined4 *param_2,char *param_3,char *param_4,int param_5)

{
  undefined4 uVar1;
  char acStack_818 [2052];
  
  if ((char *)*param_2 != (char *)*param_1) {
    snprintf(acStack_818,0x800,"List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d",
             (char *)*param_1,"_k_add_tail",(char *)*param_2,param_3,param_4,param_5,"klist.c",
             "_k_add_tail",0xec);
    FUN_0001dd98(3,acStack_818,1);
    FUN_0003c34c(1);
  }
  if (*(char *)(param_1 + 0xb) == '\0') {
    snprintf(acStack_818,0x800,
             "List %s can\'t %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
             (char *)*param_1,"_k_add_tail",param_3,param_4,param_5,"klist.c","_k_add_tail",0xf1);
    FUN_0001dd98(3,acStack_818,1);
    FUN_0003c34c(1);
  }
  uVar1 = param_1[4];
  param_2[2] = 0;
  param_2[1] = uVar1;
  if (param_1[4] != 0) {
    *(undefined4 **)(param_1[4] + 8) = param_2;
  }
  param_1[4] = param_2;
  if (param_1[3] == 0) {
    param_1[3] = param_2;
  }
  param_1[7] = param_1[7] + 1;
  param_1[8] = param_1[8] + 1;
  return;
}

