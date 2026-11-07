// FUN_011e5598 @ 011e5598 size=7884 calls_out=33 calls_in=3
// strings: unevaluatedItemsconversion error | unevaluatedItemsconversion error | unevaluatedItemsconversion error | $ref~! | $dynamicRef | $recursiveRef

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011e5598(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int ****ppppiVar10;
  int ***pppiVar11;
  int *****pppppiVar12;
  uint uVar13;
  int *piVar14;
  int ******ppppppiVar15;
  int ******ppppppiVar16;
  int ******ppppppiVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  int *****pppppiVar22;
  int *****pppppiVar23;
  int iVar24;
  int ******ppppppiVar25;
  int ******ppppppiVar26;
  uint uVar27;
  int *****pppppiVar28;
  int ******unaff_r7;
  uint uVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uVar33;
  int iVar34;
  int ******unaff_r10;
  uint uVar35;
  int ******ppppppiVar36;
  int *****pppppiVar37;
  ulonglong uVar38;
  int *****local_390;
  int *****local_38c;
  int ******local_388;
  undefined1 local_380;
  undefined4 local_37c;
  int local_378;
  int local_374;
  char *local_370;
  int local_35c;
  int ******local_358;
  char *local_354;
  int ******local_350;
  char *pcStack_34c;
  undefined4 uStack_348;
  int ******local_340;
  char *local_33c;
  int ******local_338;
  char *pcStack_334;
  undefined4 uStack_330;
  int ******local_32c;
  int ******local_328;
  int ******local_324;
  int ******local_320;
  int ******local_318;
  int ******local_314;
  int ******local_310;
  undefined4 local_308;
  int ******ppppppiStack_304;
  int ******ppppppiStack_300;
  int ******local_2f8;
  char *local_2f4;
  undefined4 local_2f0;
  int ******local_2ec;
  int ******local_2e8;
  uint uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  int ******ppppppiStack_2c4;
  int ******local_2c0;
  int ******local_2bc;
  int ******local_2b8;
  int ******local_2b4;
  int ******local_2b0;
  char *local_2ac;
  undefined4 local_2a8;
  int ******local_2a4;
  int ******local_2a0;
  int ******local_240;
  char *local_23c;
  int ******local_238;
  char *pcStack_234;
  undefined4 uStack_230;
  undefined4 local_1c8;
  int ******local_1b0;
  char *local_1ac;
  undefined4 local_1a8;
  int ******ppppppiStack_1a4;
  int ******local_1a0;
  uint local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int ******ppppppiStack_17c;
  int ******local_178;
  int ******local_174;
  int ******local_170;
  int ******local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  int ******local_15c;
  int ******local_158;
  undefined1 auStack_154 [28];
  int local_138;
  int local_134;
  undefined1 local_128;
  int ******local_120;
  char *pcStack_11c;
  undefined4 uStack_118;
  int ******ppppppiStack_114;
  int ******ppppppiStack_110;
  int ******local_10c;
  char *local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int ******local_98;
  char *local_94;
  undefined1 auStack_90 [16];
  char *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  ppppppiVar36 = (int ******)*param_3;
  if (ppppppiVar36 != (int ******)0x0) {
    iVar34 = param_3[1];
    pcVar19 = "unevaluatedItemsconversion error";
    ppppppiVar26 = ppppppiVar36;
    do {
      uVar35 = (uint)*(ushort *)((int)ppppppiVar26 + 0x192);
      ppppppiVar25 = ppppppiVar26 + 0x43;
      uVar29 = 0xffffffff;
      iVar24 = uVar35 * 0xc;
      do {
        if (iVar24 == 0) goto LAB_011e564c;
        pppppiVar23 = ppppppiVar25[2];
        pppppiVar12 = pppppiVar23;
        if ((int *****)0xf < pppppiVar23) {
          pppppiVar12 = (int *****)0x10;
        }
        iVar7 = FUN_016dd50a("unevaluatedItemsconversion error",ppppppiVar25[1],pppppiVar12);
        if (iVar7 == 0) {
          iVar7 = 0x10 - (int)pppppiVar23;
        }
        iVar24 = iVar24 + -0xc;
        uVar29 = uVar29 + 1;
        ppppppiVar25 = ppppppiVar25 + 3;
      } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
      uVar35 = uVar29;
      if (0 < iVar7 == iVar7 < 0) {
        FUN_0119d4b4(&local_1b0,param_2,"unevaluatedItemsconversion error",0x10);
        uVar6 = FUN_01352d48(local_128,ppppppiVar26 + uVar29 * 6);
        FUN_0125acb4(&local_240,&local_1b0,ppppppiVar26 + uVar29 * 6,uVar6);
        pcVar19 = local_23c;
        ppppppiVar26 = local_240;
        if (local_240 == (int ******)0x0) {
          uVar30 = FUN_011f0ab8(local_23c);
          FUN_01161600(&local_1b0);
          *param_1 = 2;
          param_1[1] = uVar30;
          return;
        }
        local_120 = local_238;
        pcStack_11c = pcStack_234;
        uStack_118 = uStack_230;
        FUN_01161600(&local_1b0);
        goto LAB_011e56dc;
      }
LAB_011e564c:
      if (iVar34 == 0) goto LAB_011e5fe8;
      iVar34 = iVar34 + -1;
      ppppppiVar26 = (int ******)ppppppiVar26[uVar35 + 0x66];
    } while( true );
  }
  local_350 = local_120;
  pcStack_34c = pcStack_11c;
  uStack_348 = uStack_118;
  local_358 = (int ******)0x0;
  local_340 = (int ******)0x0;
  local_338 = local_120;
  pcStack_334 = pcStack_11c;
  uStack_330 = uStack_118;
  goto LAB_011e590c;
LAB_011e5fe8:
  ppppppiVar26 = (int ******)0x0;
LAB_011e56dc:
  local_350 = local_120;
  pcStack_34c = pcStack_11c;
  uStack_348 = uStack_118;
  iVar34 = param_3[1];
  pcVar20 = &DAT_0056aa28;
  ppppppiVar25 = ppppppiVar36;
  local_358 = ppppppiVar26;
  local_354 = pcVar19;
  do {
    unaff_r10 = (int ******)(uint)*(ushort *)((int)ppppppiVar25 + 0x192);
    ppppppiVar26 = ppppppiVar25 + 0x43;
    unaff_r7 = (int ******)0xffffffff;
    iVar24 = (int)unaff_r10 * 0xc;
    do {
      if (iVar24 == 0) {
        unaff_r7 = unaff_r10;
        goto LAB_011e5784;
      }
      pppppiVar23 = ppppppiVar26[2];
      pppppiVar12 = pppppiVar23;
      if ((int *****)0x7 < pppppiVar23) {
        pppppiVar12 = (int *****)0x8;
      }
      iVar7 = FUN_016dd50a(&DAT_0056aa28,ppppppiVar26[1],pppppiVar12);
      if (iVar7 == 0) {
        iVar7 = 8 - (int)pppppiVar23;
      }
      iVar24 = iVar24 + -0xc;
      unaff_r7 = (int ******)((int)unaff_r7 + 1);
      ppppppiVar26 = ppppppiVar26 + 3;
    } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
    if (0 < iVar7 == iVar7 < 0) {
      FUN_0119d4b4(&local_1b0,param_2,&DAT_0056aa28,8);
      uVar6 = FUN_01352d48(local_128,ppppppiVar25 + (int)unaff_r7 * 6);
      FUN_0125acb4(&local_240,&local_1b0,ppppppiVar25 + (int)unaff_r7 * 6,uVar6);
      pcVar20 = local_23c;
      ppppppiVar26 = local_240;
      if (local_240 == (int ******)0x0) {
        uVar30 = FUN_011f0ab8(local_23c);
        FUN_01161600(&local_1b0);
        *param_1 = 2;
        param_1[1] = uVar30;
        goto LAB_011e67fc;
      }
      local_120 = local_238;
      pcStack_11c = pcStack_234;
      uStack_118 = uStack_230;
      FUN_01161600(&local_1b0);
      goto LAB_011e5808;
    }
LAB_011e5784:
    if (iVar34 == 0) break;
    iVar34 = iVar34 + -1;
    ppppppiVar25 = (int ******)ppppppiVar25[(int)((int)unaff_r7 + 0x66)];
  } while( true );
  ppppppiVar26 = (int ******)0x0;
LAB_011e5808:
  local_338 = local_120;
  pcStack_334 = pcStack_11c;
  uStack_330 = uStack_118;
  local_340 = ppppppiVar26;
  local_33c = pcVar20;
  if (ppppppiVar36 != (int ******)0x0) {
    iVar34 = param_3[1];
    ppppppiVar26 = ppppppiVar36;
    while( true ) {
      unaff_r10 = (int ******)(uint)*(ushort *)((int)ppppppiVar26 + 0x192);
      ppppppiVar25 = ppppppiVar26 + 0x43;
      unaff_r7 = (int ******)0xffffffff;
      iVar24 = (int)unaff_r10 * 0xc;
      do {
        if (iVar24 == 0) {
          unaff_r7 = unaff_r10;
          goto LAB_011e58c4;
        }
        pppppiVar23 = ppppppiVar25[2];
        pppppiVar12 = pppppiVar23;
        if ((int *****)0x3 < pppppiVar23) {
          pppppiVar12 = (int *****)0x4;
        }
        iVar7 = FUN_016dd50a("$ref~!",ppppppiVar25[1],pppppiVar12);
        if (iVar7 == 0) {
          iVar7 = 4 - (int)pppppiVar23;
        }
        iVar24 = iVar24 + -0xc;
        unaff_r7 = (int ******)((int)unaff_r7 + 1);
        ppppppiVar25 = ppppppiVar25 + 3;
      } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
      if (0 < iVar7 == iVar7 < 0) break;
LAB_011e58c4:
      if (iVar34 == 0) goto LAB_011e590c;
      iVar34 = iVar34 + -1;
      ppppppiVar26 = (int ******)ppppppiVar26[(int)((int)unaff_r7 + 0x66)];
    }
    ppppppiVar26 = ppppppiVar26 + (int)unaff_r7 * 6;
    if (*(char *)ppppppiVar26 == '\x03') {
      FUN_013539bc(&local_98,param_2 + 0x50,ppppppiVar26[2],ppppppiVar26[3]);
      puVar9 = (undefined4 *)((uint)&local_98 | 4);
      local_2b0 = (int ******)*puVar9;
      local_2ac = (char *)puVar9[1];
      local_2a8 = puVar9[2];
      local_2a4 = (int ******)puVar9[3];
      unaff_r7 = (int ******)puVar9[4];
      local_2a0 = unaff_r7;
      if (local_98 != (int ******)0x8000000a) {
        local_108 = local_80;
        uStack_104 = uStack_7c;
        uStack_100 = uStack_78;
        uStack_fc = uStack_74;
        puVar9 = (undefined4 *)((uint)&local_120 | 4);
        local_f8 = local_70;
        uStack_f4 = uStack_6c;
        uStack_f0 = uStack_68;
        uStack_ec = uStack_64;
        *puVar9 = local_2b0;
        puVar9[1] = local_2ac;
        puVar9[2] = local_2a8;
        puVar9[3] = local_2a4;
        puVar9[4] = unaff_r7;
        local_120 = local_98;
        iVar34 = FUN_011e9f60();
LAB_011e5fd8:
        *param_1 = 2;
        param_1[1] = iVar34;
        goto LAB_011e67e8;
      }
      local_2f8 = local_2b0;
      local_2f4 = local_2ac;
      local_2f0 = local_2a8;
      local_2ec = local_2a4;
      local_2e8 = unaff_r7;
      if (*(char *)local_2b0 == '\x05') {
        FUN_011e5598(&local_240,param_2,local_2b0 + 1);
        pcVar19 = local_23c;
        unaff_r7 = local_240;
        if (local_240 == (int ******)&SUB_00000002) {
          iVar34 = FUN_011f0ab8(local_23c);
        }
        else {
          FUN_016dd1aa(&local_1a8,&local_238,0x68);
          local_1ac = pcVar19;
          local_1b0 = unaff_r7;
          iVar34 = thunk_FUN_016d4a50(0x70);
          if (iVar34 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x70);
          }
          FUN_016dd1aa(iVar34,&local_1b0,0x70);
        }
        FUN_01167ec8((uint)&local_2f8 | 4);
        if (unaff_r7 != (int ******)&SUB_00000002) goto LAB_011e5910;
        goto LAB_011e5fd8;
      }
      FUN_01167ec8((uint)&local_2f8 | 4);
    }
  }
