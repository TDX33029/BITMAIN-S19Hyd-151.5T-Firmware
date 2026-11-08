// FUN_011f18dc @ 011f18dc size=228 calls_out=4 calls_in=22
// strings: 

int FUN_011f18dc(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = thunk_FUN_016d4a50(param_8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_8);
  }
  FUN_016dd1aa(iVar1,param_7,param_8);
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  uStack_8c = param_3[7];
  local_50 = 6;
  local_34 = param_5;
  local_88 = 0x80000017;
  local_4c = param_6;
  local_7c = param_8;
  local_84 = param_8;
  local_80 = iVar1;
  local_38 = param_4;
  local_30 = param_1;
  local_2c = param_2;
  iVar1 = thunk_FUN_016d4a50(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar1,&local_a8,0x80);
  return iVar1;
}

