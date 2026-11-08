// FUN_018d9fec @ 018d9fec size=2596 calls_out=20 calls_in=1
// strings: 

void FUN_018d9fec(undefined2 *param_1,int param_2,int param_3,short *param_4,int param_5,int param_6
                 )

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  short sVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  short *psVar12;
  undefined4 uVar13;
  undefined *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *******pppppppuVar17;
  short *psVar18;
  undefined4 uVar19;
  undefined4 ******ppppppuVar20;
  int iVar21;
  undefined4 *******pppppppuVar22;
  undefined4 ******ppppppuVar23;
  undefined4 *******local_2c8;
  undefined4 *puStack_2c4;
  undefined4 *******pppppppuStack_2c0;
  undefined4 *******local_2bc;
  short *local_2b8 [17];
  undefined4 *****pppppuStack_274;
  undefined4 uStack_270;
  undefined *puStack_26c;
  undefined4 uStack_268;
  undefined *puStack_264;
  undefined4 uStack_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 ******local_240;
  undefined4 *local_23c;
  undefined4 ******local_238;
  undefined4 local_234;
  undefined *local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [12];
  undefined2 local_1c4;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 *******pppppppuStack_b8;
  undefined4 *puStack_b4;
  undefined4 *******pppppppuStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  short *local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 *******local_30;
  undefined4 *local_2c;
  undefined4 *******local_28;
  
  local_238 = (undefined4 ******)0x0;
  local_23c = (undefined4 *)0x1;
  puVar6 = (undefined4 *)(param_5 + 0x34);
  local_240 = (undefined4 ******)0x0;
  FUN_01ac6d2c(&local_240,param_5 + 0x14);
  puVar9 = local_23c;
  ppppppuVar23 = local_240;
  if (local_238 != (undefined4 ******)0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(0x20,local_238,&DAT_01d22454);
  }
  FUN_01bed4e2(param_2 + 0x168,local_23c,0x20);
  FUN_0134bd64(ppppppuVar23,puVar9);
  if ((param_6 != 0) &&
     (*(int *)(param_2 + 0x180) == 0x4e574f44 && *(int *)(param_2 + 0x184) == 0x1445247)) {
    local_1c4 = 4;
    local_240 = (undefined4 ******)0x80000000;
    local_23c = (undefined4 *)0xd0001;
    FUN_018e077c(param_3,&local_240,*(char *)(param_3 + 0x28) == '\x02');
    *param_1 = 8;
    *(undefined1 *)(param_3 + 0xb1) = 1;
    goto LAB_018da0ec;
  }
  iVar7 = *(int *)(param_5 + 8);
  if (iVar7 == 0) {
    bVar2 = false;
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  else {
    psVar18 = *(short **)(param_5 + 4);
    iVar21 = iVar7 * 0x14;
    psVar12 = psVar18;
    iVar15 = iVar21;
    do {
      iVar15 = iVar15 + -0x14;
      sVar4 = FUN_018a82b8(psVar12);
      if (sVar4 == 0x13) break;
      psVar12 = psVar12 + 10;
    } while (iVar15 != 0);
    *(bool *)(param_2 + 0x1a0) = sVar4 == 0x13;
    psVar12 = psVar18;
    iVar15 = iVar21;
    do {
      sVar4 = FUN_018a82b8(psVar12);
      if (sVar4 == 0x14) {
        bVar2 = true;
        if (3 < DAT_01d51b00) {
          local_234 = 0x23;
          local_23c = (undefined4 *)0x23;
          local_230 = &DAT_01d230a8;
          local_238 = (undefined4 ******)&DAT_00520c7a;
          local_240 = (undefined4 ******)&DAT_00520c7a;
          FUN_0193b350(&DAT_00520c63,0x2f,4,&local_240);
        }
        goto LAB_018da264;
      }
      psVar12 = psVar12 + 10;
      iVar15 = iVar15 + -0x14;
    } while (iVar15 != 0);
    bVar2 = false;
LAB_018da264:
    if (iVar7 != 0) {
      psVar12 = psVar18;
      iVar15 = iVar21;
      do {
        sVar4 = FUN_018a82b8(psVar12);
        if (sVar4 == 5) {
          uVar3 = 1;
          if (3 < DAT_01d51b00) {
            local_234 = 0x23;
            local_23c = (undefined4 *)0x23;
            local_230 = &DAT_01d230b8;
            local_238 = (undefined4 ******)&DAT_00520c7a;
            local_240 = (undefined4 ******)&DAT_00520c7a;
            FUN_0193b350(&DAT_00520c9d,0x3f,4,&local_240);
          }
          goto joined_r0x018da304;
        }
        psVar12 = psVar12 + 10;
        iVar15 = iVar15 + -0x14;
      } while (iVar15 != 0);
      uVar3 = 0;
joined_r0x018da304:
      do {
        if (iVar7 == 0) goto LAB_018da3ec;
        sVar4 = FUN_018a82b8(psVar18);
        if (sVar4 == 0x11) {
          if (*psVar18 == 9) {
            iVar7 = *(int *)(psVar18 + 4);
            pppppppuVar22 = *(undefined4 ********)(psVar18 + 6);
            if (3 < DAT_01d51b00) {
              local_230 = &DAT_01d230c8;
              local_2c = (undefined4 *)&LAB_01a6a304;
              local_30 = &local_2bc;
              local_234 = 0x23;
              local_238 = (undefined4 ******)&DAT_00520c7a;
              local_23c = (undefined4 *)0x23;
              local_240 = (undefined4 ******)&DAT_00520c7a;
              local_2bc = pppppppuVar22;
              FUN_0193b350(&DAT_00595931,&local_30,4,&local_240);
            }
            if (pppppppuVar22 == (undefined4 *******)0x0) goto LAB_018da3d8;
            iVar21 = (int)pppppppuVar22 * 0xc;
            iVar15 = iVar7;
            goto LAB_018da3bc;
          }
          goto LAB_018da3ec;
        }
        psVar18 = psVar18 + 10;
        iVar21 = iVar21 + -0x14;
        iVar7 = iVar21;
      } while( true );
    }
  }
  uVar3 = 0;
LAB_018da3ec:
  local_2c8 = (undefined4 *******)&DAT_80000000;
  goto LAB_018da3f4;
  while( true ) {
    piVar5 = (int *)(iVar15 + 8);
    iVar21 = iVar21 + -0xc;
    iVar15 = iVar15 + 0xc;
    if (*piVar5 == 0) break;
LAB_018da3bc:
    if (iVar21 == 0) {
      iVar21 = (int)pppppppuVar22 * 0xc;
      uVar8 = 0;
      if (pppppppuVar22 < (undefined4 *******)0xaaaaaab) {
        if (iVar21 == 0) {
          local_2c = (undefined4 *)&SUB_00000004;
          local_30 = (undefined4 *******)0x0;
          goto LAB_018da9c8;
        }
        uVar8 = 4;
        puVar9 = (undefined4 *)FUN_01298504(iVar21,4);
        if (puVar9 != (undefined4 *)0x0) {
          local_30 = pppppppuVar22;
          local_2c = puVar9;
          if (pppppppuVar22 == (undefined4 *******)0x0) goto LAB_018da9c8;
          pppppppuVar17 = (undefined4 *******)0x0;
          goto LAB_018da7d4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,iVar21);
    }
  }
LAB_018da3d8:
  *param_1 = 0x1908;
LAB_018da0ec:
  piVar5 = *(int **)(param_2 + 0x19c);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar7 + -1;
  goto LAB_018da110;
  while( true ) {
    FUN_015e8ad4(&local_240,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
    pppppppuVar17 = (undefined4 *******)((int)pppppppuVar17 + 1);
    iVar21 = iVar21 + -0xc;
    iVar7 = iVar7 + 0xc;
    *puVar9 = local_240;
    puVar9[1] = local_23c;
    puVar9[2] = local_238;
    puVar9 = puVar9 + 3;
    if (pppppppuVar22 == pppppppuVar17) break;
LAB_018da7d4:
    if (iVar21 == 0) break;
  }
LAB_018da9c8:
  local_2c8 = local_30;
  puStack_2c4 = local_2c;
  pppppppuStack_2c0 = pppppppuVar22;
  local_28 = pppppppuVar22;
LAB_018da3f4:
  if ((*(int *)(param_2 + 8) == -0x80000000) ||
     (iVar7 = FUN_018b5ef4(param_2 + 0x34,puVar6), iVar7 == 0)) {
    uVar10 = *(undefined4 *)(param_2 + 0x19c);
    FUN_01bed4e2(&local_240,param_2,0x60);
    local_90 = *puVar6;
    uStack_8c = *(undefined4 *)(param_5 + 0x38);
    uStack_88 = *(undefined4 *)(param_5 + 0x3c);
    uStack_84 = *(undefined4 *)(param_5 + 0x40);
    local_80 = *(undefined4 *)(param_5 + 0x44);
    uStack_7c = *(undefined4 *)(param_5 + 0x48);
    uStack_78 = *(undefined4 *)(param_5 + 0x4c);
    uStack_74 = *(undefined4 *)(param_5 + 0x50);
    uStack_70 = *(undefined4 *)(param_5 + 0x54);
    local_ac = *(undefined4 *)(param_2 + 0x188);
    uStack_a8 = *(undefined4 *)(param_2 + 0x18c);
    uStack_a4 = *(undefined4 *)(param_2 + 400);
    uStack_a0 = *(undefined4 *)(param_2 + 0x194);
    uStack_9c = *(undefined4 *)(param_2 + 0x198);
    local_f8 = *(undefined4 *)(param_2 + 0x148);
    uStack_f4 = *(undefined4 *)(param_2 + 0x14c);
    uStack_f0 = *(undefined4 *)(param_2 + 0x150);
    uStack_ec = *(undefined4 *)(param_2 + 0x154);
    local_e8 = *(undefined4 *)(param_2 + 0x158);
    local_e4 = *(undefined4 *)(param_2 + 0x15c);
    uStack_e0 = *(undefined4 *)(param_2 + 0x160);
    uStack_dc = *(undefined4 *)(param_2 + 0x164);
    uStack_d8 = *(undefined4 *)(param_2 + 0x168);
    local_d4 = *(undefined4 *)(param_2 + 0x16c);
    local_d0 = *(undefined4 *)(param_2 + 0x170);
    uStack_cc = *(undefined4 *)(param_2 + 0x174);
    uStack_c8 = *(undefined4 *)(param_2 + 0x178);
    uStack_c4 = *(undefined4 *)(param_2 + 0x17c);
    uStack_c0 = *(undefined4 *)(param_2 + 0x180);
    uStack_bc = *(undefined4 *)(param_2 + 0x184);
    uVar1 = *(undefined1 *)(param_2 + 0x1a0);
    FUN_01bed4e2(auStack_1e0,param_2 + 0x60,0xe8);
    pppppppuStack_b8 = local_2c8;
    puStack_b4 = puStack_2c4;
    pppppppuStack_b0 = pppppppuStack_2c0;
    local_6c = CONCAT31(CONCAT21(local_6c._2_2_,uVar3),uVar1);
    uVar8 = local_6c;
    local_6c._0_3_ = CONCAT12(bVar2,(short)uVar8);
    local_98 = uVar10;
    local_94 = param_4;
    iVar7 = thunk_FUN_01be5118(0x1d8);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x1d8);
    }
    FUN_01bed4e2(iVar7,&local_240,0x1d8);
    *(int *)(param_1 + 2) = iVar7;
    *(undefined **)(param_1 + 4) = &DAT_01d23118;
    *(undefined1 *)param_1 = 0x14;
  }
  else {
    if (3 < DAT_01d51b00) {
      local_234 = 0x23;
      local_23c = (undefined4 *)0x23;
      local_230 = &DAT_01d230d8;
      local_238 = (undefined4 ******)&DAT_00520c7a;
      local_240 = (undefined4 ******)&DAT_00520c7a;
      FUN_0193b350(&DAT_00520cbc,0x2f,4,&local_240);
    }
    uVar3 = 0x2a;
    sVar4 = **(short **)(param_2 + 0x30);
    if ((sVar4 == *param_4) &&
       (((sVar4 != 0x178 || ((*(short **)(param_2 + 0x30))[1] == param_4[1])) &&
        (uVar3 = 0x2b, *(char *)(param_2 + 0x58) == *(char *)(param_2 + 0x1a0))))) {
      iVar7 = *(int *)(param_2 + 0x18);
      iVar21 = *(int *)(param_2 + 0x1c);
      FUN_01bed93e(&local_240,0,0x30);
      if (iVar21 != 0x30) {
                    /* WARNING: Subroutine does not return */
        FUN_013070f0(0x30,iVar21,&DAT_01d22fb8);
      }
      FUN_01bed4e2(&local_240,iVar7,0x30);
      puVar9 = (undefined4 *)((uint)local_2b8 | 4);
      uVar8 = *(undefined4 *)(param_2 + 0x14c);
      uVar10 = *(undefined4 *)(param_2 + 0x150);
      uVar13 = *(undefined4 *)(param_2 + 0x154);
      uVar16 = *(undefined4 *)(param_2 + 0x158);
      *puVar9 = *(undefined4 *)(param_2 + 0x148);
      puVar9[1] = uVar8;
      puVar9[2] = uVar10;
      puVar9[3] = uVar13;
      puVar9[4] = uVar16;
      uVar8 = *(undefined4 *)(param_2 + 0x160);
      uVar10 = *(undefined4 *)(param_2 + 0x164);
      uVar13 = *(undefined4 *)(param_2 + 0x168);
      uVar16 = *(undefined4 *)(param_2 + 0x16c);
      puVar9[5] = *(undefined4 *)(param_2 + 0x15c);
      puVar9[6] = uVar8;
      puVar9[7] = uVar10;
      puVar9[8] = uVar13;
      puVar9[9] = uVar16;
      uVar8 = *(undefined4 *)(param_2 + 0x174);
      uVar10 = *(undefined4 *)(param_2 + 0x178);
      uVar13 = *(undefined4 *)(param_2 + 0x17c);
      uVar16 = *(undefined4 *)(param_2 + 0x180);
      uVar19 = *(undefined4 *)(param_2 + 0x184);
      puVar9[10] = *(undefined4 *)(param_2 + 0x170);
      puVar9[0xb] = uVar8;
      puVar9[0xc] = uVar10;
      puVar9[0xd] = uVar13;
      puVar9[0xe] = uVar16;
      puVar9[0xf] = uVar19;
      pppppuStack_274 = local_240;
      uStack_270 = local_23c;
      puStack_26c = (undefined *)local_238;
      uStack_268 = local_234;
      puStack_264 = local_230;
      uStack_260 = uStack_22c;
      local_25c = local_228;
      uStack_258 = uStack_224;
      uStack_254 = uStack_220;
      uStack_250 = uStack_21c;
      uStack_24c = uStack_218;
      uStack_248 = uStack_214;
      iVar21 = *(int *)(*(int *)(param_2 + 0x19c) + 0x54);
      local_2b8[0] = param_4;
      (**(code **)(iVar21 + 0xc))
                (*(int *)(*(int *)(param_2 + 0x19c) + 0x50) +
                 (*(int *)(iVar21 + 8) - 1U & 0xfffffff8) + 8,&DAT_0052348e,0xd,puVar9,0x20,
                 &pppppuStack_274,0x30);
      FUN_018e1794(param_3,local_2b8);
      ppppppuVar23 = *(undefined4 *******)(param_2 + 0x28);
      if ((undefined4 ******)0xaaaaaaa < ppppppuVar23) {
        uVar8 = 0;
LAB_018da5b0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,iVar7);
      }
      iVar7 = (int)ppppppuVar23 * 0xc;
      if (iVar7 == 0) {
        local_2c = (undefined4 *)&SUB_00000004;
        local_30 = (undefined4 *******)0x0;
      }
      else {
        iVar21 = *(int *)(param_2 + 0x24);
        uVar8 = 4;
        puVar9 = (undefined4 *)FUN_01298504(iVar7,4);
        if (puVar9 == (undefined4 *)0x0) goto LAB_018da5b0;
        local_30 = (undefined4 *******)ppppppuVar23;
        local_2c = puVar9;
        if (ppppppuVar23 != (undefined4 ******)0x0) {
          ppppppuVar20 = (undefined4 ******)0x0;
          do {
            if (iVar7 == 0) break;
            FUN_015e8ad4(&local_240,*(undefined4 *)(iVar21 + 4),*(undefined4 *)(iVar21 + 8));
            ppppppuVar20 = (undefined4 ******)((int)ppppppuVar20 + 1);
            iVar7 = iVar7 + -0xc;
            iVar21 = iVar21 + 0xc;
            *puVar9 = local_240;
            puVar9[1] = local_23c;
            puVar9[2] = local_238;
            puVar9 = puVar9 + 3;
          } while (ppppppuVar23 != ppppppuVar20);
        }
      }
      local_240 = local_30;
      local_23c = local_2c;
      puVar11 = (uint *)(param_3 + 0x8c);
      local_238 = ppppppuVar23;
      local_28 = (undefined4 *******)ppppppuVar23;
      if (*puVar11 != 0x80000000) {
        FUN_006a41c0(puVar11);
      }
      *puVar11 = (uint)local_240;
      *(undefined4 **)(param_3 + 0x90) = local_23c;
      *(undefined4 *******)(param_3 + 0x94) = local_238;
      if (bVar2) {
        uVar8 = *(undefined4 *)(param_2 + 0x19c);
        FUN_01bed4e2(&local_240,param_2,0x60);
        local_6c = *puVar6;
        uStack_68 = *(undefined4 *)(param_5 + 0x38);
        uStack_64 = *(undefined4 *)(param_5 + 0x3c);
        uStack_60 = *(undefined4 *)(param_5 + 0x40);
        local_5c = *(undefined4 *)(param_5 + 0x44);
        uStack_58 = *(undefined4 *)(param_5 + 0x48);
        uStack_54 = *(undefined4 *)(param_5 + 0x4c);
        uStack_50 = *(undefined4 *)(param_5 + 0x50);
        local_4c = *(undefined4 *)(param_5 + 0x54);
        local_f8 = *(undefined4 *)(param_2 + 0x188);
        uStack_f4 = *(undefined4 *)(param_2 + 0x18c);
        uStack_f0 = *(undefined4 *)(param_2 + 400);
        uStack_ec = *(undefined4 *)(param_2 + 0x194);
        local_e8 = *(undefined4 *)(param_2 + 0x198);
        uVar3 = *(undefined1 *)(param_2 + 0x1a0);
        FUN_01bed4e2(auStack_1e0,param_2 + 0x60,0xe8);
        local_e4 = uVar8;
        FUN_01bed4e2(&uStack_e0,local_2b8,0x74);
        local_48._0_2_ = CONCAT11(1,uVar3);
        uVar8 = FUN_018dacb8(0x200);
        FUN_01bed4e2(uVar8,&local_240,0x200);
        puVar14 = &DAT_01d23100;
      }
      else {
        uVar8 = *(undefined4 *)(param_2 + 0x19c);
        FUN_01bed4e2(&local_230,param_2,0x60);
        local_5c = *puVar6;
        uStack_58 = *(undefined4 *)(param_5 + 0x38);
        uStack_54 = *(undefined4 *)(param_5 + 0x3c);
        uStack_50 = *(undefined4 *)(param_5 + 0x40);
        local_4c = *(undefined4 *)(param_5 + 0x44);
        local_48 = *(undefined4 *)(param_5 + 0x48);
        uStack_44 = *(undefined4 *)(param_5 + 0x4c);
        uStack_40 = *(undefined4 *)(param_5 + 0x50);
        uStack_3c = *(undefined4 *)(param_5 + 0x54);
        local_e8 = *(undefined4 *)(param_2 + 0x188);
        local_e4 = *(undefined4 *)(param_2 + 0x18c);
        uStack_e0 = *(undefined4 *)(param_2 + 400);
        uStack_dc = *(undefined4 *)(param_2 + 0x194);
        uStack_d8 = *(undefined4 *)(param_2 + 0x198);
        uVar3 = *(undefined1 *)(param_2 + 0x1a0);
        FUN_01bed4e2(auStack_1d0,param_2 + 0x60,0xe8);
        local_d4 = uVar8;
        FUN_01bed4e2(&local_d0,local_2b8,0x74);
        local_37 = 1;
        local_240 = (undefined4 ******)0x80000000;
        local_38 = uVar3;
        uVar8 = FUN_018dacb8(0x210);
        FUN_01bed4e2(uVar8,&local_240,0x210);
        puVar14 = &DAT_01d230e8;
      }
      *(undefined4 *)(param_1 + 2) = uVar8;
      *(undefined **)(param_1 + 4) = puVar14;
      *(undefined1 *)param_1 = 0x14;
      FUN_018c644c(&local_2c8);
    }
    else {
      *(undefined1 *)((int)param_1 + 1) = uVar3;
      *(undefined1 *)param_1 = 8;
      FUN_018c644c(&local_2c8);
      piVar5 = *(int **)(param_2 + 0x19c);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar7 + -1;
LAB_018da110:
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018bcb30(*(undefined4 *)(param_2 + 0x19c));
      }
      if (*(int *)(param_2 + 8) != -0x80000000) {
        FUN_018c4448(param_2);
      }
      if (*(char *)(param_2 + 0x188) == '\0') {
        FUN_0134bd64(*(undefined4 *)(param_2 + 0x18c),*(undefined4 *)(param_2 + 400));
      }
      if (*(int *)(param_2 + 0x138) != -0x80000000) {
        FUN_0134bd64(*(int *)(param_2 + 0x138),*(undefined4 *)(param_2 + 0x13c));
      }
    }
  }
  return;
}

