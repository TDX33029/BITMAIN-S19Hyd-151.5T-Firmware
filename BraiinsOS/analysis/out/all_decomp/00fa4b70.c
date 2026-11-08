// FUN_00fa4b70 @ 00fa4b70 size=9640 calls_out=36 calls_in=1
// strings: `Extensions` tracks values by type | `Extensions` tracks values by type | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | `Extensions` tracks values by type

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00fa4b70(byte ****param_1,byte **param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  byte bVar4;
  byte ***pppbVar5;
  byte *pbVar6;
  byte ***pppbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte **ppbVar11;
  byte *pbVar12;
  byte **ppbVar13;
  byte ****ppppbVar14;
  byte ****ppppbVar15;
  int iVar16;
  byte bVar17;
  undefined4 uVar18;
  int iVar19;
  byte ****ppppbVar20;
  byte ****ppppbVar21;
  byte *pbVar22;
  uint uVar23;
  byte ****ppppbVar24;
  byte **ppbVar25;
  byte *pbVar26;
  byte **ppbVar27;
  int iVar28;
  byte ***pppbVar29;
  byte ****ppppbVar30;
  byte *pbVar31;
  byte ****ppppbVar32;
  byte **ppbVar33;
  byte *pbVar34;
  byte **ppbVar35;
  byte ***pppbVar36;
  byte ****ppppbVar37;
  uint uVar38;
  byte *pbVar39;
  byte *pbVar40;
  int iVar41;
  byte ***pppbVar42;
  byte **ppbVar43;
  bool bVar44;
  undefined8 uVar45;
  byte *local_1d8;
  byte ****local_1d0;
  byte *local_1cc;
  byte ****local_1c8;
  undefined4 local_1c4;
  byte ****local_1bc;
  byte *local_1b8;
  undefined4 *local_1b4;
  byte ****local_1b0;
  byte ****local_1a8;
  byte ****local_1a4;
  byte ****ppppbStack_1a0;
  byte ****local_19c;
  byte ****local_198;
  byte ****local_194;
  undefined1 auStack_190 [12];
  int local_184;
  undefined4 *local_180;
  int local_17c;
  int local_178;
  byte ***local_174;
  int local_170;
  undefined1 auStack_16c [12];
  undefined4 local_160;
  byte ****local_15c;
  undefined4 local_158;
  byte ****local_154;
  byte ****local_150;
  byte ***local_14c;
  int local_148;
  byte ****local_140;
  byte ****local_13c;
  byte ****local_138;
  byte ***local_134;
  byte ***local_130;
  byte ****local_12c;
  byte ****local_128;
  byte ****local_124;
  byte ****local_120;
  byte ****local_118;
  byte ****local_114;
  byte ****local_110;
  byte ****local_108;
  byte ****local_104;
  byte ****local_100;
  undefined4 local_f8;
  byte ****local_f4;
  undefined4 local_f0;
  undefined3 uStack_ec;
  byte ****local_e8;
  byte ****local_e4;
  byte ****local_e0;
  byte ****local_dc;
  byte ****local_d8;
  byte ****local_d4;
  undefined4 local_d0;
  byte ****local_cc;
  byte ****local_c8;
  byte ****local_c4;
  byte ****local_c0;
  byte ****local_bc;
  undefined4 local_b4;
  undefined1 local_ac;
  undefined1 local_a8;
  undefined1 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9a;
  undefined1 local_96;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_7e;
  undefined1 local_7a;
  undefined2 local_76;
  undefined1 local_74;
  undefined1 local_70;
  undefined1 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_62;
  undefined1 local_5e;
  undefined2 local_5a;
  undefined1 local_58;
  undefined1 local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_46;
  undefined1 local_42;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined1 local_2e;
  undefined2 local_2d;
  undefined1 local_2b;
  
  pppbVar5 = param_1[3];
  pbVar31 = param_2[9];
  pbVar34 = param_2[10];
  ppppbVar21 = (byte ****)0x0;
  pbVar6 = param_2[0xc];
  pbVar12 = param_2[0xd];
  local_d4 = (byte ****)0x0;
  local_d8 = (byte ****)&DAT_00000004;
  local_dc = (byte ****)0x0;
  local_e0 = (byte ****)0x0;
  local_e4 = (byte ****)&DAT_00000004;
  local_e8 = (byte ****)0x0;
  pbVar8 = pbVar6;
  pbVar26 = pbVar31;
  while (pbVar22 = pbVar26, pbVar22 != pbVar31 + (int)pbVar34 * 8) {
    if (pbVar8 == pbVar6 + (int)pbVar12 * 0x3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018807b4);
    }
    pbVar26 = pbVar8 + 0x3c;
    pbVar39 = pbVar8 + 0x39;
    pbVar8 = pbVar26;
    pbVar26 = pbVar22 + 8;
    if (*pbVar39 != 0) {
      FUN_00fa4788(&local_158,pppbVar5,*(undefined4 *)pbVar22,*(undefined4 *)(pbVar22 + 4));
      ppppbVar37 = local_e0;
      ppppbVar15 = local_150;
      ppppbVar32 = local_154;
      ppppbVar24 = local_158;
      if (local_158 == (byte ****)&DAT_80000000) break;
      pppbVar7 = *(byte ****)(pbVar22 + 4);
      pppbVar36 = *(byte ****)pbVar22;
      ppppbVar20 = ppppbVar21;
      if (local_e0 == local_e8) {
        FUN_00f98f0c(&local_e8);
        ppppbVar20 = local_d4;
      }
      local_e4[(int)ppppbVar37 * 2] = pppbVar36;
      (local_e4 + (int)ppppbVar37 * 2)[1] = pppbVar7;
      local_e0 = (byte ****)((int)ppppbVar37 + 1);
      if (ppppbVar20 == local_dc) {
        FUN_00f98de8(&local_dc);
      }
      ppppbVar21 = (byte ****)((int)ppppbVar20 + 1);
      ppppbVar37 = local_d8 + (int)ppppbVar20 * 3;
      *ppppbVar37 = (byte ***)ppppbVar24;
      ppppbVar37[1] = (byte ***)ppppbVar32;
      ppppbVar37[2] = (byte ***)ppppbVar15;
      local_d4 = ppppbVar21;
    }
  }
  local_1a8 = local_e8;
  local_1a4 = local_e4;
  ppppbStack_1a0 = local_e0;
  local_19c = local_dc;
  local_198 = local_d8;
  local_194 = local_d4;
  ppppbVar21 = (byte ****)param_1[3];
  pbVar8 = param_2[0xe];
  if (pbVar8 == (byte *)0x0) {
    if ((((uint)ppppbVar21[0x51] | (uint)ppppbVar21[0x52]) & 0x10000) != 0) {
      pbVar26 = param_2[0xc];
      iVar9 = (int)param_2[10] * 8;
      iVar28 = (int)param_2[0xd] * 0x3c;
      iVar10 = 0;
      while (iVar9 != 0) {
        if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018807b4);
        }
        pbVar6 = pbVar26 + 0x39;
        iVar9 = iVar9 + -8;
        iVar28 = iVar28 + -0x3c;
        pbVar26 = pbVar26 + 0x3c;
        if (*pbVar6 != 0) {
          iVar10 = iVar10 + 1;
        }
      }
      if (iVar10 == 0) {
        FUN_00f8f414(auStack_190,ppppbVar21,0);
        pbVar26 = (byte *)FUN_00f95a14(0xd,param_1[3],auStack_190);
        goto LAB_00fa6d98;
      }
    }
    if ((((uint)ppppbVar21[0x51] | (uint)ppppbVar21[0x52]) & 0x200) != 0) {
      iVar9 = 0xa0;
      iVar28 = 0x9c;
      if (ppppbVar21[0x26] == (byte ***)0x80000000) {
        iVar9 = 0x120;
        iVar28 = 0x11c;
      }
      ppppbVar24 = *(byte *****)((int)ppppbVar21 + iVar9);
      if ((int)ppppbVar24 < 0) {
        uVar18 = 0;
LAB_00fa5878:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar18,ppppbVar24);
      }
      uVar18 = *(undefined4 *)((int)ppppbVar21 + iVar28);
      if (ppppbVar24 == (byte ****)0x0) {
        ppppbVar32 = (byte ****)0x0;
        ppppbVar15 = (byte ****)&DAT_00000001;
      }
      else {
        ppppbVar15 = (byte ****)thunk_FUN_016d4a50(ppppbVar24);
        if (ppppbVar15 == (byte ****)0x0) {
          uVar18 = 1;
          goto LAB_00fa5878;
        }
        ppppbVar32 = ppppbVar24;
      }
      FUN_016dd1aa(ppppbVar15,uVar18,ppppbVar24);
      ppbVar35 = param_1[3][0x19];
      if (ppbVar35 == (byte **)0x0) {
        local_118 = (byte ****)0x0;
        local_114 = (byte ****)&DAT_00000004;
        local_110 = (byte ****)0x0;
      }
      else {
        ppbVar27 = param_1[3][0x18];
        uVar18 = 0;
        pppbVar5 = (byte ***)ppbVar27[0x48];
        if ((int)pppbVar5 < 0) {
LAB_00fa621c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar18,pppbVar5);
        }
        ppbVar33 = (byte **)ppbVar27[9];
        pbVar8 = ppbVar27[10];
        pbVar26 = ppbVar27[0x47];
        local_1c4 = 0;
        if (pppbVar5 == (byte ***)0x0) {
          pppbVar36 = (byte ***)0x1;
          pppbVar7 = (byte ***)0x0;
        }
        else {
          pppbVar36 = (byte ***)thunk_FUN_016d4a50(pppbVar5);
          pppbVar7 = pppbVar5;
          if (pppbVar36 == (byte ***)0x0) {
            uVar18 = 1;
            goto LAB_00fa621c;
          }
        }
        FUN_016dd1aa(pppbVar36,pbVar26,pppbVar5);
        iVar9 = 0xaaaaaa9;
        pbVar26 = pbVar8;
        if (pbVar8 < (byte *)0x4) {
          pbVar26 = (byte *)0x3;
        }
        if ((byte *)0xaaaaaa9 < pbVar8) {
LAB_00fa6e6c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_1c4,iVar9);
        }
        ppppbVar37 = (byte ****)(pbVar26 + 1);
        iVar9 = (int)ppppbVar37 * 0xc;
        if (iVar9 == 0) {
          uVar45 = 0xaaaaaa900000004;
          ppppbVar37 = (byte ****)0x0;
        }
        else {
          uVar45 = thunk_FUN_016d4a50();
          if ((int)uVar45 == 0) {
            local_1c4 = 4;
            goto LAB_00fa6e6c;
          }
        }
        ppppbVar20 = (byte ****)uVar45;
        *ppppbVar20 = pppbVar7;
        ppppbVar20[1] = pppbVar36;
        iVar9 = 0;
        ppbVar43 = ppbVar27 + 0x5b;
        ppppbVar20[2] = pppbVar5;
        ppbVar13 = ppbVar33 + (int)pbVar8 * 3;
        local_e0 = (byte ****)&DAT_00000001;
        local_e8 = ppppbVar37;
        local_e4 = ppppbVar20;
        uVar3 = uVar45;
        if (ppbVar33 != ppbVar13) goto LAB_00fa6fd8;
