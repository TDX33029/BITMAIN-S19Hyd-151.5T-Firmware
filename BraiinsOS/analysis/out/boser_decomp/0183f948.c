// FUN_0183f948 @ 0183f948 size=724 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_0183f948(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int local_15e8;
  int local_15e4;
  undefined1 auStack_1548 [160];
  undefined *local_14a8;
  undefined4 local_14a4;
  undefined *local_14a0;
  undefined4 local_149c;
  undefined *local_1498 [56];
  undefined1 local_13b8;
  undefined1 local_13b0;
  undefined2 uStack_1370;
  undefined1 local_1368;
  undefined1 local_11d0;
  undefined1 local_bf0;
  undefined4 *local_2f0;
  undefined1 *puStack_2ec;
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
  
  if (3 < DAT_01d51b00) {
    local_1498[0] = &DAT_01d1ef00;
    local_149c = 0x10;
    puStack_2ec = &LAB_0141556c;
    local_14a0 = &DAT_005696f8;
    local_14a4 = 0x10;
    local_14a8 = &DAT_005696f8;
    local_2f0 = param_2;
    FUN_015fb650(&DAT_005882bc,&local_2f0,4,&local_14a8);
  }
  uVar1 = param_1[2];
  puVar4 = (undefined *)*param_1;
  uVar5 = param_1[1];
  if (param_1[4] == 0) {
    iVar2 = *(int *)(param_1[0x10] + 0x10);
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1[0x10] + 0xc);
      iVar2 = iVar2 << 8;
      do {
        FUN_01855774(&local_15e8,iVar3,param_2);
        if (local_15e8 != 4 || local_15e4 != 0) {
          FUN_01bed4e2(auStack_1548,&local_15e8,0xa0);
          FUN_0183fcb0(&local_14a8,param_1);
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
          FUN_01bed4e2(&local_2f0,&local_15e8,0xa0);
          FUN_01bed4e2(&uStack_250,&local_14a8,0x48);
          FUN_01bed4e2(local_1498,&local_2f0,0x2c8);
          local_11d0 = 0;
          local_bf0 = 0;
          local_14a8 = puVar4;
          local_14a4 = uVar5;
          local_14a0 = (undefined *)uVar1;
          iVar2 = thunk_FUN_01be5118(0x11b8);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x11b8);
          }
          FUN_01bed4e2(iVar2,&local_14a8,0x11b8);
          puVar4 = &UNK_01d1ef20;
          goto LAB_0183fbe8;
        }
        iVar3 = iVar3 + 0x100;
        iVar2 = iVar2 + -0x100;
      } while (iVar2 != 0);
    }
    FUN_0183fcb0(&local_14a8,param_1);
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
    FUN_01bed4e2(&local_2f0,&local_14a8,0x48);
    FUN_01bed4e2(local_1498,&local_2f0,0x128);
    uStack_1370 = 0;
    local_1368 = 0;
    local_14a8 = puVar4;
    local_14a4 = uVar5;
    local_14a0 = (undefined *)uVar1;
    iVar2 = thunk_FUN_01be5118(0x2c8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x2c8);
    }
    FUN_01bed4e2(iVar2,&local_14a8,0x2c8);
    puVar4 = &UNK_01d1ef10;
  }
  else {
    FUN_0183fcb0(&local_14a8,param_1);
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
    FUN_01bed4e2(&local_2f0,&local_14a8,0x48);
    FUN_01bed4e2(local_1498,&local_2f0,0xe0);
    local_13b8 = 0;
    local_13b0 = 0;
    local_14a8 = puVar4;
    local_14a4 = uVar5;
    local_14a0 = (undefined *)uVar1;
    iVar2 = thunk_FUN_01be5118(0x238);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x238);
    }
    FUN_01bed4e2(iVar2,&local_14a8,0x238);
    puVar4 = &UNK_01d1ef30;
  }
LAB_0183fbe8:
  return CONCAT44(puVar4,iVar2);
}

