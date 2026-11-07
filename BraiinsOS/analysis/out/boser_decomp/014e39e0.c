// FUN_014e39e0 @ 014e39e0 size=3836 calls_out=30 calls_in=1
// strings: description | description | bma_version | bma_version | assets | assets

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_014e39e0(uint *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint ****ppppuVar3;
  uint ****ppppuVar4;
  uint ****ppppuVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint ****extraout_r1;
  uint ****ppppuVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint ****ppppuVar14;
  uint ****unaff_r6;
  undefined4 uVar15;
  uint *puVar16;
  uint ****unaff_r7;
  uint uVar17;
  uint ****ppppuVar18;
  uint *puVar19;
  uint *puVar20;
  bool bVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  uint ****local_800;
  uint ****local_7fc;
  uint ****local_7f8;
  uint ****local_7f4;
  uint ****local_7e8;
  uint ****local_7d8;
  uint ****local_7d4;
  uint ****local_7cc;
  uint ****local_7c4;
  uint ****local_7c0;
  uint ****local_7bc;
  uint ****ppppuStack_7b8;
  uint ****ppppuStack_7b4;
  uint ****local_7b0;
  uint ****local_7ac;
  uint ****ppppuStack_7a8;
  uint ****ppppuStack_7a4;
  uint ****ppppuStack_7a0;
  uint ****ppppuStack_79c;
  uint *local_794;
  uint *local_790;
  uint local_78c;
  uint *local_788;
  undefined4 local_784;
  uint local_780 [4];
  uint ****local_770;
  uint ****ppppuStack_76c;
  uint ****ppppuStack_768;
  uint ****ppppuStack_764;
  undefined4 *local_760;
  undefined4 *local_75c;
  uint local_758;
  undefined4 *local_754;
  int local_750;
  uint ****local_748;
  uint ****local_744;
  undefined1 auStack_740 [552];
  uint ****local_518;
  uint ****ppppuStack_514;
  uint ****ppppuStack_510;
  uint ****ppppuStack_50c;
  uint ****ppppuStack_508;
  uint ****local_504;
  uint ****ppppuStack_500;
  uint ****ppppuStack_4fc;
  uint ****ppppuStack_4f8;
  uint ****ppppuStack_4f4;
  uint ****local_4f0;
  uint ****local_4ec;
  uint ****local_4e8;
  uint ****local_4e4;
  uint ****local_4e0;
  uint ****local_4d8;
  uint ****local_4d4;
  uint ****local_4d0;
  uint ****local_4cc;
  uint ****local_4c8;
  uint ****local_4c4;
  uint ****local_4c0;
  uint ****ppppuStack_4bc;
  uint ****ppppuStack_4b8;
  uint ****ppppuStack_4b4;
  uint ****local_4b0;
  uint ****local_4ac;
  undefined1 auStack_4a8 [552];
  uint ****local_280;
  uint ****local_27c;
  uint ****local_278;
  uint ****ppppuStack_274;
  uint ****ppppuStack_270;
  uint ****ppppuStack_26c;
  uint ****local_268;
  uint ****ppppuStack_264;
  uint ****ppppuStack_260;
  uint ****ppppuStack_25c;
  uint ****local_50;
  uint ****local_4c;
  uint ****local_48;
  uint ****local_44;
  uint ****local_40;
  uint ****local_3c;
  uint ****ppppuStack_38;
  uint ****ppppuStack_34;
  uint ****ppppuStack_30;
  uint ****ppppuStack_2c;
  undefined1 uStack_25;
  
  ppppuVar14 = ppppuStack_7a8;
  uVar11 = *param_1;
  uVar6 = 0x15;
  if ((int)uVar11 < 0) {
    uVar6 = uVar11 ^ 0x80000000;
  }
  if (uVar6 == 0x14) {
    local_78c = param_1[1];
    puVar16 = (uint *)param_1[2];
    puVar20 = puVar16 + param_1[3] * 4;
    local_784 = 0;
    local_790 = puVar16;
    local_794 = puVar16;
    local_788 = puVar20;
    if (param_1[3] == 0) {
LAB_014e3ef0:
      local_4d8 = local_7c0;
      local_4d4 = local_7bc;
      local_4d0 = ppppuStack_7b8;
      local_4cc = ppppuStack_7b4;
      local_4c8 = local_7b0;
      local_4c4 = local_7ac;
      local_4c0 = ppppuStack_7a8;
      ppppuStack_4bc = ppppuStack_7a4;
      ppppuStack_4b8 = ppppuStack_7a0;
      ppppuVar5 = (uint ****)FUN_014dee0c(0,&DAT_01cf9fd4,&DAT_01d064b8);
      local_7f4 = ppppuVar14;
LAB_014e421c:
      FUN_014deb6c(&local_794);
LAB_014e4224:
      local_7cc = (uint ****)&SUB_00000004;
      unaff_r6 = ppppuVar5;
    }
    else {
      puVar19 = puVar16 + 4;
      uVar6 = *puVar16;
      local_790 = puVar19;
      if (uVar6 == 0x80000015) goto LAB_014e3ef0;
      puVar12 = (uint *)((uint)local_780 | 4);
      local_7f4 = (uint ****)puVar16[2];
      uVar17 = puVar16[3];
      *puVar12 = puVar16[1];
      puVar12[1] = (uint)local_7f4;
      puVar12[2] = uVar17;
      local_784 = 1;
      local_780[0] = uVar6;
      FUN_014f4f18(&local_280);
      ppppuVar14 = local_280;
      if (local_280 == (uint ****)0x0) {
        ppppuVar5 = local_27c;
        goto LAB_014e421c;
      }
      puVar12 = (uint *)((uint)&local_280 | 4);
      local_7c0 = (uint ****)*puVar12;
      local_7bc = (uint ****)puVar12[1];
      ppppuStack_7b8 = (uint ****)puVar12[2];
      ppppuStack_7b4 = (uint ****)puVar12[3];
      local_7b0 = (uint ****)puVar12[4];
      local_7ac = (uint ****)puVar12[5];
      ppppuStack_7a8 = (uint ****)puVar12[6];
      ppppuStack_7a4 = (uint ****)puVar12[7];
      ppppuVar18 = (uint ****)puVar12[8];
      puVar7 = (undefined4 *)((uint)&local_50 | 4);
      *puVar7 = local_7c0;
      puVar7[1] = local_7bc;
      puVar7[2] = ppppuStack_7b8;
      puVar7[3] = ppppuStack_7b4;
      puVar7[4] = local_7b0;
      puVar7[5] = local_7ac;
      puVar7[6] = ppppuStack_7a8;
      puVar7[7] = ppppuStack_7a4;
      puVar7[8] = ppppuVar18;
      uVar13 = 1;
      local_50 = local_280;
      ppppuStack_7a0 = ppppuVar18;
      local_4d8 = local_7c0;
      local_4d4 = local_7bc;
      local_4d0 = ppppuStack_7b8;
      local_4cc = ppppuStack_7b4;
      local_4c8 = local_7b0;
      local_4c4 = local_7ac;
      local_4c0 = ppppuStack_7a8;
      ppppuStack_4bc = ppppuStack_7a4;
      ppppuStack_4b8 = ppppuVar18;
      if (puVar19 == puVar20) {
LAB_014e40f4:
        ppppuVar5 = (uint ****)FUN_014dee0c(uVar13,&DAT_01cf9fd4,&DAT_01d064b8);
LAB_014e410c:
        FUN_01961a9c(ppppuVar14,local_4c);
        FUN_01961a9c(local_48,local_44);
        local_7f4 = ppppuVar18;
        goto LAB_014e421c;
      }
      local_790 = puVar16 + 8;
      ppppuVar5 = (uint ****)*puVar19;
      if (ppppuVar5 == (uint ****)0x80000015) goto LAB_014e40f4;
      uVar6 = puVar16[6];
      uVar17 = puVar16[7];
      *puVar12 = puVar16[5];
      puVar12[1] = uVar6;
      puVar12[2] = uVar17;
      local_784 = 2;
      local_280 = ppppuVar5;
      uVar23 = FUN_014ef2c8(&local_280);
      local_800 = (uint ****)((ulonglong)uVar23 >> 0x20);
      if ((int)uVar23 == 1) {
        ppppuVar5 = local_800;
        goto LAB_014e410c;
      }
      uVar22 = FUN_014caeb4(&local_794);
      ppppuVar10 = (uint ****)(uVar22 >> 0x20);
      ppppuVar5 = ppppuVar10;
      if ((uVar22 & 1) != 0) goto LAB_014e410c;
      if (ppppuVar10 == (uint ****)0x0) {
        uVar13 = 2;
        goto LAB_014e40f4;
      }
      FUN_014ca8dc(&local_280,&local_794);
      local_7f4 = local_278;
      ppppuVar4 = local_27c;
      ppppuVar3 = local_280;
      if (local_280 == (uint ****)&DAT_80000001) {
        ppppuVar5 = local_27c;
        goto LAB_014e410c;
      }
      local_7d4 = local_280;
      if (local_280 == (uint ****)&DAT_80000000) {
        uVar13 = 3;
        goto LAB_014e40f4;
      }
      ppppuVar18 = (uint ****)&local_280;
      FUN_014caf94(ppppuVar18,&local_794);
      unaff_r6 = local_27c;
      local_7cc = local_280;
      ppppuVar5 = local_27c;
      local_7d8 = ppppuVar10;
      if (local_280 == (uint ****)&DAT_00000005) {
LAB_014e44e0:
        FUN_019bb7e0(ppppuVar3,ppppuVar4);
        goto LAB_014e410c;
      }
      FUN_01bed4e2(&local_4b0,&local_278,0x228);
      if (local_7cc == (uint ****)&SUB_00000004) {
        ppppuVar5 = (uint ****)FUN_014dee0c(4,&DAT_01cf9fd4,&DAT_01d064b8);
        goto LAB_014e44e0;
      }
      FUN_01bed4e2(&local_280,&local_4b0,0x228);
      local_7c0 = local_50;
      local_7bc = local_4c;
      ppppuStack_7b8 = local_48;
      ppppuStack_7b4 = local_44;
      local_7b0 = local_40;
      local_7ac = local_3c;
      ppppuStack_7a8 = ppppuStack_38;
      ppppuStack_7a4 = ppppuStack_34;
      ppppuStack_7a0 = ppppuStack_30;
      ppppuStack_79c = ppppuStack_2c;
      local_744 = unaff_r6;
      local_748 = local_7cc;
      FUN_01bed4e2(auStack_740,&local_280,0x228);
      local_518 = local_7c0;
      ppppuStack_514 = local_7bc;
      ppppuStack_510 = ppppuStack_7b8;
      ppppuStack_50c = ppppuStack_7b4;
      ppppuStack_508 = local_7b0;
      local_504 = local_7ac;
      ppppuStack_500 = ppppuStack_7a8;
      ppppuStack_4fc = ppppuStack_7a4;
      ppppuStack_4f8 = ppppuStack_7a0;
      ppppuStack_4f4 = ppppuStack_79c;
      local_4e8 = local_7f4;
      local_4ec = ppppuVar4;
      local_4f0 = ppppuVar3;
      local_4e4 = ppppuVar10;
      local_4e0 = local_800;
      ppppuVar14 = (uint ****)FUN_014ca838(&local_794);
      if (ppppuVar14 != (uint ****)0x0) {
        FUN_014c9eb8(&local_748);
        local_7cc = (uint ****)&SUB_00000004;
        unaff_r6 = ppppuVar14;
      }
      local_7e8 = ppppuVar4;
    }
LAB_014e422c:
    if ((0x7fffffff < uVar11) && ((undefined1 *)(uVar11 & 0xfffffffe) != &DAT_80000014)) {
      FUN_014c81b0(param_1);
    }
    uVar13 = 1;
    if (local_7cc == (uint ****)&SUB_00000004) {
      ppppuVar14 = unaff_r6;
    }
    else {
      local_748 = local_7cc;
      local_744 = unaff_r6;
      FUN_01bed4e2(auStack_740,&local_280,0x228);
      local_518 = local_7c0;
      ppppuStack_514 = local_7bc;
      ppppuStack_510 = ppppuStack_7b8;
      ppppuStack_50c = ppppuStack_7b4;
      ppppuStack_508 = local_7b0;
      local_504 = local_7ac;
      ppppuStack_500 = ppppuStack_7a8;
      ppppuStack_4fc = ppppuStack_7a4;
      ppppuStack_4f8 = ppppuStack_7a0;
      ppppuStack_4f4 = ppppuStack_79c;
      local_4e0 = local_800;
      local_4e4 = local_7d8;
      local_4ec = local_7e8;
      local_4f0 = local_7d4;
      local_4e8 = local_7f4;
      ppppuVar14 = (uint ****)thunk_FUN_01be5118(0x270);
      if (ppppuVar14 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x270);
      }
      *ppppuVar14 = (uint ***)local_7cc;
      ppppuVar14[1] = (uint ***)unaff_r6;
      FUN_01bed4e2(ppppuVar14 + 2,&local_280,0x228);
      ppppuVar14[0x8c] = (uint ***)local_7c0;
      ppppuVar14[0x8d] = (uint ***)local_7bc;
      ppppuVar14[0x8e] = (uint ***)ppppuStack_7b8;
      ppppuVar14[0x8f] = (uint ***)ppppuStack_7b4;
      ppppuVar14[0x90] = (uint ***)local_7b0;
      ppppuVar14[0x91] = (uint ***)local_7ac;
      ppppuVar14[0x92] = (uint ***)ppppuStack_7a8;
      ppppuVar14[0x93] = (uint ***)ppppuStack_7a4;
      ppppuVar14[0x94] = (uint ***)ppppuStack_7a0;
      ppppuVar14[0x95] = (uint ***)ppppuStack_79c;
      ppppuVar14[0x98] = (uint ***)local_7f4;
      uVar13 = 0;
      ppppuVar14[0x96] = (uint ***)local_7d4;
      ppppuVar14[0x97] = (uint ***)local_7e8;
      ppppuVar14[0x99] = (uint ***)local_7d8;
      ppppuVar14[0x9a] = (uint ***)local_800;
    }
LAB_014e4334:
    return CONCAT44(ppppuVar14,uVar13);
  }
  if (uVar6 != 0x15) {
    ppppuVar14 = (uint ****)FUN_014c8278(param_1,&uStack_25,&DAT_01cf9d04);
    uVar13 = 1;
    goto LAB_014e4334;
  }
  local_770 = (uint ****)0x80000015;
  puVar7 = (undefined4 *)((uint)&local_7c0 | 4);
  puVar8 = (undefined4 *)((uint)&local_50 | 4);
  puVar9 = (undefined4 *)((uint)&local_770 | 4);
  local_7d4 = (uint ****)&DAT_80000000;
  local_7c4 = (uint ****)0x0;
  local_7fc = (uint ****)&SUB_00000004;
  local_760 = (undefined4 *)param_1[1];
  local_7f8 = local_4d4;
  local_754 = local_760 + param_1[2] * 8;
  local_750 = 0;
  local_4d8 = (uint ****)0x0;
  local_7cc = (uint ****)&SUB_00000004;
  local_4b0 = (uint ****)0x4;
  local_7d8 = (uint ****)0x0;
  bVar1 = false;
  local_75c = local_760;
  local_758 = uVar11;