LAB_00fa6fe4:
        local_e4 = (byte ****)uVar3;
        uVar45 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),ppppbVar20);
        if (ppbVar43 != ppbVar27 + (int)ppbVar35 * 0x5b) {
          ppbVar33 = ppbVar43 + 0x47;
          ppbVar25 = (byte **)ppbVar43[9];
          ppbVar13 = ppbVar25 + (int)ppbVar43[10] * 3;
          ppbVar11 = ppbVar43 + 0x48;
          ppbVar43 = ppbVar43 + 0x5b;
          iVar28 = iVar9;
          do {
            ppppbVar37 = local_e0;
            pbVar8 = (byte *)((ulonglong)uVar45 >> 0x20);
            pbVar26 = *ppbVar11;
            uVar18 = 0;
            if ((int)pbVar26 < 0) {
LAB_00fa701c:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar18,pbVar8);
            }
            pbVar6 = *ppbVar33;
            if (pbVar26 == (byte *)0x0) {
              pbVar8 = (byte *)0x0;
              iVar10 = 1;
            }
            else {
              iVar10 = thunk_FUN_016d4a50(pbVar26,pbVar8);
              if (iVar10 == 0) {
                uVar18 = 1;
                pbVar8 = pbVar26;
                goto LAB_00fa701c;
              }
              pbVar8 = pbVar26;
            }
            FUN_016dd1aa(iVar10,pbVar6,pbVar26);
            ppppbVar20 = (byte ****)uVar45;
            if (ppppbVar37 == local_e8) {
              FUN_00f991dc(&local_e8,ppppbVar37,
                           ((uint)((int)ppbVar13 - (int)ppbVar25) >> 2) * -0x55555555 + 1,4,0xc);
              ppppbVar20 = local_e4;
            }
            uVar45 = CONCAT44(iVar10,ppppbVar20);
            iVar9 = iVar28 + 0xc;
            local_e0 = (byte ****)((int)ppppbVar37 + 1);
            *(byte **)((int)ppppbVar20 + iVar28 + 0xc) = pbVar8;
            *(int *)((int)ppppbVar20 + iVar28 + 0x10) = iVar10;
            *(byte **)((int)ppppbVar20 + iVar28 + 0x14) = pbVar26;
            ppbVar33 = ppbVar25;
            uVar3 = CONCAT44(iVar10,local_e4);
            if (ppbVar25 == ppbVar13) goto LAB_00fa6fe4;
LAB_00fa6fd8:
            ppbVar11 = ppbVar33 + 1;
            ppbVar25 = ppbVar33 + 3;
            iVar28 = iVar9;
          } while( true );
        }
        local_110 = local_e0;
        local_118 = local_e8;
        local_114 = local_e4;
      }
      local_f8 = (byte ****)param_1[3];
      pppbVar7 = local_f8[0x1e];
      iVar9 = (int)local_f8[0x1f] << 4;
      pppbVar5 = (byte ***)0xffffffff;
      do {
        if (iVar9 == 0) {
          ppppbVar37 = (byte ****)0x0;
          goto LAB_00fa63a4;
        }
        ppbVar35 = *pppbVar7;
        pppbVar29 = pppbVar7 + 1;
        iVar9 = iVar9 + -0x10;
        pppbVar36 = pppbVar7 + 2;
        pppbVar42 = pppbVar7 + 3;
        pppbVar5 = (byte ***)((int)pppbVar5 + 1);
        pppbVar7 = pppbVar7 + 4;
      } while ((ppbVar35 != (byte **)0x81d215be || *pppbVar36 != (byte **)0xd07db95e) ||
               (*pppbVar29 != (byte **)0x4c65521b || *pppbVar42 != (byte **)0x76f4a2ad));
      if (local_f8[0x22] <= pppbVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(pppbVar5,local_f8[0x22],&DAT_01880824);
      }
      ppbVar35 = (local_f8[0x21] + (int)pppbVar5 * 6)[1];
      ppppbVar37 = (byte ****)
                   ((int)local_f8[0x21][(int)pppbVar5 * 6] +
                   ((uint)(ppbVar35[2] + 0xffffffff) & 0xfffffff8) + 8);
      (*(code *)ppbVar35[3])(&local_e8,ppppbVar37);
      if ((local_e8 != (byte ****)0x81d215be || local_e0 != (byte ****)0xd07db95e) ||
          (local_e4 != (byte ****)0x4c65521b || local_dc != (byte ****)0x76f4a2ad)) {
        ppppbVar37 = (byte ****)0x0;
      }
      if (ppppbVar37 == (byte ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
      }
LAB_00fa63a4:
      local_f4 = (byte ****)&DAT_0035dc52;
      if (ppppbVar37 != (byte ****)0x0) {
        local_f4 = ppppbVar37;
      }
      local_f0 = param_1;
      FUN_00fa04ec(&local_108,&local_f8,4,0);
      local_2b = 10;
      local_e8 = (byte ****)0x2;
      local_2d = 0x202;
      local_42 = 3;
      local_46 = 3;
      local_4a = 3;
      local_50 = 3;
      local_54 = 3;
      local_58 = 3;
      local_5e = 3;
      local_62 = 3;
      local_66 = 3;
      local_6c = 3;
      local_70 = 3;
      local_74 = 3;
      local_7a = 3;
      local_7e = 3;
      local_82 = 3;
      local_88 = 3;
      local_8c = 3;
      local_90 = 3;
      local_96 = 3;
      local_9a = 3;
      local_9e = 3;
      local_a4 = 3;
      local_a8 = 3;
      local_ac = 3;
      local_c0 = (byte ****)0x80000001;
      local_c4 = (byte ****)0x0;
      local_c8 = (byte ****)0x4;
      local_cc = (byte ****)0x0;
      local_d0 = 0;
      local_d4 = (byte ****)0x1;
      local_d8 = (byte ****)0x0;
      local_b4 = 0;
      local_3c = 4;
      local_3e = 0;
      local_4c = 0;
      local_5a = 0;
      local_68 = 0;
      local_76 = 0;
      local_84 = 0;
      local_92 = 0;
      local_a0 = 0;
      local_2e = 0;
      pbVar26 = (byte *)thunk_FUN_016d4a50(0xc0);
      if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc0);
      }
      FUN_016dd1aa(pbVar26,&local_e8,0xc0);
      FUN_00f9545c(pbVar26,ppppbVar21);
      local_160._3_1_ = SUB41(local_118,0);
      local_15c._0_3_ = (undefined3)((uint)local_118 >> 8);
      local_15c = (byte ****)CONCAT13((char)local_114,local_15c._0_3_);
      local_158._3_1_ = SUB41(local_110,0);
      local_158 = (byte ****)CONCAT13(local_158._3_1_,(int3)((uint)local_114 >> 8));
      local_154._0_3_ = (undefined3)((uint)local_110 >> 8);
      local_e4 = (byte ****)CONCAT31(local_e4._1_3_,2);
      local_d4 = (byte ****)CONCAT31(local_d4._1_3_,3);
      local_e8 = (byte ****)((uint)local_e8 & 0xffffff00);
      local_d0 = CONCAT31((undefined3)local_160,3);
      local_cc = local_118;
      local_c8 = local_114;
      local_c4 = local_110;
      local_e0 = ppppbVar32;
      local_dc = ppppbVar15;
      local_d8 = ppppbVar24;
      FUN_00f96218(pbVar26,&local_e8);
      if (local_108 != (byte ****)&DAT_80000000) {
        local_e4 = local_108;
        local_e0 = local_104;
        local_dc = local_100;
        local_e8 = (byte ****)CONCAT31(local_e8._1_3_,4);
        FUN_00f959b8(pbVar26,0xf,&local_e8);
      }
      goto LAB_00fa6d98;
    }
  }
  uVar38 = 0;
  local_1b8 = param_2[9];
  pbVar26 = param_2[0xc];
  pbVar31 = pbVar26 + (int)param_2[0xd] * 0x3c;
  pbVar34 = local_1b8 + (int)param_2[10] * 8;
  pbVar12 = pbVar26;
  for (pbVar6 = local_1b8; pbVar6 != pbVar34; pbVar6 = pbVar6 + 8) {
    if (pbVar12 == pbVar31) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018807b4);
    }
    if (pbVar12[0x39] == 0) {
      iVar9 = 0;
    }
    else {
      pppbVar5 = ppppbVar21[0x12];
      uVar18 = *(undefined4 *)pbVar6;
      ppbVar35 = *(byte ***)(pbVar6 + 4);
      pppbVar7 = pppbVar5 + 0x45;
      iVar28 = (int)ppppbVar21[0x13] * 0x134;
      while ((iVar28 != 0 &&
             ((pppbVar5[0x46] != ppbVar35 ||
              (iVar9 = thunk_FUN_016dd50a(*pppbVar7,uVar18,ppbVar35), iVar9 != 0))))) {
        pppbVar5 = pppbVar5 + 0x4d;
        iVar28 = iVar28 + -0x134;
        pppbVar7 = pppbVar7 + 0x4d;
      }
      iVar9 = 0;
      if (iVar28 != 0) {
        iVar9 = 1;
      }
    }
    pbVar12 = pbVar12 + 0x3c;
    uVar38 = iVar9 + uVar38;
  }
  if (1 < uVar38) {
    pbVar6 = local_1b8;
    pbVar12 = pbVar26;
LAB_00fa55d0:
    do {
      pbVar22 = pbVar6;
      if (pbVar22 == pbVar34) break;
      if (pbVar12 == pbVar31) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018807b4);
      }
      pbVar39 = pbVar12 + 0x39;
      pbVar6 = pbVar22 + 8;
      pbVar12 = pbVar12 + 0x3c;
      if (*pbVar39 != 0) {
        pppbVar5 = ppppbVar21[0x12];
        uVar18 = *(undefined4 *)pbVar22;
        ppbVar35 = *(byte ***)(pbVar22 + 4);
        for (iVar9 = (int)ppppbVar21[0x13] * 0x134; iVar9 != 0; iVar9 = iVar9 + -0x134) {
          if ((pppbVar5[0x46] == ppbVar35) &&
             (iVar28 = thunk_FUN_016dd50a(pppbVar5[0x45],uVar18,ppbVar35), iVar28 == 0)) {
            if ((*(byte *)((int)pppbVar5 + 0x11d) & 0x40) == 0) goto LAB_00fa55d0;
            local_158 = (byte ****)0x0;
            local_e4 = (byte ****)&DAT_01880a0c;
            local_e8 = (byte ****)&local_160;
            local_160 = (byte ****)0x0;
            local_dc = (byte ****)0x0;
            local_15c = (byte ****)&DAT_00000001;
            local_e0 = (byte ****)&DAT_60000020;
            iVar9 = FUN_00f9d654(pppbVar5,&local_e8);
            if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_118
                           ,&DAT_01880a24,&DAT_018af130);
            }
            ppppbVar24 = (byte ****)0x0;
            local_108 = local_160;
            local_104 = local_15c;
            local_100 = local_158;
            pppbVar7 = ppppbVar21[0x1e];
            local_f4 = (byte ****)&DAT_00000004;
            iVar9 = (int)ppppbVar21[0x1f] << 4;
            pppbVar5 = (byte ***)0xffffffff;
            local_f0 = (byte ****)0x0;
            local_f8 = (byte ****)0x0;
            goto LAB_00fa56f0;
          }
          pppbVar5 = pppbVar5 + 0x4d;
        }
      }
    } while( true );
  }
