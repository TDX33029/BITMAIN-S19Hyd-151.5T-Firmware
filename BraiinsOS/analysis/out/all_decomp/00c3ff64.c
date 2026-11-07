// FUN_00c3ff64 @ 00c3ff64 size=2692 calls_out=14 calls_in=2
// strings: no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor

void FUN_00c3ff64(int *param_1,uint *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  int iVar28;
  uint unaff_r11;
  uint uVar29;
  undefined4 uVar30;
  bool bVar31;
  bool bVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c4;
  uint *local_bc;
  uint local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  local_d4 = param_2[8];
  bVar32 = 0x7fffffe < local_d4;
  bVar31 = local_d4 == 0x7ffffff;
  uVar5 = local_d4 * 0x20;
  if (local_d4 < 0x8000000) {
    bVar32 = 0x7ffffff7 < uVar5;
    bVar31 = uVar5 == 0x7ffffff8;
  }
  if (bVar32 && !bVar31) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar5);
  }
  uVar23 = 0;
  if (uVar5 == 0) {
    local_bc = (uint *)&DAT_00000008;
    local_d4 = 0;
  }
  else {
    local_bc = (uint *)thunk_FUN_016d4a50(uVar5);
    if (local_bc == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar5);
    }
  }
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = param_2[4];
  uStack_64 = param_2[5];
  uStack_60 = param_2[6];
  uStack_5c = param_2[7];
  uStack_58 = param_2[8];
  puVar2 = (undefined4 *)param_2[9];
  piVar3 = (int *)param_2[10];
  piVar4 = (int *)param_2[0xb];
  while( true ) {
    uVar37 = FUN_00c38b6c(&local_78);
    puVar24 = (uint *)uVar37;
    if (puVar24 == (uint *)0x0) break;
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_018774f0);
    }
    uVar19 = puVar24[1];
    uVar27 = *puVar24;
    iVar17 = *piVar3;
    iVar14 = piVar3[1];
    dVar33 = *(double *)((ulonglong)uVar37 >> 0x20);
    puVar24 = (uint *)*puVar2;
    local_ac = puVar2[1];
    uVar5 = FUN_018462e8(uVar19,*piVar4);
    if (puVar24 == (uint *)0x0) {
LAB_00c409a8:
      puVar13 = &DAT_01877500;
LAB_00c409d4:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor"
                   ,0x16,puVar13);
    }
    puVar21 = puVar24;
    iVar16 = local_ac;
    while( true ) {
      uVar29 = (uint)*(ushort *)((int)puVar21 + 0xb6);
      uVar22 = 0xffffffff;
      iVar20 = uVar29 << 3;
      puVar7 = puVar21;
      do {
        if (iVar20 == 0) goto LAB_00c40138;
        uVar10 = *puVar7;
        uVar15 = puVar7[1];
        unaff_r11 = (uint)(uVar5 < uVar15);
        uVar11 = (uint)(uVar27 >= uVar10 && uVar27 != uVar10) - (uint)(uVar27 < uVar10);
        if (uVar27 == uVar10) {
          uVar11 = (uVar5 >= uVar15 && uVar5 != uVar15) - unaff_r11;
        }
        iVar20 = iVar20 + -8;
        uVar22 = uVar22 + 1;
        puVar7 = puVar7 + 2;
      } while ((uVar11 & 0xff) == 1);
      uVar29 = uVar22;
      if ((uVar11 & 0xff) == 0) break;
LAB_00c40138:
      if (iVar16 == 0) goto LAB_00c409a8;
      iVar16 = iVar16 + -1;
      puVar21 = (uint *)puVar21[uVar29 + 0x2e];
    }
    if (iVar17 == 0) {
      puVar13 = &DAT_01877510;
      goto LAB_00c409d4;
    }
    dVar34 = *(double *)(puVar21 + uVar22 * 2 + 0x16);
    while( true ) {
      uVar29 = (uint)*(ushort *)(iVar17 + 0x8a);
      iVar16 = uVar29 << 2;
      iVar20 = 0x17;
      do {
        iVar8 = iVar20;
        if (iVar16 == 0) goto LAB_00c401bc;
        uVar22 = *(uint *)(iVar17 + iVar8 * 4);
        iVar16 = iVar16 + -4;
        bVar32 = uVar27 < uVar22;
        bVar31 = !bVar32 && uVar27 != uVar22;
        iVar20 = iVar8 + 1;
      } while ((char)(bVar31 - bVar32) == '\x01');
      if (bVar31 == bVar32) break;
      uVar29 = iVar8 - 0x17;
LAB_00c401bc:
      if (iVar14 == 0) {
        puVar13 = &DAT_01877510;
        goto LAB_00c409d4;
      }
      iVar14 = iVar14 + -1;
      iVar17 = *(int *)(iVar17 + uVar29 * 4 + 0x90);
    }
    dVar35 = *(double *)(iVar17 + (iVar8 + -0x17) * 8);
    while( true ) {
      uVar29 = 0xffffffff;
      iVar14 = (uint)*(ushort *)((int)puVar24 + 0xb6) << 3;
      puVar21 = puVar24;
      do {
        if (iVar14 == 0) {
          uVar29 = (uint)*(ushort *)((int)puVar24 + 0xb6);
          goto LAB_00c40254;
        }
        uVar22 = *puVar21;
        uVar10 = puVar21[1];
        cVar9 = (uVar27 >= uVar22 && uVar27 != uVar22) - (uVar27 < uVar22);
        if (uVar27 == uVar22) {
          cVar9 = (uVar5 >= uVar10 && uVar5 != uVar10) - (uVar5 < uVar10);
        }
        iVar14 = iVar14 + -8;
        uVar29 = uVar29 + 1;
        puVar21 = puVar21 + 2;
      } while (cVar9 == '\x01');
      if (cVar9 == '\0') break;
LAB_00c40254:
      if (local_ac == 0) {
        puVar13 = &DAT_01877520;
        goto LAB_00c409d4;
      }
      local_ac = local_ac + -1;
      puVar24 = (uint *)puVar24[uVar29 + 0x2e];
    }
    dVar36 = *(double *)(puVar24 + uVar29 * 2 + 0x16);
    puVar24 = local_bc + uVar23 * 8;
    *puVar24 = uVar27;
    uVar23 = uVar23 + 1;
    puVar24[1] = uVar19;
    *(double *)(puVar24 + 2) = dVar33;
    *(double *)(puVar24 + 4) = dVar34 - dVar33;
    *(double *)(puVar24 + 6) = dVar35 + -1.0 / dVar36;
  }
  if (uVar23 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    if (local_d4 != 0) {
      thunk_FUN_016d3fb4(local_bc);
    }
    return;
  }
  if (uVar23 != 1) {
    if (uVar23 < 0x15) {
      FUN_00b5e3ac(local_bc,uVar23);
    }
    else {
      FUN_00cd9e10(local_bc,uVar23);
    }
  }
  iVar14 = thunk_FUN_016d4a50(0x168);
  if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x168);
  }
  puVar21 = local_bc + uVar23 * 8;
  *(undefined2 *)(iVar14 + 0x166) = 0;
  *(undefined4 *)(iVar14 + 0x160) = 0;
  local_b8 = 2;
  local_c4 = 0;
  local_d0 = 0;
  puVar24 = local_bc;
  local_cc = iVar14;
  do {
    if (local_b8 == 2) {
      if (puVar24 == puVar21) goto LAB_00c40658;
      local_ac = *puVar24;
      local_b0 = puVar24[1];
      local_78 = puVar24[2];
      uStack_74 = puVar24[3];
      uStack_70 = puVar24[4];
      uStack_6c = puVar24[5];
      local_68 = puVar24[6];
      uStack_64 = puVar24[7];
      puVar24 = puVar24 + 8;
    }
    else {
      local_78 = local_a8;
      uStack_74 = uStack_a4;
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      local_68 = uStack_98;
      uStack_64 = uStack_94;
      local_b0 = unaff_r11;
      local_ac = uVar23;
      if ((local_b8 & 1) == 0) {
LAB_00c40658:
        if (local_d4 != 0) {
          thunk_FUN_016d3fb4(local_bc);
        }
        if (local_d0 != 0) {
          uVar5 = local_d0;
          iVar14 = local_cc;
          do {
            if (*(ushort *)(iVar14 + 0x166) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
            }
            iVar16 = *(ushort *)(iVar14 + 0x166) - 1;
            iVar17 = iVar14 + iVar16 * 4;
            iVar20 = *(int *)(iVar17 + 0x16c);
            uVar23 = (uint)*(ushort *)(iVar20 + 0x166);
            if (uVar23 < 5) {
              iVar17 = *(int *)(iVar17 + 0x168);
              uVar19 = (uint)*(ushort *)(iVar17 + 0x166);
              uVar27 = -uVar23 + 5;
              if (uVar19 < uVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
              }
              iVar25 = uVar19 - uVar27;
              *(ushort *)(iVar17 + 0x166) = (ushort)iVar25;
              *(ushort *)(iVar20 + 0x166) = 5;
              FUN_016dd52c(iVar20 + uVar27 * 8,iVar20,uVar23 << 3);
              iVar8 = iVar20 + 0x58;
              FUN_016dd52c(iVar8 + uVar27 * 0x18,iVar8,uVar23 * 0x18);
              iVar18 = iVar25 + 1;
              iVar28 = uVar19 - iVar18;
              if (iVar28 != -uVar23 + 4) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
              }
              FUN_016dd1aa(iVar20,iVar17 + iVar18 * 8,iVar28 * 8);
              FUN_016dd1aa(iVar8,iVar17 + 0x58 + iVar18 * 0x18,iVar28 * 0x18);
              puVar2 = (undefined4 *)(iVar17 + iVar25 * 8);
              puVar24 = (uint *)(iVar17 + 0x58 + iVar25 * 0x18);
              uVar30 = puVar2[1];
              local_50 = *puVar24;
              uStack_4c = puVar24[1];
              uStack_48 = puVar24[2];
              uStack_44 = puVar24[3];
              uStack_40 = puVar24[4];
              uStack_3c = puVar24[5];
              puVar6 = (undefined4 *)(iVar14 + iVar16 * 8);
              uVar12 = *puVar6;
              uVar26 = puVar6[1];
              *puVar6 = *puVar2;
              puVar6[1] = uVar30;
              iVar14 = iVar14 + iVar16 * 0x18;
              local_78 = *(uint *)(iVar14 + 0x58);
              uStack_74 = *(uint *)(iVar14 + 0x5c);
              uStack_70 = *(uint *)(iVar14 + 0x60);
              uStack_6c = *(uint *)(iVar14 + 100);
              local_68 = *(uint *)(iVar14 + 0x68);
              uStack_64 = *(uint *)(iVar14 + 0x6c);
              *(uint *)(iVar14 + 0x58) = local_50;
              *(uint *)(iVar14 + 0x5c) = uStack_4c;
              *(uint *)(iVar14 + 0x60) = uStack_48;
              *(uint *)(iVar14 + 100) = uStack_44;
              *(uint *)(iVar14 + 0x68) = uStack_40;
              *(uint *)(iVar14 + 0x6c) = uStack_3c;
              puVar2 = (undefined4 *)(iVar20 + iVar28 * 8);
              *puVar2 = uVar12;
              puVar2[1] = uVar26;
              puVar24 = (uint *)(iVar8 + iVar28 * 0x18);
              *puVar24 = local_78;
              puVar24[1] = uStack_74;
              puVar24[2] = uStack_70;
              puVar24[3] = uStack_6c;
              puVar24[4] = local_68;
              puVar24[5] = uStack_64;
              if (uVar5 != 1) {
                iVar14 = iVar20 + 0x168;
                FUN_016dd52c(iVar14 + uVar27 * 4,iVar14,uVar23 * 4 + 4);
                FUN_016dd1aa(iVar14,iVar17 + iVar18 * 4 + 0x168,uVar27 * 4);
                iVar14 = *(int *)(iVar20 + 0x168);
                *(undefined2 *)(iVar14 + 0x164) = 0;
                *(int *)(iVar14 + 0x160) = iVar20;
                iVar14 = *(int *)(iVar20 + 0x16c);
                *(undefined2 *)(iVar14 + 0x164) = 1;
                *(int *)(iVar14 + 0x160) = iVar20;
                iVar14 = *(int *)(iVar20 + 0x170);
                *(undefined2 *)(iVar14 + 0x164) = 2;
                *(int *)(iVar14 + 0x160) = iVar20;
                iVar14 = *(int *)(iVar20 + 0x174);
                *(undefined2 *)(iVar14 + 0x164) = 3;
                *(int *)(iVar14 + 0x160) = iVar20;
                iVar14 = *(int *)(iVar20 + 0x178);
                *(undefined2 *)(iVar14 + 0x164) = 4;
                *(int *)(iVar14 + 0x160) = iVar20;
                iVar14 = *(int *)(iVar20 + 0x17c);
                *(undefined2 *)(iVar14 + 0x164) = 5;
                *(int *)(iVar14 + 0x160) = iVar20;
              }
            }
            uVar5 = uVar5 - 1;
            iVar14 = iVar20;
          } while (uVar5 != 0);
        }
        *param_1 = local_cc;
        param_1[1] = local_d0;
        param_1[2] = local_c4;
        return;
      }
    }
    local_50 = local_78;
    uStack_4c = uStack_74;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    uStack_40 = local_68;
    uStack_3c = uStack_64;
    if (puVar24 == puVar21) {
      uVar5 = 0;
LAB_00c404bc:
      local_b8 = uVar5;
    }
    else {
      uVar23 = *puVar24;
      puVar7 = puVar24 + 1;
      local_a8 = puVar24[2];
      uStack_a4 = puVar24[3];
      uStack_a0 = puVar24[4];
      uStack_9c = puVar24[5];
      uStack_98 = puVar24[6];
      uStack_94 = puVar24[7];
      uVar5 = local_ac;
      if (local_ac == uVar23) {
        uVar5 = local_b0;
      }
      if (local_ac != uVar23 || uVar5 != *puVar7) {
        uVar5 = 1;
        puVar24 = puVar24 + 8;
        unaff_r11 = *puVar7;
        goto LAB_00c404bc;
      }
      local_b8 = 1;
      puVar7 = puVar24 + 8;
      do {
        local_50 = local_a8;
        uStack_4c = uStack_a4;
        uStack_48 = uStack_a0;
        uStack_44 = uStack_9c;
        uStack_40 = uStack_98;
        uStack_3c = uStack_94;
        uVar5 = 0;
        if (puVar7 == puVar21) {
          uVar23 = local_ac;
          puVar24 = puVar7;
          unaff_r11 = local_b0;
          goto LAB_00c404bc;
        }
        uVar23 = *puVar7;
        unaff_r11 = puVar7[1];
        puVar24 = puVar7 + 8;
        local_a8 = puVar7[2];
        uStack_a4 = puVar7[3];
        uStack_a0 = puVar7[4];
        uStack_9c = puVar7[5];
        uStack_98 = puVar7[6];
        uStack_94 = puVar7[7];
      } while ((local_ac == uVar23) && (puVar7 = puVar24, local_b0 == unaff_r11));
    }
    uVar10 = uStack_3c;
    uVar22 = uStack_40;
    uVar29 = uStack_44;
    uVar27 = uStack_48;
    uVar19 = uStack_4c;
    uVar5 = local_50;
    uVar1 = *(ushort *)(iVar14 + 0x166);
    uVar11 = (uint)uVar1;
    if (uVar11 < 0xb) {
      local_78 = local_50;
      uStack_74 = uStack_4c;
      uStack_70 = uStack_48;
      uStack_6c = uStack_44;
      local_68 = uStack_40;
      uStack_64 = uStack_3c;
      *(ushort *)(iVar14 + 0x166) = uVar1 + 1;
      puVar7 = (uint *)(iVar14 + uVar11 * 8);
      *puVar7 = local_ac;
      puVar7[1] = local_b0;
      iVar17 = iVar14 + uVar11 * 0x18;
      *(uint *)(iVar17 + 0x58) = local_50;
      *(uint *)(iVar17 + 0x5c) = uStack_4c;
      *(uint *)(iVar17 + 0x60) = uStack_48;
      *(uint *)(iVar17 + 100) = uStack_44;
      *(uint *)(iVar17 + 0x68) = uStack_40;
      *(uint *)(iVar17 + 0x6c) = uStack_3c;
    }
    else {
      uVar11 = 0;
      do {
        iVar14 = *(int *)(iVar14 + 0x160);
        local_78 = local_50;
        uStack_74 = uStack_4c;
        uStack_70 = uStack_48;
        uStack_6c = uStack_44;
        local_68 = uStack_40;
        uStack_64 = uStack_3c;
        if (iVar14 == 0) {
          iVar17 = thunk_FUN_016d4a50(0x198);
          if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x198);
          }
          *(undefined2 *)(iVar17 + 0x166) = 0;
          uVar11 = local_d0 + 1;
          *(int *)(iVar17 + 0x168) = local_cc;
          *(undefined4 *)(iVar17 + 0x160) = 0;
          if (0xfffffffe < local_d0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af438);
          }
          *(undefined2 *)(local_cc + 0x164) = 0;
          *(int *)(local_cc + 0x160) = iVar17;
          iVar14 = iVar17;
          local_d0 = uVar11;
          goto LAB_00c4055c;
        }
        uVar11 = uVar11 + 1;
      } while (10 < *(ushort *)(iVar14 + 0x166));
      iVar17 = local_cc;
