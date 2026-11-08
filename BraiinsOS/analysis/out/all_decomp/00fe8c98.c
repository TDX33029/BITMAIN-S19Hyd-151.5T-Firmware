// FUN_00fe8c98 @ 00fe8c98 size=388 calls_out=5 calls_in=2
// strings: 

void FUN_00fe8c98(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  FUN_00feb758(&local_40,param_2,param_3,param_4,param_5,param_6,1,param_7);
  if (local_40 == 2) {
    param_1[1] = local_3c;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = local_30;
    param_1[5] = local_2c;
    *param_1 = 1;
    return;
  }
  if (local_38 == 1) {
    param_1[5] = param_3;
    param_1[1] = 0xe;
    *param_1 = 1;
    return;
  }
  if ((local_40 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x41) = 1;
    if (local_3c == 0) {
      *(undefined1 *)(param_2 + 0x43) = 1;
    }
    param_1[1] = local_30;
    param_1[2] = 0x80000011;
    param_1[3] = local_3c;
    *param_1 = 0;
    return;
  }
  if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018819d8);
  }
  if (local_28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_28);
  }
  if (local_28 == 0) {
    iVar1 = 1;
    local_44 = 0;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(local_28);
    local_44 = local_28;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_28);
    }
  }
  FUN_016dd1aa(iVar1,local_2c,local_28);
  *(undefined2 *)(param_2 + 0x41) = 0x101;
  param_1[2] = 0x80000012;
  param_1[1] = local_30;
  param_1[3] = local_44;
  param_1[4] = iVar1;
  param_1[5] = local_28;
  param_1[6] = param_3;
  *param_1 = 0;
  return;
}