LAB_00fa4dd4:
  while (pbVar6 = local_1b8, pbVar6 != pbVar34) {
    if (pbVar26 == pbVar31) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018807b4);
    }
    pbVar12 = pbVar26 + 0x39;
    local_1b8 = pbVar6 + 8;
    pbVar26 = pbVar26 + 0x3c;
    if (*pbVar12 != 0) {
      uVar18 = *(undefined4 *)pbVar6;
      pppbVar7 = ppppbVar21[0x12];
      iVar9 = (int)ppppbVar21[0x13] * 0x134;
      ppbVar35 = *(byte ***)(pbVar6 + 4);
      pppbVar5 = pppbVar7 + 0x45;
      while( true ) {
        if (iVar9 == 0) goto LAB_00fa4dd4;
        if ((pppbVar7[0x46] == ppbVar35) &&
           (iVar28 = thunk_FUN_016dd50a(*pppbVar5,uVar18,ppbVar35), iVar28 == 0)) break;
        pppbVar7 = pppbVar7 + 0x4d;
        iVar9 = iVar9 + -0x134;
        pppbVar5 = pppbVar5 + 0x4d;
      }
      FUN_00fa7748(&local_184,&local_1a8,param_1[3],uVar18,ppbVar35);
      if (local_17c != 0) {
        ppppbVar21 = (byte ****)param_1[3];
        local_c4 = (byte ****)(local_180 + local_17c * 2);
        local_c8 = (byte ****)local_180;
        local_d8 = (byte ****)0x0;
        local_e8 = (byte ****)0x0;
        local_c0 = ppppbVar21;
        FUN_00fa1a38(&local_178,&local_e8);
        local_130 = local_174 + local_170 * 2;
        local_134 = local_174;
        local_12c = ppppbVar21;
        FUN_00f6f444(&local_140,&local_134);
        pppbVar5 = ppppbVar21[0x12];
        uVar18 = *(undefined4 *)pbVar6;
        ppbVar35 = *(byte ***)(pbVar6 + 4);
        iVar9 = (int)ppppbVar21[0x13] * 0x134;
        while( true ) {
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_018809fc);
          }
          if ((pppbVar5[0x46] == ppbVar35) &&
             (iVar28 = thunk_FUN_016dd50a(pppbVar5[0x45],uVar18,ppbVar35), iVar28 == 0)) break;
          pppbVar5 = pppbVar5 + 0x4d;
          iVar9 = iVar9 + -0x134;
        }
        local_148 = local_170;
        local_14c = local_174;
        local_160 = (byte ****)param_2[9];
        local_158 = (byte ****)param_2[0xc];
        local_15c = local_160 + (int)param_2[10] * 2;
        local_154 = (byte ****)((int)local_158 + (int)param_2[0xd] * 0x3c);
        local_150 = ppppbVar21;
        FUN_00f6fe64(&local_128,&local_160);
        local_c0 = local_124;
        local_cc = local_124;
        local_c8 = local_124 + (int)local_120 * 2;
        local_d4 = (byte ****)0x0;
        local_dc = (byte ****)0x0;
        local_e0 = (byte ****)local_170;
        local_e4 = (byte ****)local_174;
        local_e8 = (byte ****)&local_128;
        local_c4 = ppppbVar21;
        local_bc = local_c8;
        FUN_00f6f78c(&local_118,&local_e8);
        FUN_00fa1634(&local_f8,ppppbVar21);
        ppppbVar24 = local_114;
        local_108 = local_f8;
        local_104 = local_f4;
        local_100 = param_1;
        FUN_00fa04ec(auStack_16c,&local_108,local_114,local_110);
        if (local_118 != (byte ****)0x0) {
          thunk_FUN_016d3fb4(ppppbVar24);
        }
        if (local_128 != (byte ****)0x0) {
          thunk_FUN_016d3fb4(local_124);
        }
        local_158 = (byte ****)0x0;
        local_160 = (byte ****)0x0;
        local_dc = (byte ****)0x0;
        local_15c = (byte ****)&DAT_00000001;
        local_e0 = (byte ****)&DAT_60000020;
        local_e4 = (byte ****)&DAT_01880a0c;
        local_e8 = (byte ****)&local_160;
        iVar9 = FUN_00f9d654(pppbVar5,&local_e8);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_118,
                       &DAT_01880a24,&DAT_018af130);
        }
        local_f8 = local_160;
        local_f4 = local_15c;
        local_f0 = local_158;
        local_e0 = local_138;
        local_e4 = local_13c;
        local_e8 = local_140;
        pbVar26 = (byte *)FUN_00f96f50(ppppbVar21,&local_f8,&local_e8,auStack_16c);
        if (local_178 != 0) {
          thunk_FUN_016d3fb4(local_174);
        }
        if (local_184 == 0) goto LAB_00fa6d98;
        ppppbVar21 = (byte ****)local_180;
        goto LAB_00fa6d94;
      }
      if (local_184 != 0) {
        thunk_FUN_016d3fb4(local_180);
      }
    }
  }
  if (pbVar8 != (byte *)0x0) {
    pbVar26 = (byte *)0x0;
  }
  if (pbVar8 == (byte *)0x0 || -1 < (int)(((uint)param_1[3][0x51] | (uint)param_1[3][0x52]) << 0x13)
     ) {
    pbVar12 = param_2[0xc];
    pbVar31 = param_2[0xd];
    pbVar34 = param_2[9];
    pbVar6 = param_2[10];
    pbVar8 = pbVar34;
    pbVar26 = pbVar12;
LAB_00fa4f04:
    while( true ) {
      local_1d8 = pbVar26;
      pbVar22 = pbVar8;
      if (pbVar22 == pbVar34 + (int)pbVar6 * 8) break;
      if (local_1d8 == pbVar12 + (int)pbVar31 * 0x3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018807b4);
      }
      pbVar26 = local_1d8 + 0x3c;
      pbVar8 = pbVar22 + 8;
      if (local_1d8[0x39] != 0) {
        pppbVar5 = param_1[3];
        uVar18 = *(undefined4 *)pbVar22;
        pbVar22 = *(byte **)(pbVar22 + 4);
        ppbVar27 = pppbVar5[0x12];
        iVar28 = (int)pppbVar5[0x13] * 0x134;
        ppbVar35 = ppbVar27;
        iVar9 = iVar28;
        while( true ) {
          if (iVar9 == 0) goto LAB_00fa5364;
          if ((ppbVar35[0x46] == pbVar22) &&
             (iVar10 = thunk_FUN_016dd50a(ppbVar35[0x45],uVar18,pbVar22), iVar10 == 0)) break;
          ppbVar35 = ppbVar35 + 0x4d;
          iVar9 = iVar9 + -0x134;
        }
        local_110 = (byte ****)0x0;
        local_118 = (byte ****)0x0;
        local_114 = (byte ****)&DAT_00000004;
        local_1d0 = (byte ****)thunk_FUN_016d4a50(4);
        if (local_1d0 == (byte ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,4);
        }
        *local_1d0 = (byte ***)(ppbVar35 + 0x45);
        local_100 = (byte ****)&DAT_00000001;
        ppppbVar21 = (byte ****)&DAT_00000004;
        local_108 = (byte ****)&DAT_00000001;
        local_f0 = (byte ****)0x0;
        local_f4 = (byte ****)&DAT_00000004;
        local_1c8 = (byte ****)0x0;
        local_f8 = (byte ****)0x0;
        local_104 = local_1d0;
        do {
          local_100 = (byte ****)((int)local_100 + -1);
          pppbVar5 = local_1d0[(int)local_100];
          for (iVar9 = 0; (int)local_1c8 * 4 != iVar9; iVar9 = iVar9 + 4) {
            if (((byte **)(*(undefined4 **)((int)ppppbVar21 + iVar9))[1] == pppbVar5[1]) &&
               (iVar10 = thunk_FUN_016dd50a(**(undefined4 **)((int)ppppbVar21 + iVar9),*pppbVar5),
               iVar10 == 0)) goto LAB_00fa4ff8;
          }
          if (local_1c8 == local_118) {
            FUN_00f98d28(&local_118);
            ppppbVar21 = local_114;
          }
          ppppbVar21[(int)local_1c8] = pppbVar5;
          local_1c8 = (byte ****)((int)local_1c8 + 1);
          ppbVar35 = ppbVar27;
          local_110 = local_1c8;
          for (iVar9 = iVar28; iVar9 != 0; iVar9 = iVar9 + -0x134) {
            if (((byte **)ppbVar35[0x46] == pppbVar5[1]) &&
               (iVar10 = thunk_FUN_016dd50a(ppbVar35[0x45],*pppbVar5), iVar10 == 0)) {
              pbVar39 = ppbVar35[0x19];
              pbVar22 = pbVar39 + (int)ppbVar35[0x1a] * 0x10;
              goto LAB_00fa5100;
            }
            ppbVar35 = ppbVar35 + 0x4d;
          }
LAB_00fa4ff8:
          ppppbVar15 = local_f0;
          ppppbVar32 = local_f4;
          ppppbVar24 = local_f8;
        } while (local_100 != (byte ****)0x0);
        if (local_108 != (byte ****)0x0) {
          thunk_FUN_016d3fb4(local_104);
        }
        if (local_118 != (byte ****)0x0) {
          thunk_FUN_016d3fb4(local_114);
        }
        ppppbVar21 = ppppbVar32;
        while (ppppbVar21 != ppppbVar32 + (int)ppppbVar15 * 2) {
          while( true ) {
            pppbVar5 = param_1[1];
            pppbVar7 = param_1[2];
            pppbVar36 = *ppppbVar21;
            pppbVar42 = ppppbVar21[1];
            ppppbVar21 = ppppbVar21 + 2;
            if (pppbVar7 == (byte ***)0x0) break;
            iVar9 = (int)pppbVar7 * 0x14;
            pppbVar29 = pppbVar5 + 4;
            while (((byte ***)*pppbVar29 != pppbVar42 ||
                   (iVar28 = thunk_FUN_016dd50a(pppbVar29[-1],pppbVar36,pppbVar42), iVar28 != 0))) {
              iVar9 = iVar9 + -0x14;
              pppbVar29 = pppbVar29 + 5;
              if (iVar9 == 0) goto LAB_00fa5590;
            }
            if (ppppbVar21 == ppppbVar32 + (int)ppppbVar15 * 2) goto LAB_00fa54d4;
          }
LAB_00fa5590:
          if (pppbVar7 == *param_1) {
            FUN_00f98f6c(param_1);
            pppbVar5 = param_1[1];
          }
          param_1[2] = (byte ***)((int)pppbVar7 + 1);
          pppbVar5 = pppbVar5 + (int)pppbVar7 * 5;
          *pppbVar5 = (byte **)0x0;
          pppbVar5[1] = (byte **)0x4;
          pppbVar5[2] = (byte **)0x0;
          pppbVar5[3] = (byte **)pppbVar36;
          pppbVar5[4] = (byte **)pppbVar42;
        }
LAB_00fa54d4:
        if (ppppbVar24 != (byte ****)0x0) {
          thunk_FUN_016d3fb4(ppppbVar32);
        }
      }
    }
    pbVar6 = param_2[0xc];
    local_138 = (byte ****)0x0;
    local_140 = (byte ****)0x0;
    pppbVar5 = param_1[3];
    local_13c = (byte ****)&DAT_00000004;
    pbVar12 = pbVar6 + (int)param_2[0xd] * 0x3c;
    pbVar26 = param_2[9] + (int)param_2[10] * 8;
    pbVar8 = param_2[9];
    do {
      pbVar31 = pbVar8;
      if (pbVar31 == pbVar26) goto LAB_00fa5940;
      if (pbVar6 == pbVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018807b4);
      }
      pbVar34 = pbVar6 + 0x39;
      pbVar8 = pbVar31 + 8;
      pbVar6 = pbVar6 + 0x3c;
      if (*pbVar34 != 0) {
        uVar18 = *(undefined4 *)pbVar31;
        pbVar34 = *(byte **)(pbVar31 + 4);
        ppbVar35 = pppbVar5[0x12];
        for (iVar9 = (int)pppbVar5[0x13] * 0x134; iVar9 != 0; iVar9 = iVar9 + -0x134) {
          if ((ppbVar35[0x46] == pbVar34) &&
             (iVar28 = thunk_FUN_016dd50a(ppbVar35[0x45],uVar18,pbVar34), iVar28 == 0)) {
            if ((*(byte *)((int)ppbVar35 + 0x11d) & 0x40) != 0) goto LAB_00fa5940;
            break;
          }
          ppbVar35 = ppbVar35 + 0x4d;
        }
      }
    } while( true );
  }
  goto LAB_00fa6d98;
