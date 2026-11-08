// FUN_007317f8 @ 007317f8 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_007317f8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  int local_30;
  int iStack_2c;
  
  while( true ) {
    if ((uint)param_2[1] < (param_3 & 0x7f) * 2) {
      *param_1 = 0;
      param_1[1] = 0;
      *param_2 = 1;
      param_2[1] = 0;
      return;
    }
    FUN_007195f0(&local_38,param_2,param_3);
    iVar2 = iStack_2c;
    iVar1 = local_30;
    if ((local_38 != 'O') || (FUN_007195f0(&local_38,param_2,param_3), local_38 != 'O')) break;
    if ((local_30 != 0 || iVar1 != 0) || (iStack_2c != 0 || iVar2 != 0)) {
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = iVar1;
      param_1[3] = iVar2;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = local_30;
      param_1[7] = iStack_2c;
      return;
    }
  }
  param_1[3] = CONCAT31(uStack_33,uStack_37._3_1_);
  *(undefined4 *)((int)param_1 + 9) = uStack_37;
  *param_1 = 2;
  param_1[4] = local_30;
  param_1[5] = iStack_2c;
  param_1[1] = 0;
  *(char *)(param_1 + 2) = local_38;
  return;
}