LAB_011e590c:
  iVar34 = 0;
LAB_011e5910:
  if (ppppppiVar36 != (int ******)0x0) {
    iVar24 = param_3[1];
    ppppppiVar26 = ppppppiVar36;
    while( true ) {
      unaff_r10 = (int ******)(uint)*(ushort *)((int)ppppppiVar26 + 0x192);
      ppppppiVar25 = ppppppiVar26 + 0x43;
      unaff_r7 = (int ******)0xffffffff;
      iVar7 = (int)unaff_r10 * 0xc;
      do {
        if (iVar7 == 0) {
          unaff_r7 = unaff_r10;
          goto LAB_011e59b8;
        }
        pppppiVar23 = ppppppiVar25[2];
        pppppiVar12 = pppppiVar23;
        if ((int *****)0xa < pppppiVar23) {
          pppppiVar12 = (int *****)0xb;
        }
        iVar8 = FUN_016dd50a("$dynamicRef",ppppppiVar25[1],pppppiVar12);
        if (iVar8 == 0) {
          iVar8 = 0xb - (int)pppppiVar23;
        }
        iVar7 = iVar7 + -0xc;
        unaff_r7 = (int ******)((int)unaff_r7 + 1);
        ppppppiVar25 = ppppppiVar25 + 3;
      } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
      if (0 < iVar8 == iVar8 < 0) break;
LAB_011e59b8:
      if (iVar24 == 0) goto LAB_011e5bb8;
      iVar24 = iVar24 + -1;
      ppppppiVar26 = (int ******)ppppppiVar26[(int)((int)unaff_r7 + 0x66)];
    }
    ppppppiVar26 = ppppppiVar26 + (int)unaff_r7 * 6;
    if (*(char *)ppppppiVar26 == '\x03') {
      FUN_013539bc(&local_98,param_2 + 0x50,ppppppiVar26[2],ppppppiVar26[3]);
      puVar9 = (undefined4 *)((uint)&local_98 | 4);
      local_2b0 = (int ******)*puVar9;
      local_2ac = (char *)puVar9[1];
      local_2a8 = puVar9[2];
      local_2a4 = (int ******)puVar9[3];
      unaff_r7 = (int ******)puVar9[4];
      local_2a0 = unaff_r7;
      if (local_98 != (int ******)0x8000000a) {
        local_108 = local_80;
        uStack_104 = uStack_7c;
        uStack_100 = uStack_78;
        uStack_fc = uStack_74;
        puVar9 = (undefined4 *)((uint)&local_120 | 4);
        local_f8 = local_70;
        uStack_f4 = uStack_6c;
        uStack_f0 = uStack_68;
        uStack_ec = uStack_64;
        *puVar9 = local_2b0;
        puVar9[1] = local_2ac;
        puVar9[2] = local_2a8;
        puVar9[3] = local_2a4;
        puVar9[4] = unaff_r7;
        local_120 = local_98;
        local_370 = (char *)FUN_011e9f60();
LAB_011e5b9c:
        *param_1 = 2;
        param_1[1] = local_370;
        goto LAB_011e67d0;
      }
      local_2f8 = local_2b0;
      local_2f4 = local_2ac;
      local_2f0 = local_2a8;
      local_2ec = local_2a4;
      local_2e8 = unaff_r7;
      if (*(char *)local_2b0 == '\x05') {
        FUN_011e5598(&local_240,param_2,local_2b0 + 1);
        pcVar19 = local_23c;
        unaff_r7 = local_240;
        if (local_240 == (int ******)&SUB_00000002) {
          local_370 = (char *)FUN_011f0ab8(local_23c);
          local_240 = (int ******)&SUB_00000002;
          local_23c = local_370;
        }
        else {
          FUN_016dd1aa(&local_1a8,&local_238,0x68);
          local_1ac = pcVar19;
          local_1b0 = unaff_r7;
          local_370 = (char *)FUN_011ea1b4(0x70);
          FUN_016dd1aa(local_370,&local_1b0,0x70);
        }
        FUN_01167ec8((uint)&local_2f8 | 4);
        if (unaff_r7 != (int ******)&SUB_00000002) goto LAB_011e5bc4;
        goto LAB_011e5b9c;
      }
      FUN_01167ec8((uint)&local_2f8 | 4);
    }
  }
