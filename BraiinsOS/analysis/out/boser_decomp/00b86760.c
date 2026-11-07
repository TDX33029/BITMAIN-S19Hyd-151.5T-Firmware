// FUN_00b86760 @ 00b86760 size=6296 calls_out=30 calls_in=2
// strings: bosminer_fan::hwmonopen/bosminer/bosminer-fan/src/hwmon.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | bosminer_fan::hwmonopen/bosminer/bosminer-fan/src/hwmon.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | Failed to find front chip

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b86760(undefined4 *param_1,undefined1 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int ****ppppiVar6;
  char cVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int ****ppppiVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int ****ppppiVar16;
  int ****ppppiVar17;
  int ****ppppiVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int ****ppppiVar23;
  int ****ppppiVar24;
  undefined *puVar25;
  int ****ppppiVar26;
  uint uVar27;
  undefined8 uVar28;
  int ****local_274;
  int ****local_270;
  int ****local_1d8;
  int ****local_1d4;
  int ****local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  int ****local_1c0;
  int ****local_1bc;
  int ****local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  int ****local_1a8;
  int ****local_1a4;
  int ****local_1a0;
  int local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int ****local_18c;
  int ****local_188;
  int ****local_184;
  int ****local_180;
  int ****local_17c;
  int ****local_178;
  code *local_174;
  undefined4 *local_170;
  int ****local_16c;
  int ****local_168;
  int ****local_164;
  int ****local_160;
  int ****local_15c;
  int ****local_158;
  int ****local_150;
  int ****local_14c;
  int ****local_148;
  int ****local_144;
  int ****local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  int ****local_fc;
  int ****ppppiStack_f8;
  int ****ppppiStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 *puStack_e4;
  undefined4 local_e0;
  int ****local_d8;
  int ***local_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  int ***pppiStack_bc;
  int ****local_b8;
  int ****local_b4;
  int ****local_b0;
  int ****local_ac;
  int ****local_a8;
  int ****local_a4;
  int ****ppppiStack_a0;
  int ****ppppiStack_9c;
  int ****ppppiStack_98;
  int ****local_94;
  int ****ppppiStack_90;
  int ****local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int ****local_80;
  int ****local_7c;
  int ****local_78;
  int ****local_74;
  int ****local_70;
  int ****ppppiStack_6c;
  undefined4 local_58;
  undefined4 local_54;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    FUN_00a4a170(&local_148);
    if (local_148 != (int ****)0x80000000) {
      local_a4 = (int ****)local_13c;
      ppppiStack_a0 = (int ****)local_138;
      ppppiStack_9c = (int ****)uStack_134;
      ppppiStack_98 = (int ****)local_130;
      local_94 = (int ****)local_12c;
      ppppiStack_90 = (int ****)local_128;
      local_8c = (int ****)local_124;
      local_88 = local_120;
      local_84 = local_11c;
      local_b4 = (int ****)0x1;
      local_b8 = (int ****)0x1;
      local_a8 = local_140;
      local_ac = local_144;
      local_b0 = local_148;
      puVar8 = (undefined4 *)thunk_FUN_01be5118(0x38);
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x38);
      }
      *puVar8 = local_b8;
      puVar8[1] = local_b4;
      puVar8[2] = local_b0;
      puVar8[3] = local_ac;
LAB_00b8703c:
      puVar25 = &DAT_01c13cc8;
      puVar8[4] = local_a8;
      puVar8[5] = local_a4;
      puVar8[6] = ppppiStack_a0;
      puVar8[7] = ppppiStack_9c;
      puVar8[8] = ppppiStack_98;
      puVar8[9] = local_94;
      puVar8[10] = ppppiStack_90;
      puVar8[0xb] = local_8c;
      puVar8[0xc] = local_88;
      puVar8[0xd] = local_84;
LAB_00b873a0:
      param_1[1] = puVar8;
      uVar15 = 0;
      param_1[2] = puVar25;
      goto LAB_00b87d58;
    }
    break;
  case 1:
    FUN_00a4a170(&local_148);
    if (local_148 != (int ****)0x80000000) {
      local_a4 = (int ****)local_13c;
      ppppiStack_a0 = (int ****)local_138;
      ppppiStack_9c = (int ****)uStack_134;
      ppppiStack_98 = (int ****)local_130;
      local_94 = (int ****)local_12c;
      ppppiStack_90 = (int ****)local_128;
      local_8c = (int ****)local_124;
      local_88 = local_120;
      local_84 = local_11c;
      local_b4 = (int ****)0x1;
      local_b8 = (int ****)0x1;
      local_a8 = local_140;
      local_ac = local_144;
      local_b0 = local_148;
      puVar8 = (undefined4 *)thunk_FUN_01be5118(0x38);
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x38);
      }
