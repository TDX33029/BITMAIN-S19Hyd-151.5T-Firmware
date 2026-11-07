// FUN_00b171c8 @ 00b171c8 size=2940 calls_out=13 calls_in=1
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_00b171c8(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  uint extraout_r1;
  uint *puVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  char *pcVar32;
  uint *puVar33;
  int iVar34;
  uint *puVar35;
  int iVar36;
  bool bVar37;
  bool bVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 in_d17;
  undefined8 uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  int local_10c;
  undefined4 local_108;
  uint local_f0;
  uint local_e8;
  uint local_e4;
  int local_e0;
  uint local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 uStack_9c;
  ulonglong uStack_98;
  uint local_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  uint local_80;
  uint local_78;
  uint *local_74;
  ulonglong local_70;
  uint local_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  uint uStack_58;
  int local_50 [2];
  int local_48;
  int local_44 [3];
  
  FUN_01495f30(&local_78,param_2,*param_2,param_2[1],param_2[2]);
  uVar8 = (uint)local_70;
  puVar6 = local_74;
  uVar5 = local_78;
  puVar9 = (undefined8 *)param_2[5];
  iVar18 = param_2[6];
  iVar19 = iVar18 * 0x18;
  puVar15 = puVar9;
LAB_00b17230:
  if (iVar19 == 0) {
    puVar10 = (uint *)&DAT_00000008;
    uVar24 = 0;
  }
  else {
    uVar23 = (uint)*(byte *)(puVar15 + 2);
    bVar37 = uVar23 == 0;
    if (bVar37) {
      uVar23 = *(uint *)((int)puVar15 + 0xc);
    }
    if (!bVar37 || uVar23 != 5) goto code_r0x00b17250;
    uVar39 = *puVar15;
    uVar23 = *(uint *)(puVar15 + 1);
    puVar10 = (uint *)thunk_FUN_01be5118(0x40);
    if (puVar10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0x40);
    }
    *puVar10 = uVar23;
    uVar23 = 1;
    puVar33 = (uint *)&DAT_00000010;
    *(undefined8 *)(puVar10 + 2) = uVar39;
    local_70._0_4_ = 1;
    local_78 = 4;
    puVar15 = puVar15 + 3;
    local_74 = puVar10;
    while( true ) {
      puVar25 = puVar15;
      puVar7 = local_74;
      uVar24 = local_78;
      if (puVar25 == puVar9 + iVar18 * 3) break;
      uVar24 = (uint)*(byte *)(puVar25 + 2);
      bVar37 = uVar24 == 0;
      if (bVar37) {
        uVar24 = *(uint *)((int)puVar25 + 0xc);
      }
      puVar15 = puVar25 + 3;
      if (bVar37 && uVar24 == 5) {
        uVar24 = *(uint *)(puVar25 + 1);
        uVar39 = *puVar25;
        if (uVar23 == local_78) {
          FUN_0132b898(&local_78,uVar23,1,8,0x10);
          puVar10 = local_74;
        }
        iVar19 = uVar23 * 4;
        puVar10[iVar19] = uVar24;
        uVar23 = uVar23 + 1;
        *(undefined8 *)(puVar10 + iVar19 + 2) = uVar39;
        local_70._0_4_ = uVar23;
      }
    }
    if (uVar23 == 1) {
LAB_00b173bc:
      uVar11 = FUN_00ab2980();
      *(undefined2 *)(uVar11 + 0x8a) = 0;
      local_f0 = 0;
      uVar29 = 2;
      *(undefined4 *)(uVar11 + 0x58) = 0;
      uVar4 = (ulonglong)uVar11;
      puVar10 = puVar7;
      do {
        local_10c = (int)(uVar4 >> 0x20);
        local_108 = (undefined4)uVar4;
        puVar20 = puVar33;
        do {
          if (uVar29 == 2) {
            if (puVar10 == puVar7 + uVar23 * 4) goto LAB_00b17580;
            puVar12 = puVar10 + 4;
            puVar35 = (uint *)*puVar10;
            uVar40 = *(undefined8 *)(puVar10 + 2);
          }
          else {
            puVar12 = puVar10;
            puVar35 = puVar20;
            uVar40 = uVar39;
            if ((uVar29 & 1) == 0) {
LAB_00b17580:
              FUN_0132b958(uVar24,puVar7,8,0x10);
              uVar42 = uVar4;
              uVar23 = local_f0;
              if (local_10c == 0) goto LAB_00b17280;
              goto LAB_00b175a8;
            }
          }
          if (puVar12 == puVar7 + uVar23 * 4) {
            uVar29 = 0;
            puVar33 = puVar20;
            puVar10 = puVar12;
            break;
          }
          puVar33 = (uint *)*puVar12;
          puVar10 = puVar12 + 4;
          uVar39 = *(undefined8 *)(puVar12 + 2);
          uVar29 = 1;
          puVar20 = puVar35;
        } while (puVar35 == puVar33);
        uVar13 = (uint)*(ushort *)(uVar11 + 0x8a);
        if (uVar13 < 0xb) {
          *(ushort *)(uVar11 + 0x8a) = *(ushort *)(uVar11 + 0x8a) + 1;
          *(uint **)(uVar11 + uVar13 * 4 + 0x5c) = puVar35;
          *(undefined8 *)(uVar11 + uVar13 * 8) = uVar40;
        }
        else {
          iVar19 = 0;
          do {
            uVar11 = *(uint *)(uVar11 + 0x58);
            if (uVar11 == 0) {
              uVar42 = FUN_0096c128(local_108,local_10c);
              uVar4 = uVar42;
              break;
            }
            iVar19 = iVar19 + 1;
            uVar42 = CONCAT44(iVar19,uVar11);
          } while (10 < *(ushort *)(uVar11 + 0x8a));
          iVar18 = (int)uVar42;
          uVar11 = FUN_00ab2980();
          local_e0 = (int)(uVar42 >> 0x20) + -1;
          uVar43 = (ulonglong)uVar11;
          *(undefined2 *)(uVar11 + 0x8a) = 0;
          *(undefined4 *)(uVar11 + 0x58) = 0;
          iVar19 = local_e0;
          while( true ) {
            iVar30 = (int)uVar43;
            if (iVar19 == 0) break;
            uVar43 = FUN_0096c128();
            iVar19 = iVar19 + -1;
          }
          if ((int)(uVar43 >> 0x20) != local_e0) {
            uVar22 = 0x30;
            puVar26 = &DAT_01d305c8;
            pcVar17 = &DAT_00533a41;
LAB_00b17d00:
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(pcVar17,uVar22,puVar26);
          }
          uVar11 = (uint)*(ushort *)(iVar18 + 0x8a);
          if (10 < uVar11) {
            uVar22 = 0x20;
            pcVar17 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
            puVar26 = &DAT_01d305d8;
            goto LAB_00b17d00;
          }
          uVar3 = (undefined2)(uVar11 + 1);
          *(undefined2 *)(iVar18 + 0x8a) = uVar3;
          *(uint **)(iVar18 + uVar11 * 4 + 0x5c) = puVar35;
          *(undefined8 *)(iVar18 + uVar11 * 8) = uVar40;
          *(int *)(iVar18 + (uVar11 + 1) * 4 + 0x90) = iVar30;
          *(undefined2 *)(iVar30 + 0x88) = uVar3;
          *(int *)(iVar30 + 0x58) = iVar18;
          while( true ) {
            iVar19 = (int)(uVar42 >> 0x20);
            uVar11 = (uint)uVar42;
            if (iVar19 == 0) break;
            uVar42 = CONCAT44(iVar19 + -1,
                              *(undefined4 *)(uVar11 + (uint)*(ushort *)(uVar11 + 0x8a) * 4 + 0x90))
            ;
          }
        }
        local_f0 = local_f0 + 1;
      } while( true );
    }
    puVar10 = local_74;
    if (uVar23 != 0) {
      if (uVar23 < 0x15) {
        puVar33 = local_74 + 4;
        iVar19 = 0;
        do {
          uVar11 = *puVar33;
          if (uVar11 < puVar33[-4]) {
            uVar40 = *(undefined8 *)(puVar33 + 2);
            iVar18 = iVar19;
            do {
              iVar30 = iVar18;
              puVar16 = (undefined4 *)((int)local_74 + iVar30);
              puVar16[4] = *puVar16;
              puVar16[5] = puVar16[1];
              puVar16[6] = puVar16[2];
              puVar16[7] = puVar16[3];
              if (iVar30 == 0) {
                puVar10 = local_74;
                goto LAB_00b17cb0;
              }
              iVar18 = iVar30 + -0x10;
            } while (uVar11 < (uint)puVar16[-4]);
            puVar10 = (uint *)((int)local_74 + iVar30);
LAB_00b17cb0:
            *(undefined8 *)(puVar10 + 2) = uVar40;
            *puVar10 = uVar11;
          }
          puVar33 = puVar33 + 4;
          iVar19 = iVar19 + 0x10;
        } while (puVar33 != local_74 + uVar23 * 4);
      }
      else {
        FUN_00a52218(local_74,uVar23);
      }
      goto LAB_00b173bc;
    }
  }
  FUN_0132b958(uVar24,puVar10,8,0x10);
  uVar23 = 0;
  uVar4 = (ulonglong)extraout_r1 << 0x20;
  goto LAB_00b17280;