LAB_011e5bb8:
  local_370 = (char *)0x0;
LAB_011e5bc4:
  if (ppppppiVar36 == (int ******)0x0) {
    ppppppiVar26 = (int ******)0x0;
  }
  else {
    iVar24 = param_3[1];
    ppppppiVar26 = ppppppiVar36;
LAB_011e5be4:
    unaff_r10 = (int ******)(uint)*(ushort *)((int)ppppppiVar26 + 0x192);
    unaff_r7 = ppppppiVar26 + 0x43;
    ppppppiVar25 = (int ******)0xffffffff;
    iVar7 = (int)unaff_r10 * 0xc;
    do {
      if (iVar7 == 0) {
        ppppppiVar25 = unaff_r10;
        goto LAB_011e5c64;
      }
      pppppiVar23 = unaff_r7[2];
      pppppiVar12 = pppppiVar23;
      if ((int *****)0xc < pppppiVar23) {
        pppppiVar12 = (int *****)0xd;
      }
      iVar8 = FUN_016dd50a("$recursiveRef",unaff_r7[1],pppppiVar12);
      if (iVar8 == 0) {
        iVar8 = 0xd - (int)pppppiVar23;
      }
      iVar7 = iVar7 + -0xc;
      ppppppiVar25 = (int ******)((int)ppppppiVar25 + 1);
      unaff_r7 = unaff_r7 + 3;
    } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
    if (0 < iVar8 == iVar8 < 0) {
      FUN_012643bc(&local_1b0,param_2);
      pcVar19 = local_1ac;
      if (local_1b0 != (int ******)0x8000000a) {
        ppppppiVar26 = (int ******)FUN_011e9f60(&local_1b0);
        goto LAB_011e5f3c;
      }
      uVar6 = (undefined1)local_19c;
      unaff_r10 = (int ******)(local_19c & 0xff);
      local_308 = local_1a8;
      ppppppiStack_304 = ppppppiStack_1a4;
      ppppppiStack_300 = local_1a0;
      if (*local_1ac != '\x05') {
        ppppppiVar26 = (int ******)0x0;
        FUN_01167ec8(&local_308);
        goto LAB_011e6474;
      }
      FUN_01348cc4(&local_2f8,*(undefined4 *)(param_2 + 0x4c),unaff_r10,local_1ac);
      pppppiVar12 = (int *****)(pcVar19 + 4);
      ppppppiVar26 = *(int *******)(param_2 + 0x38);
      ppppppiVar25 = *(int *******)(param_2 + 0x3c);
      do {
        pppppiVar23 = *ppppppiVar26;
        bVar3 = (bool)hasExclusiveAccess(ppppppiVar26);
      } while (!bVar3);
      *ppppppiVar26 = (int *****)((int)pppppiVar23 + 1);
      if ((int)pppppiVar23 < 0) {
LAB_011e7480:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11e7480);
        (*pcVar1)();
      }
      uVar33 = *(undefined4 *)(param_2 + 0x48);
      uVar30 = *(undefined4 *)(param_2 + 0x4c);
      do {
        pppppiVar23 = *ppppppiVar26;
        bVar3 = (bool)hasExclusiveAccess(ppppppiVar26);
      } while (!bVar3);
      *ppppppiVar26 = (int *****)((int)pppppiVar23 + 1);
      if ((int)pppppiVar23 < 0) goto LAB_011e7480;
      FUN_0119dc58(auStack_154,param_2 + 0x5c);
      unaff_r10 = ppppppiStack_300;
      ppppppiVar17 = ppppppiStack_304;
      local_160 = local_308;
      local_15c = ppppppiStack_304;
      local_158 = ppppppiStack_300;
      local_1b0 = local_2f8;
      local_1ac = local_2f4;
      local_1a8 = local_2f0;
      ppppppiStack_1a4 = local_2ec;
      local_1a0 = local_2e8;
      local_19c = uStack_2e4;
      uStack_198 = uStack_2e0;
      uStack_194 = uStack_2dc;
      uStack_190 = uStack_2d8;
      local_18c = local_2d4;
      uStack_188 = uStack_2d0;
      uStack_184 = uStack_2cc;
      uStack_180 = uStack_2c8;
      ppppppiStack_17c = ppppppiStack_2c4;
      local_128 = uVar6;
      uVar35 = *(uint *)(local_134 + 8);
      local_178 = ppppppiVar26;
      local_174 = ppppppiVar25;
      local_170 = ppppppiVar26;
      local_16c = ppppppiVar25;
      local_168 = uVar33;
      local_164 = uVar30;
      if (0x7ffffffe < uVar35) {
        FUN_00fb71b0(&DAT_0188aee8);
        goto LAB_011e7480;
      }
      *(uint *)(local_134 + 8) = uVar35 + 1;
      unaff_r7 = ppppppiStack_2c4;
      if (*(int *)(local_134 + 0x1c) != 0) {
        uVar18 = *(uint *)(local_134 + 0x20);
        uVar31 = *(uint *)(local_134 + 0x24);
        uVar27 = *(uint *)(local_134 + 0x28) ^ (uint)pppppiVar12;
        uVar13 = *(uint *)(local_134 + 0x2c);
        uVar29 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                 uVar13 >> 0x18;
        lVar4 = (ulonglong)uVar29 * 0xb36a80d2;
        uVar21 = (uint)lVar4;
        uVar29 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                 uVar27 >> 0x18) * -0x4c957f2e +
                 uVar29 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
        uVar13 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18) ^
                 uVar13 * 0x2df45158 +
                 uVar27 * 0x2d7f954c + (int)((ulonglong)uVar27 * 0x2df45158 >> 0x20);
        uVar32 = uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                 uVar31 >> 0x18;
        uVar21 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                 uVar29 >> 0x18) ^ (uint)((ulonglong)uVar27 * 0x2df45158);
        lVar4 = (ulonglong)uVar32 * (ulonglong)uVar21;
        uVar29 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                 uVar13 >> 0x18;
        lVar5 = (ulonglong)~uVar18 * (ulonglong)uVar29;
        uVar27 = (uint)lVar5;
        uVar29 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18) * ~uVar18 + uVar29 * ~uVar31 + (int)((ulonglong)lVar5 >> 0x20);
        iVar24 = *(int *)(local_134 + 0x10);
        uVar29 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                 uVar29 >> 0x18) ^ (uint)lVar4;
        uVar18 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                 uVar27 >> 0x18) ^
                 uVar13 * uVar32 +
                 uVar21 * (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                           (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) +
                 (int)((ulonglong)lVar4 >> 0x20);
        uVar13 = uVar18;
        if ((uVar21 & 0x20) != 0) {
          uVar13 = uVar29;
          uVar29 = uVar18;
        }
        pcVar19 = (char *)(uVar29 << (uVar21 & 0x1f) | (uVar13 >> 1) >> (~uVar21 & 0x1f));
        uVar29 = (uint)pcVar19 >> 0x19;
        local_378 = 0;
        while( true ) {
          unaff_r7 = (int ******)(*(uint *)(local_134 + 0x14) & (uint)pcVar19);
          uVar21 = *(uint *)(iVar24 + (int)unaff_r7);
          uVar13 = uVar21 ^ uVar29 * 0x1010101;
          uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff;
          while (uVar13 != 0) {
            uVar18 = uVar13 >> 8;
            uVar27 = uVar13 >> 0x10;
            uVar31 = uVar13 >> 0x18;
            uVar32 = uVar13 << 0x18;
            uVar13 = uVar13 - 1 & uVar13;
            uVar18 = (uint)((int)unaff_r7 +
                           ((uint)LZCOUNT(uVar32 | (uVar18 & 0xff) << 0x10 | (uVar27 & 0xff) << 8 |
                                          uVar31) >> 3)) & *(uint *)(local_134 + 0x14);
            if (((int ******)(iVar24 + -8))[uVar18 * -2] == pppppiVar12) {
              iVar7 = iVar24 + uVar18 * -8;
              piVar14 = *(int **)(iVar7 + -4);
              do {
                iVar8 = *piVar14;
                unaff_r7 = (int ******)(iVar8 + 1);
                bVar3 = (bool)hasExclusiveAccess(piVar14);
              } while (!bVar3);
              *piVar14 = (int)unaff_r7;
              if (iVar8 < 0) goto LAB_011e7480;
              ppppppiVar26 = *(int *******)(iVar7 + -4);
              bVar3 = false;
              *(int *)(local_134 + 8) = *(int *)(local_134 + 8) + -1;
              unaff_r10 = (int ******)(iVar24 + -8);
              goto LAB_011e63c0;
            }
          }
          if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
          local_378 = local_378 + 4;
          pcVar19 = (char *)((int)unaff_r7 + local_378);
        }
      }
      *(uint *)(local_134 + 8) = uVar35;
      do {
        pppppiVar23 = *ppppppiStack_304;
        bVar3 = (bool)hasExclusiveAccess(ppppppiStack_304);
      } while (!bVar3);
      *ppppppiStack_304 = (int *****)((int)pppppiVar23 + 1);
      if ((int)pppppiVar23 < 0) goto LAB_011e7480;
      do {
        pppppiVar23 = *ppppppiVar26;
        bVar3 = (bool)hasExclusiveAccess(ppppppiVar26);
      } while (!bVar3);
      *ppppppiVar26 = (int *****)((int)pppppiVar23 + 1);
      if ((int)pppppiVar23 < 0) goto LAB_011e7480;
      if (ppppppiStack_300 != (int ******)0x0) {
        do {
          pppppiVar23 = *ppppppiStack_300;
          bVar3 = (bool)hasExclusiveAccess(ppppppiStack_300);
        } while (!bVar3);
        *ppppppiStack_300 = (int *****)((int)pppppiVar23 + 1);
        if ((int)pppppiVar23 < 0) goto LAB_011e7480;
      }
      local_2c0 = ppppppiStack_304;
      local_2b4 = ppppppiStack_300;
      uVar35 = *(uint *)(local_138 + 8);
      local_2bc = ppppppiVar26;
      local_2b8 = ppppppiVar25;
      if (0x7ffffffe < uVar35) {
        FUN_00fb71b0(&DAT_0188ae78);
        goto LAB_011e7480;
      }
      *(uint *)(local_138 + 8) = uVar35 + 1;
      if (*(int *)(local_138 + 0x1c) != 0) {
        uVar35 = FUN_011e02d8(local_138 + 0x20,&local_2c0);
        uVar29 = *(uint *)(local_138 + 0x14);
        if (unaff_r10 != (int ******)0x0) {
          unaff_r10 = (int ******)&local_2b4;
        }
        uVar13 = uVar35 >> 0x19;
        pppppiVar23 = *(int ******)(local_138 + 0x10);
        iVar24 = 0;
        do {
          pppppiVar22 = (int *****)(uVar29 & uVar35);
          uVar21 = *(uint *)((int)pppppiVar23 + (int)pppppiVar22);
          uVar35 = uVar21 ^ uVar13 * 0x1010101;
          for (uVar35 = ~uVar35 & 0x80808080 & uVar35 + 0xfefefeff; uVar35 != 0;
              uVar35 = uVar35 - 1 & uVar35) {
            unaff_r7 = (int ******)0x80808080;
            uVar18 = (int)pppppiVar22 +
                     ((uint)LZCOUNT(uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                                    (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) >> 3) & uVar29;
            ppppppiVar15 = (int ******)pppppiVar23[uVar18 * -5 + -5];
            local_390 = pppppiVar22;
            local_38c = pppppiVar23;
            if ((((ppppppiVar17 == ppppppiVar15) ||
                 ((ppppppiVar17[4] == ppppppiVar15[4] &&
                  (iVar7 = thunk_FUN_016dd50a(ppppppiVar17[3],ppppppiVar15[3]), iVar7 == 0)))) &&
                (ppppppiVar25 == (int ******)pppppiVar23[uVar18 * -5 + -3])) &&
               (iVar7 = thunk_FUN_016dd50a(ppppppiVar26 + 2,pppppiVar23[uVar18 * -5 + -4] + 2,
                                           ppppppiVar25), iVar7 == 0)) {
              pppppiVar28 = pppppiVar23 + uVar18 * -5 + -2;
              ppppppiVar15 = unaff_r10;
              if (*pppppiVar28 == (int ****)0x0) {
                pppppiVar28 = (int *****)0x0;
              }
LAB_011e61ac:
              if (ppppppiVar15 == (int ******)0x0) {
                if (pppppiVar28 == (int *****)0x0) {
                  ppppiVar10 = pppppiVar23[uVar18 * -5 + -1];
                  do {
                    pppiVar11 = *ppppiVar10;
                    bVar3 = (bool)hasExclusiveAccess(ppppiVar10);
                  } while (!bVar3);
                  *ppppiVar10 = (int ***)((int)pppiVar11 + 1);
                  if ((int)pppiVar11 < 0) goto LAB_011e7480;
                  ppppppiVar26 = (int ******)pppppiVar23[uVar18 * -5 + -1];
                  bVar3 = false;
                  *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + -1;
                  goto LAB_011e63b8;
                }
              }
              else if (pppppiVar28 != (int *****)0x0) {
                ppppiVar10 = (*ppppppiVar15)[2];
                pppiVar11 = (*pppppiVar28)[2];
                if (ppppiVar10[4] == (int ***)pppiVar11[4]) goto code_r0x011e61dc;
              }
            }
LAB_011e620c:
          }
          unaff_r7 = (int ******)0x80808080;
          if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) goto LAB_011e6374;
          iVar24 = iVar24 + 4;
          uVar35 = (int)pppppiVar22 + iVar24;
        } while( true );
      }
