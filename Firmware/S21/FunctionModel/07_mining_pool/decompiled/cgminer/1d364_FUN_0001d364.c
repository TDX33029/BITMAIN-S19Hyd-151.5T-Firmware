// FUN_0001d364 @ 0001d364  size=208  callers=1
// program: cgminer


void FUN_0001d364(undefined4 *param_1,undefined4 *param_2,char *param_3,char *param_4,int param_5)

{
  char acStack_810 [2048];
  
  if ((char *)*param_2 != (char *)*param_1) {
    snprintf(acStack_810,0x800,"List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d",
             (char *)*param_1,"_k_add_head",(char *)*param_2,param_3,param_4,param_5,"klist.c",
             "_k_add_head",0xcd);
    FUN_0001dd98(3,acStack_810,1);
    FUN_0003c34c(1);
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

