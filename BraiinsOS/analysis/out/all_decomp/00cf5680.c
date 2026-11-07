// FUN_00cf5680 @ 00cf5680 size=11516 calls_out=39 calls_in=0
// strings: no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor | no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor | no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor | BUG: Missing chip MCR func! | BUG: Missing chip MCR func! | no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor

/* WARNING: Type propagation algorithm not settling */

void FUN_00cf5680(uint *param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar5;
  uint *puVar6;
  uint *puVar7;
  uint **ppuVar8;
  uint *puVar9;
  uint *puVar10;
  uint **ppuVar11;
  undefined4 *puVar12;
  double *pdVar13;
  undefined4 *puVar14;
  int iVar15;
  code *pcVar16;
  undefined *puVar17;
  code *pcVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  uint **ppuVar28;
  undefined8 *puVar29;
  undefined *puVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint **ppuVar34;
  int *piVar35;
  uint **ppuVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  uint uVar40;
  undefined **ppuVar41;
  undefined4 *puVar42;
  uint *puVar43;
  int iVar44;
  uint uVar45;
  uint *puVar46;
  uint **ppuVar47;
  uint *puVar48;
  uint uVar49;
  uint uVar50;
  uint *puVar51;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  bool bVar52;
  bool bVar53;
  uint in_fpscr;
  undefined4 uVar54;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double in_d1;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined8 uVar61;
  undefined4 *local_1bc;
  uint local_1b8;
  int local_1a4;
  undefined4 local_19c;
  undefined *local_174;
  undefined *local_16c;
  code *local_15c;
  uint local_158;
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  uint **local_144;
  uint *local_140;
  int local_13c;
  uint *local_138;
  uint local_134;
  code *local_130;
  uint *local_12c;
  uint *local_124;
  uint *local_120;
  int local_11c;
  uint **local_114;
  uint *local_110;
  int local_10c;
  uint *local_108;
  int local_104;
  uint *local_100;
  uint *local_fc;
  int local_f8;
  undefined4 local_f4;
  uint *local_f0;
  code *local_ec;
  int local_e8;
  uint *local_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint local_d4;
  uint *local_d0;
  int *local_cc;
  uint *local_c0;
  code *local_bc;
  uint *local_b8;
  uint local_b4;
  uint *local_b0;
  undefined4 local_ac;
  uint *local_a8;
  uint local_a4;
  uint *local_a0;
  uint *local_98;
  int iStack_94;
  int iStack_90;
  uint local_8c;
  undefined *local_88;
  undefined4 local_84;
  uint *local_80;
  code *local_7c;
  undefined **local_78;
  undefined4 *local_74;
  uint *local_70;
  code *local_6c;
  
  FUN_00cf88e0(&local_120);
  puVar6 = (uint *)*param_3;
  iVar19 = param_3[1];
  iVar26 = param_3[2];
  if (puVar6 == (uint *)0x0) {
    iVar26 = 0;
  }
  puVar46 = (uint *)(uint)(puVar6 != (uint *)0x0);
  local_10c = 0;
  local_114 = (uint **)0x0;
  local_ac = 0;
  local_bc = (code *)0x0;
  local_c0 = puVar46;
  local_b8 = puVar6;
  local_b4 = iVar19;
  local_b0 = puVar46;
  local_a8 = puVar6;
  local_a4 = iVar19;
  local_a0 = (uint *)iVar26;
LAB_00cf5730:
  uVar61 = FUN_00c38c8c(&local_c0);
  if ((uint *)uVar61 != (uint *)0x0) {
    puVar43 = (uint *)*(uint *)uVar61;
    if (local_114 != (uint **)0x0) {
      puVar7 = local_110;
      ppuVar36 = local_114;
      do {
        uVar45 = (uint)*(ushort *)((int)ppuVar36 + 0xb6);
        iVar27 = uVar45 << 2;
        iVar44 = 1;
        do {
          iVar15 = iVar44;
          if (iVar27 == 0) goto LAB_00cf57ac;
          iVar27 = iVar27 + -4;
          bVar53 = puVar43 < ppuVar36[iVar15];
          bVar52 = !bVar53 && puVar43 != ppuVar36[iVar15];
          iVar44 = iVar15 + 1;
        } while ((char)(bVar52 - bVar53) == '\x01');
        uVar45 = iVar15 - 1;
        if (bVar52 == bVar53) goto LAB_00cf5814;
LAB_00cf57ac:
        if (puVar7 == (uint *)0x0) goto LAB_00cf5840;
        puVar7 = (uint *)((int)puVar7 + -1);
        ppuVar36 = (uint **)ppuVar36[uVar45 + 0x2e];
      } while( true );
    }
    ppuVar36 = (uint **)thunk_FUN_016d4a50(0xb8);
    if (ppuVar36 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xb8);
    }
    uVar45 = 0;
    *ppuVar36 = (uint *)0x0;
    *(undefined2 *)((int)ppuVar36 + 0xb6) = 1;
    ppuVar36[0xc] = (uint *)0x0;
    ppuVar36[0xd] = (uint *)0x4;
    ppuVar36[0xe] = (uint *)0x0;
    ppuVar36[1] = puVar43;
    local_110 = (uint *)0x0;
    local_114 = ppuVar36;
    goto LAB_00cf5808;
  }
  local_140 = local_110;
  local_13c = local_10c;
  if (local_114 == (uint **)0x0) {
    local_13c = 0;
  }
  local_100 = (uint *)0x0;
  bVar52 = local_114 != (uint **)0x0;
  local_108 = (uint *)0x0;
  local_16c = &DAT_018ac46c;
  dVar55 = -0.0;
  local_174 = &DAT_00413115;
  local_144 = (uint **)0x0;
  ppuVar36 = local_114;
LAB_00cf5fec:
  if (local_13c != 0) {
    if (!bVar52) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a9ff4);
    }
    if (local_144 == (uint **)0x0) {
      puVar43 = (uint *)0x0;
      local_144 = ppuVar36;
      for (; local_140 != (uint *)0x0; local_140 = (uint *)((int)local_140 + -1)) {
        local_144 = (uint **)local_144[0x2e];
      }
      ppuVar36 = (uint **)0x0;
      ppuVar8 = local_144;
      if (*(short *)((int)local_144 + 0xb6) != 0) goto LAB_00cf607c;
    }
    else {
      ppuVar8 = local_144;
      puVar43 = local_140;
      if (local_140 < (uint *)(uint)*(ushort *)((int)local_144 + 0xb6)) goto LAB_00cf607c;
    }
    do {
      ppuVar8 = (uint **)*local_144;
      if (ppuVar8 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018aa004);
      }
      puVar43 = (uint *)(uint)*(ushort *)(local_144 + 0x2d);
      ppuVar36 = (uint **)((int)ppuVar36 + 1);
      local_144 = ppuVar8;
    } while ((uint *)(uint)*(ushort *)((int)ppuVar8 + 0xb6) <= puVar43);
LAB_00cf607c:
    if (ppuVar36 == (uint **)0x0) {
      local_140 = (uint *)((int)puVar43 + 1);
      local_144 = ppuVar8;
    }
    else {
      ppuVar28 = ppuVar8 + (int)((int)puVar43 + 0x2f);
      do {
        local_144 = (uint **)*ppuVar28;
        ppuVar36 = (uint **)((int)ppuVar36 + -1);
        ppuVar28 = local_144 + 0x2e;
      } while (ppuVar36 != (uint **)0x0);
      local_140 = (uint *)0x0;
    }
    local_13c = local_13c + -1;
    puVar20 = *(uint **)(param_2 + 0x288);
    local_12c = *(uint **)(param_2 + 0x28c);
    puVar10 = ppuVar8[(int)puVar43 * 3 + 0xd] + (int)ppuVar8[(int)puVar43 * 3 + 0xe] * 2;
    puVar7 = ppuVar8[(int)puVar43 * 3 + 0xd];