LAB_011e637c:
      *(uint *)(local_138 + 8) = uVar35;
      FUN_011e5598(&local_98,&local_1b0,pppppiVar12);
      pcVar19 = local_94;
      ppppppiVar26 = local_98;
      if (local_98 != (int ******)&SUB_00000002) {
        FUN_016dd1aa(&local_2a8,auStack_90,0x68);
        local_2ac = pcVar19;
        local_1c8 = 3;
        local_2b0 = ppppppiVar26;
        local_23c = &DAT_00000001;
        local_240 = (int ******)&DAT_00000001;
        ppppppiVar26 = (int ******)FUN_011ea1b4(0x7c);
        FUN_016dd1aa(ppppppiVar26,&local_240,0x7c);
        local_318 = ppppppiVar26;
        FUN_011ea250(&local_240,ppppppiVar26 + 2,&local_2b0);
        if ((local_23c != &SUB_00000002) &&
           (FUN_016dd1aa(&local_120,&local_23c,0x70), local_120 != (int ******)&SUB_00000002)) {
          FUN_011e792c(&local_120);
        }
        FUN_011a38e0(&local_2c0);
        FUN_01161600(&local_1b0);
        goto LAB_011e6474;
      }
      ppppppiVar26 = (int ******)FUN_011f0ab8(local_94);
      bVar3 = true;
