// FUN_01316afc @ 01316afc size=5012 calls_out=22 calls_in=1
// strings: Invalid step. | Invalid start of range. | Invalid end of range. | Value exceeded max after stepping. | Invalid stepped range syntax. | Invalid range syntax.

void FUN_01316afc(undefined4 *param_1,int param_2,byte *param_3,int param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  code *pcVar13;
  char *pcVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte **ppbVar20;
  byte *pbVar21;
  undefined4 uVar22;
  int iVar23;
  undefined1 *puVar24;
  code *pcVar25;
  uint uVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  undefined8 *local_c4;
  byte *local_bc;
  byte *local_b4;
  undefined4 local_b0;
  byte *pbStack_ac;
  int iStack_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  int local_90;
  undefined2 local_8c;
  byte *local_88;
  undefined8 local_84;
  code *pcStack_7c;
  code *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 *local_58;
  int local_54;
  byte *local_50;
  undefined8 local_4c;
  code *local_44;
  code *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined4 local_2c;
  
  puVar2 = param_1;
  if (param_4 == 1) {
    puVar2 = (undefined4 *)(uint)*param_3;
  }
  if (param_4 == 1 && puVar2 == (undefined4 *)&DAT_0000002a) {
    uVar16 = (uint)*(ushort *)(param_2 + 0xe);
    uVar18 = (uint)*(ushort *)(param_2 + 0xc);
    *(undefined1 *)(param_2 + 0x14) = 1;
    if (uVar18 <= uVar16) {
      do {
        FUN_013169a4(&local_50,param_2,*(ushort *)(param_2 + 0x12) + uVar18,1);
        if (local_50 != &DAT_00000007) {
          param_1[1] = (code *)local_4c;
          param_1[2] = local_4c._4_4_;
          param_1[3] = local_44;
          *param_1 = local_50;
          return;
        }
      } while (((uVar18 & 0xffff) < uVar16) && (uVar18 = uVar18 + 1, (uVar18 & 0xffff) <= uVar16));
    }
  }
  else {
    local_8c = 1;
    local_98 = 1;
    local_94 = 0;
    local_a4 = 0;
    local_9c = 0x2c;
    local_b0 = 0x2c;
    pbVar3 = (byte *)(param_2 + 0x15);
    pbStack_ac = param_3;
    iStack_a8 = param_4;
    local_a0 = param_4;
    local_90 = param_4;
LAB_01316b54:
    while( true ) {
      iVar4 = FUN_01a5c3e4(&local_b0);
      if (iVar4 == 0) break;
      uVar28 = FUN_013245a0();
      pbVar21 = (byte *)(uVar28 >> 0x20);
      if (pbVar21 != (byte *)0x0) {
        uVar22 = 0;
        if ((longlong)uVar28 < 0) {
LAB_01317e78:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar22,local_bc);
        }
        uVar22 = 1;
        local_bc = (byte *)FUN_01298504(pbVar21,1);
        if (local_bc == (byte *)0x0) {
          local_bc = pbVar21;
          goto LAB_01317e78;
        }
        FUN_01bed4e2(local_bc,(int)uVar28,pbVar21);
        local_b4 = local_bc;
        pbVar19 = pbVar21;
        if (0x7ffffffff < uVar28) {
          iVar4 = FUN_01307168(0x2f,local_bc,pbVar21);
          if (iVar4 == 1) {
LAB_01316ccc:
            FUN_01316390(&local_50,local_bc,pbVar21);
            uVar16 = (uint)(code *)local_4c & 0xff;
            uVar28 = local_4c & 0xffffffff000000ff;
            if (local_50 != &DAT_00000007) {
              uVar16 = (uint)(code *)local_4c >> 0x10;
              uVar18 = (uint)(code *)local_4c >> 8 & 0xff;
              pcVar25 = local_44;
              pbVar19 = local_50;
LAB_01317944:
              param_1[1] = (uint)uVar28 & 0xff | (uVar18 & 0xff) << 8 | uVar16 << 0x10;
              param_1[2] = (int)(uVar28 >> 0x20);
              *param_1 = pbVar19;
              param_1[3] = pcVar25;
              goto LAB_01317964;
            }
            uVar28 = FUN_013166b8(local_bc,pbVar21);
            local_40 = (code *)(uVar28 >> 0x20);
            local_2c = CONCAT22(local_2c._2_2_,1);
            local_34 = 0;
            local_38 = CONCAT31(local_38._1_3_,1);
            local_3c = 0x2f;
            local_44 = (code *)0x0;
            local_50 = &DAT_0000002f;
            local_30 = local_40;
            local_4c = uVar28;
            FUN_01318634(&local_5c,&local_50);
            puVar27 = local_58;
            if (local_54 != 2) {
              uVar22 = 0x1d;
              iVar4 = thunk_FUN_01be5118(0x1d);
              if (iVar4 == 0) goto LAB_01317e84;
              uVar28 = CONCAT44(iVar4,&DAT_0000001d);
              FUN_01bed4e2(iVar4,"Invalid stepped range syntax.",0x1d);
              pbVar19 = &DAT_00000006;
              local_c4 = local_58;
              uVar18 = 0;
              uVar16 = 0;
              pcVar25 = (code *)&DAT_0000001d;
              goto LAB_01317930;
            }
            local_c4 = local_58;
            pcVar14 = *(char **)local_58;
            pcVar25 = *(code **)((int)local_58 + 4);
            pbVar19 = *(byte **)(local_58 + 1);
            uVar18 = *(uint *)((int)local_58 + 0xc);
            if (uVar18 == 1) {
              bVar15 = *pbVar19;
              if (bVar15 != 0x2b && bVar15 != 0x2d) goto LAB_01316ee8;
LAB_013178f4:
              uVar22 = 0xd;
              iVar4 = thunk_FUN_01be5118(0xd);
              if (iVar4 == 0) {
LAB_01317e84:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,uVar22);
              }
              uVar28 = CONCAT44(iVar4,&DAT_0000000d);
              FUN_01bed4e2(iVar4,"Invalid step.",0xd);
              pbVar19 = &DAT_00000006;
              uVar18 = 0;
              uVar16 = 0;
              pcVar25 = (code *)&DAT_0000000d;
LAB_01317930:
              FUN_0134aee0(local_5c,local_c4,4,8);
              goto LAB_01317944;
            }
            if (uVar18 == 0) goto LAB_013178f4;
            bVar15 = *pbVar19;
LAB_01316ee8:
            if (bVar15 == 0x2b) {
              pbVar19 = pbVar19 + 1;
              uVar18 = uVar18 - 1;
            }
            if (uVar18 < 5) {
              if (uVar18 != 0) {
                uVar26 = 0;
                do {
                  bVar15 = *pbVar19;
                  if (9 < bVar15 - 0x30) goto LAB_013178f4;
                  pbVar19 = pbVar19 + 1;
                  uVar18 = uVar18 - 1;
                  uVar26 = (bVar15 - 0x30) + uVar26 * 10;
                } while (uVar18 != 0);
                goto LAB_01316f2c;
              }
              *(undefined2 *)(param_2 + 0x10) = 0;
LAB_01317bd8:
              uVar22 = 0x14;
              iVar4 = thunk_FUN_01be5118(0x14);
              if (iVar4 == 0) goto LAB_01317e84;
              uVar28 = CONCAT44(iVar4,&DAT_00000014);
              FUN_01bed4e2(iVar4,"Step cannot be zero.",0x14);
              pbVar19 = &DAT_00000006;
              uVar18 = 0;
              uVar16 = 0;
              pcVar25 = (code *)&DAT_00000014;
              goto LAB_01317930;
            }
            uVar26 = 0;
            while (uVar18 != 0) {
              uVar26 = (uVar26 & 0xffff) * 4 + (uVar26 & 0xffff);
              if (uVar26 >> 0xf != 0) goto LAB_013178f4;
              if (9 < *pbVar19 - 0x30) goto LAB_013178f4;
              uVar26 = (uVar26 * 2 & 0xffff) + (*pbVar19 - 0x30 & 0xffff);
              uVar18 = uVar18 - 1;
              pbVar19 = pbVar19 + 1;
              if (uVar26 >> 0x10 != 0) goto LAB_013178f4;
            }
LAB_01316f2c:
            *(short *)(param_2 + 0x10) = (short)uVar26;
            if ((uVar26 & 0xffff) == 0) goto LAB_01317bd8;
            pcVar9 = pcVar14;
            pcVar13 = pcVar25;
            if (pcVar25 != (code *)&DAT_00000001) {
              if (&DAT_00000007 < pcVar25) {
                iVar4 = FUN_01307168(0x2d,pcVar14,pcVar25);
                if (iVar4 != 1) goto LAB_0131765c;
LAB_013175a4:
                local_2c = CONCAT22(local_2c._2_2_,1);
                local_34 = 0;
                local_44 = (code *)0x0;
                local_38 = CONCAT31(local_38._1_3_,1);
                local_3c = 0x2d;
                local_50 = &DAT_0000002d;
                local_4c._0_4_ = (code *)pcVar14;
                local_4c._4_4_ = pcVar25;
                local_40 = pcVar25;
                local_30 = pcVar25;
                FUN_01318634(&local_88,&local_50);
                pbVar5 = (byte *)local_84;
                if (local_84._4_4_ != 2) {
                  FUN_01316878(&local_50,"Invalid range syntax in stepping.",0x21);
                  pcVar25 = local_4c._4_4_;
                  pbVar3 = local_50;
                  uVar28 = CONCAT44((code *)local_4c,local_50);
                  FUN_0134aee0(local_88,(byte *)local_84,4,8);
                  uVar16 = (uint)pbVar3 >> 0x10;
                  uVar18 = (uint)pbVar3 >> 8;
                  pbVar19 = &DAT_00000006;
                  goto LAB_01317930;
                }
                uVar22 = FUN_01316710(*(undefined4 *)(byte *)local_84,
                                      *(undefined4 *)((byte *)local_84 + 4));
                FUN_013168c4(&local_50,uVar22);
                pcVar25 = local_44;
                pcVar13 = local_4c._4_4_;
                pbVar19 = local_50;
                uVar18 = (uint)(code *)local_4c & 0xffff;
                if (local_50 != &DAT_00000007) {
                  uVar1 = local_4c._2_2_;
                  FUN_0134aee0(local_88,pbVar5,4,8);
                  goto LAB_01317d50;
                }
                uVar22 = FUN_01316710(*(undefined4 *)(pbVar5 + 8),*(undefined4 *)(pbVar5 + 0xc));
                FUN_01316934(&local_50,uVar22);
                pcVar25 = local_44;
                pcVar14 = (char *)(code *)local_4c;
                pbVar19 = local_50;
                uVar17 = (uint)(code *)local_4c & 0xffff;
                uVar28 = CONCAT44(local_4c._4_4_,(code *)local_4c) & 0xffffffff0000ffff;
                if (local_50 != &DAT_00000007) {
                  FUN_0134aee0(local_88,pbVar5,4,8);
LAB_01317a60:
                  uVar16 = (uint)pcVar14 >> 0x10;
                  uVar18 = (uint)uVar28 >> 8;
                  goto LAB_01317930;
                }
                FUN_0134aee0(local_88,pbVar5,4,8);
                uVar8 = (uint)*(ushort *)(param_2 + 0xe);
                goto LAB_0131768c;
              }
              for (; pcVar13 != (code *)0x0; pcVar13 = pcVar13 + -1) {
LAB_01317198:
                if (*pcVar9 == '-') goto LAB_013175a4;
                pcVar9 = pcVar9 + 1;
              }
LAB_0131765c:
              uVar22 = FUN_01316710(pcVar14,pcVar25);
              FUN_01316808(&local_50,uVar22);
              uVar18 = (uint)(code *)local_4c & 0xffff;
              if (local_50 == &DAT_00000007) {
                uVar1 = *(ushort *)(param_2 + 0xe);
                goto LAB_01317688;
              }
              pcVar25 = local_44;
              pcVar13 = local_4c._4_4_;
              pbVar19 = local_50;
              uVar1 = local_4c._2_2_;
LAB_01317d50:
              uVar28 = CONCAT44(pcVar13,uVar18);
              uVar16 = (uint)uVar1;
              uVar18 = uVar18 >> 8;
              goto LAB_01317930;
            }
            if (*pcVar14 != '*') goto LAB_01317198;
            uVar1 = *(ushort *)(param_2 + 0xe);
            uVar18 = (uint)*(ushort *)(param_2 + 0xc);
            *(undefined1 *)(param_2 + 0x14) = 1;
LAB_01317688:
            uVar8 = (uint)uVar1;
            uVar17 = uVar8;
LAB_0131768c:
            if (((uVar17 < uVar18) || (uVar18 < *(ushort *)(param_2 + 0xc))) || (uVar8 < uVar17)) {
              uVar22 = 0x23;
              iVar4 = thunk_FUN_01be5118(0x23);
              if (iVar4 == 0) goto LAB_01317e84;
              uVar28 = CONCAT44(iVar4,&DAT_00000023);
              FUN_01bed4e2(iVar4,"Range is out of bounds in stepping.",0x23);
              pbVar19 = &DAT_00000006;
              uVar18 = 0;
              uVar16 = 0;
              pcVar25 = (code *)&DAT_00000023;
              goto LAB_01317930;
            }
            while ((uVar18 & 0xffff) <= uVar17) {
              FUN_013169a4(&local_50,param_2,uVar18,uVar16);
              if (local_50 != &DAT_00000007) {
                pcVar25 = local_44;
                pbVar19 = local_50;
                pcVar14 = (char *)(code *)local_4c;
                uVar28 = local_4c;
                goto LAB_01317a60;
              }
              uVar18 = (uVar18 & 0xffff) + (uVar26 & 0xffff);
              if ((uVar18 & 0x10000) != 0) {
                uVar22 = 0x22;
                iVar4 = thunk_FUN_01be5118(0x22);
                if (iVar4 == 0) goto LAB_01317e84;
                uVar28 = CONCAT44(iVar4,&DAT_00000022);
                FUN_01bed4e2(iVar4,"Value exceeded max after stepping.",0x22);
                pbVar19 = &DAT_00000006;
                uVar18 = 0;
                uVar16 = 0;
                pcVar25 = (code *)&DAT_00000022;
                goto LAB_01317930;
              }
            }
            iVar4 = local_5c;
LAB_013176ec:
            FUN_0134aee0(iVar4,puVar27,4,8);
            goto LAB_01317834;
          }
          iVar4 = FUN_01307168(0x2d,local_bc,pbVar21);
          if (iVar4 != 1) {
            iVar4 = FUN_01307168(0x57,local_bc,pbVar21);
            if (iVar4 != 1) {
              if ((local_bc + (int)pbVar21)[-1] == 0x4c) goto LAB_0131715c;
              goto LAB_013174d4;
            }
LAB_01316fd4:
            pbVar19 = (byte *)0x0;
            do {
              uVar16 = (int)pbVar21 - (int)pbVar19;
              if (uVar16 < 8) {
                uVar18 = 0;
                if (uVar16 == 0) {
                  uVar28 = 0;
                }
                else {
                  do {
                    if ((local_bc + (int)pbVar19)[uVar18] == 0x57) {
                      uVar28 = CONCAT44(uVar18,1);
                      goto LAB_01317038;
                    }
                    uVar18 = uVar18 + 1;
                  } while (uVar16 != uVar18);
                  uVar28 = (ulonglong)uVar16 << 0x20;
                }
              }
              else {
                uVar28 = FUN_01307168(0x57,local_bc + (int)pbVar19);
              }
LAB_01317038:
              if ((uVar28 & 1) == 0) break;
              pbVar19 = pbVar19 + (int)(uVar28 >> 0x20);
              if ((pbVar19 < pbVar21) && (local_bc[(int)pbVar19] == 0x57)) {
                if (pbVar19 == &DAT_00000001) {
                  bVar15 = *local_bc;
                  if (bVar15 == 0x2b || bVar15 == 0x2d) goto LAB_01317aa8;
                }
                else {
                  if (pbVar19 == (byte *)0x0) goto LAB_01317aa8;
                  bVar15 = *local_bc;
                }
                if (bVar15 == 0x2b) {
                  pbVar19 = pbVar19 + -1;
                }
                uVar16 = 0;
                pbVar5 = local_bc;
                if (bVar15 == 0x2b) {
                  pbVar5 = local_bc + 1;
                }
                if (pbVar19 <= &SUB_00000004) goto joined_r0x0131775c;
                goto LAB_013177b4;
              }
              pbVar19 = pbVar19 + 1;
            } while (pbVar19 <= pbVar21);
            FUN_01317fa0(&local_50,param_2,local_bc,pbVar21);
            goto LAB_0131707c;
          }
LAB_01316d84:
          FUN_01316390(&local_50,local_bc,pbVar21);
          uVar16 = (uint)(code *)local_4c & 0xff;
          uVar28 = local_4c & 0xffffffff000000ff;
          if (local_50 == &DAT_00000007) {
            uVar28 = FUN_013166b8(local_bc,pbVar21);
            local_78 = (code *)(uVar28 >> 0x20);
            local_74 = 0x2d;
            local_88 = &DAT_0000002d;
            local_64 = CONCAT22(local_64._2_2_,1);
            local_6c = 0;
            local_70 = CONCAT31(local_70._1_3_,1);
            pcStack_7c = (code *)0x0;
            local_68 = local_78;
            local_84 = uVar28;
            iVar4 = FUN_014379b8(&local_88);
            if (iVar4 == 0) {
              iVar4 = 0;
              puVar27 = (undefined8 *)&SUB_00000004;
LAB_01317b8c:
              pcVar25 = (code *)&DAT_00000015;
              iVar11 = thunk_FUN_01be5118(0x15);
              uVar28 = CONCAT44(iVar11,&DAT_00000015);
              if (iVar11 == 0) {
                uVar22 = 0x15;
LAB_01317e64:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,uVar22);
              }
              FUN_01bed4e2(iVar11,"Invalid range syntax.",0x15);
              pbVar19 = &DAT_00000006;
            }
            else {
              uVar29 = FUN_013245a0();
              puVar6 = (undefined8 *)thunk_FUN_01be5118(0x20);
              if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(4,0x20);
              }
              *puVar6 = uVar29;
              local_54 = 1;
              local_5c = 4;
              local_50 = local_88;
              local_44 = pcStack_7c;
              local_40 = local_78;
              local_3c = local_74;
              local_38 = local_70;
              local_34 = local_6c;
              local_30 = local_68;
              local_2c = local_64;
              iVar11 = 0;
              local_58 = puVar6;
              local_4c = local_84;
              while( true ) {
                iVar7 = FUN_014379b8(&local_50);
                puVar27 = local_58;
                iVar4 = local_5c;
                iVar23 = iVar11 + 1;
                if (iVar7 == 0) break;
                uVar29 = FUN_013245a0();
                if (iVar23 == local_5c) {
                  FUN_006520b4(&local_5c,iVar23,1,4,8);
                  puVar6 = local_58;
                }
                puVar6[iVar11 + 1] = uVar29;
                local_54 = iVar11 + 2;
                iVar11 = iVar23;
              }
              if (iVar23 != 2) goto LAB_01317b8c;
              pbVar19 = *(byte **)local_58;
              uVar18 = *(uint *)((int)local_58 + 4);
              if (uVar18 == 1) {
                bVar15 = *pbVar19;
                if (!(bVar15 == 0x2b || bVar15 == 0x2d)) goto LAB_0131709c;
LAB_01317988:
                pcVar25 = (code *)&DAT_00000017;
                iVar11 = thunk_FUN_01be5118(0x17);
                puVar24 = &DAT_00000017;
                if (iVar11 == 0) {
                  uVar22 = 0x17;
                  goto LAB_01317e64;
                }
                uVar22 = 0x17;
                pcVar14 = "Invalid start of range.";
LAB_013179f4:
                FUN_01bed4e2(iVar11,pcVar14,uVar22);
                pbVar19 = &DAT_00000006;
                uVar28 = CONCAT44(iVar11,puVar24);
              }
              else {
                if (uVar18 == 0) goto LAB_01317988;
                bVar15 = *pbVar19;
LAB_0131709c:
                uVar26 = 0;
                if (bVar15 == 0x2b) {
                  pbVar19 = pbVar19 + 1;
                  uVar18 = uVar18 - 1;
                }
                if (uVar18 < 5) {
                  for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                    bVar15 = *pbVar19;
                    if (9 < bVar15 - 0x30) goto LAB_01317988;
                    pbVar19 = pbVar19 + 1;
                    uVar26 = (bVar15 - 0x30) + uVar26 * 10;
                  }
                }
                else {
                  while (uVar18 != 0) {
                    uVar26 = (uVar26 & 0xffff) * 4 + (uVar26 & 0xffff);
                    if (uVar26 >> 0xf != 0) goto LAB_01317988;
                    if (9 < *pbVar19 - 0x30) goto LAB_01317988;
                    uVar26 = (uVar26 * 2 & 0xffff) + (*pbVar19 - 0x30 & 0xffff);
                    uVar18 = uVar18 - 1;
                    pbVar19 = pbVar19 + 1;
                    if (uVar26 >> 0x10 != 0) goto LAB_01317988;
                  }
                }
                pbVar19 = *(byte **)(local_58 + 1);
                uVar18 = *(uint *)((int)local_58 + 0xc);
                if (uVar18 != 1) {
                  if (uVar18 != 0) {
                    bVar15 = *pbVar19;
                    goto LAB_013171c0;
                  }
LAB_013179c0:
                  pcVar25 = (code *)&DAT_00000015;
                  iVar11 = thunk_FUN_01be5118(0x15);
                  puVar24 = &DAT_00000015;
                  if (iVar11 == 0) {
                    uVar22 = 0x15;
                    goto LAB_01317e64;
                  }
                  uVar22 = 0x15;
                  pcVar14 = "Invalid end of range.";
                  goto LAB_013179f4;
                }
                bVar15 = *pbVar19;
                if (bVar15 == 0x2b || bVar15 == 0x2d) goto LAB_013179c0;
LAB_013171c0:
                uVar17 = 0;
                if (bVar15 == 0x2b) {
                  pbVar19 = pbVar19 + 1;
                  uVar18 = uVar18 - 1;
                }
                if (uVar18 < 5) {
                  for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                    bVar15 = *pbVar19;
                    if (9 < bVar15 - 0x30) goto LAB_013179c0;
                    pbVar19 = pbVar19 + 1;
                    uVar17 = (bVar15 - 0x30) + uVar17 * 10;
                  }
                }
                else {
                  while (uVar18 != 0) {
                    uVar17 = (uVar17 & 0xffff) * 4 + (uVar17 & 0xffff);
                    if (uVar17 >> 0xf != 0) goto LAB_013179c0;
                    if (9 < *pbVar19 - 0x30) goto LAB_013179c0;
                    uVar18 = uVar18 - 1;
                    uVar17 = (uVar17 * 2 & 0xffff) + (*pbVar19 - 0x30 & 0xffff);
                    pbVar19 = pbVar19 + 1;
                    if (uVar17 >> 0x10 != 0) goto LAB_013179c0;
                  }
                }
                uVar17 = uVar17 & 0xffff;
                if ((((uVar26 & 0xffff) <= uVar17) &&
                    ((uint)*(ushort *)(param_2 + 0xc) <= (uVar26 & 0xffff))) &&
                   (uVar17 <= *(ushort *)(param_2 + 0xe))) {
                  do {
                    FUN_013169a4(&local_50,param_2,uVar26,uVar16);
                    pbVar19 = local_50;
                    pcVar25 = local_44;
                    uVar28 = local_4c;
                    if (local_50 != &DAT_00000007) goto LAB_01317a04;
                  } while (((uVar26 & 0xffff) < uVar17) &&
                          (uVar26 = uVar26 + ((uVar26 & 0xffff) < uVar17),
                          (uVar26 & 0xffff) <= uVar17));
                  goto LAB_013176ec;
                }
                iVar11 = thunk_FUN_01be5118(0x14);
                if (iVar11 == 0) {
                  uVar22 = 0x14;
                  goto LAB_01317e64;
                }
                FUN_01bed4e2(iVar11,"Range out of bounds.",0x14);
                pbVar19 = &DAT_00000006;
                pcVar25 = (code *)&DAT_00000014;
                uVar28 = CONCAT44(iVar11,&DAT_00000014);
              }
            }