LAB_00cf6124:
    do {
      puVar9 = puVar7;
      if (puVar9 == puVar10) {
        puVar9 = (uint *)0x0;
        local_138 = (uint *)0x0;
        local_130 = (code *)&DAT_00000004;
        goto LAB_00cf63f4;
      }
      puVar7 = puVar9 + 2;
      if (puVar20 != (uint *)0x0) {
        uVar33 = *(uint *)*puVar9;
        uVar45 = ((uint *)*puVar9)[1];
        puVar22 = puVar20;
        iVar27 = (int)local_12c;
        do {
          uVar21 = 0xffffffff;
          iVar44 = (uint)*(ushort *)((int)puVar22 + 0x166) << 3;
          puVar48 = puVar22;
          do {
            uVar49 = (uint)*(ushort *)((int)puVar22 + 0x166);
            if (iVar44 == 0) goto joined_r0x00cf61dc;
            uVar49 = *puVar48;
            uVar31 = puVar48[1];
            cVar5 = (uVar33 >= uVar49 && uVar33 != uVar49) - (uVar33 < uVar49);
            iVar44 = iVar44 + -8;
            if (uVar33 == uVar49) {
              cVar5 = (uVar45 >= uVar31 && uVar45 != uVar31) - (uVar45 < uVar31);
            }
            uVar21 = uVar21 + 1;
            puVar48 = puVar48 + 2;
          } while (cVar5 == '\x01');
          uVar49 = uVar21;
          if (cVar5 == '\0') {
            dVar56 = *(double *)(puVar22 + uVar21 * 6 + 0x18);
            uVar45 = in_fpscr & 0xfffffff | (uint)(dVar56 < 0.0) << 0x1f |
                     (uint)(dVar56 == 0.0) << 0x1e;
            in_fpscr = uVar45 | (uint)NAN(dVar56) << 0x1c;
            bVar3 = (byte)(uVar45 >> 0x18);
            if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) break;
            local_15c = (code *)thunk_FUN_016d4a50(0x10);
            if (local_15c == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,0x10);
            }
            *(uint **)local_15c = puVar9;
            local_b8 = (uint *)&DAT_00000001;
            local_c0 = (uint *)&DAT_00000004;
            local_bc = local_15c;
            goto LAB_00cf6278;
          }
joined_r0x00cf61dc:
          if (iVar27 == 0) goto LAB_00cf61f0;
          iVar27 = iVar27 + -1;
          puVar22 = (uint *)puVar22[uVar49 + 0x5a];
        } while( true );
      }
    } while( true );
  }
  iVar27 = *(int *)(param_2 + 0x288);
  uVar25 = 0;
  uVar45 = *(uint *)(param_2 + 0x290);
  if (iVar27 == 0) {
    uVar45 = 0;
  }
  puVar43 = (uint *)(uint)(iVar27 != 0);
  uVar33 = uVar45 * 8;
  bVar53 = 0x1ffffffe < uVar45;
  bVar52 = uVar45 == 0x1fffffff;
  if (uVar45 < 0x20000000) {
    bVar53 = 0x7ffffff7 < uVar33;
    bVar52 = uVar33 == 0x7ffffff8;
  }
  if (bVar53 && !bVar52) {
LAB_00cf7174:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar25,uVar33);
  }
  uVar25 = *(undefined4 *)(param_2 + 0x28c);
  uVar21 = 0;
  if (uVar33 == 0) {
    puVar24 = (undefined8 *)&DAT_00000008;
    local_150 = (uint *)0x0;
  }
  else {
    puVar24 = (undefined8 *)thunk_FUN_016d4a50(uVar33);
    local_150 = (uint *)uVar45;
    if (puVar24 == (undefined8 *)0x0) {
      uVar25 = 8;
      goto LAB_00cf7174;
    }
  }
  local_ac = 0;
  local_bc = (code *)0x0;
  puVar29 = puVar24;
  local_c0 = puVar43;
  local_b8 = (uint *)iVar27;
  local_b4 = uVar25;
  local_b0 = puVar43;
  local_a8 = (uint *)iVar27;
  local_a4 = uVar25;
  local_a0 = (uint *)uVar45;
  while( true ) {
    uVar61 = FUN_00c38a38(&local_c0);
    iVar27 = (int)((ulonglong)uVar61 >> 0x20);
    if ((int)uVar61 == 0 || iVar27 == 0) break;
    uVar21 = uVar21 + 1;
    *puVar29 = *(undefined8 *)(iVar27 + 8);
    puVar29 = puVar29 + 1;
  }
  if (uVar21 >> 1 == 0) {
    if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0,0,&DAT_018773b0);
    }
  }
  else if (uVar21 < 0x15) {
    FUN_00b5d758(puVar24,uVar21);
  }
  else {
    FUN_00cdab4c(puVar24,uVar21);
  }
  uVar45 = *(uint *)(param_2 + 0x288);
  uVar25 = 0;
  puVar43 = *(uint **)(param_2 + 0x290);
  if (uVar45 == 0) {
    puVar43 = (uint *)0x0;
  }
  puVar7 = (uint *)(uint)(uVar45 != 0);
  uVar33 = (int)puVar43 * 0x10;
  bVar53 = (uint *)0xffffffe < puVar43;
  bVar52 = puVar43 == (uint *)0xfffffff;
  if (puVar43 < (uint *)0x10000000) {
    bVar53 = 0x7ffffff7 < uVar33;
    bVar52 = uVar33 == 0x7ffffff8;
  }
  if (bVar53 && !bVar52) {
LAB_00cf7260:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar25,uVar33);
  }
  uVar31 = *(uint *)(param_2 + 0x28c);
  uVar49 = 0;
  dVar55 = (double)puVar24[uVar21 >> 1];
  if (uVar33 == 0) {
    uVar21 = 8;
    puVar10 = (uint *)0x0;
  }
  else {
    uVar21 = thunk_FUN_016d4a50(uVar33);
    puVar10 = puVar43;
    if (uVar21 == 0) {
      uVar25 = 8;
      goto LAB_00cf7260;
    }
  }
  local_ac = 0;
  local_bc = (code *)0x0;
  puVar37 = (undefined4 *)(uVar21 + 4);
  local_c0 = puVar7;
  local_b8 = (uint *)uVar45;
  local_b4 = uVar31;
  local_b0 = puVar7;
  local_a8 = (uint *)uVar45;
  local_a4 = uVar31;
  local_a0 = puVar43;
  while( true ) {
    uVar61 = FUN_00c38a38(&local_c0);
    puVar14 = (undefined4 *)uVar61;
    if (puVar14 == (undefined4 *)0x0) break;
    uVar61 = *(undefined8 *)((ulonglong)uVar61 >> 0x20);
    uVar49 = uVar49 + 1;
    uVar25 = puVar14[1];
    puVar37[-1] = *puVar14;
    *puVar37 = uVar25;
    *(undefined8 *)(puVar37 + 1) = uVar61;
    puVar37 = puVar37 + 4;
  }
  if (uVar49 == 0) {
    uVar25 = 0;
    local_f4 = 0;
    local_fc = (uint *)0x0;
    if (puVar10 != (uint *)0x0) {
      uVar25 = thunk_FUN_016d3fb4(uVar21);
    }
  }
  else {
    if (uVar49 != 1) {
      if (uVar49 < 0x15) {
        FUN_00b5d908(uVar21,uVar49);
      }
      else {
        FUN_00cdafc0(uVar21,uVar49);
      }
    }
    local_c0 = puVar10;
    local_bc = (code *)uVar21;
    local_b8 = (uint *)uVar49;
    uVar25 = FUN_00c3e348(&local_fc,&local_c0);
  }
  uVar61 = thunk_FUN_016de0ee(uVar25,0x2c0);
  puVar43 = (uint *)((int)uVar61 + (int)((ulonglong)uVar61 >> 0x20));
  if ((char)puVar43[4] == '\0') {
    FUN_015f62e4(&local_c0);
    *puVar43 = (uint)local_c0;
    puVar43[1] = (uint)local_bc;
    puVar43[2] = (uint)local_b8;
    puVar43[3] = local_b4;
    *(undefined1 *)(puVar43 + 4) = 1;
  }
  puVar7 = local_108;
  local_e0 = *puVar43;
  uStack_dc = puVar43[1];
  local_d4 = puVar43[3];
  *puVar43 = local_e0 + 1;
  puVar43[1] = uStack_dc + (0xfffffffe < local_e0);
  local_d8 = puVar43[2];
  local_ec = (code *)0x0;
  local_e8 = 0;
  local_e4 = (uint *)0x0;
  local_f0 = &DAT_005674cc;
  iVar27 = *param_3;
  iVar44 = param_3[1];
  local_ac = 0;
  local_bc = (code *)0x0;
  local_154 = (uint *)0x3c4674;
  local_c0 = puVar46;
  local_b8 = puVar6;
  local_b4 = iVar19;
  local_b0 = puVar46;
  local_a8 = puVar6;
  local_a4 = iVar19;
  local_a0 = (uint *)iVar26;