LAB_00b87028:
      *puVar8 = local_b8;
      puVar8[1] = local_b4;
      puVar8[2] = local_b0;
      puVar8[3] = local_ac;
      goto LAB_00b8703c;
    }
    break;
  case 2:
    DataMemoryBarrier(0xb);
    if (DAT_01d4cd38 != 0) {
      local_b8 = (int ****)&local_1a8;
      local_1a8 = (int ****)&DAT_01d4ccc8;
      FUN_019a768c(&DAT_01d4cd38,1,&local_b8,&DAT_01c0e94c,&DAT_01d293e0);
    }
    FUN_00a4a718(&local_b8,&DAT_01d4ccc8);
    FUN_01bed4e2(&local_148,&local_b8,0x60);
    FUN_0134aee0(local_58,local_54,4,4);
    if (local_13c != 0) {
      iVar12 = 0;
      uVar9 = FUN_0125c3e4(local_138,uStack_134,local_130,local_12c,0);
      uVar1 = uVar9 >> 0x19;
      while( true ) {
        uVar9 = (uint)local_144 & uVar9;
        uVar27 = *(uint *)((int)local_148 + uVar9);
        uVar10 = uVar27 ^ uVar1 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar19 = uVar10 >> 8;
          uVar2 = uVar10 >> 0x10;
          uVar3 = uVar10 >> 0x18;
          uVar4 = uVar10 << 0x18;
          uVar10 = uVar10 - 1 & uVar10;
          uVar19 = uVar9 + ((uint)LZCOUNT(uVar4 | (uVar19 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                          uVar3) >> 3) & (uint)local_144;
          if (*(char *)(local_148 + uVar19 * -5 + -5) == '\0') {
            ppppiVar11 = local_148 + uVar19 * -5 + -4;
            goto LAB_00b873c8;
          }
        }
        if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar9 = uVar9 + iVar12;
      }
    }
    FUN_012c2414(&local_b8,"Failed to find front chip",0x19);
    ppppiVar11 = local_b4;
    if ((char)local_b8 == '\x04') {
LAB_00b873c8:
      if (local_13c != 0) {
        uVar9 = FUN_0125c3e4(local_138,uStack_134,local_130,local_12c,1);
        uVar1 = uVar9 >> 0x19;
        iVar12 = 0;
        while( true ) {
          uVar9 = (uint)local_144 & uVar9;
          uVar27 = *(uint *)((int)local_148 + uVar9);
          uVar10 = uVar27 ^ uVar1 * 0x1010101;
          uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
          while (uVar10 != 0) {
            uVar19 = uVar10 >> 8;
            uVar2 = uVar10 >> 0x10;
            uVar3 = uVar10 >> 0x18;
            uVar4 = uVar10 << 0x18;
            uVar10 = uVar10 - 1 & uVar10;
            uVar19 = uVar9 + ((uint)LZCOUNT(uVar4 | (uVar19 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                            uVar3) >> 3) & (uint)local_144;
            if (*(char *)(local_148 + uVar19 * -5 + -5) != '\0') {
              ppppiVar16 = local_148 + uVar19 * -5 + -4;
              goto LAB_00b876d0;
            }
          }
          if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
          iVar12 = iVar12 + 4;
          uVar9 = uVar9 + iVar12;
        }
      }
      FUN_012c2414(&local_b8,"Failed to find back chip",0x18);
      ppppiVar16 = local_b4;
      if ((char)local_b8 != '\x04') {
        ppppiVar24 = local_b8;
        if (((uint)local_b8 & 0xff) != 4) goto LAB_00b87d40;
      }
LAB_00b876d0:
      FUN_0125dd24(&local_b8,*ppppiVar11,ppppiVar11[1],ppppiVar11[2],&local_148);
      ppppiVar18 = local_b4;
      ppppiVar11 = local_b8;
      if (local_b8 == (int ****)&DAT_80000000) {
        uVar28 = (*(code *)(*local_b4)[2])();
        FUN_019a6b0c((uint)&local_1a8 | 4,0x28,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
      }
      else {
        local_1a8 = local_b8;
        local_1a4 = local_b4;
        local_1a0 = local_b0;
        local_19c = (int)local_ac;
        uStack_198 = local_a8;
        uStack_194 = local_a4;
        if (local_b8 != (int ****)&DAT_80000000) {
          local_1cc = (int)local_ac;
          local_1c8 = local_a8;
          uStack_1c4 = local_a4;
          local_1d0 = local_b0;
          local_1d4 = local_b4;
          local_1d8 = local_b8;
          FUN_0125dd24(&local_b8,*ppppiVar16,ppppiVar16[1],ppppiVar16[2],&local_148);
          ppppiVar16 = local_b4;
          ppppiVar24 = local_b8;
          if (local_b8 == (int ****)&DAT_80000000) {
            uVar28 = (*(code *)(*local_b4)[2])();
            FUN_019a6b0c((uint)&local_1a8 | 4,0x28,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
          }
          else {
            local_1a8 = local_b8;
            local_1a4 = local_b4;
            local_1a0 = local_b0;
            local_19c = (int)local_ac;
            uStack_198 = local_a8;
            uStack_194 = local_a4;
            if (local_b8 != (int ****)&DAT_80000000) {
              local_1b4 = (int)local_ac;
              local_1b0 = local_a8;
              uStack_1ac = local_a4;
              local_1b8 = local_b0;
              local_1bc = local_b4;
              local_1c0 = local_b8;
              FUN_00adacf4(&local_b8,0x17);
              ppppiVar26 = local_b0;
              ppppiVar23 = local_b4;
              ppppiVar6 = local_b8;
              local_270 = local_b4;
              if (local_b8 == (int ****)&DAT_80000000) goto LAB_00b87db0;
              local_274 = local_b8;
              FUN_00adacf4(&local_b8,0x2d);
              ppppiVar24 = local_b8;
              uVar22 = uStack_1c4;
              uVar15 = local_1c8;
              iVar12 = local_1cc;
              if (local_b8 == (int ****)&DAT_80000000) goto LAB_00b87e04;
              ppppiVar16 = local_1c0;
              ppppiVar18 = local_1bc;
              ppppiVar17 = local_1b8;
              iVar13 = local_1b4;
              uVar20 = local_1b0;
              uVar21 = uStack_1ac;
              FUN_00a4aa30(&local_148);
              local_a4 = (int ****)iVar12;
              ppppiStack_a0 = (int ****)uVar15;
              ppppiStack_9c = (int ****)uVar22;
              local_70 = local_b4;
              ppppiStack_6c = local_b0;
              local_74 = ppppiVar24;
              local_78 = ppppiVar26;
              local_7c = ppppiVar23;
              local_80 = ppppiVar6;
              local_b4 = (int ****)0x1;
              local_b8 = (int ****)0x1;
              local_b0 = ppppiVar11;
              ppppiStack_98 = ppppiVar16;
              local_94 = ppppiVar18;
              ppppiStack_90 = ppppiVar17;
              local_8c = (int ****)iVar13;
              local_88 = uVar20;
              local_84 = uVar21;
              puVar8 = (undefined4 *)thunk_FUN_01be5118(0x50);
              if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x50);
              }
              FUN_01bed4e2(puVar8,&local_b8,0x50);
              puVar25 = &DAT_01c13cdc;
              goto LAB_00b873a0;
            }
          }
LAB_00b87d20:
          ppppiVar24 = local_1a4;
          ppppiVar16 = local_1a0;
          goto LAB_00b87d28;
        }
      }
      goto LAB_00b87944;
    }
    ppppiVar24 = local_b8;
    ppppiVar16 = local_b4;
    if (((uint)local_b8 & 0xff) == 4) goto LAB_00b873c8;
    goto LAB_00b87d40;
  case 3:
    DataMemoryBarrier(0xb);
    if (DAT_01d4ccc0 != 0) {
      local_b8 = (int ****)&local_1a8;
      local_1a8 = (int ****)&DAT_01d4cc50;
      FUN_019a768c(&DAT_01d4ccc0,1,&local_b8,&DAT_01c0e94c,&DAT_01d293e0);
    }
    FUN_00a4a718(&local_b8,&DAT_01d4cc50);
    FUN_01bed4e2(&local_148,&local_b8,0x60);
    FUN_0134aee0(local_58,local_54,4,4);
    if (local_13c != 0) {
      iVar12 = 0;
      uVar9 = FUN_0125c3e4(local_138,uStack_134,local_130,local_12c,0);
      uVar1 = uVar9 >> 0x19;
      while( true ) {
        uVar9 = (uint)local_144 & uVar9;
        uVar27 = *(uint *)((int)local_148 + uVar9);
        uVar10 = uVar27 ^ uVar1 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar19 = uVar10 >> 8;
          uVar2 = uVar10 >> 0x10;
          uVar3 = uVar10 >> 0x18;
          uVar4 = uVar10 << 0x18;
          uVar10 = uVar10 - 1 & uVar10;
          uVar19 = uVar9 + ((uint)LZCOUNT(uVar4 | (uVar19 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                          uVar3) >> 3) & (uint)local_144;
          if (*(char *)(local_148 + uVar19 * -5 + -5) == '\0') {
            ppppiVar11 = local_148 + uVar19 * -5 + -4;
            goto LAB_00b874cc;
          }
        }
        if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar9 = uVar9 + iVar12;
      }
    }
    FUN_012c2414(&local_b8,"Failed to find front chip",0x19);
    ppppiVar11 = local_b4;
    if ((char)local_b8 != '\x04') {
      ppppiVar24 = local_b8;
      ppppiVar16 = local_b4;
      if (((uint)local_b8 & 0xff) != 4) goto LAB_00b87d40;
    }
LAB_00b874cc:
    if (local_13c != 0) {
      uVar9 = FUN_0125c3e4(local_138,uStack_134,local_130,local_12c,1);
      uVar1 = uVar9 >> 0x19;
      iVar12 = 0;
      while( true ) {
        uVar9 = (uint)local_144 & uVar9;
        uVar27 = *(uint *)((int)local_148 + uVar9);
        uVar10 = uVar27 ^ uVar1 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar19 = uVar10 >> 8;
          uVar2 = uVar10 >> 0x10;
          uVar3 = uVar10 >> 0x18;
          uVar4 = uVar10 << 0x18;
          uVar10 = uVar10 - 1 & uVar10;
          uVar19 = uVar9 + ((uint)LZCOUNT(uVar4 | (uVar19 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                          uVar3) >> 3) & (uint)local_144;
          if (*(char *)(local_148 + uVar19 * -5 + -5) != '\0') {
            ppppiVar16 = local_148 + uVar19 * -5 + -4;
            goto LAB_00b877d4;
          }
        }
        if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar9 = uVar9 + iVar12;
      }
    }
    FUN_012c2414(&local_b8,"Failed to find back chip",0x18);
    ppppiVar16 = local_b4;
    if ((char)local_b8 != '\x04') {
      ppppiVar24 = local_b8;
      if (((uint)local_b8 & 0xff) != 4) goto LAB_00b87d40;
    }
LAB_00b877d4:
    FUN_0125dd24(&local_b8,*ppppiVar11,ppppiVar11[1],ppppiVar11[2],&local_148);
    ppppiVar18 = local_b4;
    ppppiVar11 = local_b8;
    if (local_b8 == (int ****)&DAT_80000000) {
      uVar28 = (*(code *)(*local_b4)[2])();
      FUN_019a6b0c((uint)&local_1a8 | 4,0x28,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
    }
    else {
      local_1a8 = local_b8;
      local_1a4 = local_b4;
      local_1a0 = local_b0;
      local_19c = (int)local_ac;
      uStack_198 = local_a8;
      uStack_194 = local_a4;
      if (local_b8 != (int ****)&DAT_80000000) {
        local_1cc = (int)local_ac;
        local_1c8 = local_a8;
        uStack_1c4 = local_a4;
        local_1d0 = local_b0;
        local_1d4 = local_b4;
        local_1d8 = local_b8;
        FUN_0125dd24(&local_b8,*ppppiVar16,ppppiVar16[1],ppppiVar16[2],&local_148);
        ppppiVar16 = local_b4;
        ppppiVar24 = local_b8;
        if (local_b8 == (int ****)&DAT_80000000) {
          uVar28 = (*(code *)(*local_b4)[2])();
          FUN_019a6b0c((uint)&local_1a8 | 4,0x28,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
          goto LAB_00b87d20;
        }
        local_1a8 = local_b8;
        local_1a4 = local_b4;
        local_1a0 = local_b0;
        local_19c = (int)local_ac;
        uStack_198 = local_a8;
        uStack_194 = local_a4;
        if (local_b8 == (int ****)&DAT_80000000) goto LAB_00b87d20;
        local_1b4 = (int)local_ac;
        local_1b0 = local_a8;
        uStack_1ac = local_a4;
        local_1b8 = local_b0;
        local_1bc = local_b4;
        local_1c0 = local_b8;
        FUN_00adacf4(&local_b8,0x1b6);
        ppppiVar26 = local_b0;
        ppppiVar23 = local_b4;
        ppppiVar6 = local_b8;
        local_270 = local_b4;
        if (local_b8 != (int ****)&DAT_80000000) {
          local_274 = local_b8;
          FUN_00adacf4(&local_b8,0x1c5);
          local_74 = local_b8;
          ppppiStack_9c = (int ****)uStack_1c4;
          ppppiStack_a0 = (int ****)local_1c8;
          local_a4 = (int ****)local_1cc;
          if (local_b8 == (int ****)&DAT_80000000) goto LAB_00b87e04;
          ppppiVar24 = local_1c0;
          ppppiVar16 = local_1bc;
          ppppiVar18 = local_1b8;
          iVar12 = local_1b4;
          uVar15 = local_1b0;
          uVar22 = uStack_1ac;
          FUN_00a4aa30(&local_148);
          local_70 = local_b4;
          ppppiStack_6c = local_b0;
          local_78 = ppppiVar26;
          local_7c = ppppiVar23;
          local_80 = ppppiVar6;
          local_b4 = (int ****)0x1;
          local_b8 = (int ****)0x1;
          local_b0 = ppppiVar11;
          ppppiStack_98 = ppppiVar24;
          local_94 = ppppiVar16;
          ppppiStack_90 = ppppiVar18;
          local_8c = (int ****)iVar12;
          local_88 = uVar15;
          local_84 = uVar22;
          puVar8 = (undefined4 *)thunk_FUN_01be5118(0x50);
          if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x50);
          }
          FUN_01bed4e2(puVar8,&local_b8,0x50);
          puVar25 = &DAT_01c13cf0;
          goto LAB_00b873a0;
        }
LAB_00b87db0:
        FUN_019bb7e0(ppppiVar24,ppppiVar16);
        FUN_019bb7e0(local_1b4,local_1b0);
        ppppiVar24 = local_b4;
        ppppiVar16 = local_b0;
LAB_00b87d28:
        FUN_019bb7e0(ppppiVar11,ppppiVar18);
        FUN_019bb7e0(local_1cc,local_1c8);
        goto LAB_00b87d40;
      }
    }
    goto LAB_00b87944;
  case 4:
    FUN_00a4a170(&local_148);
    if (local_148 != (int ****)0x80000000) {
      local_a4 = (int ****)local_13c;
      ppppiStack_a0 = (int ****)local_138;
      ppppiStack_9c = (int ****)uStack_134;
      ppppiStack_98 = (int ****)local_130;
      local_94 = (int ****)local_12c;
      ppppiStack_90 = (int ****)local_128;
      local_8c = (int ****)local_124;
      local_88 = local_120;
      local_84 = local_11c;
      local_b4 = (int ****)0x1;
      local_b8 = (int ****)0x1;
      local_a8 = local_140;
      local_ac = local_144;
      local_b0 = local_148;
      puVar8 = (undefined4 *)thunk_FUN_01be5118(0x38);
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x38);
      }
      goto LAB_00b87028;
    }
    break;
  case 5:
    DataMemoryBarrier(0xb);
    if (DAT_01d4cdb0 != 0) {
      local_b8 = (int ****)&local_1a8;
      local_1a8 = (int ****)&DAT_01d4cd40;
      FUN_019a768c(&DAT_01d4cdb0,1,&local_b8,&DAT_01c0e94c,&DAT_01d293e0);
    }
    FUN_00a4a718(&local_b8,&DAT_01d4cd40);
    FUN_01bed4e2(&local_148,&local_b8,0x60);
    FUN_0134aee0(local_58,local_54,4,4);
    if (local_13c != 0) {
      iVar12 = 0;
      uVar9 = FUN_0125c3e4(local_138,uStack_134,local_130,local_12c,0);
      uVar1 = uVar9 >> 0x19;
      while( true ) {
        uVar9 = (uint)local_144 & uVar9;
        uVar27 = *(uint *)((int)local_148 + uVar9);
        uVar10 = uVar27 ^ uVar1 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar19 = uVar10 >> 8;
          uVar2 = uVar10 >> 0x10;
          uVar3 = uVar10 >> 0x18;
          uVar4 = uVar10 << 0x18;
          uVar10 = uVar10 - 1 & uVar10;
          uVar19 = uVar9 + ((uint)LZCOUNT(uVar4 | (uVar19 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                          uVar3) >> 3) & (uint)local_144;
          if (*(char *)(local_148 + uVar19 * -5 + -5) == '\0') {
            ppppiVar11 = local_148 + uVar19 * -5 + -4;
            goto LAB_00b875d0;
          }
        }
        if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar9 = uVar9 + iVar12;
      }
    }
    FUN_012c2414(&local_b8,"Failed to find front chip",0x19);
    ppppiVar11 = local_b4;
    if ((char)local_b8 != '\x04') {
      ppppiVar24 = local_b8;
      ppppiVar16 = local_b4;
      if (((uint)local_b8 & 0xff) != 4) goto LAB_00b87d40;
    }