LAB_01317a04:
            FUN_0134aee0(iVar4,puVar27,4,8);
            uVar16 = (uint)uVar28 >> 8;
            uVar18 = (uint)uVar28;
          }
          else {
            uVar16 = (uint)(code *)local_4c >> 8 & 0xff;
            pbVar19 = local_50;
            pcVar25 = local_44;
            uVar18 = (uint)(code *)local_4c;
          }
          param_1[1] = (uint)uVar28 & 0xff | (uVar16 & 0xff) << 8 | uVar18 & 0xffff0000;
          param_1[2] = (int)(uVar28 >> 0x20);
          *param_1 = pbVar19;
          goto LAB_01317a3c;
        }
        pbVar5 = (byte *)0x0;
        do {
          if (local_bc[(int)pbVar5] == 0x2f) goto LAB_01316ccc;
          pbVar5 = pbVar5 + 1;
        } while (pbVar21 != pbVar5);
        pbVar5 = (byte *)0x0;
        do {
          if (local_bc[(int)pbVar5] == 0x2d) goto LAB_01316d84;
          pbVar5 = pbVar5 + 1;
        } while (pbVar21 != pbVar5);
        pbVar5 = (byte *)0x0;
        do {
          if (local_bc[(int)pbVar5] == 0x57) goto LAB_01316fd4;
          pbVar5 = pbVar5 + 1;
        } while (pbVar21 != pbVar5);
        if (pbVar21 == &DAT_00000001) {
          bVar12 = true;
          iVar4 = 0;
          do {
            if (!bVar12) {
              local_5c = CONCAT31(local_5c._1_3_,0x40);
              if ((*pbVar3 & 0x40) == 0) {
                local_44 = FUN_012fd5c4;
                local_4c._0_4_ = FUN_012fd5c4;
                ppbVar20 = (byte **)&local_84;
                local_50 = (byte *)&local_5c;
                local_4c._4_4_ = (code *)pbVar3;
                FUN_00664898(ppbVar20,&DAT_00431127,&local_50);
                pbVar21 = &DAT_00000001;
                goto LAB_01317cc4;
              }
              pbVar21 = &DAT_00000001;
              *(byte *)(param_2 + 0x16) = *(byte *)(param_2 + 0x16) | 0x40;
              goto LAB_01317834;
            }
            uVar16 = (uint)local_bc[iVar4];
            uVar18 = (uint)(byte)(&DAT_004e9750)[iVar4];
            if (uVar16 - 0x41 < 0x1a) {
              uVar16 = uVar16 | 0x20;
            }
            iVar4 = iVar4 + 1;
            bVar12 = false;
            if (uVar18 - 0x41 < 0x1a) {
              uVar18 = uVar18 | 0x20;
            }
          } while (uVar16 == uVar18);
        }
        if ((local_bc + (int)pbVar21)[-1] == 0x4c) {
          if (uVar28 < 0x800000000) {
            pbVar5 = (byte *)0x0;
            do {
              if (local_bc[(int)pbVar5] == 0x23) goto LAB_01317498;
              pbVar5 = pbVar5 + 1;
            } while (pbVar21 != pbVar5);
          }
          else {
LAB_0131715c:
            iVar4 = FUN_01307168(0x23,local_bc,pbVar21);
            if (iVar4 == 1) goto LAB_013174d4;
          }
          local_b4 = (byte *)FUN_01298504(pbVar21,1);
          if (local_b4 != (byte *)0x0) {
            iVar4 = 0;
            pbVar19 = (byte *)0x0;
            local_50 = pbVar21;
            local_4c._0_4_ = (code *)local_b4;
            do {
              pbVar5 = pbVar19;
              local_4c._4_4_ = (code *)iVar4;
LAB_0131731c:
              uVar16 = (int)pbVar21 - (int)pbVar5;
              if (uVar16 < 8) {
                uVar18 = 0;
                if (uVar16 == 0) {
                  uVar28 = 0;
                }
                else {
                  do {
                    if ((local_bc + (int)pbVar5)[uVar18] == 0x4c) {
                      uVar28 = CONCAT44(uVar18,1);
                      goto LAB_0131737c;
                    }
                    uVar18 = uVar18 + 1;
                  } while (uVar16 != uVar18);
                  uVar28 = (ulonglong)uVar16 << 0x20;
                }
              }
              else {
                uVar28 = FUN_01307168(0x4c,local_bc + (int)pbVar5);
              }
LAB_0131737c:
              if ((uVar28 & 1) == 0) goto LAB_01317460;
              pbVar10 = pbVar5 + (int)(uVar28 >> 0x20);
              pbVar5 = pbVar10 + 1;
              if ((pbVar21 <= pbVar10) || (local_bc[(int)pbVar10] != 0x4c)) goto LAB_013173a4;
              uVar16 = (int)pbVar10 - (int)pbVar19;
              if ((uint)((int)local_50 - iVar4) < uVar16) {
                FUN_006520b4(&local_50,iVar4,uVar16,1,1);
                local_b4 = (byte *)(code *)local_4c;
                iVar4 = (int)local_4c._4_4_;
              }
              pbVar10 = local_50;
              FUN_01bed4e2(local_b4 + iVar4,local_bc + (int)pbVar19,uVar16);
              local_4c._4_4_ = (code *)(iVar4 + uVar16);
              if ((uint)((int)pbVar10 - (int)local_4c._4_4_) < 2) {
                FUN_006520b4(&local_50,local_4c._4_4_,2,1,1);
                local_b4 = (byte *)(code *)local_4c;
              }
              iVar4 = (int)local_4c._4_4_ + 2;
              (local_b4 + (int)local_4c._4_4_)[0] = 0x23;
              (local_b4 + (int)local_4c._4_4_)[1] = 0x4c;
              pbVar19 = pbVar5;
            } while( true );
          }
          goto LAB_01317e4c;
        }