LAB_00cf75b8:
  uVar61 = FUN_00c38c8c(&local_c0);
  local_124 = (uint *)uVar61;
  if (local_124 != (uint *)0x0) {
    if (puVar7 == (uint *)0x0) {
LAB_00cf839c:
      local_144 = (uint **)0x16;
      puVar17 = &DAT_018773c0;
LAB_00cf81d4:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(local_154,local_144,puVar17);
    }
    uVar45 = *local_124;
    puVar6 = puVar7;
    iVar26 = local_104;
    while( true ) {
      uVar33 = (uint)*(ushort *)((int)puVar6 + 0x8a);
      iVar19 = uVar33 << 2;
      iVar15 = 0x17;
      do {
        iVar32 = iVar15;
        if (iVar19 == 0) goto LAB_00cf7634;
        iVar19 = iVar19 + -4;
        bVar53 = uVar45 < puVar6[iVar32];
        bVar52 = !bVar53 && uVar45 != puVar6[iVar32];
        iVar15 = iVar32 + 1;
      } while ((char)(bVar52 - bVar53) == '\x01');
      if (bVar52 == bVar53) break;
      uVar33 = iVar32 - 0x17;
LAB_00cf7634:
      if (iVar26 == 0) goto LAB_00cf839c;
      iVar26 = iVar26 + -1;
      puVar6 = (uint *)puVar6[uVar33 + 0x24];
    }
    puVar46 = *(uint **)(param_2 + 0x288);
    local_144 = (uint **)0x16;
    if (puVar46 == (uint *)0x0) {
LAB_00cf83b4:
      local_154 = (uint *)0x356c8b;
      local_144 = (uint **)0x1b;
      puVar17 = &DAT_018773d0;
      goto LAB_00cf81d4;
    }
    uVar33 = local_124[1];
    iVar26 = *(int *)(param_2 + 0x28c);
    dVar56 = *(double *)(puVar6 + (iVar32 + -0x17) * 2);
    while( true ) {
      uVar49 = 0xffffffff;
      uVar21 = (uint)*(ushort *)((int)puVar46 + 0x166);
      iVar19 = uVar21 << 3;
      puVar6 = puVar46;
      do {
        if (iVar19 == 0) goto LAB_00cf76f0;
        uVar31 = *puVar6;
        uVar40 = puVar6[1];
        cVar5 = (uVar45 >= uVar31 && uVar45 != uVar31) - (uVar45 < uVar31);
        if (uVar45 == uVar31) {
          cVar5 = (uVar33 >= uVar40 && uVar33 != uVar40) - (uVar33 < uVar40);
        }
        iVar19 = iVar19 + -8;
        uVar49 = uVar49 + 1;
        puVar6 = puVar6 + 2;
      } while (cVar5 == '\x01');
      uVar21 = uVar49;
      if (cVar5 == '\0') break;
LAB_00cf76f0:
      if (iVar26 == 0) goto LAB_00cf83b4;
      iVar26 = iVar26 + -1;
      puVar46 = (uint *)puVar46[uVar21 + 0x5a];
    }
    if (local_120 == (uint *)0x0) {
      puVar17 = &DAT_018773e0;
      goto LAB_00cf81d4;
    }
    dVar57 = *(double *)((int)((ulonglong)uVar61 >> 0x20) + 8);
    pdVar13 = (double *)(puVar46 + uVar49 * 6 + 0x16);
    puVar6 = local_120;
    iVar26 = local_11c;
    while( true ) {
      uVar21 = (uint)*(ushort *)((int)puVar6 + 0xb6);
      uVar31 = 0xffffffff;
      iVar19 = uVar21 << 3;
      puVar43 = puVar6;
      do {
        if (iVar19 == 0) goto LAB_00cf77a0;
        uVar40 = *puVar43;
        uVar50 = puVar43[1];
        cVar5 = (uVar45 >= uVar40 && uVar45 != uVar40) - (uVar45 < uVar40);
        iVar19 = iVar19 + -8;
        if (uVar45 == uVar40) {
          cVar5 = (uVar33 >= uVar50 && uVar33 != uVar50) - (uVar33 < uVar50);
        }
        uVar31 = uVar31 + 1;
        puVar43 = puVar43 + 2;
      } while (cVar5 == '\x01');
      uVar21 = uVar31;
      if (cVar5 == '\0') break;
LAB_00cf77a0:
      if (iVar26 == 0) {
        puVar17 = &DAT_018773e0;
        goto LAB_00cf81d4;
      }
      iVar26 = iVar26 + -1;
      puVar6 = (uint *)puVar6[uVar21 + 0x2e];
    }
    if (iVar27 == 0) {
      puVar17 = &DAT_018773f0;
      goto LAB_00cf81d4;
    }
    iVar26 = iVar44;
    iVar19 = iVar27;
    while( true ) {
      uVar31 = 0xffffffff;
      uVar21 = (uint)*(ushort *)(iVar19 + 0x10e);
      puVar6 = (uint *)(iVar19 + 0xb0);
      iVar15 = uVar21 << 3;
      do {
        if (iVar15 == 0) goto LAB_00cf7844;
        uVar40 = puVar6[1];
        uVar50 = *puVar6;
        cVar5 = (uVar45 >= uVar50 && uVar45 != uVar50) - (uVar45 < uVar50);
        iVar15 = iVar15 + -8;
        if (uVar45 == uVar50) {
          cVar5 = (uVar33 >= uVar40 && uVar33 != uVar40) - (uVar33 < uVar40);
        }
        uVar31 = uVar31 + 1;
        puVar6 = puVar6 + 2;
      } while (cVar5 == '\x01');
      uVar21 = uVar31;
      if (cVar5 == '\0') break;
LAB_00cf7844:
      if (iVar26 == 0) {
        puVar17 = &DAT_018773f0;
        goto LAB_00cf81d4;
      }
      iVar26 = iVar26 + -1;
      iVar19 = *(int *)(iVar19 + uVar21 * 4 + 0x110);
    }
    dVar59 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(iVar19 + uVar31 * 0x10),(byte)(in_fpscr >> 0x16) & 3
                               );
    uVar25 = *(undefined4 *)(*(int *)(param_2 + 0x204) + 0x3c);
    iVar26 = *(int *)(*(int *)(param_2 + 0x204) + 0x40);
    dVar59 = dVar59 / 1000000.0;
    uVar45 = SUB84(dVar57,0) ^ (uint)((ulonglong)dVar57 >> 0x20);
    uVar45 = uVar45 ^ uVar45 >> 0x10;
    uVar45 = uVar45 ^ uVar45 >> 8;
    uVar45 = uVar45 ^ uVar45 >> 4;
    uVar45 = uVar45 ^ uVar45 >> 2;
    dVar60 = *(double *)(puVar46 + uVar49 * 6 + 0x18);
    in_fpscr = in_fpscr & 0xfffffff;
    dVar58 = dVar55;
    if (((uVar45 ^ uVar45 >> 1) & 1) == 0) {
      dVar58 = dVar60;
    }
    if (dVar60 + -0.15 <= dVar57) {
      uVar45 = in_fpscr | (uint)(dVar56 < 0.0) << 0x1f | (uint)(dVar56 == 0.0) << 0x1e;
      bVar3 = (byte)(uVar45 >> 0x18);
      if ((!(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == NAN(dVar56)) &&
         (uVar45 = in_fpscr, dVar57 < dVar58)) {
        dVar56 = dVar59 * *pdVar13;
        dVar59 = dVar59 - in_d1;
        goto LAB_00cf7940;
      }
      in_fpscr = uVar45 & 0xfffffff;
      if ((dVar56 < 0.0) &&
         (in_fpscr = in_fpscr | (uint)(dVar57 < dVar58) << 0x1f | (uint)(dVar57 == dVar58) << 0x1e,
         bVar3 = (byte)(in_fpscr >> 0x18),
         !(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == (NAN(dVar57) || NAN(dVar58)))) {
        dVar56 = dVar59 * *pdVar13;
        dVar59 = dVar59 + in_d1;
        goto LAB_00cf7940;
      }
    }
    else {
      dVar56 = dVar59 * *pdVar13;
      dVar59 = dVar59 - in_d1 * 10.0;
LAB_00cf7940:
      *pdVar13 = dVar56 / dVar59;
    }
    in_fpscr = in_fpscr & 0xfffffff;
    pdVar13 = (double *)&DAT_00cf7868;
    if (dVar57 < dVar60 + -0.15) {
      pdVar13 = (double *)&DAT_00cf7870;
    }
    uVar54 = FUN_016d5622(SUB84(dVar60 * (1.0 - *pdVar13) + dVar57 * *pdVar13,0));
    *(ulonglong *)(puVar46 + uVar49 * 6 + 0x18) = CONCAT44(extraout_s1_00,uVar54);
    if (iVar26 == 6) {
      iVar26 = thunk_FUN_016dd50a(uVar25,&DAT_0034fa20,6);
      dVar56 = 0.1;
      if ((iVar26 != 0) && (iVar26 = thunk_FUN_016dd50a(uVar25,&DAT_0034fa26,6), iVar26 != 0))
      goto LAB_00cf79c0;
    }
    else {
LAB_00cf79c0:
      dVar56 = (double)CONCAT44(extraout_s1_00,uVar54) + -0.15;
    }
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar57 < dVar56) {
      uVar33 = *local_124;
      uVar21 = local_124[1];
      uVar45 = FUN_00c54f90(local_e0,uStack_dc,local_d8,local_d4,uVar33,uVar21);
      if (local_e8 == 0) {
        FUN_00c5ce08(&local_f0,&local_e0);
      }
      bVar52 = false;
      iVar26 = 0;
      uVar49 = uVar45;
      do {
        uVar49 = (uint)local_ec & uVar49;
        uVar40 = *(uint *)((int)local_f0 + uVar49);
        uVar31 = uVar40 ^ (uVar45 >> 0x19) * 0x1010101;
        uVar31 = ~uVar31 & 0x80808080 & uVar31 + 0xfefefeff;
        while (uVar31 != 0) {
          uVar50 = uVar49 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                           (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >> 3) &
                   (uint)local_ec;
          uVar31 = uVar31 - 1 & uVar31;
          if ((uVar33 == local_f0[uVar50 * -2 + -2]) && (uVar21 == local_f0[uVar50 * -2 + -1]))
          goto LAB_00cf75b8;
        }
        uVar31 = uVar40 & 0x80808080;
        if (bVar52) {
LAB_00cf7520:
          if ((uVar31 & uVar40 << 1) != 0) goto LAB_00cf7548;
          bVar52 = true;
        }
        else {
          if (uVar31 != 0) {
            local_124 = (uint *)(uVar49 + ((uint)LZCOUNT((uVar40 & 0x80) << 0x18 |
                                                         (uVar31 >> 8 & 0xff) << 0x10 |
                                                         (uVar31 >> 0x10 & 0xff) << 8 |
                                                         uVar31 >> 0x18) >> 3) & (uint)local_ec);
            goto LAB_00cf7520;
          }
          bVar52 = false;
        }
        iVar26 = iVar26 + 4;
        uVar49 = iVar26 + uVar49;
      } while( true );
    }
    goto LAB_00cf75b8;
  }
  iVar26 = *(int *)(param_2 + 0x288);
  uVar45 = *(uint *)(param_2 + 0x290);
  uVar25 = 0;
  if (iVar26 == 0) {
    uVar45 = 0;
  }
  puVar6 = (uint *)(uint)(iVar26 != 0);
  uVar33 = uVar45 * 0x10;
  bVar53 = 0xffffffe < uVar45;
  bVar52 = uVar45 == 0xfffffff;
  if (uVar45 < 0x10000000) {
    bVar53 = 0x7ffffff7 < uVar33;
    bVar52 = uVar33 == 0x7ffffff8;
  }
  if (bVar53 && !bVar52) {
LAB_00cf7a6c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar25,uVar33);
  }
  uVar21 = 0;
  uVar25 = *(undefined4 *)(param_2 + 0x28c);
  if (uVar33 == 0) {
    local_124 = (uint *)0x8;
    local_134 = 0;
  }
  else {
    local_124 = (uint *)thunk_FUN_016d4a50(uVar33);
    if (local_124 == (uint *)0x0) {
      uVar25 = 8;
      goto LAB_00cf7a6c;
    }
    local_134 = uVar45;
  }
  puVar46 = local_fc;
  local_ac = 0;
  local_bc = (code *)0x0;
  local_c0 = puVar6;
  local_b8 = (uint *)iVar26;
  local_b4 = uVar25;
  local_b0 = puVar6;
  local_a8 = (uint *)iVar26;
  local_a4 = uVar25;
  local_a0 = (uint *)uVar45;
  while( true ) {
    uVar61 = FUN_00c38a38(&local_c0);
    puVar6 = (uint *)uVar61;
    if (puVar6 == (uint *)0x0) break;
    if (puVar46 == (uint *)0x0) {
LAB_00cf83f4:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor"
                   ,0x16,&DAT_01870ad4);
    }
    uVar45 = *puVar6;
    uVar33 = puVar6[1];
    dVar55 = *(double *)((ulonglong)uVar61 >> 0x20);
    puVar6 = puVar46;
    iVar26 = local_f8;
    while( true ) {
      uVar49 = 0xffffffff;
      iVar19 = (uint)*(ushort *)((int)puVar6 + 0xb6) << 3;
      puVar43 = puVar6;
      do {
        if (iVar19 == 0) {
          uVar49 = (uint)*(ushort *)((int)puVar6 + 0xb6);
          goto LAB_00cf7be8;
        }
        uVar31 = *puVar43;
        uVar40 = puVar43[1];
        cVar5 = (uVar45 >= uVar31 && uVar45 != uVar31) - (uVar45 < uVar31);
        if (uVar45 == uVar31) {
          cVar5 = (uVar33 >= uVar40 && uVar33 != uVar40) - (uVar33 < uVar40);
        }
        iVar19 = iVar19 + -8;
        uVar49 = uVar49 + 1;
        puVar43 = puVar43 + 2;
      } while (cVar5 == '\x01');
      if (cVar5 == '\0') break;
LAB_00cf7be8:
      if (iVar26 == 0) goto LAB_00cf83f4;
      iVar26 = iVar26 + -1;
      puVar6 = (uint *)puVar6[uVar49 + 0x2e];
    }
    dVar57 = *(double *)(puVar6 + uVar49 * 2 + 0x16);
    puVar6 = (uint *)((int)local_124 + uVar21 * 0x10);
    *puVar6 = uVar45;
    uVar21 = uVar21 + 1;
    puVar6[1] = uVar33;
    dVar56 = 0.0;
    if (0.0 < dVar57) {
      dVar56 = ((dVar55 - dVar57) / dVar57) * 100.0;
    }
    *(double *)(puVar6 + 2) = dVar56;
  }
  if (uVar21 < 2) {
    puVar6 = local_124;
    if (uVar21 != 0) {
      puVar6 = (uint *)((int)local_124 + 0x10);
    }
  }
  else {
    if (uVar21 < 0x15) {
      FUN_00b5e584(local_124,uVar21);
    }
    else {
      FUN_00cda118(local_124,uVar21);
    }
    iVar26 = 0x30;
    if (uVar21 == 2) {
      iVar26 = 0x20;
    }
    puVar6 = (uint *)((int)local_124 + iVar26);
  }
  puVar46 = local_100;
  if (puVar7 == (uint *)0x0) {
    puVar46 = (uint *)0x0;
  }
  puVar10 = (uint *)(uint)(puVar7 != (uint *)0x0);
  iVar26 = (int)puVar46 * 0xc;
  puVar43 = (uint *)0x0;
  if ((uint *)0xaaaaaaa < puVar46) {
LAB_00cf7c4c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(puVar43,iVar26);
  }
  uVar45 = 0;
  if (iVar26 == 0) {
    piVar35 = (int *)&DAT_00000004;
  }
  else {
    piVar35 = (int *)thunk_FUN_016d4a50(iVar26);
    puVar43 = puVar46;
    if (piVar35 == (int *)0x0) {
      puVar43 = (uint *)0x4;
      goto LAB_00cf7c4c;
    }
  }
  iVar26 = (int)puVar6 - (int)local_124;
  puVar20 = (uint *)&DAT_0000000a;
  local_a4 = local_104;
  local_a8 = puVar7;
  local_b8 = puVar7;
  local_b4 = local_104;
  local_ac = 0;
  local_bc = (code *)0x0;
  local_d0 = puVar43;
  local_cc = piVar35;
  local_c0 = puVar10;
  local_b0 = puVar10;
  local_a0 = puVar46;
  while( true ) {
    uVar61 = FUN_00c39398(&local_c0);
    puVar46 = local_e4;
    pcVar16 = local_ec;
    if ((uint)uVar61 == 0) break;
    local_84 = 10;
    local_88 = &DAT_0034f689;
    if (0.0 < *(double *)((ulonglong)uVar61 >> 0x20)) {
      local_88 = &DAT_0034f693;
    }
    local_74 = &DAT_0157d360;
    local_7c = FUN_00cd6d9c;
    local_8c = (uint)uVar61;
    local_80 = &local_8c;
    local_78 = &local_88;
    FUN_00600d2c(&local_98,&DAT_00585fcb,&local_80);
    uVar45 = uVar45 + 1;
    *piVar35 = (int)local_98;
    piVar35[1] = iStack_94;
    piVar35[2] = iStack_90;
    piVar35 = piVar35 + 3;
  }
  local_80 = local_d0;
  local_7c = (code *)local_cc;
  uVar33 = uVar45;
  if (local_ec != (code *)0x0) {
    puVar20 = local_f0 + (int)local_ec * -2 + -2;
    uVar33 = (uint)((int)local_ec * 9 == -0xd);
  }
  local_78 = (undefined **)uVar45;
  if (local_e4 == (uint *)0x0) {
    if ((uVar33 & 1) == 0 && local_ec != (code *)0x0) {
      thunk_FUN_016d3fb4(puVar20);
    }
    pcVar16 = (code *)&DAT_00000004;
    puVar46 = (uint *)0x0;
    puVar43 = (uint *)0x0;
LAB_00cf804c:
    pcVar18 = local_7c;
    if (local_124 != puVar6) {
      do {
        iVar26 = iVar26 + -0x10;
      } while (iVar26 != 0);
    }
    param_1[1] = (uint)pcVar16;
    param_1[2] = (uint)puVar46;
    piVar35 = (int *)((int)local_7c + 4);
    *param_1 = (uint)puVar43;
    for (ppuVar41 = local_78; ppuVar41 != (undefined **)0x0;
        ppuVar41 = (undefined **)((int)ppuVar41 - 1)) {
      if (piVar35[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar35);
      }
      piVar35 = piVar35 + 3;
    }
    if (local_80 != (uint *)0x0) {
      thunk_FUN_016d3fb4(pcVar18);
    }
    if (local_134 != 0) {
      thunk_FUN_016d3fb4(local_124);
    }
    FUN_00c48338(&local_fc);
    if (local_150 != (uint *)0x0) {
      thunk_FUN_016d3fb4(puVar24);
    }
    FUN_00c48f0c(&local_108);
    FUN_00c4849c(&local_114);
    FUN_00c48338(&local_120);
    return;
  }
  uVar45 = *local_f0;
  puVar7 = local_f0;
  puVar43 = local_f0;
  while( true ) {
    puVar43 = puVar43 + 1;
    if ((uVar45 & 0x80808080) != 0x80808080) break;
    uVar45 = *puVar43;
    puVar7 = puVar7 + -8;
  }
  iVar19 = (int)local_e4 - 1;
  uVar25 = 0;
  puVar10 = local_e4;
  if (iVar19 == -1) {
    puVar10 = (uint *)0xffffffff;
  }
  puVar9 = puVar10;
  if (puVar10 < (uint *)0x5) {
    puVar9 = (uint *)0x4;
  }
  bVar53 = (uint *)0x1ffffffe < puVar10;
  bVar52 = puVar10 == (uint *)0x1fffffff;
  uVar21 = (int)puVar9 * 8;
  if (puVar10 < (uint *)0x20000000) {
    bVar53 = 0x7ffffffb < uVar21;
    bVar52 = uVar21 == 0x7ffffffc;
  }
  if (!bVar53 || bVar52) {
    uVar49 = uVar45 & 0x80808080 ^ 0x80808080;
    uVar45 = LZCOUNT(uVar49 << 0x18 | (uVar49 >> 8 & 0xff) << 0x10 | (uVar49 >> 0x10 & 0xff) << 8 |
                     uVar49 >> 0x18) & 0x38;
    uVar25 = *(undefined4 *)((int)puVar7 + (-8 - uVar45));
    uVar54 = *(undefined4 *)((int)puVar7 + (-4 - uVar45));
    pcVar18 = (code *)thunk_FUN_016d4a50(uVar21);
    if (pcVar18 != (code *)0x0) {
      *(undefined4 *)pcVar18 = uVar25;
      *(undefined4 *)((int)pcVar18 + 4) = uVar54;
      uVar49 = uVar49 - 1 & uVar49;
      puVar10 = (uint *)0x1;
      local_c0 = puVar9;
      local_bc = pcVar18;
      while (local_b8 = puVar10, iVar19 != 0) {
        puVar9 = puVar43;
        if (uVar49 == 0) {
          do {
            puVar43 = puVar9 + 1;
            uVar45 = *puVar9;
            puVar7 = puVar7 + -8;
            puVar9 = puVar43;
          } while ((uVar45 & 0x80808080) == 0x80808080);
          uVar49 = uVar45 & 0x80808080 ^ 0x80808080;
        }
        iVar27 = iVar19 + -1;
        uVar45 = LZCOUNT(uVar49 << 0x18 | (uVar49 >> 8 & 0xff) << 0x10 |
                         (uVar49 >> 0x10 & 0xff) << 8 | uVar49 >> 0x18) & 0x38;
        uVar25 = *(undefined4 *)((int)puVar7 + (-8 - uVar45));
        uVar54 = *(undefined4 *)((int)puVar7 + (-4 - uVar45));
        if (puVar10 == local_c0) {
          if (iVar27 == -1) {
            iVar19 = -1;
          }
          FUN_00d653ec(&local_c0,puVar10,iVar19,4,8);
          pcVar18 = local_bc;
        }
        uVar49 = uVar49 - 1 & uVar49;
        iVar19 = (int)puVar10 * 2;
        *(undefined4 *)((int)pcVar18 + iVar19 * 4) = uVar25;
        puVar10 = (uint *)((int)puVar10 + 1);
        ((undefined4 *)((int)pcVar18 + iVar19 * 4))[1] = uVar54;
        iVar19 = iVar27;
      }
      if ((uVar33 & 1) == 0 && pcVar16 != (code *)0x0) {
        thunk_FUN_016d3fb4(puVar20);
      }
      pcVar16 = local_bc;
      puVar43 = local_c0;
      if (puVar46 != (uint *)0x0) {
        iVar19 = (int)puVar46 << 3;
        do {
          iVar19 = iVar19 + -8;
        } while (iVar19 != 0);
      }
      goto LAB_00cf804c;
    }
    uVar25 = 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar25,uVar21);