LAB_00b875d0:
    if (local_13c != 0) {
      uVar9 = FUN_0125c3e4(local_138,uStack_134,local_130,local_12c,1);
      uVar1 = uVar9 >> 0x19;
      iVar12 = 0;
      while( true ) {
        uVar9 = (uint)local_144 & uVar9;
        uVar27 = *(uint *)((int)local_148 + uVar9);
        uVar10 = uVar27 ^ uVar1 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar19 = uVar10 >> 8;
          uVar2 = uVar10 >> 0x10;
          uVar3 = uVar10 >> 0x18;
          uVar4 = uVar10 << 0x18;
          uVar10 = uVar10 - 1 & uVar10;
          uVar19 = uVar9 + ((uint)LZCOUNT(uVar4 | (uVar19 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                          uVar3) >> 3) & (uint)local_144;
          if (*(char *)(local_148 + uVar19 * -5 + -5) != '\0') {
            ppppiVar16 = local_148 + uVar19 * -5 + -4;
            goto LAB_00b878d4;
          }
        }
        if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar9 = uVar9 + iVar12;
      }
    }
    FUN_012c2414(&local_b8,"Failed to find back chip",0x18);
    ppppiVar16 = local_b4;
    if ((char)local_b8 != '\x04') {
      ppppiVar24 = local_b8;
      if (((uint)local_b8 & 0xff) != 4) goto LAB_00b87d40;
    }