LAB_01317498:
        if (&DAT_00000007 < pbVar19) {
LAB_013174d4:
          iVar4 = FUN_01307168(0x23,local_b4,pbVar19);
          if (iVar4 == 1) {
LAB_013174ec:
            if ((~*pbVar3 & 0x3e) == 0) goto LAB_01317504;
            FUN_01316878(&local_50,"Nth specifier # not allowed in the current field.",0x31);
LAB_01317cc0:
            ppbVar20 = &local_50;
LAB_01317cc4:
            pbVar3 = ppbVar20[1];
            pbVar19 = ppbVar20[2];
            param_1[1] = *ppbVar20;
            param_1[2] = pbVar3;
            param_1[3] = pbVar19;
            *param_1 = 6;
            goto LAB_01317964;
          }
LAB_0131753c:
          iVar4 = FUN_01307168(0x4c,local_b4,pbVar19);
          if (iVar4 == 1) {
LAB_01317558:
            if ((~*pbVar3 & 0x3e) != 0) {
              FUN_01316878(&local_50,"L not allowed in the current field.",0x23);
              goto LAB_01317cc0;
            }
          }
        }
        else if (pbVar19 == (byte *)0x0) {
          pbVar19 = (byte *)0x0;
        }
        else {
          pbVar5 = (byte *)0x0;
          do {
            if (local_b4[(int)pbVar5] == 0x23) goto LAB_013174ec;
            pbVar5 = pbVar5 + 1;
          } while (pbVar19 != pbVar5);
LAB_01317504:
          if (&DAT_00000007 < pbVar19) goto LAB_0131753c;
          if (pbVar19 == (byte *)0x0) {
            pbVar19 = (byte *)0x0;
          }
          else {
            pbVar5 = (byte *)0x0;
            do {
              if (local_b4[(int)pbVar5] == 0x4c) goto LAB_01317558;
              pbVar5 = pbVar5 + 1;
            } while (pbVar19 != pbVar5);
          }
        }
        FUN_01317fa0(&local_50,param_2,local_b4,pbVar19);
        if (local_50 != &DAT_00000007) {
          *(ulonglong *)(param_1 + 1) = local_4c;
          param_1[3] = local_44;
          *param_1 = local_50;
LAB_01317964:
          local_bc = local_b4;
          goto LAB_01317a40;
        }
        goto LAB_01317834;
      }
    }
  }
  *param_1 = 7;
  return;