LAB_00fa5364:
  ppbVar35 = pppbVar5[0x1b];
  for (iVar9 = (int)pppbVar5[0x1c] * 0x30; iVar9 != 0; iVar9 = iVar9 + -0x30) {
    if ((ppbVar35[10] == pbVar22) &&
       (iVar28 = thunk_FUN_016dd50a(ppbVar35[9],uVar18,pbVar22), iVar28 == 0)) {
      if (ppbVar35[5] != (byte *)0x0) {
        pbVar39 = ppbVar35[4];
        pppbVar5 = param_1[2];
        pbVar22 = pbVar39 + (int)ppbVar35[5] * 8;
        do {
          pppbVar7 = param_1[1];
          ppbVar27 = *(byte ***)pbVar39;
          ppbVar35 = *(byte ***)(pbVar39 + 4);
          if (pppbVar5 != (byte ***)0x0) {
            iVar9 = (int)pppbVar5 * 0x14;
            pppbVar36 = pppbVar7 + 4;
            do {
              if ((*pppbVar36 == ppbVar35) &&
                 (iVar28 = thunk_FUN_016dd50a(pppbVar36[-1],ppbVar27,ppbVar35), iVar28 == 0))
              goto LAB_00fa53f8;
              iVar9 = iVar9 + -0x14;
              pppbVar36 = pppbVar36 + 5;
            } while (iVar9 != 0);
          }
          if (pppbVar5 == *param_1) {
            FUN_00f98f6c(param_1);
            pppbVar7 = param_1[1];
          }
          param_1[2] = (byte ***)((int)pppbVar5 + 1);
          pppbVar7 = pppbVar7 + (int)pppbVar5 * 5;
          *pppbVar7 = (byte **)0x0;
          pppbVar7[1] = (byte **)0x4;
          pppbVar7[2] = (byte **)0x0;
          pppbVar7[3] = ppbVar27;
          pppbVar7[4] = ppbVar35;
          pppbVar5 = (byte ***)((int)pppbVar5 + 1);
LAB_00fa53f8:
          pbVar39 = pbVar39 + 8;
        } while (pbVar39 != pbVar22);
      }
      goto LAB_00fa4f04;
    }
    ppbVar35 = ppbVar35 + 0xc;
  }
  goto LAB_00fa4f04;