LAB_00b878d4:
    FUN_0125dd24(&local_b8,*ppppiVar11,ppppiVar11[1],ppppiVar11[2],&local_148);
    ppppiVar18 = local_b4;
    ppppiVar11 = local_b8;
    if (local_b8 == (int ****)&DAT_80000000) {
      uVar28 = (*(code *)(*local_b4)[2])();
      FUN_019a6b0c((uint)&local_1a8 | 4,0x28,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
    }
    else {
      local_1a8 = local_b8;
      local_1a4 = local_b4;
      local_1a0 = local_b0;
      local_19c = (int)local_ac;
      uStack_198 = local_a8;
      uStack_194 = local_a4;
      if (local_b8 != (int ****)&DAT_80000000) {
        local_1cc = (int)local_ac;
        local_1c8 = local_a8;
        uStack_1c4 = local_a4;
        local_1d0 = local_b0;
        local_1d4 = local_b4;
        local_1d8 = local_b8;
        FUN_0125dd24(&local_b8,*ppppiVar16,ppppiVar16[1],ppppiVar16[2],&local_148);
        ppppiVar16 = local_b4;
        ppppiVar24 = local_b8;
        if (local_b8 == (int ****)&DAT_80000000) {
          uVar28 = (*(code *)(*local_b4)[2])();
          FUN_019a6b0c((uint)&local_1a8 | 4,0x28,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
          goto LAB_00b87d20;
        }
        local_1a8 = local_b8;
        local_1a4 = local_b4;
        local_1a0 = local_b0;
        local_19c = (int)local_ac;
        uStack_198 = local_a8;
        uStack_194 = local_a4;
        if (local_b8 == (int ****)&DAT_80000000) goto LAB_00b87d20;
        local_1b4 = (int)local_ac;
        local_1b0 = local_a8;
        uStack_1ac = local_a4;
        local_1b8 = local_b0;
        local_1bc = local_b4;
        local_1c0 = local_b8;
        FUN_00adacf4(&local_b8,0x1b2);
        ppppiVar26 = local_b0;
        ppppiVar23 = local_b4;
        ppppiVar6 = local_b8;
        local_270 = local_b4;
        if (local_b8 == (int ****)&DAT_80000000) goto LAB_00b87db0;
        local_274 = local_b8;
        FUN_00adacf4(&local_b8,0x1b3);
        local_74 = local_b8;
        ppppiStack_9c = (int ****)uStack_1c4;
        ppppiStack_a0 = (int ****)local_1c8;
        local_a4 = (int ****)local_1cc;
        if (local_b8 != (int ****)&DAT_80000000) {
          ppppiVar24 = local_1c0;
          ppppiVar16 = local_1bc;
          ppppiVar18 = local_1b8;
          iVar12 = local_1b4;
          uVar15 = local_1b0;
          uVar22 = uStack_1ac;
          FUN_00a4aa30(&local_148);
          local_70 = local_b4;
          ppppiStack_6c = local_b0;
          local_78 = ppppiVar26;
          local_7c = ppppiVar23;
          local_80 = ppppiVar6;
          local_b4 = (int ****)0x1;
          local_b8 = (int ****)0x1;
          local_b0 = ppppiVar11;
          ppppiStack_98 = ppppiVar24;
          local_94 = ppppiVar16;
          ppppiStack_90 = ppppiVar18;
          local_8c = (int ****)iVar12;
          local_88 = uVar15;
          local_84 = uVar22;
          puVar8 = (undefined4 *)thunk_FUN_01be5118(0x50);
          if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x50);
          }
          FUN_01bed4e2(puVar8,&local_b8,0x50);
          puVar25 = &DAT_01c13d04;
          goto LAB_00b873a0;
        }
LAB_00b87e04:
        FUN_019bb7e0(local_274,local_270);
        FUN_005f2e94(&local_1c0);
        ppppiVar24 = local_b4;
        ppppiVar16 = local_b0;
        goto LAB_00b87d28;
      }
    }
