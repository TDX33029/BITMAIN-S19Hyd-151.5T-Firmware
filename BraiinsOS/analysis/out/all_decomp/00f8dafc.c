// FUN_00f8dafc @ 00f8dafc size=860 calls_out=6 calls_in=2
// strings: 

void FUN_00f8dafc(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_5d8 [360];
  uint local_470;
  uint local_46c;
  undefined1 auStack_468 [360];
  undefined4 local_300 [2];
  uint local_2f8;
  uint local_2f4;
  undefined4 local_2f0;
  undefined1 *local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_268;
  undefined4 local_25c;
  undefined4 local_250;
  undefined4 local_244;
  undefined4 local_238;
  undefined4 local_22c;
  undefined4 local_220;
  undefined4 local_214;
  undefined4 local_208;
  undefined4 local_1fc;
  undefined4 local_1f0;
  int local_1e4;
  int local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d4;
  undefined4 local_1cc;
  undefined4 local_1c4;
  undefined *local_1bc;
  undefined *local_1b8;
  undefined4 local_1b4;
  undefined4 local_1ac;
  undefined4 local_1a4;
  undefined4 local_19c;
  undefined1 local_198;
  uint local_190;
  uint local_18c;
  undefined1 auStack_188 [156];
  uint local_ec;
  int local_e8;
  uint local_e4;
  
  if (param_3 != param_4) {
    piVar8 = param_3 + 0x29;
    do {
      local_1e4 = piVar8[0x1e];
      local_1e0 = piVar8[0x1f];
      local_2f8 = 1;
      local_1dc = 0;
      local_1c4 = 0;
      local_1cc = 0;
      local_1d4 = 0;
      local_268 = 0x80000000;
      local_274 = 0x80000000;
      local_2e4 = &DAT_00110000;
      local_220 = 0x80000000;
      local_22c = 0x80000000;
      local_238 = 0x80000000;
      local_244 = 0x80000000;
      local_250 = 0x80000000;
      local_25c = 0x80000000;
      local_1fc = 0x80000000;
      local_208 = 0x80000000;
      local_214 = 0x80000000;
      local_2c0 = 0;
      local_2c4 = 4;
      local_2c8 = 0;
      local_2cc = 0;
      local_2d0 = 4;
      local_2d4 = 0;
      local_2d8 = 0;
      local_2dc = 4;
      local_2e0 = 0;
      local_1f0 = 0x80000000;
      local_300[0] = 0;
      local_2bc = 0;
      local_2b8 = 4;
      local_2b4 = 0;
      local_2b0 = 0;
      local_2ac = 4;
      local_2a8 = 0;
      local_2a4 = 0;
      local_2a0 = 4;
      local_29c = 0;
      local_298 = 0;
      local_294 = 4;
      local_290 = 0;
      local_1b4 = 0;
      local_2f4 = 0;
      local_1ac = 0;
      local_1a4 = 0;
      local_198 = 0;
      local_2f0 = 5;
      local_19c = 0;
      local_278 = 0;
      local_27c = 4;
      local_280 = 0;
      local_284 = 0;
      local_288 = 4;
      local_28c = 0;
      if ((*(byte *)((int)piVar8 + 0xa2) & 0x80) == 0) {
        local_1bc = &DAT_00280000;
        if ((*(byte *)((int)piVar8 + 0xa6) & 0x80) != 0) {
          local_1bc = (undefined *)0xa80000;
        }
      }
      else {
        local_1bc = (undefined *)0xa80000;
      }
      local_1b8 = &DAT_00280000;
      FUN_00f8dafc(&local_470,local_300,piVar8[-0x11],piVar8[-0x10] * 0x16c + piVar8[-0x11]);
      if (*piVar8 != -0x80000000) {
        FUN_016dd1aa(&local_190,&local_470,0x16c);
        uVar6 = piVar8[2];
        iVar9 = piVar8[1];
        if (uVar6 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = thunk_FUN_016d4a50(uVar6);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar6);
          }
        }
        FUN_016dd1aa(iVar3,iVar9,uVar6);
        if ((local_ec & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_e8);
        }
        local_ec = uVar6;
        local_e8 = iVar3;
        local_e4 = uVar6;
        FUN_016dd1aa(&local_470,&local_190,0x16c);
      }
      uVar7 = local_46c;
      uVar6 = local_470;
      FUN_016dd1aa(auStack_5d8,auStack_468,0x164);
      if (uVar6 == 2) break;
      FUN_016dd1aa(local_300,param_2,0x16c);
      uVar2 = local_2f4;
      if ((local_2f8 & 1) != 0) {
        uVar1 = uVar6 & 1;
        uVar6 = 1;
        uVar2 = local_2f4 + 1;
        if (uVar1 == 0) {
          uVar7 = local_2f4;
        }
      }
      local_2f4 = uVar2;
      local_190 = uVar6;
      local_18c = uVar7;
      FUN_016dd1aa(auStack_188,auStack_5d8,0x164);
      iVar9 = local_29c;
      if (local_29c == local_2a4) {
        FUN_00f9908c(&local_2a4);
      }
      puVar4 = (uint *)(local_2a0 + iVar9 * 0x16c);
      *puVar4 = uVar6;
      puVar4[1] = uVar7;
      FUN_016dd1aa(puVar4 + 2,auStack_5d8,0x164);
      local_29c = iVar9 + 1;
      FUN_016dd1aa(&local_190,local_300,0x16c);
      FUN_016dd1aa(param_2,&local_190,0x16c);
      piVar5 = piVar8 + 0x32;
      piVar8 = piVar8 + 0x5b;
    } while (piVar5 != param_4);
  }
  FUN_016dd1aa(param_1,param_2,0x16c);
  return;
}