LAB_00fa5100:
  pbVar40 = pbVar39;
  if (pbVar39 != pbVar22) {
    do {
      pbVar39 = pbVar40 + 0x10;
      if (local_1d8[0x39] != 0) {
        if (*(int *)pbVar40 == 0) goto LAB_00fa52c0;
        if (*(int *)(local_1d8 + 0x34) != 0) {
          iVar10 = *(int *)(local_1d8 + 0x30);
          iVar9 = iVar10 + *(int *)(local_1d8 + 0x34) * 0xc;
          do {
            iVar19 = *(int *)(iVar10 + 4);
            piVar2 = (int *)(iVar10 + 8);
            iVar10 = iVar10 + 0xc;
            iVar41 = iVar19 + *piVar2 * 0xc;
LAB_00fa51a8:
            if (iVar19 != iVar41) {
              puVar1 = (undefined4 *)(iVar19 + 4);
              iVar16 = *(int *)(iVar19 + 8);
              iVar19 = iVar19 + 0xc;
              if (local_1d8[0x38] != 0) {
                FUN_006008c8(&local_160,*puVar1,iVar16);
                ppppbVar32 = local_158;
                ppppbVar24 = local_15c;
                FUN_006008c8(&local_e8,*(int *)pbVar40,*(int *)(pbVar40 + 4));
                bVar44 = false;
                if (ppppbVar32 == local_e0) {
                  ppppbVar15 = local_e4;
                  ppppbVar37 = ppppbVar24;
                  do {
                    if (ppppbVar32 == (byte ****)0x0) {
                      bVar44 = true;
                      break;
                    }
                    uVar38 = (uint)*(byte *)ppppbVar15;
                    ppppbVar32 = (byte ****)((int)ppppbVar32 + -1);
                    uVar23 = (uint)*(byte *)ppppbVar37;
                    if (uVar38 - 0x41 < 0x1a) {
                      uVar38 = uVar38 | 0x20;
                    }
                    if (uVar23 - 0x41 < 0x1a) {
                      uVar23 = uVar23 | 0x20;
                    }
                    ppppbVar15 = (byte ****)((int)ppppbVar15 + 1);
                    ppppbVar37 = (byte ****)((int)ppppbVar37 + 1);
                  } while (uVar23 == uVar38);
                  if (((uint)local_e8 & 0x7fffffff) == 0) goto LAB_00fa52a0;
LAB_00fa518c:
                  thunk_FUN_016d3fb4();
                  if (((uint)local_160 & 0x7fffffff) != 0) {
LAB_00fa52ac:
                    thunk_FUN_016d3fb4(ppppbVar24);
                    if (bVar44) goto LAB_00fa52c0;
                    goto LAB_00fa51a8;
                  }
                }
                else {
                  if (((uint)local_e8 & 0x7fffffff) != 0) goto LAB_00fa518c;
LAB_00fa52a0:
                  if (((uint)local_160 & 0x7fffffff) != 0) goto LAB_00fa52ac;
                }
                if (bVar44) goto LAB_00fa52c0;
                goto LAB_00fa51a8;
              }
              if ((iVar16 == *(int *)(pbVar40 + 4)) &&
                 (iVar16 = thunk_FUN_016dd50a(*puVar1,*(int *)pbVar40,iVar16), iVar16 == 0))
              goto LAB_00fa52c0;
              goto LAB_00fa51a8;
            }
          } while (iVar10 != iVar9);
        }
      }
      pbVar40 = pbVar39;
      if (pbVar39 == pbVar22) break;
    } while( true );
  }
  goto LAB_00fa4ff8;
LAB_00fa52c0:
  pppbVar5 = *(byte ****)(pbVar40 + 8);
  pppbVar7 = *(byte ****)(pbVar40 + 0xc);
  ppbVar35 = ppbVar27;
  for (iVar9 = iVar28; iVar9 != 0; iVar9 = iVar9 + -0x134) {
    if ((byte ***)ppbVar35[0x46] == pppbVar7) {
      iVar10 = thunk_FUN_016dd50a(ppbVar35[0x45],pppbVar5,pppbVar7);
      ppppbVar24 = local_100;
      if (iVar10 == 0) {
        if (ppbVar35[0x1a] != (byte *)0x0) {
          if (local_100 == local_108) {
            FUN_00f98d28(&local_108);
          }
          local_1d0 = local_104;
          local_104[(int)ppppbVar24] = (byte ***)(ppbVar35 + 0x45);
          local_100 = (byte ****)((int)ppppbVar24 + 1);
        }
        break;
      }
    }
    ppbVar35 = ppbVar35 + 0x4d;
  }
  ppppbVar24 = local_f0;
  if (local_f0 == local_f8) {
    FUN_00f98f0c(&local_f8);
  }
  local_f4[(int)ppppbVar24 * 2] = pppbVar5;
  (local_f4 + (int)ppppbVar24 * 2)[1] = pppbVar7;
  local_f0 = (byte ****)((int)ppppbVar24 + 1);
  goto LAB_00fa5100;
joined_r0x00fa5ba4:
  ppbVar43 = ppbVar27;
  if (ppbVar43 != ppbVar13 + (int)ppbVar33 * 0xc) {
    pbVar12 = ppbVar43[1] + 4;
    ppbVar27 = ppbVar43 + 0xc;
    for (iVar9 = (int)ppbVar43[2] << 3; iVar9 != 0; iVar9 = iVar9 + -8) {
      if ((*(byte **)pbVar12 == pbVar8) &&
         (iVar28 = thunk_FUN_016dd50a(*(int *)(pbVar12 + 0xfffffffc),pbVar6,pbVar8), iVar28 == 0)) {
        FUN_00fa7748(&local_e8,&local_1a8,pppbVar42,ppbVar43[9],ppbVar43[10]);
        if (local_e0 != (byte ****)0x0) goto LAB_00fa5a48;
        if (local_e8 != (byte ****)0x0) {
          thunk_FUN_016d3fb4(local_e4);
        }
        break;
      }
      pbVar12 = pbVar12 + 8;
    }
    goto joined_r0x00fa5ba4;
  }
  pppbVar42 = (byte ***)ppbVar35[0x45];
  pppbVar29 = (byte ***)ppbVar35[0x46];
  if (local_1b0 == local_140) {
    FUN_00f98f0c(&local_140);
    local_1c8 = local_13c;
  }
  local_1c8[(int)local_1b0 * 2] = pppbVar42;
  local_138 = (byte ****)((int)local_1b0 + 1);
  (local_1c8 + (int)local_1b0 * 2)[1] = pppbVar29;
  local_1b0 = local_138;
  if ((*(byte *)((int)ppbVar35 + 0x11d) & 1) == 0) {
    pbVar8 = ppbVar35[6];
    if (ppbVar35[6] <= local_1cc) {
      pbVar8 = local_1cc;
    }
    if (ppbVar35[5] != (byte *)0x0) {
      local_1cc = pbVar8;
    }
  }
  goto LAB_00fa5980;