LAB_00cf5840:
  uVar2 = *(ushort *)((int)ppuVar36 + 0xb6);
  uVar33 = (uint)uVar2;
  if (uVar33 < 0xb) {
    if (uVar33 < uVar45 + 1) {
      ppuVar36[uVar45 + 1] = puVar43;
    }
    else {
      FUN_016dd52c(ppuVar36 + uVar45 + 2,ppuVar36 + uVar45 + 1,(uVar33 - uVar45) * 4);
      ppuVar36[uVar45 + 1] = puVar43;
      FUN_016dd52c(ppuVar36 + (uVar45 + 1) * 3 + 0xc,ppuVar36 + uVar45 * 3 + 0xc,
                   (uVar33 - uVar45) * 0xc);
    }
    ppuVar36[uVar45 * 3 + 0xc] = (uint *)0x0;
    ppuVar36[uVar45 * 3 + 0xe] = (uint *)0x0;
    ppuVar36[uVar45 * 3 + 0xd] = (uint *)0x4;
    *(ushort *)((int)ppuVar36 + 0xb6) = uVar2 + 1;
    local_f0 = (uint *)&DAT_80000000;
    ppuVar28 = ppuVar36;
  }
  else {
    uVar33 = 4;
    bVar52 = false;
    if (4 < uVar45) {
      if (uVar45 == 5) {
        uVar33 = 5;
      }
      else {
        if (uVar45 == 6) {
          uVar33 = 5;
          uVar45 = 0;
        }
        else {
          uVar45 = uVar45 - 7;
          uVar33 = 6;
        }
        bVar52 = true;
      }
    }
    ppuVar8 = (uint **)thunk_FUN_016d4a50(0xb8);
    if (ppuVar8 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xb8);
    }
    *(undefined2 *)((int)ppuVar8 + 0xb6) = 0;
    *ppuVar8 = (uint *)0x0;
    ppuVar28 = ppuVar36 + uVar33 * 3 + 0xc;
    puVar10 = *ppuVar28;
    puVar7 = ppuVar36[uVar33 + 1];
    uVar21 = (uint)*(ushort *)((int)ppuVar36 + 0xb6) + ~uVar33;
    *(short *)((int)ppuVar8 + 0xb6) = (short)uVar21;
    local_138 = ppuVar28[1];
    if (0xb < uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar21,0xb,&DAT_018ac47c);
    }
    puVar20 = ppuVar28[2];
    FUN_016dd1aa(ppuVar8 + 1,ppuVar36 + uVar33 + 2,uVar21 * 4);
    FUN_016dd1aa(ppuVar8 + 0xc,ppuVar36 + (uVar33 + 1) * 3 + 0xc,uVar21 * 0xc);
    *(short *)((int)ppuVar36 + 0xb6) = (short)uVar33;
    ppuVar28 = ppuVar8;
    if (!bVar52) {
      ppuVar28 = ppuVar36;
    }
    uVar2 = *(ushort *)((int)ppuVar28 + 0xb6);
    ppuVar11 = ppuVar28 + uVar45 + 1;
    if (uVar45 < uVar2) {
      iVar27 = uVar2 - uVar45;
      FUN_016dd52c(ppuVar11 + 1,ppuVar11,iVar27 * 4);
      FUN_016dd52c(ppuVar28 + uVar45 * 3 + 0xf,ppuVar28 + uVar45 * 3 + 0xc,iVar27 * 0xc);
    }
    *ppuVar11 = puVar43;
    ppuVar28[uVar45 * 3 + 0xc] = (uint *)0x0;
    ppuVar28[uVar45 * 3 + 0xd] = (uint *)0x4;
    ppuVar28[uVar45 * 3 + 0xe] = (uint *)0x0;
    *(ushort *)((int)ppuVar28 + 0xb6) = uVar2 + 1;
    local_80 = (uint *)0x0;
    local_f0 = puVar10;
    if (puVar10 != (uint *)&DAT_80000000) {
      local_80 = (uint *)0x0;
      if ((uint **)*ppuVar36 == (uint **)0x0) {
        local_154 = puVar7;
        local_14c = puVar20;
      }
      else {
        local_14c = (uint *)0x0;
        local_12c = (uint *)0x0;
        ppuVar11 = (uint **)*ppuVar36;
        ppuVar34 = &local_c0;
        do {
          puVar43 = local_f0;
          if (local_80 != local_12c) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
          }
          uVar21 = (uint)*(ushort *)((int)ppuVar11 + 0xb6);
          uVar33 = (uint)*(ushort *)(ppuVar36 + 0x2d);
          if (uVar21 < 0xb) {
            if (uVar33 < uVar21) {
              local_158 = (uVar21 - uVar33) * 4;
              FUN_016dd52c(ppuVar11 + uVar33 + 2,ppuVar11 + uVar33 + 1);
              ppuVar47 = ppuVar11 + uVar33 * 3 + 0xc;
              FUN_016dd52c(ppuVar11 + (uVar33 + 1) * 3 + 0xc,ppuVar47,(uVar21 - uVar33) * 0xc);
              ppuVar11[uVar33 * 3 + 0xc] = puVar43;
              ppuVar47[1] = local_138;
              ppuVar47[2] = puVar20;
              FUN_016dd52c(ppuVar11 + uVar33 + 0x30,ppuVar11 + uVar33 + 0x2f,local_158);
            }
            else {
              ppuVar11[uVar33 * 3 + 0xc] = local_f0;
              ppuVar11[uVar33 * 3 + 0xd] = local_138;
              ppuVar11[uVar33 * 3 + 0xe] = puVar20;
            }
            ppuVar11[uVar33 + 1] = puVar7;
            ppuVar11[uVar33 + 0x2f] = (uint *)ppuVar8;
            puVar9 = (uint *)&DAT_80000000;
            *(short *)((int)ppuVar11 + 0xb6) = (short)(uVar21 + 1);
            if (uVar33 + 1 < uVar21 + 2) {
              do {
                uVar49 = uVar33 + 1;
                puVar43 = ppuVar11[uVar33 + 0x2f];
                *(short *)(puVar43 + 0x2d) = (short)uVar49;
                *puVar43 = (uint)ppuVar11;
                uVar33 = uVar49;
              } while (uVar21 + 1 != uVar49);
            }
            ppuVar47 = &local_f0;
            ppuVar11 = ppuVar36;
            ppuVar8 = ppuVar34;
          }
          else {
            bVar52 = false;
            if (uVar33 < 5) {
              local_158 = 4;
            }
            else if (uVar33 == 5) {
              local_158 = 5;
            }
            else if (uVar33 == 6) {
              bVar52 = true;
              uVar33 = 0;
              local_158 = 5;
            }
            else {
              uVar33 = uVar33 - 7;
              bVar52 = true;
              local_158 = 6;
            }
            ppuVar36 = (uint **)thunk_FUN_016d4a50(0xe8);
            if (ppuVar36 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xe8);
            }
            *(undefined2 *)((int)ppuVar36 + 0xb6) = 0;
            *ppuVar36 = (uint *)0x0;
            ppuVar34 = ppuVar11 + local_158 * 3 + 0xc;
            puVar10 = *ppuVar34;
            local_154 = ppuVar11[local_158 + 1];
            uVar49 = (uint)*(ushort *)((int)ppuVar11 + 0xb6) + ~local_158;
            local_150 = ppuVar34[1];
            local_14c = ppuVar34[2];
            *(short *)((int)ppuVar36 + 0xb6) = (short)uVar49;
            if (0xb < uVar49) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar49,0xb,&DAT_018ac47c);
            }
            FUN_016dd1aa(ppuVar36 + 1,ppuVar11 + local_158 + 2,uVar49 * 4);
            FUN_016dd1aa(ppuVar36 + 0xc,ppuVar11 + (local_158 + 1) * 3 + 0xc,uVar49 * 0xc);
            *(short *)((int)ppuVar11 + 0xb6) = (short)local_158;
            uVar49 = (uint)*(ushort *)((int)ppuVar36 + 0xb6);
            iVar27 = uVar49 + 1;
            if (0xb < uVar49) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar27,0xc,&DAT_018ac48c);
            }
            if (uVar21 - local_158 != iVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            puVar9 = (uint *)((int)local_12c + 1);
            FUN_016dd1aa(ppuVar36 + 0x2e,ppuVar11 + local_158 + 0x2f,iVar27 * 4);
            uVar21 = 0;
            do {
              puVar22 = (ppuVar36 + 0x2e)[uVar21];
              *(short *)(puVar22 + 0x2d) = (short)uVar21;
              *puVar22 = (uint)ppuVar36;
              if (uVar49 <= uVar21) break;
              uVar21 = uVar21 + 1;
            } while (uVar21 <= uVar49);
            ppuVar34 = ppuVar36;
            if (!bVar52) {
              ppuVar34 = ppuVar11;
            }
            uVar21 = (uint)*(ushort *)((int)ppuVar34 + 0xb6);
            if (uVar33 < uVar21) {
              FUN_016dd52c(ppuVar34 + uVar33 + 2,ppuVar34 + uVar33 + 1);
              local_158 = uVar33 * 3;
              ppuVar47 = ppuVar34 + uVar33 * 3 + 0xc;
              FUN_016dd52c(ppuVar34 + (uVar33 + 1) * 3 + 0xc,ppuVar47,(uVar21 - uVar33) * 0xc);
              ppuVar34[uVar33 * 3 + 0xc] = puVar43;
              ppuVar47[1] = local_138;
              ppuVar47[2] = puVar20;
              FUN_016dd52c(ppuVar34 + uVar33 + 0x30,ppuVar34 + uVar33 + 0x2f,(uVar21 - uVar33) * 4);
            }
            else {
              ppuVar34[uVar33 * 3 + 0xc] = puVar43;
              ppuVar34[uVar33 * 3 + 0xd] = local_138;
              ppuVar34[uVar33 * 3 + 0xe] = puVar20;
            }
            ppuVar34[uVar33 + 1] = puVar7;
            ppuVar34[uVar33 + 0x2f] = (uint *)ppuVar8;
            *(short *)((int)ppuVar34 + 0xb6) = (short)(uVar21 + 1);
            if (uVar33 + 1 < uVar21 + 2) {
              do {
                uVar49 = uVar33 + 1;
                puVar43 = ppuVar34[uVar33 + 0x2f];
                *(short *)(puVar43 + 0x2d) = (short)uVar49;
                *puVar43 = (uint)ppuVar34;
                uVar33 = uVar49;
              } while (uVar21 + 1 != uVar49);
            }
            ppuVar47 = &local_80;
            ppuVar8 = ppuVar36;
            local_12c = puVar9;
            local_f0 = puVar10;
          }
          *ppuVar47 = puVar9;
          if (local_f0 == (uint *)&DAT_80000000) goto LAB_00cf5f74;
          ppuVar47 = (uint **)*ppuVar11;
          local_138 = local_150;
          ppuVar36 = ppuVar11;
          puVar7 = local_154;
          ppuVar11 = ppuVar47;
          ppuVar34 = ppuVar8;
          puVar20 = local_14c;
        } while (ppuVar47 != (uint **)0x0);
      }
      puVar10 = local_80;
      puVar7 = local_f0;
      puVar43 = local_110;
      ppuVar36 = local_114;
      if (local_114 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac44c);
      }
      ppuVar11 = (uint **)thunk_FUN_016d4a50(0xe8);
      if (ppuVar11 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xe8);
      }
      ppuVar11[0x2e] = (uint *)ppuVar36;
      *(undefined2 *)((int)ppuVar11 + 0xb6) = 0;
      *ppuVar11 = (uint *)0x0;
      if ((uint *)0xfffffffe < puVar43) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af438);
      }
      *(undefined2 *)(ppuVar36 + 0x2d) = 0;
      *ppuVar36 = (uint *)ppuVar11;
      local_114 = ppuVar11;
      local_110 = (uint *)((int)puVar43 + 1);
      if (puVar10 != puVar43) {
        uVar25 = 0x30;
        puVar30 = &DAT_018ac46c;
        puVar17 = &DAT_00413115;
LAB_00cf7efc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar17,uVar25,puVar30);
      }
      uVar33 = (uint)*(ushort *)((int)ppuVar11 + 0xb6);
      if (10 < uVar33) {
        uVar25 = 0x20;
        puVar17 = &DAT_00565dd0;
        puVar30 = &DAT_018af428;
        goto LAB_00cf7efc;
      }
      ppuVar11[uVar33 * 3 + 0xd] = local_138;
      uVar4 = (undefined2)(uVar33 + 1);
      *(undefined2 *)((int)ppuVar11 + 0xb6) = uVar4;
      (ppuVar11 + 0x2e)[uVar33 + 1] = (uint *)ppuVar8;
      ppuVar11[uVar33 + 1] = local_154;
      ppuVar11[uVar33 * 3 + 0xc] = puVar7;
      ppuVar11[uVar33 * 3 + 0xe] = local_14c;
      *(undefined2 *)(ppuVar8 + 0x2d) = uVar4;
      *ppuVar8 = (uint *)ppuVar11;
      local_150 = local_138;
