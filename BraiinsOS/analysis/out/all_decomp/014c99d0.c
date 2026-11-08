// FUN_014c99d0 @ 014c99d0 size=164 calls_out=3 calls_in=2
// strings: 

int FUN_014c99d0(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 local_a0 [18];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *local_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  uStack_28 = param_1[4];
  local_44 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (local_44 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *local_44 = param_2;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  uStack_48 = param_1[4];
  local_a0[0] = 2;
  local_40 = &DAT_018a52d8;
  iVar1 = thunk_FUN_016d4a50(100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,100);
  }
  FUN_016dd1aa(iVar1,local_a0,100);
  return iVar1;
}