LAB_014e3acc:
  puVar2 = local_75c;
  bVar21 = local_75c == local_754;
  if (!bVar21) {
    unaff_r7 = (uint ****)*local_75c;
    local_75c = local_75c + 8;
  }
  if (bVar21 || unaff_r7 == (uint ****)0x80000015) goto switchD_014e3c90_caseD_5;
  local_750 = local_750 + 1;
  uVar13 = puVar2[2];
  uVar15 = puVar2[3];
  *puVar8 = puVar2[1];
  puVar8[1] = uVar13;
  puVar8[2] = uVar15;
  local_280 = (uint ****)puVar2[4];
  local_27c = (uint ****)puVar2[5];
  local_278 = (uint ****)puVar2[6];
  ppppuStack_274 = (uint ****)puVar2[7];
  local_50 = unaff_r7;
  if (local_770 != (uint ****)0x80000015) {
    FUN_014c81b0(&local_770);
  }
  ppppuVar5 = local_48;
  ppppuVar14 = local_4c;
  local_770 = local_280;
  ppppuStack_76c = local_27c;
  ppppuStack_768 = local_278;
  ppppuStack_764 = ppppuStack_274;
  uVar6 = 0x15;
  if ((int)unaff_r7 < 0) {
    uVar6 = (uint)unaff_r7 ^ 0x80000000;
  }
  ppppuVar18 = local_44;
  switch(uVar6) {
  case 1:
    ppppuVar5 = (uint ****)((uint)local_4c & 0xff);
    ppppuVar18 = (uint ****)0x0;
  case 4:
    FUN_014e87cc(&local_280,&switchD_014e3b68::switchdataD_014e3b6c,ppppuVar5,ppppuVar18);
    goto LAB_014e3c50;
  default:
    local_27c = (uint ****)FUN_014c8278(&local_50,&uStack_25,&DAT_01cf9e94);
    local_280 = (uint ****)CONCAT31(local_280._1_3_,1);
    goto LAB_014e3c68;
  case 0xc:
    FUN_014eea6c(&local_280,local_48,local_44);
    goto LAB_014e3c40;
  case 0xd:
    FUN_014eea6c(&local_280,local_4c,local_48);
    break;
  case 0xe:
    FUN_014e7104(&local_280,local_48,local_44);
LAB_014e3c40:
    FUN_019bb7e0(ppppuVar14,ppppuVar5);
LAB_014e3c50:
    if ((uVar6 | 2) != 0xe) break;
    goto LAB_014e3c68;
  case 0xf:
    FUN_014e7104(&local_280,local_4c,local_48);
  }
  FUN_014c81b0(&local_50);
