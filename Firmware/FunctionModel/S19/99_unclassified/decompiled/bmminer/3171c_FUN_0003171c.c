// FUN_0003171c @ 0003171c  size=196  callers=0
// program: bmminer


void FUN_0003171c(undefined4 *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char acStack_810 [2052];
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    snprintf(acStack_810,0x800,
             "List %s can\'t %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
             (char *)*param_1,"_k_unlink_tail",param_2,param_3,param_4,"klist.c","_k_unlink_tail",
             0xb5);
    FUN_00032218(3,acStack_810,1);
    FUN_0002df3c(1);
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    param_1[4] = iVar2;
    if (iVar2 == 0) {
      param_1[3] = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    param_1[7] = param_1[7] + -1;
  }
  return;
}