code_r0x00b17250:
  iVar19 = iVar19 + -0x18;
  puVar15 = puVar15 + 3;
  goto LAB_00b17230;
LAB_00b17acc:
  goto LAB_00b17ad0;
LAB_00b175a8:
  do {
    iVar19 = (int)uVar42;
    if (*(ushort *)(iVar19 + 0x8a) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a28,0x19,&DAT_01d305a8);
    }
    iVar18 = *(ushort *)(iVar19 + 0x8a) - 1;
    iVar31 = (int)(uVar42 >> 0x20) + -1;
    uVar24 = iVar19 + iVar18 * 4;
    iVar30 = *(int *)(uVar24 + 0x94);
    uVar11 = (uint)*(ushort *)(iVar30 + 0x8a);
    if (uVar11 < 5) {
      iVar14 = *(int *)(uVar24 + 0x90);
      uVar13 = -uVar11 + 5;
      uVar29 = (uint)*(ushort *)(iVar14 + 0x8a);
      if (uVar29 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
      }
      iVar36 = uVar29 - uVar13;
      iVar21 = iVar30 + 0x5c;
      *(short *)(iVar14 + 0x8a) = (short)iVar36;
      local_e8 = uVar11 * 4;
      *(undefined2 *)(iVar30 + 0x8a) = 5;
      FUN_01bed864(iVar21 + uVar13 * 4,iVar21,local_e8);
      FUN_01bed864(iVar30 + uVar13 * 8,iVar30,uVar11 << 3);
      iVar28 = iVar36 + 1;
      iVar34 = uVar29 - iVar28;
      if (iVar34 != -uVar11 + 4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
      }
      FUN_01bed4e2(iVar21,iVar14 + 0x5c + iVar28 * 4,iVar34 * 4);
      FUN_01bed4e2(iVar30,iVar14 + iVar28 * 8,iVar34 * 8);
      uVar39 = *(undefined8 *)(iVar14 + iVar36 * 8);
      uVar22 = *(undefined4 *)(uVar24 + 0x5c);
      *(undefined4 *)(uVar24 + 0x5c) = *(undefined4 *)(iVar14 + 0x5c + iVar36 * 4);
      puVar15 = (undefined8 *)(iVar19 + iVar18 * 8);
      in_d17 = *puVar15;
      *puVar15 = uVar39;
      *(undefined4 *)(iVar21 + iVar34 * 4) = uVar22;
      *(undefined8 *)(iVar30 + iVar34 * 8) = in_d17;
      local_e4 = uVar24;
      local_e0 = iVar18;
      if (iVar31 == 0) break;
      iVar19 = iVar30 + 0x90;
      FUN_01bed864(iVar19 + uVar13 * 4,iVar19,local_e8 + 4);
      FUN_01bed4e2(iVar19,iVar14 + iVar28 * 4 + 0x90,uVar13 * 4);
      iVar19 = 0;
      do {
        iVar18 = *(int *)(iVar30 + iVar19 * 4 + 0x90);
        *(short *)(iVar18 + 0x88) = (short)iVar19;
        iVar19 = iVar19 + 1;
        *(int *)(iVar18 + 0x58) = iVar30;
      } while (iVar19 != 6);
    }
    uVar42 = CONCAT44(iVar31,iVar30);
  } while (iVar31 != 0);