LAB_00b87944:
    ppppiVar24 = local_1a4;
    ppppiVar16 = local_1a0;
LAB_00b87d40:
    FUN_00a4aa30(&local_148);
    param_1[1] = ppppiVar24;
    param_1[2] = ppppiVar16;
    goto LAB_00b87d54;
  default:
    puVar8 = (undefined4 *)thunk_FUN_01be5118(6);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,6);
    }
    *(undefined2 *)(puVar8 + 1) = 0x6e61;
    *puVar8 = 0x666d7770;
    FUN_019afae4(&local_b8,&DAT_004a3594,0x16);
    local_d8 = (int ****)&local_178;
    local_fc = local_b8;
    ppppiStack_f8 = local_b4;
    ppppiStack_f4 = local_b0;
    local_e0 = 6;
    local_ec = 0;
    uStack_e8 = 6;
    local_104 = 8;
    local_110 = 4;
    local_11c = 4;
    local_124 = 0x100;
    local_128 = 0xffffffff;
    local_144 = (int ****)0x0;
    local_148 = (int ****)0x0;
    local_f0 = 0;
    local_100 = 0;
    local_108 = 0;
    local_10c = 0;
    local_114 = 0;
    local_118 = 0;
    local_120 = 0;
    local_12c = 0;
    local_178 = (int ****)0x0;
    local_130 = 10;
    local_138 = 0;
    puStack_e4 = puVar8;
    FUN_0125c660(&local_d0,&local_148);
    if (local_d0 == (int ***)0x80000000) {
      local_1d0 = (int ****)0x0;
      local_1d4 = (int ****)&SUB_00000004;
      local_1d8 = (int ****)0x0;
      FUN_0125dc04(&local_148);
    }
    else {
      ppppiVar11 = (int ****)thunk_FUN_01be5118(0x60);
      if (ppppiVar11 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x60);
      }
      ppppiVar24 = (int ****)&DAT_00000001;
      *ppppiVar11 = local_d0;
      ppppiVar11[1] = pppiStack_cc;
      ppppiVar11[2] = pppiStack_c8;
      ppppiVar11[3] = pppiStack_c4;
      ppppiVar11[4] = pppiStack_c0;
      ppppiVar11[5] = pppiStack_bc;
      local_1c0 = (int ****)&SUB_00000004;
      local_1b8 = (int ****)&DAT_00000001;
      local_1bc = ppppiVar11;
      FUN_01bed4e2(&local_b8,&local_148,0x78);
      iVar12 = 0x18;
      while (FUN_0125c660(&local_40,&local_b8), local_40 != -0x80000000) {
        if (ppppiVar24 == local_1c0) {
          FUN_006520b4(&local_1c0,ppppiVar24,1,4,0x18);
          ppppiVar11 = local_1bc;
        }
        piVar14 = (int *)((int)ppppiVar11 + iVar12);
        ppppiVar24 = (int ****)((int)ppppiVar24 + 1);
        iVar12 = iVar12 + 0x18;
        *piVar14 = local_40;
        piVar14[1] = iStack_3c;
        piVar14[2] = iStack_38;
        piVar14[3] = iStack_34;
        piVar14[4] = iStack_30;
        piVar14[5] = iStack_2c;
        local_1b8 = ppppiVar24;
      }
      FUN_0125dc04(&local_b8);
      local_1d8 = local_1c0;
      local_1d4 = local_1bc;
      local_1d0 = local_1b8;
    }
    ppppiVar18 = local_178;
    ppppiVar16 = local_1d0;
    ppppiVar24 = local_1d4;
    ppppiVar11 = local_1d8;
    if (local_178 == (int ****)0x0) {
      ppppiVar18 = local_1d4;
      if (local_1d8 == (int ****)&DAT_80000000) goto LAB_00b879dc;
      local_17c = local_1d0;
      local_180 = local_1d4;
      local_184 = local_1d8;
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4cc40 - 1 < 2 ||
           ((DAT_01d4cc40 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4cc38), cVar7 != '\0')))) &&
          (iVar12 = FUN_01aaa278(DAT_01d4cc38), iVar12 != 0)))) {
        local_b4 = *(int *****)(DAT_01d4cc38 + 0x20);
        if (local_b4 == (int ****)0x0) {
LAB_00b88090:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c25018);
        }
        local_1d4 = (int ****)&local_16c;
        local_b0 = *(int *****)(DAT_01d4cc38 + 0x24);
        local_ac = *(int *****)(DAT_01d4cc38 + 0x28);
        local_170 = (undefined4 *)(DAT_01d4cc38 + 0x1c);
        local_b8 = (int ****)*local_170;
        local_178 = (int ****)&local_1d8;
        local_a8 = (int ****)0x0;
        local_174 = (code *)0x1;
        local_164 = ppppiVar16;
        local_168 = (int ****)&local_150;
        local_150 = (int ****)&local_164;
        local_1d0 = (int ****)&DAT_01d2ea4c;
        local_16c = (int ****)&DAT_005a36b1;
        local_14c = (int ****)FUN_012fd02c;
        local_1d8 = (int ****)&local_b8;
        FUN_01aaaecc(DAT_01d4cc38,&local_178);
        iVar12 = DAT_01d4cc38;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1bc = *(int *****)(DAT_01d4cc38 + 0x14);
          local_1b8 = *(int *****)(DAT_01d4cc38 + 0x18);
          local_1c0 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar5 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar8[3])(pcVar5,&local_1c0);
          if (iVar13 != 0) {
            local_148 = local_1c0;
            local_144 = local_1bc;
            local_140 = local_1b8;
            FUN_01aaa328(iVar12,pcVar5,puVar8[4],&local_148,&local_178);
          }
        }
      }
      else {
        iVar12 = DAT_01d4cc38;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_15c = *(int *****)(DAT_01d4cc38 + 0x14);
          local_158 = *(int *****)(DAT_01d4cc38 + 0x18);
          local_160 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar5 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar8[3])(pcVar5,&local_160);
          if (iVar13 != 0) {
            local_b8 = *(int *****)(DAT_01d4cc38 + 0x1c);
            local_b4 = *(int *****)(DAT_01d4cc38 + 0x20);
            if (local_b4 == (int ****)0x0) goto LAB_00b88090;
            local_b0 = *(int *****)(DAT_01d4cc38 + 0x24);
            local_ac = *(int *****)(DAT_01d4cc38 + 0x28);
            local_1bc = (int ****)&local_150;
            local_1d8 = (int ****)&local_1c0;
            local_1d4 = (int ****)&DAT_00000001;
            local_16c = ppppiVar16;
            local_14c = (int ****)&local_178;
            local_a8 = (int ****)0x0;
            local_1b8 = (int ****)&DAT_01d2ea4c;
            local_150 = (int ****)&DAT_005a36b1;
            local_174 = FUN_012fd02c;
            local_178 = (int ****)&local_16c;
            local_148 = local_160;
            local_144 = local_15c;
            local_140 = local_158;
            local_1d0 = (int ****)(DAT_01d4cc38 + 0x1c);
            local_1c0 = (int ****)&local_b8;
            FUN_01aaa328(iVar12,pcVar5,puVar8[4],&local_148,&local_1d8);
          }
        }
      }
      local_1b8 = ppppiVar16;
      local_1bc = ppppiVar24;
      local_1c0 = ppppiVar11;
      FUN_00adab5c(&local_b8,"bcb:red:fault",0xd);
      ppppiVar6 = local_b4;
      ppppiVar18 = local_b8;
      if (local_b8 == (int ****)&DAT_80000000) {
        ppppiVar23 = local_b4;
        ppppiVar26 = local_b0;
      }
      else {
        local_13c = (int)local_ac;
        local_138 = local_a8;
        uStack_134 = local_a4;
        local_140 = local_b0;
        local_144 = local_b4;
        local_148 = local_b8;
        FUN_00adab5c(&local_b8,&DAT_0056a938,0x10);
        local_78 = local_a4;
        ppppiVar26 = local_b0;
        ppppiVar23 = local_b4;
        if (local_b8 != (int ****)&DAT_80000000) {
          local_1a8 = local_148;
          local_1a4 = local_144;
          local_1a0 = local_140;
          local_19c = local_13c;
          uStack_198 = local_138;
          uStack_194 = uStack_134;
          local_a4 = local_148;
          ppppiStack_a0 = local_144;
          ppppiStack_9c = local_140;
          ppppiStack_98 = (int ****)local_13c;
          local_94 = (int ****)local_138;
          ppppiStack_90 = (int ****)uStack_134;
          local_8c = local_b8;
          local_80 = local_ac;
          local_7c = local_a8;
          local_ac = ppppiVar24;
          local_a8 = ppppiVar16;
          local_b4 = (int ****)0x1;
          local_b8 = (int ****)0x1;
          local_b0 = ppppiVar11;
          puVar8 = (undefined4 *)thunk_FUN_01be5118(0x44);
          if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x44);
          }
          FUN_01bed4e2(puVar8,&local_b8,0x44);
          puVar25 = &DAT_01c13d18;
          goto LAB_00b873a0;
        }
        FUN_019bb7e0(ppppiVar18,ppppiVar6);
        FUN_019bb7e0(local_13c,local_138);
      }
      FUN_0125c350(&local_1c0);
      local_18c = ppppiVar23;
      local_188 = ppppiVar26;
    }
    else {
      FUN_0125c350(&local_1d8);
LAB_00b879dc:
      local_b8 = (int ****)0x3;
      local_144 = (int ****)0xd;
      local_148 = (int ****)0x403f09;
      local_140 = ppppiVar18;
      piVar14 = (int *)FUN_0125f73c(&local_148,&local_b8);
      uVar28 = (**(code **)(*piVar14 + 8))();
      FUN_019a6b0c(&local_18c,0x28,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
    }
    param_1[1] = local_18c;
    param_1[2] = local_188;
    goto LAB_00b87d54;
  case 8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("not implemented",0xf,&DAT_01c13d2c);
  }
  param_1[1] = local_144;
  param_1[2] = local_140;
LAB_00b87d54:
  uVar15 = 1;
LAB_00b87d58:
  *param_1 = uVar15;
  return;
}