LAB_00cf5f74:
      ppuVar36 = ppuVar28;
      goto LAB_00cf5808;
    }
  }
  ppuVar36 = ppuVar28;
LAB_00cf5808:
  local_10c = local_10c + 1;
LAB_00cf5814:
  puVar43 = ppuVar36[uVar45 * 3 + 0xe];
  if (puVar43 == ppuVar36[uVar45 * 3 + 0xc]) {
    FUN_00d64ab0(ppuVar36 + uVar45 * 3 + 0xc);
  }
  *(undefined8 *)(ppuVar36[uVar45 * 3 + 0xd] + (int)puVar43 * 2) = uVar61;
  ppuVar36[uVar45 * 3 + 0xe] = (uint *)((int)puVar43 + 1);
  goto LAB_00cf5730;
LAB_00cf6340:
  goto LAB_00cf6278;
LAB_00cf6968:
  uVar2 = *(ushort *)((int)puVar37 + 0xe2);
  uVar45 = (uint)uVar2;
  if (uVar45 < 0xb) {
    if (uVar45 < local_1b8 + 1) {
      puVar37[local_1b8 + 0x2d] = puVar10;
    }
    else {
      FUN_016dd52c(puVar37 + local_1b8 + 0x2e,puVar37 + local_1b8 + 0x2d,(uVar45 - local_1b8) * 4);
      puVar37[local_1b8 + 0x2d] = puVar10;
      FUN_016dd52c(puVar37 + (local_1b8 + 1) * 4,puVar37 + local_1b8 * 4,(uVar45 - local_1b8) * 0x10
                  );
    }
    puVar14 = puVar37 + local_1b8 * 4;
    *puVar14 = 0;
    *(ushort *)((int)puVar37 + 0xe2) = uVar2 + 1;
    puVar14[3] = 0;
    puVar14[1] = 8;
    puVar14[2] = 0;
    local_98 = (uint *)0x80000000;
    puVar12 = puVar37;
  }
  else {
    uVar45 = 4;
    if (local_1b8 < 5) {
      bVar52 = false;
    }
    else if (local_1b8 == 5) {
      bVar52 = false;
      uVar45 = 5;
    }
    else {
      if (local_1b8 == 6) {
        uVar45 = 5;
        local_1b8 = 0;
      }
      else {
        local_1b8 = local_1b8 - 7;
        uVar45 = 6;
      }
      bVar52 = true;
    }
    puVar14 = (undefined4 *)thunk_FUN_016d4a50(0xe4);
    if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xe4);
    }
    *(undefined2 *)((int)puVar14 + 0xe2) = 0;
    puVar14[0x2c] = 0;
    local_15c = (code *)puVar37[uVar45 + 0x2d];
    uVar33 = (uint)*(ushort *)((int)puVar37 + 0xe2) + ~uVar45;
    *(short *)((int)puVar14 + 0xe2) = (short)uVar33;
    piVar35 = puVar37 + uVar45 * 4;
    puVar20 = (uint *)*piVar35;
    iVar27 = piVar35[1];
    local_c0 = (uint *)piVar35[2];
    local_bc = (code *)piVar35[3];
    if (0xb < uVar33) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar33,0xb,&DAT_018ac47c);
    }
    FUN_016dd1aa(puVar14 + 0x2d,puVar37 + uVar45 + 0x2e,uVar33 * 4);
    FUN_016dd1aa(puVar14,puVar37 + (uVar45 + 1) * 4,uVar33 * 0x10);
    local_f0 = local_c0;
    *(short *)((int)puVar37 + 0xe2) = (short)uVar45;
    puVar12 = puVar14;
    if (!bVar52) {
      puVar12 = puVar37;
    }
    uVar2 = *(ushort *)((int)puVar12 + 0xe2);
    local_ec = local_bc;
    if (local_1b8 < uVar2) {
      iVar44 = uVar2 - local_1b8;
      FUN_016dd52c(puVar12 + local_1b8 + 0x2e,puVar12 + local_1b8 + 0x2d,iVar44 * 4);
      puVar12[local_1b8 + 0x2d] = puVar10;
      FUN_016dd52c(puVar12 + (local_1b8 + 1) * 4,puVar12 + local_1b8 * 4,iVar44 * 0x10);
      puVar38 = extraout_r12_00;
    }
    else {
      puVar12[local_1b8 + 0x2d] = puVar10;
      puVar38 = extraout_r12;
    }
    puVar39 = puVar12 + local_1b8 * 4;
    *puVar39 = 0;
    *(ushort *)((int)puVar12 + 0xe2) = uVar2 + 1;
    puVar39[1] = 8;
    puVar39[2] = 0;
    puVar39[3] = 0;
    local_80 = local_f0;
    local_7c = local_ec;
    local_d0 = (uint *)0x0;
    local_98 = puVar20;
    if (puVar20 != (uint *)0x80000000) {
      local_d0 = (uint *)0x0;
      local_6c = local_ec;
      local_70 = local_f0;
      if ((undefined4 *)puVar37[0x2c] != (undefined4 *)0x0) {
        puVar10 = (uint *)0x0;
        puVar39 = (undefined4 *)puVar37[0x2c];
        do {
          pcVar16 = local_7c;
          puVar9 = local_80;
          puVar20 = local_98;
          if (local_d0 != puVar10) {
            local_70 = local_80;
            local_6c = local_7c;
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
          }
          uVar33 = (uint)*(ushort *)((int)puVar39 + 0xe2);
          uVar45 = (uint)*(ushort *)(puVar37 + 0x38);
          if (uVar33 < 0xb) {
            if (uVar45 < uVar33) {
              FUN_016dd52c(puVar39 + uVar45 + 0x2e);
              puVar39[uVar45 + 0x2d] = local_15c;
              puVar42 = puVar39 + uVar45 * 4;
              FUN_016dd52c(puVar39 + (uVar45 + 1) * 4,puVar42,(uVar33 - uVar45) * 0x10);
              puVar42[1] = iVar27;
              puVar42[2] = puVar9;
              puVar42[3] = pcVar16;
              puVar39[uVar45 * 4] = puVar20;
              FUN_016dd52c(puVar39 + uVar45 + 0x3b,puVar39 + uVar45 + 0x3a,(uVar33 - uVar45) * 4);
            }
            else {
              puVar39[uVar45 + 0x2d] = local_15c;
              piVar35 = puVar39 + uVar45 * 4;
              *piVar35 = (int)local_98;
              piVar35[2] = (int)local_80;
              piVar35[1] = iVar27;
              piVar35[3] = (int)local_7c;
            }
            puVar48 = (uint *)0x80000000;
            puVar39[uVar45 + 0x3a] = puVar14;
            ppuVar36 = &local_98;
            *(short *)((int)puVar39 + 0xe2) = (short)(uVar33 + 1);
            if (uVar45 + 1 < uVar33 + 2) {
              do {
                uVar21 = uVar45 + 1;
                iVar27 = puVar39[uVar45 + 0x3a];
                *(short *)(iVar27 + 0xe0) = (short)uVar21;
                *(undefined4 **)(iVar27 + 0xb0) = puVar39;
                uVar45 = uVar21;
              } while (uVar33 + 1 != uVar21);
            }
            puVar39 = puVar37;
            puVar14 = puVar38;
          }
          else {
            uVar21 = 4;
            if (uVar45 < 5) {
              bVar52 = false;
            }
            else if (uVar45 == 5) {
              bVar52 = false;
              uVar21 = 5;
            }
            else if (uVar45 == 6) {
              uVar45 = 0;
              uVar21 = 5;
              bVar52 = true;
            }
            else {
              uVar45 = uVar45 - 7;
              bVar52 = true;
              uVar21 = 6;
            }
            puVar37 = (undefined4 *)thunk_FUN_016d4a50(0x114);
            if (puVar37 == (undefined4 *)0x0) {
              local_70 = puVar9;
              local_6c = pcVar16;
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x114);
            }
            *(undefined2 *)((int)puVar37 + 0xe2) = 0;
            puVar37[0x2c] = 0;
            local_19c = (code *)puVar39[uVar21 + 0x2d];
            uVar49 = (uint)*(ushort *)((int)puVar39 + 0xe2) + ~uVar21;
            *(short *)((int)puVar37 + 0xe2) = (short)uVar49;
            piVar35 = puVar39 + uVar21 * 4;
            puVar22 = (uint *)*piVar35;
            local_1a4 = piVar35[1];
            local_c0 = (uint *)piVar35[2];
            local_bc = (code *)piVar35[3];
            if (0xb < uVar49) {
              local_70 = puVar9;
              local_6c = pcVar16;
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar49,0xb,&DAT_018ac47c);
            }
            FUN_016dd1aa(puVar37 + 0x2d,puVar39 + uVar21 + 0x2e,uVar49 * 4);
            FUN_016dd1aa(puVar37,puVar39 + (uVar21 + 1) * 4,uVar49 * 0x10);
            *(short *)((int)puVar39 + 0xe2) = (short)uVar21;
            uVar49 = (uint)*(ushort *)((int)puVar37 + 0xe2);
            local_ec = local_bc;
            iVar44 = uVar49 + 1;
            local_f0 = local_c0;
            if (0xb < uVar49) {
              local_70 = puVar9;
              local_6c = pcVar16;
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar44,0xc,&DAT_018ac48c);
            }
            if (uVar33 - uVar21 != iVar44) {
              local_70 = puVar9;
              local_6c = pcVar16;
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            puVar48 = (uint *)((int)puVar10 + 1);
            FUN_016dd1aa(puVar37 + 0x39,puVar39 + uVar21 + 0x3a,iVar44 * 4);
            uVar33 = 0;
            do {
              iVar44 = (puVar37 + 0x39)[uVar33];
              *(short *)(iVar44 + 0xe0) = (short)uVar33;
              *(undefined4 **)(iVar44 + 0xb0) = puVar37;
              if (uVar49 <= uVar33) break;
              uVar33 = uVar33 + 1;
            } while (uVar33 <= uVar49);
            local_c0 = local_f0;
            local_bc = local_ec;
            puVar38 = puVar37;
            if (!bVar52) {
              puVar38 = puVar39;
            }
            uVar33 = (uint)*(ushort *)((int)puVar38 + 0xe2);
            if (uVar45 < uVar33) {
              iVar44 = (uVar33 - uVar45) * 4;
              FUN_016dd52c(puVar38 + uVar45 + 0x2e,puVar38 + uVar45 + 0x2d,iVar44);
              puVar38[uVar45 + 0x2d] = local_15c;
              puVar42 = puVar38 + uVar45 * 4;
              FUN_016dd52c(puVar38 + (uVar45 + 1) * 4,puVar42,(uVar33 - uVar45) * 0x10);
              puVar38[uVar45 * 4] = puVar20;
              puVar42[1] = iVar27;
              puVar42[2] = puVar9;
              puVar42[3] = pcVar16;
              FUN_016dd52c(puVar38 + uVar45 + 0x3b,puVar38 + uVar45 + 0x3a,iVar44);
            }
            else {
              puVar38[uVar45 + 0x2d] = local_15c;
              piVar35 = puVar38 + uVar45 * 4;
              *piVar35 = (int)puVar20;
              piVar35[1] = iVar27;
              piVar35[2] = (int)puVar9;
              piVar35[3] = (int)pcVar16;
            }
            *(short *)((int)puVar38 + 0xe2) = (short)(uVar33 + 1);
            puVar38[uVar45 + 0x3a] = puVar14;
            if (uVar45 + 1 < uVar33 + 2) {
              do {
                uVar21 = uVar45 + 1;
                iVar27 = puVar38[uVar45 + 0x3a];
                *(short *)(iVar27 + 0xe0) = (short)uVar21;
                *(undefined4 **)(iVar27 + 0xb0) = puVar38;
                uVar45 = uVar21;
              } while (uVar33 + 1 != uVar21);
            }
            local_80 = local_c0;
            ppuVar36 = &local_d0;
            local_7c = local_bc;
            puVar14 = puVar37;
            puVar10 = puVar48;
            local_98 = puVar22;
          }
          *ppuVar36 = puVar48;
          if (local_98 == (uint *)0x80000000) {
            local_70 = puVar9;
            local_6c = pcVar16;
            goto LAB_00cf6638;
          }
          puVar42 = puVar39 + 0x2c;
          local_15c = local_19c;
          iVar27 = local_1a4;
          puVar37 = puVar39;
          puVar39 = (undefined4 *)*puVar42;
          puVar38 = puVar14;
        } while ((undefined4 *)*puVar42 != (undefined4 *)0x0);
      }
      puVar20 = local_98;
      puVar10 = local_d0;
      iVar44 = *(int *)(param_2 + 0x2a0);
      local_70 = local_80;
      local_6c = local_7c;
      if (iVar44 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac44c);
      }
      puVar9 = *(uint **)(param_2 + 0x2a4);
      iVar15 = thunk_FUN_016d4a50(0x114);
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x114);
      }
      *(int *)(iVar15 + 0xe4) = iVar44;
      *(undefined2 *)(iVar15 + 0xe2) = 0;
      *(undefined4 *)(iVar15 + 0xb0) = 0;
      if ((uint *)0xfffffffe < puVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af438);
      }
      *(undefined2 *)(iVar44 + 0xe0) = 0;
      *(int *)(iVar44 + 0xb0) = iVar15;
      *(int *)(param_2 + 0x2a0) = iVar15;
      *(uint *)(param_2 + 0x2a4) = (int)puVar9 + 1;
      if (puVar10 != puVar9) {
        uVar25 = 0x30;
LAB_00cf82d8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(local_174,uVar25,local_16c);
      }
      uVar45 = (uint)*(ushort *)(iVar15 + 0xe2);
      if (10 < uVar45) {
        uVar25 = 0x20;
        local_174 = &DAT_00565dd0;
        local_16c = &DAT_018af428;
        goto LAB_00cf82d8;
      }
      uVar4 = (undefined2)(uVar45 + 1);
      *(undefined2 *)(iVar15 + 0xe2) = uVar4;
      *(code **)(iVar15 + uVar45 * 4 + 0xb4) = local_15c;
      piVar35 = (int *)(iVar15 + uVar45 * 0x10);
      *piVar35 = (int)puVar20;
      piVar35[1] = iVar27;
      piVar35[2] = (int)local_70;
      piVar35[3] = (int)local_6c;
      ((int *)(iVar15 + 0xe4))[uVar45 + 1] = (int)puVar14;
      *(undefined2 *)(puVar14 + 0x38) = uVar4;
      puVar14[0x2c] = iVar15;
      local_19c = local_15c;
    }
  }
  goto LAB_00cf6638;
