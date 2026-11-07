// FUN_014d9a70 @ 014d9a70 size=644 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_014d9a70(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int local_15e8;
  int local_15e4;
  undefined1 auStack_1548 [160];
  undefined4 local_14a8;
  undefined4 local_14a4;
  undefined4 local_14a0;
  undefined1 auStack_1498 [224];
  undefined1 local_13b8;
  undefined1 local_13b0;
  undefined2 uStack_1370;
  undefined1 local_1368;
  undefined1 local_11d0;
  undefined1 local_bf0;
  undefined1 auStack_2f0 [152];
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  local_14a0 = param_1[2];
  local_14a8 = *param_1;
  local_14a4 = param_1[1];
  if (param_1[4] != 0) {
    FUN_0147f5c4(&local_14a8,param_1);
    local_240 = *param_2;
    uStack_23c = param_2[1];
    uStack_238 = param_2[2];
    uStack_234 = param_2[3];
    uStack_230 = param_2[4];
    local_22c = param_2[5];
    uStack_228 = param_2[6];
    uStack_224 = param_2[7];
    uStack_220 = param_2[8];
    uStack_21c = param_2[9];
    uStack_218 = param_2[10];
    FUN_016dd1aa(auStack_2f0,&local_14a8,0x48);
    FUN_016dd1aa(auStack_1498,auStack_2f0,0xe0);
    local_13b8 = 0;
    local_13b0 = 0;
    iVar1 = thunk_FUN_016d4a50(0x238);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x238);
    }
    FUN_016dd1aa(iVar1,&local_14a8,0x238);
    return CONCAT44(&UNK_018a6980,iVar1);
  }
  iVar1 = *(int *)(param_1[0x10] + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1[0x10] + 0xc);
    iVar1 = iVar1 << 8;
    do {
      FUN_01499540(&local_15e8,iVar2,param_2);
      if (local_15e8 != 4 || local_15e4 != 0) {
        FUN_016dd1aa(auStack_1548,&local_15e8,0xa0);
        FUN_0147f5c4(&local_14a8,param_1);
        local_98 = *param_2;
        uStack_94 = param_2[1];
        uStack_90 = param_2[2];
        uStack_8c = param_2[3];
        uStack_88 = param_2[4];
        local_84 = param_2[5];
        uStack_80 = param_2[6];
        uStack_7c = param_2[7];
        uStack_78 = param_2[8];
        uStack_74 = param_2[9];
        uStack_70 = param_2[10];
        FUN_016dd1aa(auStack_2f0,&local_15e8,0xa0);
        FUN_016dd1aa(&uStack_250,&local_14a8,0x48);
        FUN_016dd1aa(auStack_1498,auStack_2f0,0x2c8);
        local_11d0 = 0;
        local_bf0 = 0;
        iVar1 = thunk_FUN_016d4a50(0x11b8);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x11b8);
        }
        FUN_016dd1aa(iVar1,&local_14a8,0x11b8);
        return CONCAT44(&UNK_018a6990,iVar1);
      }
      iVar2 = iVar2 + 0x100;
      iVar1 = iVar1 + -0x100;
    } while (iVar1 != 0);
  }
  FUN_0147f5c4(&local_14a8,param_1);
  local_258 = *param_2;
  uStack_254 = param_2[1];
  uStack_250 = param_2[2];
  uStack_24c = param_2[3];
  uStack_248 = param_2[4];
  local_244 = param_2[5];
  local_240 = param_2[6];
  uStack_23c = param_2[7];
  uStack_238 = param_2[8];
  uStack_234 = param_2[9];
  uStack_230 = param_2[10];
  FUN_016dd1aa(auStack_2f0,&local_14a8,0x48);
  FUN_016dd1aa(auStack_1498,auStack_2f0,0x128);
  uStack_1370 = 0;
  local_1368 = 0;
  iVar1 = thunk_FUN_016d4a50(0x2c8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x2c8);
  }
  FUN_016dd1aa(iVar1,&local_14a8,0x2c8);
  return CONCAT44(&UNK_018a69a0,iVar1);
}