LAB_014e3c68:
  ppppuVar14 = local_770;
  if ((char)local_280 != '\0') {
    ppppuVar14 = (uint ****)&DAT_00000001;
    local_4b0 = local_7fc;
    bVar1 = true;
    local_4d4 = local_7f8;
    ppppuVar5 = local_27c;
    local_4d8 = local_7c4;
    local_4ac = unaff_r6;
    goto LAB_014e4150;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uint)local_280 >> 8 & 0xff) {
  case 0:
    if (local_7c4 == (uint ****)0x0) {
      local_770 = (uint ****)0x80000015;
      if (ppppuVar14 == (uint ****)0x80000015) {
        local_4b0 = local_7fc;
        local_4d4 = local_7f8;
        local_4d8 = (uint ****)0x0;
        local_4ac = unaff_r6;
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                     ,0x2c,&DAT_01cfa02c);
      }
      uVar13 = puVar9[1];
      uVar15 = puVar9[2];
      *puVar7 = *puVar9;
      puVar7[1] = uVar13;
      puVar7[2] = uVar15;
      local_7c0 = ppppuVar14;
      FUN_014f4f18(&local_280,&local_7c0);
      if (local_280 != (uint ****)0x0) {
        local_50 = local_278;
        local_4c = ppppuStack_274;
        local_48 = ppppuStack_270;
        local_44 = ppppuStack_26c;
        local_40 = local_268;
        local_3c = ppppuStack_264;
        ppppuStack_38 = ppppuStack_260;
        ppppuStack_34 = ppppuStack_25c;
        local_4d0 = local_278;
        local_4cc = ppppuStack_274;
        local_4c8 = ppppuStack_270;
        local_4c4 = ppppuStack_26c;
        local_4c0 = local_268;
        ppppuStack_4bc = ppppuStack_264;
        ppppuStack_4b8 = ppppuStack_260;
        ppppuStack_4b4 = ppppuStack_25c;
        local_7f8 = local_27c;
        local_7c4 = local_280;
        goto LAB_014e3e68;
      }
      local_4d8 = (uint ****)0x0;
LAB_014e45a8:
      local_4b0 = local_7fc;
      local_4d4 = local_7f8;
      ppppuVar5 = local_27c;
      local_4ac = unaff_r6;
    }
    else {
      local_27c = (uint ****)&DAT_0132b6a0;
      local_280 = (uint ****)&local_50;
      local_4b0 = local_7fc;
      local_4d8 = local_7c4;
      local_4d4 = local_7f8;
      local_4c = (uint ****)&DAT_0000000b;
      local_50 = (uint ****)0x4a54f9;
      local_4ac = unaff_r6;
      ppppuVar5 = (uint ****)FUN_019676ac(&DAT_005ab34f,&local_280);
    }
    break;
  case 1:
    if (!bVar1) {
      uVar22 = FUN_014caf34(&local_770);
      ppppuVar5 = (uint ****)(uVar22 >> 0x20);
      local_800 = ppppuVar5;
      if ((uVar22 & 1) == 0) {
        bVar1 = true;
        goto LAB_014e3e68;
      }
      ppppuVar14 = (uint ****)&DAT_00000001;
      local_4b0 = local_7fc;
      local_4d8 = local_7c4;
      bVar1 = true;
      local_4d4 = local_7f8;
      local_4ac = unaff_r6;
      goto LAB_014e4150;
    }
    local_4b0 = local_7fc;
    local_4d4 = local_7f8;
    local_27c = (uint ****)&DAT_0132b6a0;
    local_280 = (uint ****)&local_50;
    local_4d8 = local_7c4;
    local_4c = (uint ****)&DAT_00000006;
    local_50 = (uint ****)&DAT_004ba595;
    local_4ac = unaff_r6;
    ppppuVar5 = (uint ****)FUN_019676ac(&DAT_005ab34f,&local_280);
    break;
  case 2:
    if (local_7d8 != (uint ****)0x0) {
      local_4b0 = local_7fc;
      local_4d4 = local_7f8;
      local_27c = (uint ****)&DAT_0132b6a0;
      local_280 = (uint ****)&local_50;
      local_4d8 = local_7c4;
      local_4c = (uint ****)&DAT_0000000c;
      local_50 = (uint ****)0x4a5613;
      local_4ac = unaff_r6;
      ppppuVar5 = (uint ****)FUN_019676ac(&DAT_005ab34f,&local_280);
      break;
    }
    uVar22 = FUN_014cacb4(&local_770);
    ppppuVar5 = (uint ****)(uVar22 >> 0x20);
    local_7d8 = ppppuVar5;
    if ((uVar22 & 1) == 0) goto LAB_014e3e68;
    ppppuVar14 = (uint ****)&DAT_00000001;
    local_4b0 = local_7fc;
    local_4d8 = local_7c4;
    bVar1 = true;
    local_4d4 = local_7f8;
    local_4ac = unaff_r6;