LAB_00cf61f0:
  goto LAB_00cf6124;
LAB_00cf7548:
  uVar49 = (uint)*(char *)((int)local_f0 + (int)local_124);
  if (-1 < (int)uVar49) {
    uVar49 = *local_f0 & 0x80808080;
    uVar31 = LZCOUNT((*local_f0 & 0x80) << 0x18 | (uVar49 >> 8 & 0xff) << 0x10 |
                     (uVar49 >> 0x10 & 0xff) << 8 | uVar49 >> 0x18);
    uVar49 = (uint)*(byte *)((int)local_f0 + (uVar31 >> 3));
    local_124 = (uint *)(uVar31 >> 3);
  }
  bVar3 = (byte)(uVar45 >> 0x19);
  *(byte *)((int)local_f0 + (int)local_124) = bVar3;
  *(byte *)((int)local_f0 + ((uint)local_ec & (uint)(local_124 + -1)) + 4) = bVar3;
  local_f0[(int)local_124 * -2 + -2] = uVar33;
  local_f0[(int)local_124 * -2 + -1] = uVar21;
  local_e8 = local_e8 - (uVar49 & 1);
  local_e4 = (uint *)((int)local_e4 + 1);
  goto LAB_00cf75b8;
LAB_00cf6278:
  puVar22 = puVar7;
  puVar9 = local_b8;
  if (puVar22 != puVar10) {
    puVar7 = puVar22 + 2;
    if (puVar20 != (uint *)0x0) {
      uVar33 = *(uint *)*puVar22;
      uVar45 = ((uint *)*puVar22)[1];
      puVar48 = puVar20;
      puVar51 = local_12c;
      do {
        uVar21 = 0xffffffff;
        iVar27 = (uint)*(ushort *)((int)puVar48 + 0x166) << 3;
        puVar23 = puVar48;
        do {
          uVar49 = (uint)*(ushort *)((int)puVar48 + 0x166);
          if (iVar27 == 0) goto joined_r0x00cf632c;
          uVar49 = *puVar23;
          uVar31 = puVar23[1];
          cVar5 = (uVar33 >= uVar49 && uVar33 != uVar49) - (uVar33 < uVar49);
          if (uVar33 == uVar49) {
            cVar5 = (uVar45 >= uVar31 && uVar45 != uVar31) - (uVar45 < uVar31);
          }
          iVar27 = iVar27 + -8;
          uVar21 = uVar21 + 1;
          puVar23 = puVar23 + 2;
        } while (cVar5 == '\x01');
        uVar49 = uVar21;
        if (cVar5 == '\0') {
          dVar56 = *(double *)(puVar48 + uVar21 * 6 + 0x18);
          uVar45 = in_fpscr & 0xfffffff | (uint)(dVar56 < 0.0) << 0x1f |
                   (uint)(dVar56 == 0.0) << 0x1e;
          in_fpscr = uVar45 | (uint)NAN(dVar56) << 0x1c;
          bVar3 = (byte)(uVar45 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            if (local_b8 == local_c0) {
              FUN_00d653ec(&local_c0,local_b8,1,4,4);
              local_15c = local_bc;
            }
            *(uint **)(local_15c + (int)puVar9 * 4) = puVar22;
            local_b8 = (uint *)((int)puVar9 + 1);
            local_12c = *(uint **)(param_2 + 0x28c);
            puVar20 = *(uint **)(param_2 + 0x288);
          }
          break;
        }
joined_r0x00cf632c:
        if (puVar51 == (uint *)0x0) goto LAB_00cf6340;
        puVar51 = (uint *)((int)puVar51 + -1);
        puVar48 = (uint *)puVar48[uVar49 + 0x5a];
      } while( true );
    }
    goto LAB_00cf6278;
  }
  local_138 = local_c0;
  local_130 = local_bc;
  if (&DAT_00000001 < local_b8) {
    if (&DAT_00000014 < local_b8) {
      FUN_00cd97cc(local_bc,local_b8);
    }
    else {
      FUN_00b5d9d4(local_bc,local_b8);
    }
  }