LAB_00fa5a48:
  if (local_e8 != (byte ****)0x0) {
    thunk_FUN_016d3fb4(local_e4);
  }
  goto LAB_00fa5980;
  while( true ) {
    iVar28 = FUN_00f9b1f0(param_2,*ppppbVar24,ppppbVar24[1],&DAT_0056a778);
    iVar9 = iVar9 + -8;
    ppppbVar24 = ppppbVar24 + 2;
    if (iVar28 != 0) break;
LAB_00fa5ad0:
    if (iVar9 == 0) {
      if (local_e8 != (byte ****)0x0) {
        thunk_FUN_016d3fb4(ppppbVar21);
      }
      pppbVar42 = (byte ***)ppbVar35[9];
      pppbVar29 = (byte ***)ppbVar35[10];
      if (local_1b0 == local_140) {
        FUN_00f98f0c(&local_140);
      }
      local_1c8 = local_13c;
      local_13c[(int)local_1b0 * 2] = pppbVar42;
      local_138 = (byte ****)((int)local_1b0 + 1);
      (local_13c + (int)local_1b0 * 2)[1] = pppbVar29;
      local_1b0 = local_138;
      goto LAB_00fa5980;
    }
  }
  if (local_e8 != (byte ****)0x0) {
    thunk_FUN_016d3fb4(ppppbVar21);
  }
  goto LAB_00fa5980;
LAB_00fa5940:
  pppbVar7 = param_1[2];
  pppbVar36 = param_1[1];
  local_1b0 = (byte ****)0x0;
  local_1c8 = (byte ****)&DAT_00000004;
  local_1cc = (byte *)0x0;
  pppbVar5 = pppbVar36;
LAB_00fa5980:
  pppbVar42 = pppbVar5;
  if (pppbVar42 != pppbVar36 + (int)pppbVar7 * 5) {
    iVar9 = FUN_00f9b1f0(param_2,pppbVar42[3],pppbVar42[4],&DAT_0056a778);
    pppbVar5 = pppbVar42 + 5;
    if (iVar9 == 0) {
      ppbVar33 = pppbVar42[3];
      ppbVar27 = pppbVar42[4];
      pppbVar42 = param_1[3];
      ppbVar35 = pppbVar42[0x12];
      for (iVar9 = (int)pppbVar42[0x13] * 0x134; iVar9 != 0; iVar9 = iVar9 + -0x134) {
        if ((byte **)ppbVar35[0x46] == ppbVar27) {
          pbVar8 = ppbVar35[0x45];
          iVar28 = thunk_FUN_016dd50a(pbVar8,ppbVar33,ppbVar27);
          if (iVar28 == 0) {
            if (pbVar31 != pbVar26) goto LAB_00fa5980;
            FUN_00fa7748(&local_e8,&local_1a8,pppbVar42,pbVar8,ppbVar27);
            if (local_e0 != (byte ****)0x0) goto LAB_00fa5a48;
            if (local_e8 != (byte ****)0x0) {
              thunk_FUN_016d3fb4(local_e4);
            }
            pbVar6 = ppbVar35[0x45];
            pbVar8 = ppbVar35[0x46];
            ppbVar33 = pppbVar42[0x1c];
            ppbVar13 = pppbVar42[0x1b];
            ppbVar27 = ppbVar13;
            goto joined_r0x00fa5ba4;
          }
        }
        ppbVar35 = ppbVar35 + 0x4d;
      }
      ppbVar35 = pppbVar42[0x1b];
      iVar9 = (int)pppbVar42[0x1c] * 0x30;
      while( true ) {
        if (iVar9 == 0) break;
        if (((byte **)ppbVar35[10] == ppbVar27) &&
           (iVar28 = thunk_FUN_016dd50a(ppbVar35[9],ppbVar33,ppbVar27), iVar28 == 0)) {
          FUN_00f8edf8(&local_e8,pppbVar42,ppbVar35 + 9);
          ppppbVar21 = local_e4;
          iVar9 = (int)local_e0 << 3;
          ppppbVar24 = local_e4;
          goto LAB_00fa5ad0;
        }
        ppbVar35 = ppbVar35 + 0xc;
        iVar9 = iVar9 + -0x30;
      }
    }
    goto LAB_00fa5980;
  }
  ppbVar27 = param_1[3][0x13];
  ppbVar33 = param_1[3][0x12];
  ppbVar35 = ppbVar33;