LAB_011e63b8:
      FUN_011a38e0(&local_2c0);
LAB_011e63c0:
      FUN_01161600(&local_1b0);
      if (!bVar3) goto LAB_011e6474;
LAB_011e5f3c:
      *param_1 = 2;
      param_1[1] = ppppppiVar26;
      goto LAB_011e67b4;
    }
LAB_011e5c64:
    if (iVar24 != 0) goto code_r0x011e5c6c;
    ppppppiVar26 = (int ******)0x0;
  }
LAB_011e6474:
  local_32c = ppppppiVar26;
  if (ppppppiVar36 != (int ******)0x0) {
    bVar2 = *(byte *)(param_2 + 0x88);
    local_374 = param_3[1];
    ppppppiVar25 = ppppppiVar36;
    local_378 = local_374;
    do {
      uVar35 = (uint)*(ushort *)((int)ppppppiVar25 + 0x192);
      ppppppiVar17 = ppppppiVar25 + 0x43;
      uVar29 = 0xffffffff;
      iVar24 = uVar35 * 0xc;
      do {
        if (iVar24 == 0) goto LAB_011e652c;
        unaff_r7 = (int ******)ppppppiVar17[2];
        ppppppiVar15 = unaff_r7;
        if (&DAT_00000004 < unaff_r7) {
          ppppppiVar15 = (int ******)&DAT_00000005;
        }
        iVar7 = FUN_016dd50a(&DAT_004146ea,ppppppiVar17[1],ppppppiVar15);
        if (iVar7 == 0) {
          iVar7 = 5 - (int)unaff_r7;
        }
        iVar24 = iVar24 + -0xc;
        uVar29 = uVar29 + 1;
        ppppppiVar17 = ppppppiVar17 + 3;
      } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
      uVar35 = uVar29;
      if (0 < iVar7 == iVar7 < 0) {
        if (3 < bVar2) {
          local_380 = 1;
          local_37c = 0;
          goto LAB_011e6670;
        }
        ppppppiVar17 = ppppppiVar36;
        local_378 = local_374;
        goto LAB_011e6584;
      }
LAB_011e652c:
      if (local_378 == 0) goto LAB_011e6cc8;
      local_378 = local_378 + -1;
      ppppppiVar25 = (int ******)ppppppiVar25[uVar35 + 0x66];
    } while( true );
  }
  ppppppiVar25 = (int ******)0x0;
  local_37c = 0;
  local_380 = 0;
  goto LAB_011e675c;
code_r0x011e61dc:
  pppppiVar28 = (int *****)(*pppppiVar28 + 3);
  unaff_r7 = (int ******)*pppppiVar28;
  ppppppiVar15 = (int ******)(*ppppppiVar15 + 3);
  pppppiVar37 = *ppppppiVar15;
  iVar7 = thunk_FUN_016dd50a(ppppiVar10[3],pppiVar11[3]);
  if (pppppiVar37 == (int *****)0x0) {
    ppppppiVar15 = (int ******)0x0;
  }
  if (unaff_r7 == (int ******)0x0) {
    pppppiVar28 = (int *****)0x0;
  }
  if (iVar7 != 0) goto LAB_011e620c;
  goto LAB_011e61ac;
LAB_011e6374:
  uVar35 = *(int *)(local_138 + 8) - 1;
  goto LAB_011e637c;
code_r0x011e5c6c:
  iVar24 = iVar24 + -1;
  ppppppiVar26 = (int ******)ppppppiVar26[(int)((int)ppppppiVar25 + 0x66)];
  goto LAB_011e5be4;
LAB_011e6584:
  uVar35 = (uint)*(ushort *)((int)ppppppiVar17 + 0x192);
  ppppppiVar15 = ppppppiVar17 + 0x43;
  uVar13 = 0xffffffff;
  iVar24 = uVar35 * 0xc;
  do {
    if (iVar24 == 0) goto LAB_011e6604;
    unaff_r7 = (int ******)ppppppiVar15[2];
    ppppppiVar16 = unaff_r7;
    if (&DAT_0000000e < unaff_r7) {
      ppppppiVar16 = (int ******)&DAT_0000000f;
    }
    iVar7 = FUN_016dd50a("additionalItems",ppppppiVar15[1],ppppppiVar16);
    if (iVar7 == 0) {
      iVar7 = 0xf - (int)unaff_r7;
    }
    iVar24 = iVar24 + -0xc;
    uVar13 = uVar13 + 1;
    ppppppiVar15 = ppppppiVar15 + 3;
  } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
  uVar35 = uVar13;
  if (0 < iVar7 == iVar7 < 0) {
    local_38c = (int *****)0xffffffff;
    goto LAB_011e666c;
  }
LAB_011e6604:
  if (local_378 == 0) goto LAB_011e705c;
  local_378 = local_378 + -1;
  ppppppiVar17 = (int ******)ppppppiVar17[uVar35 + 0x66];
  goto LAB_011e6584;
LAB_011e6cc8:
  local_37c = 0;
  local_380 = 0;
  goto LAB_011e6670;