LAB_00cf63f4:
  dVar56 = (double)VectorUnsignedToFloat(puVar9,(byte)(in_fpscr >> 0x16) & 3);
  uVar25 = FUN_016d5298(SUB84(dVar56 * 0.1,0));
  puVar7 = (uint *)((uint)(0.0 < (double)CONCAT44(extraout_s1,uVar25)) *
                   (int)(longlong)(double)CONCAT44(extraout_s1,uVar25));
  if (puVar7 < (uint *)0x3) {
    puVar7 = (uint *)&SUB_00000002;
  }
  if (puVar9 < puVar7) {
    puVar7 = puVar9;
  }
  dVar56 = dVar55;
  if (puVar9 != (uint *)0x0) {
    pcVar16 = local_130;
    puVar10 = puVar7;
    do {
      puVar10 = (uint *)((int)puVar10 + -1);
      dVar57 = (double)VectorUnsignedToFloat
                                 (**(undefined4 **)(*(int *)pcVar16 + 4),
                                  (byte)(in_fpscr >> 0x16) & 3);
      dVar56 = dVar56 + *(double *)(*(undefined4 **)(*(int *)pcVar16 + 4) + 2) *
                        (dVar57 / 1000000.0);
      pcVar16 = pcVar16 + 4;
    } while (puVar10 != (uint *)0x0);
  }
  local_124 = ppuVar8[(int)puVar43 * 3 + 0xe];
  dVar57 = dVar55;
  if (local_124 == (uint *)0x0) {
    local_124 = (uint *)0x0;
  }
  else {
    puVar10 = (uint *)0x0;
    do {
      if (local_120 == (uint *)0x0) {
LAB_00cf81b0:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor"
                     ,0x16,&DAT_01877400);
      }
      uVar45 = *(uint *)ppuVar8[(int)puVar43 * 3 + 0xd][(int)puVar10 * 2];
      uVar33 = ((uint *)ppuVar8[(int)puVar43 * 3 + 0xd][(int)puVar10 * 2])[1];
      puVar20 = local_120;
      iVar27 = local_11c;
      while( true ) {
        uVar21 = 0xffffffff;
        iVar44 = (uint)*(ushort *)((int)puVar20 + 0xb6) << 3;
        puVar9 = puVar20;
        do {
          if (iVar44 == 0) {
            uVar21 = (uint)*(ushort *)((int)puVar20 + 0xb6);
            goto LAB_00cf653c;
          }
          uVar49 = *puVar9;
          uVar31 = puVar9[1];
          cVar5 = (uVar45 >= uVar49 && uVar45 != uVar49) - (uVar45 < uVar49);
          if (uVar45 == uVar49) {
            cVar5 = (uVar33 >= uVar31 && uVar33 != uVar31) - (uVar33 < uVar31);
          }
          iVar44 = iVar44 + -8;
          uVar21 = uVar21 + 1;
          puVar9 = puVar9 + 2;
        } while (cVar5 == '\x01');
        if (cVar5 == '\0') break;
LAB_00cf653c:
        if (iVar27 == 0) goto LAB_00cf81b0;
        iVar27 = iVar27 + -1;
        puVar20 = (uint *)puVar20[uVar21 + 0x2e];
      }
      puVar10 = (uint *)((int)puVar10 + 1);
      dVar57 = dVar57 + *(double *)(puVar20 + uVar21 * 2 + 0x16);
    } while (puVar10 != local_124);
  }
  puVar10 = ppuVar8[(int)((int)puVar43 + 1)];
  puVar37 = *(undefined4 **)(param_2 + 0x2a0);
  if (puVar37 != (undefined4 *)0x0) {
    iVar27 = *(int *)(param_2 + 0x2a4);
    do {
      local_1b8 = (uint)*(ushort *)((int)puVar37 + 0xe2);
      iVar44 = local_1b8 << 2;
      iVar15 = 0x2d;
      do {
        iVar32 = iVar15;
        if (iVar44 == 0) goto LAB_00cf65d4;
        iVar44 = iVar44 + -4;
        bVar53 = puVar10 < (uint *)puVar37[iVar32];
        bVar52 = !bVar53 && puVar10 != (uint *)puVar37[iVar32];
        iVar15 = iVar32 + 1;
      } while ((char)(bVar52 - bVar53) == '\x01');
      if (bVar52 == bVar53) {
        puVar10 = puVar37 + (iVar32 + -0x2d) * 4;
        goto LAB_00cf6648;
      }
      local_1b8 = iVar32 - 0x2d;
LAB_00cf65d4:
      if (iVar27 == 0) goto LAB_00cf6968;
      iVar27 = iVar27 + -1;
      puVar37 = (undefined4 *)puVar37[local_1b8 + 0x39];
    } while( true );
  }
  puVar12 = (undefined4 *)thunk_FUN_016d4a50(0xe4);
  if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xe4);
  }
  local_1b8 = 0;
  *(undefined2 *)((int)puVar12 + 0xe2) = 1;
  puVar12[0x2c] = 0;
  *(undefined4 **)(param_2 + 0x2a0) = puVar12;
  *(undefined4 *)(param_2 + 0x2a4) = 0;
  puVar12[0x2d] = puVar10;
  *puVar12 = 0;
  puVar12[1] = 8;
  puVar12[2] = 0;
  puVar12[3] = 0;
