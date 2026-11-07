// FUN_01126984 @ 01126984 size=204 calls_out=5 calls_in=0
// strings: 

void FUN_01126984(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 uStack_19;
  
  FUN_00fab1e0(&local_3c);
  if (local_3c == 1) {
    local_30[0] = 6;
    local_2c = param_2;
    local_28 = param_3;
    iVar2 = FUN_0157cd6c(local_30,&uStack_19,&DAT_01887598);
    *param_1 = -0x80000000;
    param_1[1] = iVar2;
    return;
  }
  if (local_34 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_34);
  }
  if (local_34 == 0) {
    iVar2 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(local_34);
    iVar2 = local_34;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_34);
    }
  }
  FUN_016dd1aa(iVar1,local_38,local_34);
  *param_1 = iVar2;
  param_1[1] = iVar1;
  param_1[2] = local_34;
  return;
}