LAB_011e6d94:
  do {
    if (*(char *)pppppiVar12 == '\x05') {
      FUN_0119f6cc(&local_1b0,&local_240,unaff_r10);
      uVar6 = FUN_01352d48(local_128,pppppiVar12);
      FUN_0125acb4(&local_2b0,&local_1b0,pppppiVar12,uVar6);
      if (local_2b0 == (int ******)0x0) {
        ppppppiVar36 = (int ******)FUN_011f0ab8();
      }
      else {
        local_2f4 = local_2ac;
        local_2f8 = local_2b0;
        local_2f0 = local_2a8;
        local_2ec = local_2a4;
        local_2e8 = local_2a0;
        FUN_011e5598(&local_98,&local_1b0,pppppiVar12 + 1);
        pcVar20 = local_94;
        ppppppiVar36 = local_98;
        if (local_98 != (int ******)&SUB_00000002) {
          FUN_016dd1aa(&uStack_104,auStack_90,0x68);
          local_120 = local_2f8;
          pcStack_11c = local_2f4;
          uStack_118 = local_2f0;
          ppppppiStack_114 = local_2ec;
          ppppppiStack_110 = local_2e8;
          local_108 = pcVar20;
          local_10c = ppppppiVar36;
          if ((int ******)pcVar19 == local_2c0) {
            FUN_011cf5fc(&local_2c0);
            local_388 = local_2bc;
          }
          FUN_016dd1aa(local_388 + (int)pcVar19 * 0x21,&local_120,0x84);
          pcVar19 = (char *)((int)pcVar19 + 1);
          local_2b8 = (int ******)pcVar19;
          FUN_01161600(&local_1b0);
          goto LAB_011e6d84;
        }
        ppppppiVar36 = (int ******)FUN_011f0ab8(local_94);
        FUN_011e4f30(&local_2f8);
      }
      FUN_01161600(&local_1b0);
      FUN_0115f8b0(local_388,pcVar19);
      if (local_2c0 != (int ******)0x0) {
        thunk_FUN_016d3fb4(local_388);
      }
      FUN_01161600(&local_240);
      goto LAB_011e72f0;
    }
LAB_011e6d84:
    unaff_r10 = (int ******)((int)unaff_r10 + 1);
    iVar7 = iVar7 + -0x18;
    pppppiVar12 = pppppiVar12 + 6;
  } while (iVar7 != 0);
LAB_011e6e84:
  ppppppiVar17 = local_2c0;
  FUN_01161600(&local_240);
  ppppppiVar36 = local_388;
  if (ppppppiVar17 == (int ******)0x80000001) {
LAB_011e72f0:
    *param_1 = 2;
    param_1[1] = ppppppiVar36;
    goto LAB_011e7420;
  }
  ppppppiVar36 = (int ******)*param_3;
  goto LAB_011e6950;
LAB_011e6f54:
  do {
    pcVar20 = (char *)(ppppppiVar36 + 6);
    if (*(char *)ppppppiVar36 == '\x05') {
      FUN_0119f6cc(&local_1b0,&local_240,iVar8);
      uVar6 = FUN_01352d48(local_128,ppppppiVar36);
      FUN_0125acb4(&local_2b0,&local_1b0,ppppppiVar36,uVar6);
      if (local_2b0 == (int ******)0x0) {
        unaff_r10 = (int ******)FUN_011f0ab8();
      }
      else {
        local_2f0 = local_2a8;
        local_2ec = local_2a4;
        local_2e8 = local_2a0;
        local_2f4 = local_2ac;
        local_2f8 = local_2b0;
        FUN_011e5598(&local_98,&local_1b0,ppppppiVar36 + 1);
        pcVar19 = local_94;
        ppppppiVar36 = local_98;
        if (local_98 != (int ******)&SUB_00000002) {
          FUN_016dd1aa(&uStack_104,auStack_90,0x68);
          local_120 = local_2f8;
          pcStack_11c = local_2f4;
          uStack_118 = local_2f0;
          ppppppiStack_114 = local_2ec;
          ppppppiStack_110 = local_2e8;
          local_10c = ppppppiVar36;
          local_108 = pcVar19;
          if (local_388 == local_2c0) {
            FUN_011cf5fc(&local_2c0);
            ppppppiVar17 = local_2bc;
          }
          FUN_016dd1aa(ppppppiVar17 + (int)local_388 * 0x21,&local_120,0x84);
          local_388 = (int ******)((int)local_388 + 1);
          local_2b8 = local_388;
          FUN_01161600(&local_1b0);
          goto LAB_011e6f44;
        }
        unaff_r10 = (int ******)FUN_011f0ab8(local_94);
        FUN_011e4f30(&local_2f8);
      }
      FUN_01161600(&local_1b0);
      FUN_0115f8b0(ppppppiVar17,local_388);
      if (local_2c0 != (int ******)0x0) {
        thunk_FUN_016d3fb4(ppppppiVar17);
      }
      FUN_01161600(&local_240);
      goto LAB_011e7368;
    }
LAB_011e6f44:
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + -0x18;
    ppppppiVar36 = (int ******)pcVar20;
  } while (iVar7 != 0);
  unaff_r10 = ppppppiVar17;
LAB_011e7094:
  ppppppiVar17 = local_2c0;
  FUN_01161600(&local_240);
  if (ppppppiVar17 == (int ******)0x80000001) {
LAB_011e7368:
    *param_1 = 2;
    param_1[1] = unaff_r10;
    goto LAB_011e73f4;
  }
  ppppppiVar36 = (int ******)*param_3;
  goto LAB_011e6a88;
LAB_011e7160:
  do {
    if (*(char *)pppppiVar12 == '\x05') {
      FUN_0119f6cc(&local_1b0,&local_240,iVar8);
      uVar6 = FUN_01352d48(local_128,pppppiVar12);
      FUN_0125acb4(&local_2b0,&local_1b0,pppppiVar12,uVar6);
      if (local_2b0 == (int ******)0x0) {
        pcVar20 = (char *)FUN_011f0ab8();
      }
      else {
        local_2f4 = local_2ac;
        local_2f8 = local_2b0;
        local_2f0 = local_2a8;
        local_2ec = local_2a4;
        local_2e8 = local_2a0;
        FUN_011e5598(&local_98,&local_1b0,pppppiVar12 + 1);
        pcVar19 = local_94;
        ppppppiVar36 = local_98;
        if (local_98 != (int ******)&SUB_00000002) {
          FUN_016dd1aa(&uStack_104,auStack_90,0x68);
          local_120 = local_2f8;
          pcStack_11c = local_2f4;
          uStack_118 = local_2f0;
          ppppppiStack_114 = local_2ec;
          ppppppiStack_110 = local_2e8;
          local_10c = ppppppiVar36;
          local_108 = pcVar19;
          if (unaff_r10 == local_2c0) {
            FUN_011cf5fc(&local_2c0);
            ppppppiVar16 = local_2bc;
          }
          FUN_016dd1aa(ppppppiVar16 + (int)unaff_r10 * 0x21,&local_120,0x84);
          unaff_r10 = (int ******)((int)unaff_r10 + 1);
          local_2b8 = unaff_r10;
          FUN_01161600(&local_1b0);
          goto LAB_011e7150;
        }
        pcVar20 = (char *)FUN_011f0ab8(local_94);
        FUN_011e4f30(&local_2f8);
      }
      FUN_01161600(&local_1b0);
      FUN_0115f8b0(ppppppiVar16,unaff_r10);
      if (local_2c0 != (int ******)0x0) {
        thunk_FUN_016d3fb4(ppppppiVar16);
      }
      FUN_01161600(&local_240);
      goto LAB_011e73dc;
    }
LAB_011e7150:
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + -0x18;
    pppppiVar12 = pppppiVar12 + 6;
  } while (iVar7 != 0);
  pcVar20 = (char *)ppppppiVar16;