LAB_00b17280:
  bVar37 = (int)uVar4 == 0;
  uVar22 = 0;
  if (bVar37) {
    uVar23 = 0;
  }
  uVar11 = (uint)!bVar37;
  uVar24 = uVar23 * 0x10;
  bVar38 = 0xffffffe < uVar23;
  bVar37 = uVar23 == 0xfffffff;
  if (uVar23 < 0x10000000) {
    bVar38 = 0x7ffffff7 < uVar24;
    bVar37 = uVar24 == 0x7ffffff8;
  }
  if (bVar38 && !bVar37) {
LAB_00b172c4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,uVar24);
  }
  if (uVar24 == 0) {
    local_a8 = 8;
    local_ac = 0;
  }
  else {
    uVar22 = 8;
    local_a8 = FUN_01298504(uVar24,8);
    local_ac = uVar23;
    if (local_a8 == 0) goto LAB_00b172c4;
  }
  local_a4 = 0;
  uStack_9c = 0;
  uStack_8c = 0;
  local_a0 = uVar11;
  local_90 = uVar11;
  local_80 = uVar23;
  uStack_98 = uVar4;
  uStack_88 = uVar4;
  if (local_ac < uVar23) {
    FUN_0132b898(&local_ac,0,uVar23,8,0x10);
  }
  iVar19 = local_a8;
  puVar15 = (undefined8 *)(local_a8 + local_a4 * 0x10);
  local_74 = (uint *)0x0;
  uStack_64 = 0;
  iVar30 = local_a8 + 8;
  iVar18 = local_a4;
  local_78 = uVar11;
  local_68 = uVar11;
  uStack_58 = uVar23;
  local_70 = uVar4;
  uStack_60 = uVar4;
  while( true ) {
    FUN_0096bd30(local_50,&local_78);
    if (local_50[0] == 0) break;
    uVar22 = *(undefined4 *)(local_50[0] + local_48 * 4 + 0x5c);
    *puVar15 = *(undefined8 *)(local_50[0] + local_48 * 8);
    puVar15 = puVar15 + 2;
    *(undefined4 *)(iVar30 + iVar18 * 0x10) = uVar22;
    iVar18 = iVar18 + 1;
  }
  local_a4 = iVar18;
  do {
    FUN_0096bd30(local_44,&local_78);
    uVar23 = local_ac;
  } while (local_44[0] != 0);
  iVar31 = param_2[0xf];
  uVar22 = 0;
  iVar30 = param_2[0x12];
  uVar11 = iVar30 + iVar31;
  bVar38 = 0xffffffe < uVar11;
  bVar37 = uVar11 == 0xfffffff;
  uVar24 = uVar11 * 0x10;
  if (uVar11 < 0x10000000) {
    bVar38 = 0x7ffffff7 < uVar24;
    bVar37 = uVar24 == 0x7ffffff8;
  }
  if (bVar38 && !bVar37) {
LAB_00b17808:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,uVar24);
  }
  iVar21 = param_2[0xe];
  iVar14 = param_2[0x11];
  if (uVar24 == 0) {
    local_70._0_4_ = 0;
    local_74 = (uint *)0x8;
    local_78 = 0;
    if (uVar11 != 0) {
      FUN_0132b898(&local_78,0,uVar11,8,0x10);
    }
  }
  else {
    uVar22 = 8;
    iVar28 = FUN_01298504(uVar24,8);
    if (iVar28 == 0) goto LAB_00b17808;
    local_70._0_4_ = 0;
    local_78 = uVar11;
    local_74 = (uint *)iVar28;
  }
  puVar10 = local_74;
  uVar24 = local_78;
  iVar28 = (uint)local_70;
  if (iVar31 != 0) {
    iVar34 = (int)local_74 + (uint)local_70 * 0x10;
    iVar36 = 0;
    iVar28 = 0;
    do {
      iVar27 = iVar21 + iVar28 * 0x10;
      puVar9 = (undefined8 *)(iVar21 + iVar36);
      uVar22 = *(undefined4 *)(iVar27 + 8);
      bVar1 = *(byte *)(iVar27 + 0xc);
      puVar15 = (undefined8 *)(iVar34 + iVar36);
      iVar36 = iVar36 + 0x10;
      *puVar15 = *puVar9;
      iVar27 = iVar34 + iVar28 * 0x10;
      iVar28 = iVar28 + 1;
      *(undefined4 *)(iVar27 + 8) = uVar22;
      *(uint *)(iVar27 + 0xc) = (uint)bVar1;
    } while (iVar31 != iVar28);
    iVar28 = (uint)local_70 + iVar28;
  }
  if (iVar30 != 0) {
    iVar31 = (int)local_74 + iVar28 * 0x10;
    iVar21 = 0;
    iVar34 = 0;
    do {
      puVar15 = (undefined8 *)(iVar14 + iVar21);
      puVar9 = (undefined8 *)(iVar31 + iVar21);
      iVar21 = iVar21 + 0x10;
      uVar22 = *(undefined4 *)(iVar14 + iVar34 * 0x10 + 8);
      *puVar9 = *puVar15;
      iVar36 = iVar31 + iVar34 * 0x10;
      iVar34 = iVar34 + 1;
      *(undefined4 *)(iVar36 + 8) = uVar22;
      *(undefined4 *)(iVar36 + 0xc) = 5;
    } while (iVar30 != iVar34);
    iVar28 = iVar28 + iVar34;
  }
  uVar22 = 0;
  if (param_2[9] != 0) {
    local_f0 = *(uint *)param_2[8];
    local_e8 = ((uint *)param_2[8])[1];
  }
  uVar29 = param_2[0xc];
  bVar38 = 0x1ffffffe < uVar29;
  bVar37 = uVar29 == 0x1fffffff;
  uVar11 = uVar29 * 8;
  if (uVar29 < 0x20000000) {
    local_e0 = 0;
    bVar38 = 0x7ffffff7 < uVar11;
    bVar37 = uVar11 == 0x7ffffff8;
    local_e4 = (uint)(param_2[9] != 0);
  }
  if (!(bVar38 && !bVar37)) {
    puVar15 = (undefined8 *)param_2[0xb];
    if (uVar11 == 0) {
      puVar9 = (undefined8 *)&DAT_00000008;
      uVar13 = 0;
    }
    else {
      uVar22 = 8;
      puVar9 = (undefined8 *)FUN_01298504(uVar11,8);
      uVar13 = uVar29;
      if (puVar9 == (undefined8 *)0x0) goto LAB_00b17998;
    }
    uVar11 = 0;
    if (uVar29 != 0) {
      puVar25 = puVar9;
      uVar11 = uVar29;
      do {
        uVar39 = *puVar15;
        puVar15 = puVar15 + 1;
        uVar11 = uVar11 - 1;
        *puVar25 = uVar39;
        puVar25 = puVar25 + 1;
      } while (uVar11 != 0);
      uVar11 = uVar29;
    }
    iVar30 = param_2[0x15];
    uVar40 = 0;
    uVar39 = uVar40;
    if (iVar30 != 0) {
      puVar15 = (undefined8 *)param_2[0x14];
      iVar31 = iVar30 << 4;
      iVar14 = iVar31;
      puVar25 = puVar15;
      do {
        cVar2 = *(char *)(puVar25 + 1);
        bVar37 = cVar2 == '\x01';
        if (bVar37) {
          cVar2 = *(char *)((int)puVar25 + 9);
        }
        if (bVar37 && cVar2 == '\0') {
          in_d17 = *puVar25;
          uVar22 = 1;
          goto joined_r0x00b17a98;
        }
        puVar25 = puVar25 + 2;
        iVar14 = iVar14 + -0x10;
      } while (iVar14 != 0);
      uVar22 = 0;
joined_r0x00b17a98:
      do {
        if (iVar30 == 0) goto LAB_00b17acc;
        if ((*(char *)(puVar15 + 1) == '\x01') && (*(char *)((int)puVar15 + 9) != '\0')) {
          uVar39 = *puVar15;
          goto LAB_00b17acc;
        }
        puVar15 = puVar15 + 2;
        iVar31 = iVar31 + -0x10;
        iVar30 = iVar31;
      } while( true );
    }
    uVar22 = 0;
LAB_00b17ad0:
    iVar30 = param_2[0x18] << 4;
    pcVar17 = (char *)(param_2[0x17] + 8);
    do {
      pcVar32 = pcVar17;
      if (iVar30 == 0) {
        uVar41 = uVar40;
        goto LAB_00b17b00;
      }
      iVar30 = iVar30 + -0x10;
      pcVar17 = pcVar32 + 0x10;
    } while (*pcVar32 != '\0');
    uVar41 = *(undefined8 *)(pcVar32 + -8);
LAB_00b17b00:
    iVar30 = param_2[0x18] << 4;
    pcVar17 = (char *)(param_2[0x17] + 8);
    do {
      pcVar32 = pcVar17;
      if (iVar30 == 0) goto LAB_00b17b24;
      iVar30 = iVar30 + -0x10;
      pcVar17 = pcVar32 + 0x10;
    } while (*pcVar32 == '\0');
    uVar40 = *(undefined8 *)(pcVar32 + -8);
LAB_00b17b24:
    param_1[0xe] = uVar22;
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar5;
    param_1[8] = local_f0;
    param_1[6] = local_e4;
    param_1[0xd] = 0;
    *(undefined8 *)(param_1 + 0x10) = in_d17;
    *(undefined8 *)(param_1 + 0x12) = uVar39;
    *(undefined8 *)(param_1 + 0x14) = uVar41;
    param_1[0x18] = uVar23;
    param_1[0x19] = iVar19;
    param_1[10] = uVar13;
    param_1[0x1b] = uVar24;
    param_1[0x1c] = puVar10;
    param_1[0x1d] = iVar28;
    param_1[4] = uVar8;
    param_1[3] = puVar6;
    param_1[9] = local_e8;
    param_1[0xc] = uVar11;
    *(undefined8 *)(param_1 + 0x16) = uVar40;
    param_1[0x1a] = iVar18;
    param_1[0xb] = puVar9;
    param_1[0xf] = 0;
    param_1[7] = local_e0;
    return;
  }
LAB_00b17998:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar22,uVar11);
}