LAB_013177b4:
  if (pbVar19 == (byte *)0x0) goto LAB_01317784;
  uVar16 = (uVar16 & 0xffff) * 4 + (uVar16 & 0xffff);
  if (uVar16 >> 0xf != 0) goto LAB_01317aa8;
  if (9 < *pbVar5 - 0x30) goto LAB_01317aa8;
  pbVar19 = pbVar19 + -1;
  uVar16 = (uVar16 * 2 & 0xffff) + (*pbVar5 - 0x30 & 0xffff);
  pbVar5 = pbVar5 + 1;
  if (uVar16 >> 0x10 != 0) goto LAB_01317aa8;
  goto LAB_013177b4;
joined_r0x0131775c:
  if (pbVar19 == (byte *)0x0) goto LAB_01317784;
  bVar15 = *pbVar5;
  if (9 < bVar15 - 0x30) goto LAB_01317aa8;
  pbVar5 = pbVar5 + 1;
  pbVar19 = pbVar19 + -1;
  uVar16 = (bVar15 - 0x30) + uVar16 * 10;
  goto joined_r0x0131775c;
LAB_01317aa8:
  pcVar25 = (code *)&DAT_00000020;
  iVar4 = thunk_FUN_01be5118(0x20);
  puVar24 = &DAT_00000020;
  if (iVar4 == 0) {
    pbVar21 = &DAT_00000020;
LAB_01317e4c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,pbVar21);
  }
  uVar22 = 0x20;
  pcVar14 = "Invalid day for closest weekday.@\x06";
  goto LAB_01317adc;