LAB_011e726c:
  ppppppiVar36 = local_2c0;
  FUN_01161600(&local_240);
  if (ppppppiVar36 != (int ******)0x80000001) goto LAB_011e6bbc;
LAB_011e73dc:
  *param_1 = 2;
  param_1[1] = pcVar20;
  FUN_011e1238(&local_318);
LAB_011e73f4:
  ppppppiVar25 = local_324;
  ppppppiVar36 = local_328;
  if ((local_328 != (int ******)&DAT_80000000) &&
     (FUN_0115f8b0(local_324,local_320), ppppppiVar36 != (int ******)0x0)) {
    thunk_FUN_016d3fb4(ppppppiVar25);
  }
LAB_011e7420:
  if (iVar24 != 0) {
    FUN_011e9ecc(iVar24);
    thunk_FUN_016d3fb4(iVar24);
  }
  goto LAB_011e6780;
LAB_011e705c:
  if (*(char *)(ppppppiVar25 + uVar29 * 6) == '\x04') {
    local_38c = (ppppppiVar25 + uVar29 * 6)[3];
  }
  else {
    local_38c = (int *****)0xffffffff;
  }
LAB_011e666c:
  local_37c = 1;
  local_380 = 0;
LAB_011e6670:
  unaff_r10 = ppppppiVar36;
  while( true ) {
    uVar35 = (uint)*(ushort *)((int)unaff_r10 + 0x192);
    ppppppiVar25 = unaff_r10 + 0x43;
    uVar29 = 0xffffffff;
    iVar24 = uVar35 * 0xc;
    do {
      if (iVar24 == 0) goto LAB_011e6704;
      unaff_r7 = (int ******)ppppppiVar25[2];
      ppppppiVar17 = unaff_r7;
      if (&DAT_0000000a < unaff_r7) {
        ppppppiVar17 = (int ******)&DAT_0000000b;
      }
      iVar7 = FUN_016dd50a("prefixItems",ppppppiVar25[1],ppppppiVar17);
      if (iVar7 == 0) {
        iVar7 = 0xb - (int)unaff_r7;
      }
      iVar24 = iVar24 + -0xc;
      uVar29 = uVar29 + 1;
      ppppppiVar25 = ppppppiVar25 + 3;
    } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
    uVar35 = uVar29;
    if (0 < iVar7 == iVar7 < 0) break;
LAB_011e6704:
    if (local_374 == 0) goto LAB_011e6754;
    local_374 = local_374 + -1;
    unaff_r10 = (int ******)unaff_r10[uVar35 + 0x66];
  }
  unaff_r10 = unaff_r10 + uVar29 * 6;
  if (*(char *)unaff_r10 == '\x04') {
    local_390 = unaff_r10[3];
    ppppppiVar25 = (int ******)&DAT_00000001;
    goto LAB_011e675c;
  }
LAB_011e6754:
  ppppppiVar25 = (int ******)0x0;
LAB_011e675c:
  uVar38 = FUN_011ea2f0(param_2,param_3);
  iVar24 = (int)(uVar38 >> 0x20);
  if ((uVar38 & 1) == 0) {
    pcVar19 = (char *)ppppppiVar25;
    local_388 = unaff_r7;
    if (ppppppiVar36 != (int ******)0x0) {
      local_378 = param_3[1];
      pcVar19 = "allOf";
      unaff_r10 = ppppppiVar36;
      while( true ) {
        uVar29 = (uint)*(ushort *)((int)unaff_r10 + 0x192);
        ppppppiVar17 = unaff_r10 + 0x43;
        uVar35 = 0xffffffff;
        iVar7 = uVar29 * 0xc;
        do {
          if (iVar7 == 0) goto LAB_011e68d0;
          local_388 = (int ******)ppppppiVar17[2];
          ppppppiVar15 = local_388;
          if (&DAT_00000004 < local_388) {
            ppppppiVar15 = (int ******)&DAT_00000005;
          }
          iVar8 = FUN_016dd50a("allOf",ppppppiVar17[1],ppppppiVar15);
          if (iVar8 == 0) {
            iVar8 = 5 - (int)local_388;
          }
          iVar7 = iVar7 + -0xc;
          uVar35 = uVar35 + 1;
          ppppppiVar17 = ppppppiVar17 + 3;
        } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
        uVar29 = uVar35;
        if (0 < iVar8 == iVar8 < 0) break;
LAB_011e68d0:
        if (local_378 == 0) goto LAB_011e694c;
        local_378 = local_378 + -1;
        unaff_r10 = (int ******)unaff_r10[uVar29 + 0x66];
      }
      unaff_r10 = unaff_r10 + uVar35 * 6;
      if (*(char *)unaff_r10 == '\x04') {
        FUN_0119d4b4(&local_240,param_2,"allOf",5);
        ppppppiVar36 = (int ******)unaff_r10[3];
        if ((int ******)0xf83e0f < ppppppiVar36) {
          uVar30 = 0;
LAB_011e6940:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar30,uVar35);
        }
        uVar35 = (int)ppppppiVar36 * 0x84;
        if (uVar35 == 0) {
          local_388 = (int ******)&DAT_00000004;
          local_2c0 = (int ******)0x0;
        }
        else {
          local_388 = (int ******)thunk_FUN_016d4a50(uVar35);
          if (local_388 == (int ******)0x0) {
            uVar30 = 4;
            goto LAB_011e6940;
          }
          local_2c0 = ppppppiVar36;
        }
        local_2b8 = (int ******)0x0;
        local_2bc = local_388;
        if (ppppppiVar36 == (int ******)0x0) {
          pcVar19 = (char *)0x0;
          goto LAB_011e6e84;
        }
        ppppppiVar17 = unaff_r10 + 2;
        pcVar19 = (char *)0x0;
        iVar7 = (int)ppppppiVar36 * 0x18;
        unaff_r10 = (int ******)0x0;
        pppppiVar12 = *ppppppiVar17;
        goto LAB_011e6d94;
      }
    }
LAB_011e694c:
    ppppppiVar17 = (int ******)&DAT_80000000;
