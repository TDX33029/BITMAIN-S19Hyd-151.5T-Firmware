// FUN_013db314 @ 013db314 size=176 calls_out=4 calls_in=2
// strings: 

void FUN_013db314(int *param_1,ushort *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar2 = (uint)*param_2;
  uVar1 = 0;
  param_3 = param_3 + uVar2;
  if (param_3 < 0) {
LAB_013db330:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar1,param_3);
  }
  if (param_3 == 0) {
    iStack_2c = 1;
    param_3 = 0;
  }
  else {
    uVar1 = 1;
    iStack_2c = FUN_01298504(param_3,1);
    if (iStack_2c == 0) goto LAB_013db330;
  }
  iStack_28 = 0;
  local_30 = param_3;
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x20,&DAT_01cf2db0);
  }
  FUN_013e0ab0(&local_30,param_2 + 1,(int)(param_2 + 1) + uVar2);
  *param_2 = 0;
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  return;
}