LAB_00fa5d04:
  ppbVar13 = ppbVar35;
  if (ppbVar13 != ppbVar33 + (int)ppbVar27 * 0x4d) {
    iVar9 = FUN_00f9b1f0(param_2,ppbVar13[0x45],ppbVar13[0x46],&DAT_0056a778);
    ppbVar35 = ppbVar13 + 0x4d;
    if (iVar9 == 0) {
      if (ppbVar13[0x1d] == (byte *)0x0) {
        bVar17 = 0;
      }
      else {
        iVar9 = (int)ppbVar13[0x1d] << 4;
        bVar17 = 0;
        pbVar8 = ppbVar13[0x1c] + 8;
        do {
          local_e8 = *(byte *****)pbVar8;
          local_e4 = *(byte *****)(pbVar8 + 4);
          bVar4 = FUN_00f9b1f0(param_2,*(undefined4 *)(pbVar8 + 0xfffffff8),
                               *(undefined4 *)(pbVar8 + 0xfffffffc),&local_e8);
          pbVar8 = pbVar8 + 0x10;
          bVar17 = bVar4 | bVar17;
          iVar9 = iVar9 + -0x10;
        } while (iVar9 != 0);
      }
      pbVar8 = ppbVar13[0x1f];
      iVar9 = (int)ppbVar13[0x20] << 4;
      do {
        if (iVar9 == 0) {
          bVar17 = ppbVar13[0x20] != (byte *)0x0 | bVar17;
          pbVar8 = ppbVar13[0x23];
          pbVar6 = ppbVar13[0x26];
          goto joined_r0x00fa5df8;
        }
        local_e8 = *(byte *****)(pbVar8 + 8);
        local_e4 = *(byte *****)(pbVar8 + 0xc);
        iVar28 = FUN_00f9b1f0(param_2,*(undefined4 *)pbVar8,*(undefined4 *)(pbVar8 + 4),&local_e8);
        iVar9 = iVar9 + -0x10;
        pbVar8 = pbVar8 + 0x10;
      } while (iVar28 != 0);
      pbVar8 = ppbVar13[0x23];
      pbVar6 = ppbVar13[0x26];
joined_r0x00fa5df8:
      if (pbVar8 == (byte *)0x0) {
        if (pbVar6 != (byte *)0x0) goto LAB_00fa5e04;
      }
      else {
        if (pbVar6 != (byte *)0x0) {
LAB_00fa5e04:
          pbVar8 = ppbVar13[0x25];
          iVar9 = (int)pbVar6 << 3;
          do {
            if (iVar9 == 0) goto LAB_00fa5e78;
            iVar28 = FUN_00f9b1f0(param_2,*(undefined4 *)pbVar8,*(undefined4 *)(pbVar8 + 4),
                                  &DAT_0056a778);
            iVar9 = iVar9 + -8;
            pbVar8 = pbVar8 + 8;
          } while (iVar28 != 0);
          pbVar8 = ppbVar13[0x23];
        }
        pbVar6 = ppbVar13[0x22];
        iVar9 = (int)pbVar8 << 3;
        do {
          if (iVar9 == 0) {
            if (pbVar31 == pbVar26) goto LAB_00fa5ea8;
            goto LAB_00fa5d04;
          }
          iVar28 = FUN_00f9b1f0(param_2,*(undefined4 *)pbVar6,*(undefined4 *)(pbVar6 + 4),
                                &DAT_0056a778);
          iVar9 = iVar9 + -8;
          pbVar6 = pbVar6 + 8;
        } while (iVar28 == 0);
      }
LAB_00fa5e78:
      if ((pbVar31 == pbVar26 & bVar17) != 0) {
LAB_00fa5ea8:
        pppbVar5 = (byte ***)ppbVar13[0x45];
        pppbVar7 = (byte ***)ppbVar13[0x46];
        if (local_1b0 == local_140) {
          FUN_00f98f0c(&local_140);
        }
        iVar9 = (int)local_1b0 * 2;
        local_13c[iVar9] = pppbVar5;
        local_1b0 = (byte ****)((int)local_1b0 + 1);
        (local_13c + iVar9)[1] = pppbVar7;
        local_138 = local_1b0;
        if ((*(byte *)((int)ppbVar13 + 0x11d) & 1) == 0) {
          pbVar8 = ppbVar13[6];
          if (ppbVar13[6] <= local_1cc) {
            pbVar8 = local_1cc;
          }
          if (ppbVar13[5] != (byte *)0x0) {
            local_1cc = pbVar8;
          }
        }
      }
    }
    goto LAB_00fa5d04;
  }
  pppbVar5 = param_1[3];
  if (((((uint)pppbVar5[0x51] | (uint)pppbVar5[0x52]) & 0x10) == 0) &&
     (ppbVar35 = pppbVar5[0x13], ppbVar35 != (byte **)0x0)) {
    ppbVar33 = pppbVar5[0x12];
    ppbVar27 = ppbVar33;
    do {
      pbVar8 = ppbVar27[0x48];
      ppbVar13 = ppbVar27 + 0x4d;
      bVar44 = pbVar8 == (byte *)0x0;
      if (bVar44) {
        pbVar8 = ppbVar27[0xd];
      }
      if (((bVar44 && pbVar8 == &DAT_00110000) &&
          (iVar9 = FUN_00f9b1f0(param_2,ppbVar27[0x45],ppbVar27[0x46],&DAT_0056a778), iVar9 == 0))
         && ((ppbVar27[5] != (byte *)0x1 || (ppbVar27[6] < local_1cc)))) {
        pppbVar7 = (byte ***)ppbVar27[0x45];
        pppbVar5 = (byte ***)ppbVar27[0x46];
        if (local_1b0 == local_140) {
          FUN_00f98f0c(&local_140);
        }
        iVar9 = (int)local_1b0 * 2;
        local_13c[iVar9] = pppbVar7;
        local_1b0 = (byte ****)((int)local_1b0 + 1);
        (local_13c + iVar9)[1] = pppbVar5;
        local_138 = local_1b0;
      }
      ppbVar27 = ppbVar13;
    } while (ppbVar13 != ppbVar33 + (int)ppbVar35 * 0x4d);
  }
  ppppbVar24 = local_13c;
  ppppbVar21 = local_140;
  if (local_1b0 == (byte ****)0x0) {
    if (local_140 != (byte ****)0x0) {
      thunk_FUN_016d3fb4(local_13c);
    }
    pbVar26 = (byte *)0x0;
    goto LAB_00fa6d98;
  }
  pppbVar5 = param_1[3];
  ppbVar27 = pppbVar5[0x1e];
  iVar9 = (int)pppbVar5[0x1f] << 4;
  ppbVar35 = (byte **)0xffffffff;
  do {
    if (iVar9 == 0) {
      pppbVar7 = (byte ***)0x0;
      goto LAB_00fa6760;
    }
    pbVar8 = *ppbVar27;
    ppbVar33 = ppbVar27 + 1;
    ppbVar13 = ppbVar27 + 2;
    ppbVar43 = ppbVar27 + 3;
    ppbVar27 = ppbVar27 + 4;
    iVar9 = iVar9 + -0x10;
    ppbVar35 = (byte **)((int)ppbVar35 + 1);
  } while ((pbVar8 != (byte *)0x81d215be || *ppbVar13 != (byte *)0xd07db95e) ||
           (*ppbVar33 != (byte *)0x4c65521b || *ppbVar43 != (byte *)0x76f4a2ad));
  if (pppbVar5[0x22] <= ppbVar35) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(ppbVar35,pppbVar5[0x22],&DAT_01880824);
  }
  iVar9 = *(int *)((int)(pppbVar5[0x21] + (int)ppbVar35 * 6) + 4);
  pppbVar7 = (byte ***)
             ((int)pppbVar5[0x21][(int)ppbVar35 * 6] + (*(int *)(iVar9 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar9 + 0xc))(&local_e8,pppbVar7);
  if ((local_e8 != (byte ****)0x81d215be || local_e0 != (byte ****)0xd07db95e) ||
      (local_e4 != (byte ****)0x4c65521b || local_dc != (byte ****)0x76f4a2ad)) {
    pppbVar7 = (byte ***)0x0;
  }
  if (pppbVar7 == (byte ***)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00fa6760:
  local_130 = (byte ***)&DAT_0035dc52;
  if (pppbVar7 != (byte ***)0x0) {
    local_130 = pppbVar7;
  }
  local_134 = pppbVar5;
  local_12c = param_1;
  FUN_00fa0620(&local_e8,&local_134,ppppbVar24,local_1b0,param_2);
  ppppbVar15 = local_e4;
  ppppbVar32 = local_e8;
  local_158 = local_e8;
  ppppbVar14 = local_e4 + (int)local_e0 * 3;
  local_160 = local_e4;
  ppppbVar37 = local_e4;
  ppppbVar20 = local_e4;
  if (local_e0 != (byte ****)0x0) {
    iVar9 = (int)local_e0 * 0xc;
    iVar28 = 0;
    local_154 = ppppbVar14;
    do {
      pbVar8 = (byte *)((int)ppppbVar15 + iVar28);
      iVar19 = *(int *)pbVar8;
      uVar18 = *(undefined4 *)(pbVar8 + 4);
      local_f4 = (byte ****)&DAT_00000001;
      local_f0 = (byte ****)0x0;
      local_f8 = (byte ****)0x0;
      local_dc = (byte ****)0x0;
      local_e0 = (byte ****)&DAT_60000020;
      local_e4 = (byte ****)&DAT_01880994;
      local_e8 = (byte ****)&local_f8;
      iVar10 = FUN_00faace8(&local_e8,uVar18,*(undefined4 *)(pbVar8 + 8));
      if (iVar10 != 0) {
        local_15c = (byte ****)(pbVar8 + 0xc);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_118,
                     &DAT_018809ac,&DAT_018af130);
      }
      local_108 = local_f8;
      local_104 = local_f4;
      local_100 = local_f0;
      if (iVar19 != 0) {
        thunk_FUN_016d3fb4(uVar18);
      }
      iVar28 = iVar28 + 0xc;
      *(byte *****)pbVar8 = local_108;
      *(byte *****)(pbVar8 + 4) = local_104;
      *(byte *****)(pbVar8 + 8) = local_100;
    } while (iVar9 != iVar28);
    ppppbVar20 = (byte ****)((int)ppppbVar15 + iVar28);
    ppppbVar37 = ppppbVar14;
  }
  ppppbVar30 = ppppbVar37 + 1;
  local_154 = (byte ****)0x4;
  local_15c = (byte ****)&DAT_00000004;
  local_160 = (byte ****)&DAT_00000004;
  local_158 = (byte ****)0x0;
  for (iVar9 = ((uint)((int)ppppbVar14 - (int)ppppbVar37) >> 2) * -0x55555555; iVar9 != 0;
      iVar9 = iVar9 + -1) {
    if (ppppbVar30[-1] != (byte ***)0x0) {
      thunk_FUN_016d3fb4(*ppppbVar30);
    }
    ppppbVar30 = ppppbVar30 + 3;
  }
  pbVar26 = param_2[10];
  pbVar31 = param_2[9];
  local_120 = (byte ****)(((uint)((int)ppppbVar20 - (int)ppppbVar15) >> 2) * -0x55555555);
  pbVar12 = param_2[0xc];
  local_124 = ppppbVar15;
  local_128 = ppppbVar32;
  pbVar6 = pbVar12 + (int)param_2[0xd] * 0x3c;
  pbVar8 = pbVar31;
  if (pbVar31 != (byte *)0x0) {
    do {
      pbVar34 = pbVar8;
      if (pbVar34 == pbVar31 + (int)pbVar26 * 8) break;
      if (pbVar12 == pbVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018807b4);
      }
      pbVar22 = pbVar12 + 0x39;
      pbVar8 = pbVar34 + 8;
      pbVar12 = pbVar12 + 0x3c;
      if (*pbVar22 != 0) {
        pppbVar7 = *(byte ****)pbVar34;
        pppbVar36 = *(byte ****)(pbVar34 + 4);
        param_2 = pppbVar5[0x12];
        for (iVar9 = (int)pppbVar5[0x13] * 0x134; iVar9 != 0; iVar9 = iVar9 + -0x134) {
          if (((byte ***)param_2[0x46] == pppbVar36) &&
             (iVar28 = thunk_FUN_016dd50a(param_2[0x45],pppbVar7,pppbVar36), iVar28 == 0)) {
            if (((uint)param_2[0x47] & 4) == 0) {
              local_1bc = ppppbVar24;
              ppppbVar32 = local_1b0;
              goto LAB_00fa69ec;
            }
            break;
          }
          param_2 = param_2 + 0x4d;
        }
      }
    } while( true );
  }
  pbVar8 = (byte *)0x0;
  pppbVar7 = *ppppbVar24;
  pppbVar36 = ppppbVar24[1];
  local_1bc = ppppbVar24 + 2;
  ppppbVar32 = (byte ****)((int)local_1b0 * 8 - 8U >> 3);