LAB_00cf6638:
  puVar10 = puVar12 + local_1b8 * 4;
  *(int *)(param_2 + 0x2a8) = *(int *)(param_2 + 0x2a8) + 1;
LAB_00cf6648:
  uVar45 = *puVar10;
  uVar33 = puVar10[3];
  if (uVar33 == uVar45) {
    FUN_00bad9e0(puVar10);
    uVar45 = *puVar10;
    uVar33 = puVar10[3];
  }
  uVar21 = uVar33 + 1;
  dVar58 = (double)VectorUnsignedToFloat(puVar7,(byte)(in_fpscr >> 0x16) & 3);
  uVar31 = puVar10[2] - 1;
  uVar49 = uVar31 + uVar45;
  if (!CARRY4(uVar31,uVar45)) {
    uVar49 = uVar31;
  }
  puVar10[2] = uVar49;
  pdVar13 = (double *)(puVar10[1] + uVar49 * 0x10);
  puVar10[3] = uVar21;
  dVar59 = (double)VectorUnsignedToFloat(local_124,(byte)(in_fpscr >> 0x16) & 3);
  *pdVar13 = dVar57 / dVar59;
  pdVar13[1] = dVar56 / dVar58;
  if (uVar21 < 0xd) {
    if (uVar21 != 0) {
      uVar45 = *puVar10;
      goto LAB_00cf66dc;
    }
    uVar33 = 0;
    uVar45 = 0;
LAB_00cf670c:
    iVar27 = 0;
  }
  else {
    uVar45 = *puVar10;
    puVar10[3] = uVar33;
    uVar21 = uVar33;
LAB_00cf66dc:
    uVar49 = puVar10[2];
    uVar33 = uVar49 - uVar45;
    if (uVar49 < uVar45) {
      uVar33 = uVar49;
    }
    if (uVar21 <= uVar45 - uVar33) {
      uVar45 = uVar33 + uVar21;
      goto LAB_00cf670c;
    }
    iVar27 = uVar21 - (uVar45 - uVar33);
  }
  uVar25 = 0;
  uVar49 = iVar27 + (uVar45 - uVar33);
  bVar53 = 0xffffffe < uVar49;
  bVar52 = uVar49 == 0xfffffff;
  if (uVar49 < 0x10000000) {
    uVar21 = uVar49 * 0x10;
    bVar53 = 0x7ffffff7 < uVar21;
    bVar52 = uVar21 == 0x7ffffff8;
  }
  if (!(bVar53 && !bVar52)) {
    uVar31 = puVar10[1];
    iVar44 = 0;
    if (uVar21 == 0) {
      local_158 = 8;
      uVar49 = 0;
    }
    else {
      local_158 = thunk_FUN_016d4a50(uVar21,local_158);
      if (local_158 == 0) {
        uVar25 = 8;
        local_158 = uVar21;
        goto LAB_00cf83e8;
      }
    }
    if (uVar45 != uVar33) {
      puVar29 = (undefined8 *)(local_158 + 8);
      iVar44 = 0;
      puVar24 = (undefined8 *)(uVar31 + uVar33 * 0x10 + 8);
      do {
        puVar1 = puVar24 + -1;
        iVar44 = iVar44 + 1;
        uVar61 = *puVar24;
        puVar24 = puVar24 + 2;
        puVar29[-1] = *puVar1;
        *puVar29 = uVar61;
        puVar29 = puVar29 + 2;
      } while (uVar45 - uVar33 != iVar44);
    }
    if (iVar27 != 0) {
      iVar15 = iVar44 * 0x10;
      iVar44 = iVar27 + iVar44;
      puVar24 = (undefined8 *)(local_158 + iVar15 + 8);
      puVar29 = (undefined8 *)(uVar31 + 8);
      do {
        puVar1 = puVar29 + -1;
        iVar27 = iVar27 + -1;
        uVar61 = *puVar29;
        puVar29 = puVar29 + 2;
        puVar24[-1] = *puVar1;
        *puVar24 = uVar61;
        puVar24 = puVar24 + 2;
      } while (iVar27 != 0);
    }
    if (iVar44 != 0) {
      VectorUnsignedToFloat(iVar44,(byte)(in_fpscr >> 0x16) & 3);
      iVar27 = iVar44;
      do {
        iVar27 = iVar27 + -1;
      } while (iVar27 != 0);
      do {
        iVar44 = iVar44 + -1;
      } while (iVar44 != 0);
    }
    if (uVar49 != 0) {
      thunk_FUN_016d3fb4(local_158);
    }
    in_fpscr = in_fpscr & 0xfffffff;
    FUN_00c4280c(0,&local_c0,&local_108,ppuVar8[(int)((int)puVar43 + 1)]);
    bVar52 = true;
    ppuVar36 = (uint **)0x0;
    if (local_138 != (uint *)0x0) {
      thunk_FUN_016d3fb4(local_130);
    }
    goto LAB_00cf5fec;
  }
LAB_00cf83e8:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar25,local_158);
}

