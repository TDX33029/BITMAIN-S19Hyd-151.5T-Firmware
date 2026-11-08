// FUN_0071e0d8 @ 0071e0d8 size=508 calls_out=3 calls_in=1
// strings: 

int FUN_0071e0d8(int param_1,int param_2,undefined4 param_3,short *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined2 param_9,
                undefined2 param_10,undefined1 param_11)

{
  int iVar1;
  int iVar2;
  short local_240 [116];
  short local_158 [116];
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_48;
  
  local_64 = param_9;
  local_62 = param_10;
  if ((param_2 == 0) && (param_1 != 0)) {
    iVar1 = thunk_FUN_016d4a50(0x4c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x4c);
    }
    FUN_016dd1aa(iVar1,param_3,0x4c);
    iVar2 = 0;
    local_70 = iVar1;
    if (*param_4 != 2) {
      local_158[0] = *param_4;
      FUN_016dd1aa((uint)local_158 | 2,param_4 + 1,0xe6);
      iVar2 = thunk_FUN_016d4a50(0xe8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xe8);
      }
      FUN_016dd1aa(iVar2,local_158,0xe8);
    }
    local_48 = param_11;
    local_58 = param_5;
    uStack_54 = param_6;
    uStack_50 = 0;
    local_70 = CONCAT22(local_70._2_2_,0x15);
    local_6c = 0;
    local_60 = iVar1;
    local_5c = iVar2;
    iVar1 = thunk_FUN_016d4a50(0x44);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
  }
  else {
    iVar1 = thunk_FUN_016d4a50(0x4c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x4c);
    }
    FUN_016dd1aa(iVar1,param_3,0x4c);
    iVar2 = 0;
    local_70 = iVar1;
    if (*param_4 != 2) {
      local_240[0] = *param_4;
      FUN_016dd1aa((uint)local_240 | 2,param_4 + 1,0xe6);
      iVar2 = thunk_FUN_016d4a50(0xe8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xe8);
      }
      FUN_016dd1aa(iVar2,local_240,0xe8);
    }
    local_48 = 1;
    local_68 = param_8;
    local_58 = param_5;
    uStack_54 = param_6;
    uStack_50 = 0;
    local_70 = CONCAT22(local_70._2_2_,0x15);
    local_6c = param_7;
    local_60 = iVar1;
    local_5c = iVar2;
    iVar1 = thunk_FUN_016d4a50(0x44);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
  }
  FUN_016dd1aa(iVar1,&local_70,0x44);
  return iVar1;
}