LAB_00fa69ec:
  ppppbVar15 = ppppbVar32;
  if (ppppbVar32 < &DAT_00000004) {
    ppppbVar15 = (byte ****)0x3;
  }
  uVar18 = 0;
  if (ppppbVar32 != (byte ****)0x1fffffff) {
    ppppbVar15 = (byte ****)((int)ppppbVar15 + 1);
    param_2 = (byte **)((int)ppppbVar15 * 8);
    if (param_2 < (byte **)0x7ffffffd) {
      if (param_2 == (byte **)0x0) {
        local_1b4 = (undefined4 *)&DAT_00000004;
        ppppbVar15 = (byte ****)0x0;
      }
      else {
        local_1b4 = (undefined4 *)thunk_FUN_016d4a50(param_2);
        if (local_1b4 == (undefined4 *)0x0) {
          uVar18 = 4;
          goto LAB_00fa6a38;
        }
      }
      *local_1b4 = pppbVar7;
      local_1b4[1] = pppbVar36;
      local_e0 = (byte ****)&DAT_00000001;
      local_e8 = ppppbVar15;
      local_e4 = (byte ****)local_1b4;
      do {
        ppppbVar32 = local_e0;
        if (pbVar8 != (byte *)0x0) {
          do {
            pbVar34 = pbVar8;
            if (pbVar34 == pbVar31 + (int)pbVar26 * 8) break;
            if (pbVar12 == pbVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018807b4);
            }
            pbVar22 = pbVar12 + 0x39;
            pbVar8 = pbVar34 + 8;
            pbVar12 = pbVar12 + 0x3c;
            if (*pbVar22 != 0) {
              pppbVar36 = *(byte ****)pbVar34;
              ppbVar35 = pppbVar5[0x12];
              pppbVar7 = *(byte ****)(pbVar34 + 4);
              for (iVar9 = (int)pppbVar5[0x13] * 0x134; iVar9 != 0; iVar9 = iVar9 + -0x134) {
                if (((byte ***)ppbVar35[0x46] == pppbVar7) &&
                   (iVar28 = thunk_FUN_016dd50a(ppbVar35[0x45],pppbVar36,pppbVar7), iVar28 == 0)) {
                  if (((uint)ppbVar35[0x47] & 4) == 0) goto LAB_00fa6b60;
                  break;
                }
                ppbVar35 = ppbVar35 + 0x4d;
              }
            }
          } while( true );
        }
        if (local_1bc == ppppbVar24 + (int)local_1b0 * 2) {
          if (ppppbVar21 != (byte ****)0x0) {
            thunk_FUN_016d3fb4(ppppbVar24);
          }
          ppppbVar21 = local_e4;
          ppppbVar24 = local_e8;
          local_118 = local_128;
          local_114 = local_124;
          local_110 = local_120;
          FUN_00fa04ec(&local_108,&local_134,local_e4,ppppbVar32);
          local_2b = 9;
          local_c8 = (byte ****)&DAT_00000004;
          local_3c = 4;
          local_e8 = (byte ****)0x2;
          local_c4 = (byte ****)0x0;
          local_cc = (byte ****)0x0;
          local_d0 = 0;
          local_d8 = (byte ****)0x0;
          local_b4 = 0;
          local_3e = 0;
          local_42 = 3;
          local_46 = 3;
          local_4a = 3;
          local_4c = 0;
          local_50 = 3;
          local_54 = 3;
          local_58 = 3;
          local_5a = 0;
          local_5e = 3;
          local_62 = 3;
          local_66 = 3;
          local_68 = 0;
          local_6c = 3;
          local_70 = 3;
          local_74 = 3;
          local_76 = 0;
          local_7a = 3;
          local_7e = 3;
          local_82 = 3;
          local_84 = 0;
          local_88 = 3;
          local_8c = 3;
          local_90 = 3;
          local_92 = 0;
          local_96 = 3;
          local_9a = 3;
          local_9e = 3;
          local_a0 = 0;
          local_2e = 0;
          local_a4 = 3;
          local_a8 = 3;
          local_ac = 3;
          local_d4 = (byte ****)&DAT_00000001;
          local_2d = 0x202;
          local_c0 = (byte ****)0x80000001;
          pbVar26 = (byte *)thunk_FUN_016d4a50(0xc0);
          if (pbVar26 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc0);
          }
          FUN_016dd1aa(pbVar26,&local_e8,0xc0);
          FUN_00f9545c(pbVar26,pppbVar5);
          local_e8 = (byte ****)CONCAT31(local_e8._1_3_,1);
          local_f0._3_1_ = SUB41(local_120,0);
          local_f0 = (byte ****)CONCAT13(local_f0._3_1_,(int3)((uint)local_124 >> 8));
          uStack_ec = (undefined3)((uint)local_120 >> 8);
          local_f8._3_1_ = SUB41(local_128,0);
          local_f4._0_3_ = (undefined3)((uint)local_128 >> 8);
          local_f4 = (byte ****)CONCAT13((char)local_124,local_f4._0_3_);
          local_e4 = (byte ****)CONCAT31((undefined3)local_f8,3);
          local_e0 = local_128;
          local_dc = local_124;
          local_d8 = local_120;
          FUN_00f96a9c(pbVar26,&local_e8);
          if (local_108 != (byte ****)&DAT_80000000) {
            local_e4 = local_108;
            local_e0 = local_104;
            local_dc = local_100;
            local_e8 = (byte ****)CONCAT31(local_e8._1_3_,4);
            FUN_00f959b8(pbVar26,0xf,&local_e8);
          }
          if (ppppbVar24 != (byte ****)0x0) {
LAB_00fa6d94:
            thunk_FUN_016d3fb4(ppppbVar21);
          }
          goto LAB_00fa6d98;
        }
        pppbVar36 = *local_1bc;
        pbVar8 = (byte *)0x0;
        pppbVar7 = local_1bc[1];
        local_1bc = local_1bc + 2;
LAB_00fa6b60:
        if (ppppbVar32 == local_e8) {
          FUN_00f991dc(&local_e8,ppppbVar32,
                       ((uint)((int)(ppppbVar24 + (int)local_1b0 * 2) - (int)local_1bc) >> 3) + 1,4,
                       8);
          local_1b4 = local_e4;
        }
        local_1b4[(int)ppppbVar32 * 2] = pppbVar36;
        local_e0 = (byte ****)((int)ppppbVar32 + 1);
        (local_1b4 + (int)ppppbVar32 * 2)[1] = pppbVar7;
      } while( true );
    }
  }
LAB_00fa6a38:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar18,param_2);
  while( true ) {
    ppbVar35 = *pppbVar7;
    pppbVar42 = pppbVar7 + 1;
    pppbVar36 = pppbVar7 + 2;
    pppbVar29 = pppbVar7 + 3;
    pppbVar7 = pppbVar7 + 4;
    iVar9 = iVar9 + -0x10;
    pppbVar5 = (byte ***)((int)pppbVar5 + 1);
    if ((ppbVar35 == (byte **)0x81d215be && *pppbVar36 == (byte **)0xd07db95e) &&
        (*pppbVar42 == (byte **)0x4c65521b && *pppbVar29 == (byte **)0x76f4a2ad)) break;
LAB_00fa56f0:
    if (iVar9 == 0) goto LAB_00fa5794;
  }
  if (ppppbVar21[0x22] <= pppbVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(pppbVar5,ppppbVar21[0x22],&DAT_01880824);
  }
  ppbVar35 = (ppppbVar21[0x21] + (int)pppbVar5 * 6)[1];
  ppppbVar24 = (byte ****)
               ((int)ppppbVar21[0x21][(int)pppbVar5 * 6] +
               ((uint)(ppbVar35[2] + 0xffffffff) & 0xfffffff8) + 8);
  (*(code *)ppbVar35[3])(&local_e8,ppppbVar24);
  if ((local_e8 != (byte ****)0x81d215be || local_e0 != (byte ****)0xd07db95e) ||
      (local_e4 != (byte ****)0x4c65521b || local_dc != (byte ****)0x76f4a2ad)) {
    ppppbVar24 = (byte ****)0x0;
  }
  if (ppppbVar24 == (byte ****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00fa5794:
  local_e4 = (byte ****)&DAT_0035dc52;
  if (ppppbVar24 != (byte ****)0x0) {
    local_e4 = ppppbVar24;
  }
  local_e8 = ppppbVar21;
  local_e0 = param_1;
  FUN_00fa04ec(&local_160,&local_e8,4,0);
  pbVar26 = (byte *)FUN_00f96f50(ppppbVar21,&local_108,&local_f8,&local_160);
LAB_00fa6d98:
  if (local_1a8 != (byte ****)0x0) {
    thunk_FUN_016d3fb4(local_1a4);
  }
  ppppbVar21 = local_198;
  ppppbVar32 = local_198 + 1;
  for (ppppbVar24 = local_194; ppppbVar24 != (byte ****)0x0;
      ppppbVar24 = (byte ****)((int)ppppbVar24 + -1)) {
    if (ppppbVar32[-1] != (byte ***)0x0) {
      thunk_FUN_016d3fb4(*ppppbVar32);
    }
    ppppbVar32 = ppppbVar32 + 3;
  }
  if (local_19c != (byte ****)0x0) {
    thunk_FUN_016d3fb4(ppppbVar21);
  }
  return pbVar26;
}

