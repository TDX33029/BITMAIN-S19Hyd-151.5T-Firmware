// FUN_0007a420 @ 0007a420  size=144  callers=2
// program: bmminer


void FUN_0007a420(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0007a3c0(param_1,param_2);
  if (iVar1 == 0) {
    FUN_0007a31c(*param_2,param_3);
    *param_2 = param_3;
  }
  else {
    FUN_0007a31c(param_1 + 0xc,param_3);
    param_2[1] = param_3;
    *param_2 = param_2[1];
  }
  return;
}