LAB_014e4150:
    if (local_7cc != (uint ****)&SUB_00000004) {
LAB_014e415c:
      local_7cc = (uint ****)FUN_014c9f0c(&local_4b0);
    }
LAB_014e4164:
    if (bVar1) {
      local_7cc = local_7d4;
    }
    if (bVar1 && local_7cc != (uint ****)&DAT_80000000) {
      FUN_019bb7e0(local_7d4,local_7e8);
    }
    if (((uint)ppppuVar14 & (uint)(local_4d8 != (uint ****)0x0)) != 0) {
      FUN_01961a9c(local_4d8,local_4d4);
      FUN_01961a9c(local_4d0,local_4cc);
    }
    FUN_014c9c60(&local_770);
    local_7f4 = ppppuVar14;
    goto LAB_014e4224;
  case 3:
    if (local_7d4 == (uint ****)&DAT_80000000) {
      FUN_014cad14(&local_280,&local_770);
      local_7d4 = local_280;
      if (local_280 == (uint ****)&DAT_80000000) {
        local_4d8 = local_7c4;
        local_7d4 = (uint ****)&DAT_80000000;
        goto LAB_014e45a8;
      }
      local_7f4 = local_278;
      local_7e8 = local_27c;
      goto LAB_014e3e68;
    }
    local_4b0 = local_7fc;
    local_4d4 = local_7f8;
    local_27c = (uint ****)&DAT_0132b6a0;
    local_280 = (uint ****)&local_50;
    local_4d8 = local_7c4;
    local_4c = (uint ****)&DAT_0000000b;
    local_50 = (uint ****)0x520c30;
    local_4ac = unaff_r6;
    ppppuVar5 = (uint ****)FUN_019676ac(&DAT_005ab34f,&local_280);
    break;
  case 4:
    if (local_7cc != (uint ****)&SUB_00000004) {
      local_4b0 = local_7fc;
      local_4d4 = local_7f8;
      local_27c = (uint ****)&DAT_0132b6a0;
      local_280 = (uint ****)&local_50;
      local_4d8 = local_7c4;
      local_4c = (uint ****)&DAT_00000006;
      local_50 = (uint ****)0x4a561f;
      local_4ac = unaff_r6;
      ppppuVar5 = (uint ****)FUN_019676ac(&DAT_005ab34f,&local_280);
      ppppuVar14 = (uint ****)&DAT_00000001;
      bVar1 = true;
      goto LAB_014e415c;
    }
    local_770 = (uint ****)0x80000015;
    if (ppppuVar14 == (uint ****)0x80000015) {
      local_4b0 = local_7fc;
      local_4d4 = local_7f8;
      local_4d8 = local_7c4;
      local_4ac = unaff_r6;
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                   ,0x2c,&DAT_01cfa02c);
    }
    uVar13 = puVar9[1];
    uVar15 = puVar9[2];
    *puVar8 = *puVar9;
    puVar8[1] = uVar13;
    puVar8[2] = uVar15;
    local_50 = ppppuVar14;
    FUN_014e887c(&local_280,&local_50);
    unaff_r6 = local_27c;
    local_7cc = local_280;
    if (local_280 == (uint ****)&SUB_00000004) {
      ppppuVar14 = (uint ****)&DAT_00000001;
      local_4b0 = local_7fc;
      local_4d8 = local_7c4;
      bVar1 = true;
      local_4d4 = local_7f8;
      local_7cc = local_7f8;
      ppppuVar5 = local_27c;
      goto LAB_014e4164;
    }
    FUN_01bed4e2(auStack_4a8,&local_278,0x228);
    local_7fc = local_7cc;