LAB_00c4055c:
      iVar16 = thunk_FUN_016d4a50(0x168);
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x168);
      }
      *(undefined2 *)(iVar16 + 0x166) = 0;
      *(undefined4 *)(iVar16 + 0x160) = 0;
      uVar15 = uVar11;
      while (uVar15 = uVar15 - 1, uVar15 != 0) {
        iVar20 = thunk_FUN_016d4a50(0x198);
        if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x198);
        }
        *(undefined2 *)(iVar20 + 0x166) = 0;
        *(int *)(iVar20 + 0x168) = iVar16;
        *(undefined4 *)(iVar20 + 0x160) = 0;
        *(undefined2 *)(iVar16 + 0x164) = 0;
        *(int *)(iVar16 + 0x160) = iVar20;
        iVar16 = iVar20;
      }
      uVar15 = (uint)*(ushort *)(iVar14 + 0x166);
      if (10 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
      }
      uVar1 = (ushort)(uVar15 + 1);
      *(ushort *)(iVar14 + 0x166) = uVar1;
      puVar7 = (uint *)(iVar14 + uVar15 * 8);
      *puVar7 = local_ac;
      puVar7[1] = local_b0;
      iVar20 = iVar14 + uVar15 * 0x18;
      *(uint *)(iVar20 + 0x58) = uVar5;
      *(uint *)(iVar20 + 0x5c) = uVar19;
      *(uint *)(iVar20 + 0x60) = uVar27;
      *(uint *)(iVar20 + 100) = uVar29;
      *(uint *)(iVar20 + 0x68) = uVar22;
      *(uint *)(iVar20 + 0x6c) = uVar10;
      *(int *)(iVar14 + (uVar15 + 1) * 4 + 0x168) = iVar16;
      *(ushort *)(iVar16 + 0x164) = uVar1;
      *(int *)(iVar16 + 0x160) = iVar14;
      local_cc = iVar17;
      if (uVar11 != 0) {
        do {
          uVar11 = uVar11 - 1;
          iVar14 = *(int *)(iVar14 + (uint)*(ushort *)(iVar14 + 0x166) * 4 + 0x168);
        } while (uVar11 != 0);
      }
    }
    local_c4 = local_c4 + 1;
  } while( true );
}