LAB_013173a4:
  if (pbVar21 < pbVar5) {
LAB_01317460:
    uVar16 = (int)pbVar21 - (int)pbVar19;
    if ((uint)((int)local_50 - iVar4) < uVar16) {
      FUN_006520b4(&local_50,iVar4,uVar16,1,1);
      local_b4 = (byte *)(code *)local_4c;
      iVar4 = (int)local_4c._4_4_;
    }
    pbVar5 = local_50;
    FUN_01bed4e2(local_b4 + iVar4,local_bc + (int)pbVar19,uVar16);
    FUN_0134bd64(pbVar21,local_bc);
    pbVar21 = pbVar5;
    pbVar19 = (byte *)(iVar4 + uVar16);
    goto LAB_01317498;
  }
  goto LAB_0131731c;
LAB_01317784:
  if (((uint)*(ushort *)(param_2 + 0xc) <= (uVar16 & 0xffff)) &&
     ((uVar16 & 0xffff) <= (uint)*(ushort *)(param_2 + 0xe))) {
    FUN_013169a4(&local_50,param_2,uVar16,0x80);
LAB_0131707c:
    if (local_50 == &DAT_00000007) {
LAB_01317834:
      FUN_0134bd64(pbVar21,local_b4);
      goto LAB_01316b54;
    }
    pbVar3 = local_50;
    pcVar25 = local_44;
    uVar28 = local_4c;
    goto LAB_01317ae4;
  }
  pcVar25 = (code *)&DAT_00000026;
  iVar4 = thunk_FUN_01be5118(0x26);
  puVar24 = &DAT_00000026;
  if (iVar4 == 0) {
    pbVar21 = &DAT_00000026;
    goto LAB_01317e4c;
  }
  uVar22 = 0x26;
  pcVar14 = "Day for closest weekday out of bounds.";
LAB_01317adc:
  uVar28 = CONCAT44(iVar4,puVar24);
  FUN_01bed4e2(iVar4,pcVar14,uVar22);
  pbVar3 = &DAT_00000006;
LAB_01317ae4:
  *param_1 = pbVar3;
  *(ulonglong *)(param_1 + 1) = uVar28;
LAB_01317a3c:
  param_1[3] = pcVar25;
LAB_01317a40:
  FUN_0134bd64(pbVar21,local_bc);
  return;
}