LAB_014e3e68:
    unaff_r7 = local_7c4;
    goto LAB_014e3acc;
  case 5:
switchD_014e3c90_caseD_5:
    local_4b0 = local_7fc;
    local_4d4 = local_7f8;
    ppppuVar14 = (uint ****)(uint)(local_7c4 == (uint ****)0x0);
    local_4d8 = local_7c4;
    if (local_7c4 == (uint ****)0x0) {
      local_27c = (uint ****)&DAT_0132b6a0;
      local_280 = (uint ****)&local_7c0;
      local_7bc = (uint ****)&DAT_0000000b;
      local_7c0 = (uint ****)0x4a54f9;
      local_4ac = unaff_r6;
      ppppuVar5 = (uint ****)FUN_019676ac(&DAT_0057cd64,&local_280);
      bVar1 = true;
      goto LAB_014e4150;
    }
    local_50 = local_7c4;
    local_4c = local_7f8;
    local_48 = local_4d0;
    local_44 = local_4cc;
    local_40 = local_4c8;
    local_3c = local_4c4;
    ppppuStack_38 = local_4c0;
    ppppuStack_34 = ppppuStack_4bc;
    ppppuStack_30 = ppppuStack_4b8;
    ppppuStack_2c = ppppuStack_4b4;
    local_4ac = unaff_r6;
    if (bVar1) {
LAB_014e3f9c:
      if (local_7d8 == (uint ****)0x0) {
        FUN_014dbcc0();
        ppppuVar5 = extraout_r1;
      }
      else {
        if (local_7d4 != (uint ****)&DAT_80000000) {
          if (local_7cc == (uint ****)&SUB_00000004) {
            local_27c = (uint ****)&DAT_0132b6a0;
            local_280 = (uint ****)&local_7c0;
            local_7bc = (uint ****)&DAT_00000006;
            local_7c0 = (uint ****)0x4a561f;
            ppppuVar5 = (uint ****)FUN_019676ac(&DAT_0057cd64,&local_280);
            FUN_019bb7e0(local_7d4,local_7e8);
            bVar1 = false;
            goto LAB_014e4134;
          }
          FUN_01bed4e2(&local_280,auStack_4a8,0x228);
          local_7c0 = local_4d8;
          local_7bc = local_4d4;
          ppppuStack_7b8 = local_4d0;
          ppppuStack_7b4 = local_4cc;
          local_7b0 = local_4c8;
          local_7ac = local_4c4;
          ppppuStack_7a8 = local_4c0;
          ppppuStack_7a4 = ppppuStack_4bc;
          ppppuStack_7a0 = ppppuStack_4b8;
          ppppuStack_79c = ppppuStack_4b4;
          local_748 = local_7cc;
          local_744 = unaff_r6;
          FUN_01bed4e2(auStack_740,&local_280,0x228);
          local_518 = local_7c0;
          ppppuStack_514 = local_7bc;
          ppppuStack_510 = ppppuStack_7b8;
          ppppuStack_50c = ppppuStack_7b4;
          ppppuStack_508 = local_7b0;
          local_504 = local_7ac;
          ppppuStack_500 = ppppuStack_7a8;
          ppppuStack_4fc = ppppuStack_7a4;
          ppppuStack_4f8 = ppppuStack_7a0;
          ppppuStack_4f4 = ppppuStack_79c;
          local_4e0 = local_800;
          local_4ec = local_7e8;
          local_4e4 = local_7d8;
          local_4e8 = local_7f4;
          local_4f0 = local_7d4;
          ppppuVar14 = (uint ****)FUN_014c9cac(&local_770);
          if (ppppuVar14 != (uint ****)0x0) {
            FUN_014c9eb8(&local_748);
            local_7cc = (uint ****)&SUB_00000004;
            unaff_r6 = ppppuVar14;
          }
          goto LAB_014e422c;
        }
        local_27c = (uint ****)&DAT_0132b6a0;
        local_280 = (uint ****)&local_7c0;
        local_7bc = (uint ****)&DAT_0000000b;
        local_7c0 = (uint ****)0x520c30;
        ppppuVar5 = (uint ****)FUN_019676ac(&DAT_0057cd64,&local_280);
      }
      bVar1 = true;
    }
    else {
      uVar22 = FUN_014ef270();
      ppppuVar5 = (uint ****)(uVar22 >> 0x20);
      bVar1 = true;
      if ((uVar22 & 1) == 0) {
        local_800 = ppppuVar5;
        goto LAB_014e3f9c;
      }
    }
LAB_014e4134:
    FUN_01961a9c(local_50,local_4c);
    FUN_01961a9c(local_48,local_44);
    goto LAB_014e4150;
  }
  bVar1 = true;
  ppppuVar14 = (uint ****)&DAT_00000001;
  goto LAB_014e4150;
}