LAB_011e6950:
    pcVar20 = (char *)(int ******)0x0;
    local_328 = ppppppiVar17;
    local_324 = local_388;
    local_320 = (int ******)pcVar19;
    if (ppppppiVar36 != (int ******)0x0) {
      local_378 = param_3[1];
      unaff_r10 = ppppppiVar36;
      while( true ) {
        ppppppiVar17 = (int ******)(uint)*(ushort *)((int)unaff_r10 + 0x192);
        ppppppiVar15 = unaff_r10 + 0x43;
        pcVar20 = (char *)0xffffffff;
        iVar7 = (int)ppppppiVar17 * 0xc;
        do {
          if (iVar7 == 0) goto LAB_011e6a0c;
          local_388 = (int ******)ppppppiVar15[2];
          ppppppiVar16 = local_388;
          if (&DAT_00000004 < local_388) {
            ppppppiVar16 = (int ******)&DAT_00000005;
          }
          iVar8 = FUN_016dd50a("anyOf",ppppppiVar15[1],ppppppiVar16);
          if (iVar8 == 0) {
            iVar8 = 5 - (int)local_388;
          }
          iVar7 = iVar7 + -0xc;
          pcVar20 = (char *)((int)pcVar20 + 1);
          ppppppiVar15 = ppppppiVar15 + 3;
        } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
        ppppppiVar17 = (int ******)pcVar20;
        if (0 < iVar8 == iVar8 < 0) break;
LAB_011e6a0c:
        pcVar20 = (char *)ppppppiVar17;
        if (local_378 == 0) goto LAB_011e6a7c;
        local_378 = local_378 + -1;
        unaff_r10 = (int ******)unaff_r10[(int)((int)ppppppiVar17 + 0x66)];
      }
      unaff_r10 = unaff_r10 + (int)pcVar20 * 6;
      if (*(char *)unaff_r10 == '\x04') {
        FUN_0119d4b4(&local_240,param_2,"anyOf",5);
        ppppppiVar36 = (int ******)unaff_r10[3];
        if ((int ******)0xf83e0f < ppppppiVar36) {
          uVar30 = 0;
LAB_011e6a70:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar30,iVar7);
        }
        iVar7 = (int)ppppppiVar36 * 0x84;
        if (iVar7 == 0) {
          ppppppiVar17 = (int ******)&DAT_00000004;
          ppppppiVar36 = (int ******)0x0;
        }
        else {
          ppppppiVar17 = (int ******)thunk_FUN_016d4a50(iVar7);
          if (ppppppiVar17 == (int ******)0x0) {
            uVar30 = 4;
            goto LAB_011e6a70;
          }
        }
        local_2b8 = (int ******)0x0;
        local_2c0 = ppppppiVar36;
        local_2bc = ppppppiVar17;
        if (unaff_r10[3] == (int *****)0x0) {
          local_388 = (int ******)0x0;
          unaff_r10 = ppppppiVar17;
          goto LAB_011e7094;
        }
        local_388 = (int ******)0x0;
        iVar7 = (int)unaff_r10[3] * 0x18;
        iVar8 = 0;
        ppppppiVar36 = (int ******)unaff_r10[2];
        goto LAB_011e6f54;
      }
    }
LAB_011e6a7c:
    ppppppiVar17 = (int ******)&DAT_80000000;
LAB_011e6a88:
    local_318 = ppppppiVar17;
    local_314 = unaff_r10;
    local_310 = local_388;
    if (ppppppiVar36 != (int ******)0x0) {
      local_35c = param_3[1];
      pcVar20 = "oneOf";
      while( true ) {
        unaff_r10 = (int ******)(uint)*(ushort *)((int)ppppppiVar36 + 0x192);
        ppppppiVar17 = ppppppiVar36 + 0x43;
        ppppppiVar15 = (int ******)0xffffffff;
        iVar7 = (int)unaff_r10 * 0xc;
        do {
          if (iVar7 == 0) goto LAB_011e6b34;
          pppppiVar23 = ppppppiVar17[2];
          pppppiVar12 = pppppiVar23;
          if ((int *****)0x4 < pppppiVar23) {
            pppppiVar12 = (int *****)0x5;
          }
          iVar8 = FUN_016dd50a("oneOf",ppppppiVar17[1],pppppiVar12);
          if (iVar8 == 0) {
            iVar8 = 5 - (int)pppppiVar23;
          }
          iVar7 = iVar7 + -0xc;
          ppppppiVar15 = (int ******)((int)ppppppiVar15 + 1);
          ppppppiVar17 = ppppppiVar17 + 3;
        } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
        unaff_r10 = ppppppiVar15;
        if (0 < iVar8 == iVar8 < 0) break;
LAB_011e6b34:
        if (local_35c == 0) goto LAB_011e6bb4;
        local_35c = local_35c + -1;
        ppppppiVar36 = (int ******)ppppppiVar36[(int)((int)unaff_r10 + 0x66)];
      }
      ppppppiVar36 = ppppppiVar36 + (int)ppppppiVar15 * 6;
      if (*(char *)ppppppiVar36 == '\x04') {
        FUN_0119d4b4(&local_240,param_2,"oneOf",5);
        ppppppiVar15 = (int ******)ppppppiVar36[3];
        if ((int ******)0xf83e0f < ppppppiVar15) {
          uVar30 = 0;
LAB_011e6ba0:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar30,ppppppiVar17);
        }
        ppppppiVar17 = (int ******)((int)ppppppiVar15 * 0x84);
        if (ppppppiVar17 == (int ******)0x0) {
          ppppppiVar16 = (int ******)&DAT_00000004;
          ppppppiVar15 = (int ******)0x0;
        }
        else {
          ppppppiVar16 = (int ******)thunk_FUN_016d4a50(ppppppiVar17);
          if (ppppppiVar16 == (int ******)0x0) {
            uVar30 = 4;
            goto LAB_011e6ba0;
          }
        }
        local_2b8 = (int ******)0x0;
        local_2c0 = ppppppiVar15;
        local_2bc = ppppppiVar16;
        if (ppppppiVar36[3] == (int *****)0x0) {
          unaff_r10 = (int ******)0x0;
          pcVar20 = (char *)ppppppiVar16;
          goto LAB_011e726c;
        }
        unaff_r10 = (int ******)0x0;
        iVar7 = (int)ppppppiVar36[3] * 0x18;
        iVar8 = 0;
        pppppiVar12 = ppppppiVar36[2];
        goto LAB_011e7160;
      }
    }
LAB_011e6bb4:
    ppppppiVar36 = (int ******)&DAT_80000000;
LAB_011e6bbc:
    param_1[0xd] = local_358;
    param_1[0xe] = local_354;
    param_1[0xf] = local_350;
    param_1[0x10] = pcStack_34c;
    param_1[0x11] = uStack_348;
    param_1[0x12] = local_340;
    param_1[0x13] = local_33c;
    param_1[0x14] = local_338;
    param_1[0x15] = pcStack_334;
    param_1[0x16] = uStack_330;
    *(undefined1 *)(param_1 + 0x1b) = local_380;
    param_1[0x18] = local_370;
    param_1[0x1a] = iVar24;
    *param_1 = local_37c;
    param_1[1] = local_38c;
    param_1[2] = ppppppiVar25;
    param_1[3] = local_390;
    param_1[4] = local_328;
    param_1[5] = local_324;
    param_1[0x17] = iVar34;
    param_1[0x19] = ppppppiVar26;
    param_1[6] = local_320;
    param_1[7] = local_318;
    param_1[8] = local_314;
    param_1[9] = local_310;
    param_1[10] = ppppppiVar36;
    param_1[0xb] = pcVar20;
    param_1[0xc] = unaff_r10;
  }
  else {
    *param_1 = 2;
    param_1[1] = iVar24;
LAB_011e6780:
    if (ppppppiVar26 != (int ******)0x0) {
      DataMemoryBarrier(0xb);
      do {
        pppppiVar12 = *ppppppiVar26;
        bVar3 = (bool)hasExclusiveAccess(ppppppiVar26);
      } while (!bVar3);
      *ppppppiVar26 = (int *****)((int)pppppiVar12 + -1);
      if (pppppiVar12 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_011e0ca8(&local_32c);
      }
    }
LAB_011e67b4:
    if (local_370 != (char *)0x0) {
      FUN_011e792c(local_370);
      thunk_FUN_016d3fb4(local_370);
    }
LAB_011e67d0:
    if (iVar34 != 0) {
      FUN_011e792c(iVar34);
      thunk_FUN_016d3fb4(iVar34);
    }
LAB_011e67e8:
    if (local_340 != (int ******)0x0) {
      FUN_011e4f30(&local_340);
    }
LAB_011e67fc:
    if (local_358 != (int ******)0x0) {
      FUN_011e4f30(&local_358);
      return;
    }
  }
  return;
}

