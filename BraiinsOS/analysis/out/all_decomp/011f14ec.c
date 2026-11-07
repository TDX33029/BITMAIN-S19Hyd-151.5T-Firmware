// FUN_011f14ec @ 011f14ec size=256 calls_out=4 calls_in=2
// strings: 

int FUN_011f14ec(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = 0;
  if (param_8 < 0) {
LAB_011f1518:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,param_8);
  }
  if (param_8 == 0) {
    local_80 = 1;
    local_ac = 0;
  }
  else {
    local_80 = thunk_FUN_016d4a50(param_8);
    if (local_80 == 0) {
      uVar1 = 1;
      goto LAB_011f1518;
    }
    local_ac = param_8;
  }
  FUN_016dd1aa(local_80,param_7,param_8);
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  uStack_8c = param_3[7];
  local_4c = param_6;
  local_50 = 6;
  local_84 = local_ac;
  local_88 = 0x80000011;
  local_34 = param_5;
  local_7c = param_8;
  local_38 = param_4;
  local_30 = param_1;
  local_2c = param_2;
  iVar2 = thunk_FUN_016d4a50(0x80);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar2,&local_a8,0x80);
  return iVar2;
}

