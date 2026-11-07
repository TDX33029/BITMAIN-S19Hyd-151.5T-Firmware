// FUN_00f148c8 @ 00f148c8 size=1732 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f148c8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_r5;
  int unaff_r6;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_r10;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 local_55c;
  undefined4 *local_558;
  undefined4 *local_554;
  uint local_550;
  undefined4 *local_54c;
  uint local_548;
  undefined4 local_544;
  undefined4 *local_540;
  uint local_53c;
  undefined4 *local_538;
  undefined4 *local_534;
  undefined4 local_530;
  undefined4 *puStack_52c;
  int iStack_528;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 *local_508;
  int local_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 *local_4e8;
  int local_4e4;
  undefined4 **local_4e0;
  code *pcStack_4dc;
  int iStack_4d8;
  int iStack_4d4;
  int iStack_4d0;
  undefined1 auStack_4c8 [224];
  undefined4 local_3e8;
  undefined4 *puStack_3e4;
  int iStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 *local_3c0;
  int local_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 *local_3a0;
  int local_39c;
  undefined4 **local_398;
  code *pcStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  undefined1 auStack_380 [224];
  undefined4 *local_2a0;
  undefined4 *local_29c;
  undefined4 *local_298;
  undefined1 auStack_294 [84];
  int local_240;
  undefined4 local_23c;
  int local_218;
  undefined4 local_214;
  int local_1f0;
  undefined4 local_1ec;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 *local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  int local_1ac [3];
  uint local_1a0;
  undefined4 local_19c;
  undefined4 *local_198;
  int local_194;
  undefined4 local_d0;
  undefined4 *local_cc;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 *local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 *local_88;
  int local_84;
  undefined4 **local_80;
  code *pcStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 *local_68;
  int local_64;
  undefined4 **local_60;
  code *local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *local_30;
  int local_2c;
  
  if (param_2[1] == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar5 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  if (puVar5[1] == 0) {
    local_1b0 = (undefined4 *)&DAT_00000001;
    local_1b4 = (undefined4 *)0x2501;
    local_1b8 = (undefined4 *)0x80000000;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00f14ae0:
    *puVar4 = local_1b8;
    puVar4[1] = local_1b4;
    puVar4[2] = local_1b0;
    goto LAB_00f14af8;
  }
  puVar5[1] = puVar5[1] + -1;
  uVar3 = (uint)*(byte *)*puVar5;
  *puVar5 = (byte *)*puVar5 + 1;
  if (uVar3 == 0) {
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)&SUB_00000002;
LAB_00f149e4:
    FUN_016dd1aa(param_1 + 3,auStack_4c8,0xdc);
    param_1[0x3a] = puVar5;
    param_1[0x3c] = local_538;
    param_1[0x3d] = unaff_r6;
    param_1[0x3e] = local_558;
    param_1[0x3b] = unaff_r5;
    param_1[0x3f] = local_4e0;
    param_1[0x40] = pcStack_4dc;
    param_1[0x41] = iStack_4d8;
    param_1[0x42] = iStack_4d4;
    param_1[0x43] = iStack_4d0;
    param_1[0x44] = local_53c;
    param_1[0x46] = local_4e8;
    param_1[0x47] = local_4e4;
    param_1[0x45] = local_544;
    param_1[0x48] = local_54c;
    param_1[0x49] = local_500;
    param_1[0x4a] = uStack_4fc;
    param_1[0x4b] = uStack_4f8;
    param_1[0x4c] = uStack_4f4;
    param_1[0x4d] = uStack_4f0;
    param_1[0x4e] = local_548;
    param_1[0x50] = local_508;
    param_1[0x51] = local_504;
    param_1[0x4f] = local_55c;
    param_1[0x52] = local_554;
    param_1[0x53] = local_520;
    param_1[0x54] = uStack_51c;
    param_1[0x55] = uStack_518;
    param_1[0x56] = uStack_514;
    param_1[0x57] = uStack_510;
    param_1[0x58] = local_550;
    param_1[0x59] = local_530;
    param_1[0x5a] = puStack_52c;
    param_1[0x5b] = iStack_528;
    param_1[0x5c] = local_540;
    param_1[0x5d] = local_534;
    *param_1 = puVar6;
    param_1[1] = puVar7;
    param_1[2] = unaff_r10;
    return;
  }
  if (uVar3 != 1) {
    local_1b8 = (undefined4 *)&DAT_80000004;
    local_1b4 = (undefined4 *)uVar3;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    goto LAB_00f14ae0;
  }
  FUN_00e72308(&local_1b8,puVar5);
  unaff_r10 = local_1b0;
  puVar7 = local_1b4;
  puVar6 = local_1b8;
  puVar4 = local_1b0;
  if (local_1b8 == (undefined4 *)&SUB_00000002 && local_1b4 == (undefined4 *)0x0) goto LAB_00f14af8;
  FUN_016dd1aa(auStack_294,local_1ac,0xdc);
  local_29c = puVar7;
  local_2a0 = puVar6;
  local_298 = unaff_r10;
  FUN_00efbe38(&local_1b8,puVar5);
  local_540 = local_1b0;
  if (local_1b8 == (undefined4 *)&DAT_00000001) {
LAB_00f14984:
    puVar4 = local_1b4;
  }
  else {
    local_2c = local_1ac[0];
    local_30 = local_1b0;
    if (local_1ac[0] == 0) {
      FUN_00efbe38(&local_1b8,puVar5);
      local_534 = local_1b0;
      if (local_1b8 == (undefined4 *)&DAT_00000001) goto LAB_00f14984;
      local_2c = local_1ac[0];
      local_30 = local_1b0;
      if (local_1ac[0] != 0) {
        local_5c = FUN_00fac4cc;
        local_60 = &local_30;
        FUN_00600d2c(&local_48,&DAT_00584bb4,&local_60);
        puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        goto LAB_00f14b6c;
      }
      FUN_00efbe38(&local_1b8,puVar5);
      unaff_r5 = local_1ac[0];
      puVar1 = local_1b0;
      if ((local_1b8 == (undefined4 *)&DAT_00000001) ||
         (FUN_00efbe38(&local_1b8,puVar5), local_1b8 == (undefined4 *)&DAT_00000001))
      goto LAB_00f14984;
      local_538 = local_1b0;
      FUN_00e71d48(&local_1b8,puVar5);
      local_544 = local_19c;
      uVar3 = local_1a0;
      local_558 = local_1b8;
      puVar4 = local_1b8;
      if (local_1a0 != 0x80000001) {
        local_53c = local_1a0;
        piVar8 = (int *)((uint)&local_1b8 | 4);
        local_60 = (undefined4 **)*piVar8;
        local_5c = (code *)piVar8[1];
        iStack_58 = piVar8[2];
        iStack_54 = piVar8[3];
        iStack_50 = piVar8[4];
        local_64 = local_194;
        local_68 = local_198;
        FUN_00e71d48(&local_1b8,puVar5);
        local_55c = local_19c;
        uVar2 = local_1a0;
        puVar4 = local_1b8;
        if (local_1a0 != 0x80000001) {
          puVar4 = (undefined4 *)((uint)&local_1b8 | 4);
          local_548 = local_1a0;
          local_54c = local_1b8;
          local_48 = *puVar4;
          uStack_44 = puVar4[1];
          uStack_40 = puVar4[2];
          uStack_3c = puVar4[3];
          uStack_38 = puVar4[4];
          local_2c = local_194;
          local_30 = local_198;
          FUN_00e71d48(&local_1b8,puVar5);
          if (local_1a0 != 0x80000001) {
            puVar5 = (undefined4 *)((uint)&local_1b8 | 4);
            local_554 = local_1b8;
            local_550 = local_1a0;
            local_3d8 = *puVar5;
            uStack_3d4 = puVar5[1];
            uStack_3d0 = puVar5[2];
            uStack_3cc = puVar5[3];
            uStack_3c8 = puVar5[4];
            local_cc = local_198;
            local_c8 = local_194;
            local_d0 = local_19c;
            local_398 = local_60;
            pcStack_394 = local_5c;
            iStack_390 = iStack_58;
            iStack_38c = iStack_54;
            iStack_388 = iStack_50;
            local_88 = local_68;
            local_84 = local_64;
            local_3b8 = local_48;
            uStack_3b4 = uStack_44;
            uStack_3b0 = uStack_40;
            uStack_3ac = uStack_3c;
            uStack_3a8 = uStack_38;
            local_a8 = local_30;
            local_a4 = local_2c;
            local_3a0 = local_68;
            local_39c = local_64;
            local_3c0 = local_30;
            local_3bc = local_2c;
            local_3e8 = local_19c;
            puStack_3e4 = local_198;
            iStack_3e0 = local_194;
            local_c0 = local_3d8;
            uStack_bc = uStack_3d4;
            uStack_b8 = uStack_3d0;
            uStack_b4 = uStack_3cc;
            uStack_b0 = uStack_3c8;
            local_a0 = local_3b8;
            uStack_9c = uStack_3b4;
            uStack_98 = uStack_3b0;
            uStack_94 = uStack_3ac;
            uStack_90 = uStack_3a8;
            local_80 = local_398;
            pcStack_7c = pcStack_394;
            iStack_78 = iStack_390;
            iStack_74 = iStack_38c;
            iStack_70 = iStack_388;
            FUN_016dd1aa(auStack_380,auStack_294,0xdc);
            FUN_016dd1aa(auStack_4c8,auStack_380,0xdc);
            local_4e0 = local_398;
            pcStack_4dc = pcStack_394;
            iStack_4d8 = iStack_390;
            iStack_4d4 = iStack_38c;
            iStack_4d0 = iStack_388;
            local_4e8 = local_3a0;
            local_4e4 = local_39c;
            local_500 = local_3b8;
            uStack_4fc = uStack_3b4;
            uStack_4f8 = uStack_3b0;
            uStack_4f4 = uStack_3ac;
            uStack_4f0 = uStack_3a8;
            local_508 = local_3c0;
            local_504 = local_3bc;
            local_520 = local_3d8;
            uStack_51c = uStack_3d4;
            uStack_518 = uStack_3d0;
            uStack_514 = uStack_3cc;
            uStack_510 = uStack_3c8;
            local_530 = local_3e8;
            puStack_52c = puStack_3e4;
            iStack_528 = iStack_3e0;
            unaff_r6 = local_1ac[0];
            puVar5 = puVar1;
            goto LAB_00f149e4;
          }
          puVar4 = local_1b8;
          if ((uVar2 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(local_55c);
          }
        }
        if ((uVar3 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_544);
        }
      }
    }
    else {
      local_5c = FUN_00fac4cc;
      local_60 = &local_30;
      FUN_00600d2c(&local_48,&DAT_00584bb4,&local_60);
      puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
LAB_00f14b6c:
      *puVar4 = local_48;
      puVar4[1] = uStack_44;
      puVar4[2] = uStack_40;
    }
  }
  if (local_240 == -0x80000000 || local_240 == 0) {
    if (!(local_218 == -0x80000000 || local_218 == 0)) goto LAB_00f14c60;
LAB_00f14ba4:
    if (!(local_1f0 == -0x80000000 || local_1f0 == 0)) goto LAB_00f14c78;
LAB_00f14bb4:
    if (!(local_1c8 != -0x80000000 && local_1c8 != 0)) goto LAB_00f14af8;
  }
  else {
    thunk_FUN_016d3fb4(local_23c);
    if (!(local_218 != -0x80000000 && local_218 != 0)) goto LAB_00f14ba4;
LAB_00f14c60:
    thunk_FUN_016d3fb4(local_214);
    if (!(local_1f0 != -0x80000000 && local_1f0 != 0)) goto LAB_00f14bb4;
LAB_00f14c78:
    thunk_FUN_016d3fb4(local_1ec);
    if (!(local_1c8 != -0x80000000 && local_1c8 != 0)) goto LAB_00f14af8;
  }
  thunk_FUN_016d3fb4(local_1c4);
LAB_00f14af8:
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = puVar4;
  return;
}

