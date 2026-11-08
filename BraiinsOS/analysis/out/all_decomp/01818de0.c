// FUN_01818de0 @ 01818de0 size=7924 calls_out=7 calls_in=1
// strings: incorrect data check | incorrect length check | invalid distance too far back | unknown compression method | invalid code -- missing end-of-block | unknown compression method

uint FUN_01818de0(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *extraout_r1;
  uint uVar8;
  ushort *puVar9;
  uint *puVar10;
  uint *puVar12;
  uint *puVar11;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  byte bVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  byte *pbVar29;
  bool bVar30;
  bool bVar31;
  uint local_54;
  uint local_4c;
  uint local_40;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if ((((param_1 != (undefined4 *)0x0) && (param_1[8] != 0)) && (param_1[9] != 0)) &&
     ((puVar23 = (undefined4 *)param_1[7], puVar23 != (undefined4 *)0x0 &&
      (param_1 == (undefined4 *)*puVar23)))) {
    iVar7 = puVar23[1];
    iVar16 = iVar7 + -0x3f00;
    if (((iVar7 - 0x3f34U < 0x20) &&
        (local_34 = (undefined4 *)param_1[3], local_34 != (undefined4 *)0x0)) &&
       ((pbVar29 = (byte *)*param_1, pbVar29 != (byte *)0x0 || (param_1[1] == 0)))) {
      if (iVar7 == 0x3f3f) {
        puVar23[1] = 0x3f40;
        iVar16 = 0x40;
      }
      uVar28 = puVar23[0xf];
      local_38 = param_1[4];
      uVar24 = param_1[1];
      uVar17 = puVar23[0x10];
      uVar19 = uVar24;
      local_40 = local_38;
LAB_01818f04:
      uVar22 = uVar17;
      uVar4 = uVar19;
      pbVar27 = pbVar29;
      switch(iVar16) {
      case 0x34:
        uVar8 = puVar23[3];
        if (uVar8 == 0) {
          puVar23[1] = 0x3f40;
          goto switchD_01818f18_caseD_40;
        }
        if (uVar17 < 0x10) {
          if (uVar19 == 0) goto LAB_01819138;
          uVar22 = uVar17 + 8;
          uVar4 = uVar19 - 1;
          pbVar27 = pbVar29 + 1;
          uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
          if (uVar22 < 0x10) {
            if (uVar4 == 0) {
              uVar26 = uVar4;
              goto LAB_0181913c;
            }
            uVar4 = uVar19 - 2;
            pbVar27 = pbVar29 + 2;
            uVar28 = uVar28 + ((uint)pbVar29[1] << (uVar22 & 0xff));
            uVar22 = uVar17 + 0x10;
          }
        }
        uVar17 = (uVar8 & 3) >> 1;
        if (uVar28 != 0x8b1f) {
          uVar17 = 0;
        }
        uVar19 = uVar4;
        if (uVar17 != 0) {
          uVar17 = 0;
          if (puVar23[10] == 0) {
            puVar23[10] = 0xf;
          }
          uVar5 = FUN_01814534(0,0);
          puVar23[7] = uVar5;
          local_30 = CONCAT22(local_30._2_2_,0x8b1f);
          uVar28 = 0;
          uVar5 = FUN_01814534(uVar5,&local_30,2);
          puVar23[7] = uVar5;
          puVar23[1] = 0x3f35;
LAB_01819ce8:
          uVar4 = 0;
          pbVar29 = pbVar27;
          if (uVar19 != 0) {
            uVar22 = uVar17 + 8;
            uVar4 = uVar19 - 1;
            pbVar29 = pbVar27 + 1;
            uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
            if (uVar22 < 0x10) {
              if (uVar4 == 0) goto LAB_0181a6fc;
              uVar4 = uVar19 - 2;
              pbVar29 = pbVar27 + 2;
              uVar28 = uVar28 + ((uint)pbVar27[1] << (uVar22 & 0xff));
              uVar22 = uVar17 + 0x10;
            }
            goto LAB_01819d28;
          }
          goto LAB_01819138;
        }
        if (puVar23[9] != 0) {
          *(undefined4 *)(puVar23[9] + 0x30) = 0xffffffff;
          uVar8 = puVar23[3];
        }
        if (((uVar8 & 1) == 0) ||
           (uVar17 = (uVar28 & 0xff) * 0x100 + (uVar28 >> 8),
           uVar17 != (uVar17 / 0x1f + (uVar17 - uVar17 / 0x1f >> 1) >> 4) * 0x1f)) {
          param_1[6] = "incorrect header check";
          puVar23[1] = 0x3f51;
          uVar26 = 0xfffffffd;
        }
        else if ((uVar28 & 0xf) == 8) {
          uVar28 = uVar28 >> 4;
          uVar8 = (uVar28 & 0xf) + 8;
          if (puVar23[10] == 0) {
            puVar23[10] = uVar8;
            if (uVar8 < 0x10) goto LAB_0181ac64;
          }
          else if ((uVar8 < 0x10) && (uVar8 <= (uint)puVar23[10])) {
LAB_0181ac64:
            uVar17 = 0;
            puVar23[5] = 0;
            puVar23[6] = 1 << uVar8;
            uVar5 = FUN_01814330(0,0,0);
            puVar23[7] = uVar5;
            param_1[0xc] = uVar5;
            if ((uVar28 & 0x200) == 0) {
              puVar23[1] = 0x3f3f;
              uVar17 = 0;
              uVar28 = 0;
              goto switchD_01818f18_caseD_3f;
            }
            uVar28 = 0;
            puVar23[1] = 0x3f3d;
            goto LAB_01819290;
          }
          uVar22 = uVar22 - 4;
          param_1[6] = "invalid window size";
          puVar23[1] = 0x3f51;
          uVar26 = 0xfffffffd;
        }
        else {
          param_1[6] = "unknown compression method";
          puVar23[1] = 0x3f51;
          uVar26 = 0xfffffffd;
        }
        goto LAB_0181913c;
      case 0x35:
        if (uVar17 < 0x10) goto LAB_01819ce8;
LAB_01819d28:
        puVar23[5] = uVar28;
        if ((uVar28 & 0xff) == 8) {
          if ((uVar28 & 0xe000) == 0) {
            if ((uint *)puVar23[9] != (uint *)0x0) {
              *(uint *)puVar23[9] = (uVar28 & 0x1ff) >> 8;
            }
            if (((puVar23[5] & 0x200) != 0) && ((puVar23[3] & 4) != 0)) {
              local_30 = CONCAT22(local_30._2_2_,(short)uVar28);
              uVar5 = FUN_01814534(puVar23[7],&local_30,2);
              puVar23[7] = uVar5;
            }
            uVar28 = 0;
            uVar17 = 0;
            puVar23[1] = 0x3f36;
            uVar19 = uVar4;
            do {
              uVar4 = 0;
              if (uVar19 == 0) goto LAB_01819138;
              uVar19 = uVar19 - 1;
              uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
              uVar17 = uVar17 + 8;
              pbVar29 = pbVar29 + 1;
switchD_01818f18_caseD_36:
            } while (uVar17 < 0x20);
            if (puVar23[9] != 0) {
              *(uint *)(puVar23[9] + 4) = uVar28;
            }
            if (((puVar23[5] & 0x200) != 0) && ((puVar23[3] & 4) != 0)) {
              local_30 = uVar28;
              uVar5 = FUN_01814534(puVar23[7],&local_30,4);
              puVar23[7] = uVar5;
            }
            uVar17 = 0;
            uVar28 = 0;
            puVar23[1] = 0x3f37;
            pbVar27 = pbVar29;
            do {
              uVar4 = 0;
              pbVar29 = pbVar27;
              if (uVar19 == 0) goto LAB_01819138;
              pbVar29 = pbVar27 + 1;
              uVar19 = uVar19 - 1;
              uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
              uVar17 = uVar17 + 8;
switchD_01818f18_caseD_37:
              pbVar27 = pbVar29;
            } while (uVar17 < 0x10);
            iVar7 = puVar23[9];
            if (iVar7 != 0) {
              *(uint *)(iVar7 + 8) = uVar28 & 0xff;
              *(uint *)(iVar7 + 0xc) = uVar28 >> 8;
            }
            uVar8 = puVar23[5];
            if (((uVar8 & 0x200) != 0) && ((puVar23[3] & 4) != 0)) {
              local_30 = CONCAT22(local_30._2_2_,(short)uVar28);
              uVar5 = FUN_01814534(puVar23[7],&local_30,2);
              uVar8 = puVar23[5];
              puVar23[7] = uVar5;
            }
            puVar23[1] = 0x3f38;
            if ((uVar8 & 0x400) == 0) {
              uVar17 = 0;
              uVar28 = 0;
              if (puVar23[9] != 0) {
                *(undefined4 *)(puVar23[9] + 0x10) = 0;
              }
LAB_01819028:
              puVar23[0x11] = 0;
              puVar23[1] = 0x3f3a;
              uVar4 = uVar19;
              pbVar27 = pbVar29;
LAB_01819038:
              if ((uVar8 & 0x800) == 0) {
                if (puVar23[9] != 0) {
                  *(undefined4 *)(puVar23[9] + 0x1c) = 0;
                }
              }
              else {
                pbVar29 = pbVar27;
                if (uVar4 == 0) goto LAB_01819138;
                iVar7 = puVar23[9];
                bVar25 = *pbVar27;
                uVar19 = 0;
                uVar22 = 1;
                while (iVar7 != 0) {
                  iVar16 = *(int *)(iVar7 + 0x1c);
                  if ((iVar16 == 0) || (uVar19 = puVar23[0x11], *(uint *)(iVar7 + 0x20) <= uVar19))
                  {
                    if (bVar25 == 0 || uVar4 <= uVar22) goto LAB_0181a274;
                  }
                  else {
                    puVar23[0x11] = uVar19 + 1;
                    *(byte *)(iVar16 + uVar19) = bVar25;
                    if (bVar25 == 0 || uVar4 <= uVar22) goto LAB_0181a274;
                    iVar7 = puVar23[9];
                  }
                  pbVar29 = pbVar29 + 1;
                  bVar25 = *pbVar29;
                  uVar19 = uVar22;
                  uVar22 = uVar22 + 1;
                }
                if (bVar25 != 0 && uVar22 < uVar4) {
                  pbVar29 = pbVar27 + uVar19;
                  do {
                    pbVar29 = pbVar29 + 1;
                    bVar25 = *pbVar29;
                    uVar22 = uVar22 + 1;
                  } while ((bVar25 == 0 || uVar22 <= uVar4) && (bVar25 != 0 && uVar4 != uVar22));
                }
LAB_0181a274:
                if (((puVar23[5] & 0x200) != 0) && ((puVar23[3] & 4) != 0)) {
                  uVar5 = FUN_01814534(puVar23[7],pbVar27);
                  puVar23[7] = uVar5;
                }
                uVar4 = uVar4 - uVar22;
                pbVar27 = pbVar27 + uVar22;
                if (bVar25 != 0) goto LAB_0181a018;
                uVar8 = puVar23[5];
              }
              puVar23[0x11] = 0;
              puVar23[1] = 0x3f3b;
LAB_0181905c:
              if ((uVar8 & 0x1000) == 0) {
                if (puVar23[9] != 0) {
                  *(undefined4 *)(puVar23[9] + 0x24) = 0;
                }
              }
              else {
                pbVar29 = pbVar27;
                if (uVar4 == 0) goto LAB_01819138;
                iVar7 = puVar23[9];
                bVar25 = *pbVar27;
                uVar19 = 0;
                uVar22 = 1;
                while (iVar7 != 0) {
                  iVar16 = *(int *)(iVar7 + 0x24);
                  if ((iVar16 == 0) || (uVar19 = puVar23[0x11], *(uint *)(iVar7 + 0x28) <= uVar19))
                  {
                    if (bVar25 == 0 || uVar4 <= uVar22) goto LAB_0181a1a0;
                  }
                  else {
                    puVar23[0x11] = uVar19 + 1;
                    *(byte *)(iVar16 + uVar19) = bVar25;
                    if (bVar25 == 0 || uVar4 <= uVar22) goto LAB_0181a1a0;
                    iVar7 = puVar23[9];
                  }
                  pbVar29 = pbVar29 + 1;
                  bVar25 = *pbVar29;
                  uVar19 = uVar22;
                  uVar22 = uVar22 + 1;
                }
                if (bVar25 != 0 && uVar22 < uVar4) {
                  pbVar29 = pbVar27 + uVar19;
                  do {
                    pbVar29 = pbVar29 + 1;
                    bVar25 = *pbVar29;
                    uVar22 = uVar22 + 1;
                  } while ((bVar25 == 0 || uVar22 <= uVar4) && (bVar25 != 0 && uVar4 != uVar22));
                }
LAB_0181a1a0:
                if (((puVar23[5] & 0x200) != 0) && ((puVar23[3] & 4) != 0)) {
                  uVar5 = FUN_01814534(puVar23[7],pbVar27);
                  puVar23[7] = uVar5;
                }
                uVar4 = uVar4 - uVar22;
                pbVar27 = pbVar27 + uVar22;
                if (bVar25 != 0) goto LAB_0181a018;
                uVar8 = puVar23[5];
              }
              puVar23[1] = 0x3f3c;
              uVar19 = uVar4;
LAB_01819078:
              uVar4 = uVar19;
              if ((uVar8 & 0x200) != 0) {
                if (uVar17 < 0x10) {
                  pbVar29 = pbVar27;
                  if (uVar19 == 0) goto LAB_01819138;
                  uVar22 = uVar17 + 8;
                  uVar4 = uVar19 - 1;
                  uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
                  if (uVar22 < 0x10) {
                    if (uVar4 == 0) {
                      uVar26 = uVar4;
                      pbVar27 = pbVar27 + 1;
                      goto LAB_0181913c;
                    }
                    uVar28 = uVar28 + ((uint)pbVar27[1] << (uVar22 & 0xff));
                    pbVar27 = pbVar27 + 2;
                    uVar22 = uVar17 + 0x10;
                    uVar4 = uVar19 - 2;
                  }
                  else {
                    pbVar27 = pbVar27 + 1;
                  }
                }
                else {
                  uVar22 = uVar17;
                }
                if ((puVar23[3] & 4) == 0) {
                  uVar17 = 0;
                  uVar28 = 0;
                }
                else {
                  if (*(ushort *)(puVar23 + 7) != uVar28) {
                    param_1[6] = "header crc mismatch";
                    puVar23[1] = 0x3f51;
                    uVar26 = 0xfffffffd;
                    goto LAB_0181913c;
                  }
                  uVar17 = 0;
                  uVar28 = 0;
                }
              }
              iVar7 = puVar23[9];
              if (iVar7 != 0) {
                *(uint *)(iVar7 + 0x2c) = (uVar8 & 0x3ff) >> 9;
                *(undefined4 *)(iVar7 + 0x30) = 1;
              }
              uVar5 = FUN_01814534(0,0);
              puVar23[7] = uVar5;
              param_1[0xc] = uVar5;
              puVar23[1] = 0x3f3f;
switchD_01818f18_caseD_3f:
              pbVar29 = pbVar27;
              if (param_2 - 5U < 2) goto LAB_0181a018;
switchD_01818f18_caseD_40:
              pbVar27 = pbVar29;
              if (puVar23[2] != 0) {
                uVar19 = uVar17 & 7;
                uVar17 = uVar17 & 0xfffffff8;
                uVar28 = uVar28 >> uVar19;
                puVar23[1] = 0x3f4e;
                uVar19 = uVar4;
                goto switchD_01818f18_caseD_4e;
              }
              uVar26 = 0;
              if (uVar17 < 3) {
                uVar22 = uVar17;
                if (uVar4 == 0) goto LAB_0181913c;
                pbVar27 = pbVar29 + 1;
                uVar4 = uVar4 - 1;
                uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
                uVar17 = uVar17 + 8;
              }
              uVar22 = (uVar28 & 7) >> 1;
              puVar23[2] = uVar28 & 1;
              uVar19 = uVar4;
              if (uVar22 == 2) {
                uVar28 = uVar28 >> 3;
                uVar17 = uVar17 - 3;
                puVar23[1] = 0x3f44;
switchD_01818f18_caseD_44:
                pbVar29 = pbVar27;
                uVar4 = uVar19;
                if (uVar17 < 0xe) {
                  if (uVar19 == 0) goto LAB_01819138;
                  uVar26 = uVar17 + 8;
                  uVar4 = uVar19 - 1;
                  pbVar29 = pbVar27 + 1;
                  uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
                  if (uVar26 < 0xe) {
                    if (uVar4 == 0) goto LAB_0181a448;
                    uVar4 = uVar19 - 2;
                    uVar28 = uVar28 + ((uint)pbVar27[1] << (uVar26 & 0xff));
                    pbVar29 = pbVar27 + 2;
                    uVar26 = uVar17 + 0x10;
                  }
                }
                else {
                  uVar26 = uVar17;
                }
                uVar19 = ((uVar28 & 0x3ff) >> 5) + 1;
                uVar17 = (uVar28 & 0x1f) + 0x101;
                bVar31 = 0x1d < uVar19;
                bVar30 = uVar19 == 0x1e;
                if (uVar19 < 0x1f) {
                  bVar31 = 0x11d < uVar17;
                  bVar30 = uVar17 == 0x11e;
                }
                puVar23[0x19] = uVar17;
                uVar8 = ((uVar28 & 0x3fff) >> 10) + 4;
                uVar17 = uVar26 - 0xe;
                uVar28 = uVar28 >> 0xe;
                uVar22 = (uint)(bVar31 && !bVar30);
                puVar23[0x1a] = uVar19;
                puVar23[0x18] = uVar8;
                if (bVar31 && !bVar30) {
                  param_1[6] = "too many length or distance symbols";
                  puVar23[1] = 0x3f51;
                  uVar22 = uVar17;
                  uVar26 = 0xfffffffd;
                  pbVar27 = pbVar29;
                }
                else {
                  puVar23[0x1b] = uVar22;
                  puVar23[1] = 0x3f45;
                  uVar19 = uVar4;
LAB_01819a30:
                  puVar9 = (ushort *)(&UNK_00452e8a + uVar22 * 2);
                  pbVar27 = pbVar29;
                  do {
                    uVar22 = uVar22 + 1;
                    pbVar29 = pbVar27;
                    if (uVar17 < 3) {
                      uVar4 = 0;
                      if (uVar19 == 0) goto LAB_01819138;
                      pbVar29 = pbVar27 + 1;
                      uVar19 = uVar19 - 1;
                      uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
                      uVar17 = uVar17 + 8;
                    }
                    puVar9 = puVar9 + 1;
                    uVar1 = *puVar9;
                    uVar2 = (ushort)uVar28;
                    puVar23[0x1b] = uVar22;
                    uVar17 = uVar17 - 3;
                    uVar28 = uVar28 >> 3;
                    *(ushort *)((int)puVar23 + (uint)uVar1 * 2 + 0x74) = uVar2 & 7;
                    uVar4 = uVar19;
                    pbVar27 = pbVar29;
                  } while (uVar22 != uVar8);
LAB_0181a660:
                  if (uVar22 < 0x13) {
                    puVar9 = (ushort *)(&UNK_00452e8a + uVar22 * 2);
                    do {
                      puVar9 = puVar9 + 1;
                      *(undefined2 *)((int)puVar23 + (uint)*puVar9 * 2 + 0x74) = 0;
                    } while (puVar9 != (ushort *)&UNK_00452eb0);
                    puVar23[0x1b] = 0x13;
                  }
                  puVar23[0x1c] = puVar23 + 0x14d;
                  puVar23[0x14] = puVar23 + 0x14d;
                  puVar23[0x16] = 7;
                  iVar7 = FUN_0181ae20(0,puVar23 + 0x1d,0x13,puVar23 + 0x1c);
                  pbVar27 = pbVar29;
                  uVar22 = uVar17;
                  if (iVar7 == 0) {
                    iVar7 = puVar23[0x19];
                    puVar23[0x1b] = 0;
                    uVar26 = iVar7 + puVar23[0x1a];
                    puVar23[1] = 0x3f46;
                    uVar8 = 0;
                    if (uVar26 != 0) {
LAB_01819b00:
                      uVar19 = puVar23[0x16];
                      iVar16 = puVar23[0x14];
                      do {
                        while( true ) {
                          iVar13 = iVar16 + (uVar28 & ~(-1 << (uVar19 & 0xff))) * 4;
                          uVar22 = (uint)*(byte *)(iVar13 + 1);
                          if (uVar22 <= uVar17) break;
                          if (uVar4 == 0) goto LAB_01819138;
                          uVar4 = uVar4 - 1;
                          uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
                          uVar17 = uVar17 + 8;
                          pbVar29 = pbVar29 + 1;
                        }
                        uVar1 = *(ushort *)(iVar13 + 2);
                        if (0xf < uVar1) {
                          if (uVar1 == 0x10) {
                            for (; uVar17 < uVar22 + 2; uVar17 = uVar17 + 8) {
                              if (uVar4 == 0) {
                                uVar4 = 0;
                                goto LAB_01819138;
                              }
                              uVar4 = uVar4 - 1;
                              uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
                              pbVar29 = pbVar29 + 1;
                            }
                            uVar28 = uVar28 >> uVar22;
                            uVar17 = uVar17 - uVar22;
                            if (uVar8 != 0) {
                              uVar17 = uVar17 - 2;
                              local_54 = (uint)*(ushort *)((int)puVar23 + uVar8 * 2 + 0x72);
                              uVar6 = (uVar28 & 3) + 3;
                              uVar28 = uVar28 >> 2;
                              goto LAB_0181a52c;
                            }
                          }
                          else {
                            if (uVar1 == 0x11) {
                              for (; uVar17 < uVar22 + 3; uVar17 = uVar17 + 8) {
                                if (uVar4 == 0) {
                                  uVar4 = 0;
                                  goto LAB_01819138;
                                }
                                uVar4 = uVar4 - 1;
                                uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
                                pbVar29 = pbVar29 + 1;
                              }
                              uVar17 = (uVar17 - uVar22) - 3;
                              uVar6 = (uVar28 >> uVar22 & 7) + 3;
                              uVar28 = (uVar28 >> uVar22) >> 3;
                              local_54 = 0;
                            }
                            else {
                              for (; uVar17 < uVar22 + 7; uVar17 = uVar17 + 8) {
                                if (uVar4 == 0) {
                                  uVar4 = 0;
                                  goto LAB_01819138;
                                }
                                uVar4 = uVar4 - 1;
                                uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
                                pbVar29 = pbVar29 + 1;
                              }
                              uVar17 = (uVar17 - uVar22) - 7;
                              uVar6 = (uVar28 >> uVar22 & 0x7f) + 0xb;
                              uVar28 = (uVar28 >> uVar22) >> 7;
                              local_54 = 0;
                            }
LAB_0181a52c:
                            if (uVar6 + uVar8 <= uVar26) {
                              iVar13 = puVar23[0x1b];
                              puVar10 = (uint *)((int)puVar23 + (iVar13 + 0x3a) * 2);
                              puVar11 = puVar10;
                              do {
                                puVar12 = puVar11 + 1;
                                *puVar11 = local_54 | local_54 << 0x10;
                                puVar11 = puVar12;
                              } while (puVar12 != puVar10 + (uVar6 >> 1));
                              if ((uVar6 & 1) != 0) {
                                *(short *)((int)puVar23 + (iVar13 + (uVar6 & 0xfffffffe)) * 2 + 0x74
                                          ) = (short)local_54;
                              }
                              uVar8 = uVar6 + iVar13;
                              puVar23[0x1b] = uVar8;
                              goto LAB_01819b6c;
                            }
                          }
                          param_1[6] = "invalid bit length repeat";
                          puVar23[1] = 0x3f51;
                          uVar22 = uVar17;
                          uVar26 = 0xfffffffd;
                          pbVar27 = pbVar29;
                          goto LAB_0181913c;
                        }
                        uVar28 = uVar28 >> uVar22;
                        uVar17 = uVar17 - uVar22;
                        iVar13 = uVar8 * 2;
                        uVar8 = uVar8 + 1;
                        puVar23[0x1b] = uVar8;
                        *(ushort *)((int)puVar23 + iVar13 + 0x74) = uVar1;
LAB_01819b6c:
                      } while (uVar8 < uVar26);
                      uVar19 = uVar4;
                      pbVar27 = pbVar29;
LAB_01819b78:
                      uVar22 = uVar17;
                      uVar4 = uVar19;
                      if (puVar23[1] == 0x3f51) goto switchD_01818f18_caseD_51;
                    }
                    uVar17 = uVar22;
                    if (*(short *)(puVar23 + 0x9d) == 0) {
                      param_1[6] = "invalid code -- missing end-of-block";
                      puVar23[1] = 0x3f51;
                    }
                    else {
                      puVar23[0x1c] = puVar23 + 0x14d;
                      puVar23[0x14] = puVar23 + 0x14d;
                      puVar23[0x16] = 9;
                      iVar7 = FUN_0181ae20(1,puVar23 + 0x1d,iVar7);
                      if (iVar7 == 0) {
                        puVar23[0x15] = puVar23[0x1c];
                        puVar23[0x17] = 6;
                        iVar7 = FUN_0181ae20(2,(int)(puVar23 + 0x1d) + puVar23[0x19] * 2,
                                             puVar23[0x1a],puVar23 + 0x1c);
                        if (iVar7 == 0) {
                          puVar23[1] = 0x3f47;
                          if (param_2 != 6) {
switchD_01818f18_caseD_47:
                            do {
                              puVar23[1] = 0x3f48;
                              uVar17 = uVar22;
switchD_01818f18_caseD_48:
                              bVar31 = 4 < uVar4;
                              bVar30 = uVar4 == 5;
                              if (5 < uVar4) {
                                bVar31 = 0x100 < local_40;
                                bVar30 = local_40 == 0x101;
                              }
                              if (bVar31 && !bVar30) {
                                param_1[3] = local_34;
                                param_1[4] = local_40;
                                *param_1 = pbVar27;
                                param_1[1] = uVar4;
                                puVar23[0xf] = uVar28;
                                puVar23[0x10] = uVar17;
                                FUN_01818114(param_1,local_38);
                                iVar16 = puVar23[1];
                                pbVar27 = (byte *)*param_1;
                                bVar30 = iVar16 == 0x3f3f;
                                local_34 = (undefined4 *)param_1[3];
                                puVar14 = extraout_r1;
                                if (bVar30) {
                                  puVar14 = puVar23 + 0x400;
                                }
                                local_40 = param_1[4];
                                if (bVar30) {
                                  iVar16 = -1;
                                }
                                uVar4 = param_1[1];
                                uVar28 = puVar23[0xf];
                                uVar17 = puVar23[0x10];
                                uVar22 = uVar17;
                                if (!bVar30) goto LAB_01819688;
                                puVar14[0x2f2] = iVar16;
                                goto switchD_01818f18_caseD_3f;
                              }
                              iVar7 = puVar23[0x14];
                              puVar23[0x6f2] = 0;
                              uVar8 = ~(-1 << (puVar23[0x16] & 0xff));
                              uVar19 = uVar28 & uVar8;
                              iVar16 = iVar7 + uVar19 * 4;
                              uVar26 = (uint)*(byte *)(iVar16 + 1);
                              uVar22 = uVar17;
                              pbVar29 = pbVar27;
                              if (uVar17 < uVar26) {
                                do {
                                  if (uVar4 == 0) {
                                    uVar4 = 0;
                                    goto LAB_01819138;
                                  }
                                  pbVar27 = pbVar29 + 1;
                                  uVar4 = uVar4 - 1;
                                  uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
                                  uVar17 = uVar17 + 8;
                                  uVar19 = uVar28 & uVar8;
                                  iVar16 = iVar7 + uVar19 * 4;
                                  uVar26 = (uint)*(byte *)(iVar16 + 1);
                                  uVar22 = uVar17;
                                  pbVar29 = pbVar27;
                                } while (uVar17 < uVar26);
                              }
                              uVar8 = (uint)*(byte *)(iVar7 + uVar19 * 4);
                              uVar19 = (uint)*(ushort *)(iVar16 + 2);
                              if (uVar8 == 0) {
                                uVar28 = uVar28 >> uVar26;
                                uVar17 = uVar22 - uVar26;
                                puVar23[0x6f2] = uVar26;
                                puVar23[0x11] = uVar19;
LAB_01819fd0:
                                puVar23[1] = 0x3f4d;
switchD_01818f18_caseD_4d:
                                if (local_40 == 0) goto LAB_0181a018;
                                local_40 = local_40 - 1;
                                *(char *)local_34 = (char)puVar23[0x11];
                                puVar23[1] = 0x3f48;
                                local_34 = (undefined4 *)((int)local_34 + 1);
                                goto switchD_01818f18_caseD_48;
                              }
                              if (uVar8 < 0x10) {
                                uVar17 = ~(-1 << (uVar8 + uVar26 & 0xff));
                                iVar16 = uVar19 + ((uVar17 & uVar28) >> uVar26);
                                iVar13 = iVar7 + iVar16 * 4;
                                uVar6 = (uint)*(byte *)(iVar13 + 1);
                                local_4c = uVar6 + uVar26;
                                if (uVar22 < local_4c) {
                                  do {
                                    if (uVar4 == 0) {
                                      uVar4 = 0;
                                      uVar26 = 0;
                                      goto LAB_0181913c;
                                    }
                                    pbVar29 = pbVar27 + 1;
                                    uVar4 = uVar4 - 1;
                                    uVar28 = uVar28 + ((uint)*pbVar27 << (uVar22 & 0xff));
                                    uVar22 = uVar22 + 8;
                                    iVar16 = uVar19 + ((uVar28 & uVar17) >> uVar26);
                                    iVar13 = iVar7 + iVar16 * 4;
                                    uVar6 = (uint)*(byte *)(iVar13 + 1);
                                    local_4c = uVar6 + uVar26;
                                    pbVar27 = pbVar29;
                                  } while (uVar22 < local_4c);
                                  bVar25 = *(byte *)(iVar7 + iVar16 * 4);
                                  uVar1 = *(ushort *)(iVar13 + 2);
                                }
                                else {
                                  bVar25 = *(byte *)(iVar7 + iVar16 * 4);
                                  uVar1 = *(ushort *)(iVar13 + 2);
                                }
                                uVar8 = (uint)bVar25;
                                puVar23[0x6f2] = local_4c;
                                uVar17 = (uVar22 - uVar26) - uVar6;
                                uVar28 = (uVar28 >> uVar26) >> uVar6;
                                puVar23[0x11] = (uint)uVar1;
                                if (uVar8 != 0) goto LAB_0181a42c;
                                goto LAB_01819fd0;
                              }
                              uVar28 = uVar28 >> uVar26;
                              uVar17 = uVar22 - uVar26;
                              puVar23[0x6f2] = uVar26;
                              puVar23[0x11] = uVar19;
LAB_0181a42c:
                              if ((uVar8 & 0x20) != 0) goto code_r0x0181a434;
                              if ((uVar8 & 0x40) != 0) {
                                param_1[6] = "invalid literal/length code";
                                puVar23[1] = 0x3f51;
                                uVar22 = uVar17;
                                uVar26 = 0xfffffffd;
                                goto LAB_0181913c;
                              }
                              uVar8 = uVar8 & 0xf;
                              puVar23[0x13] = uVar8;
                              puVar23[1] = 0x3f49;
                              uVar19 = uVar4;
                              pbVar29 = pbVar27;
LAB_018190c0:
                              if (uVar8 == 0) {
                                iVar7 = puVar23[0x11];
                              }
                              else {
                                for (; uVar17 < uVar8; uVar17 = uVar17 + 8) {
                                  uVar4 = uVar19;
                                  if (uVar19 == 0) goto LAB_01819138;
                                  uVar19 = uVar19 - 1;
                                  uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
                                  pbVar29 = pbVar29 + 1;
                                }
                                iVar7 = (uVar28 & ~(-1 << (uVar8 & 0xff))) + puVar23[0x11];
                                puVar23[0x11] = iVar7;
                                uVar17 = uVar17 - uVar8;
                                uVar28 = uVar28 >> (uVar8 & 0xff);
                                puVar23[0x6f2] = puVar23[0x6f2] + uVar8;
                              }
                              puVar23[0x6f3] = iVar7;
                              puVar23[1] = 0x3f4a;
switchD_01818f18_caseD_4a:
                              iVar7 = puVar23[0x15];
                              uVar6 = ~(-1 << (puVar23[0x17] & 0xff));
                              uVar8 = uVar28 & uVar6;
                              iVar16 = iVar7 + uVar8 * 4;
                              uVar26 = (uint)*(byte *)(iVar16 + 1);
                              uVar22 = uVar17;
                              uVar4 = uVar19;
                              pbVar27 = pbVar29;
                              if (uVar17 < uVar26) {
                                do {
                                  uVar4 = 0;
                                  pbVar29 = pbVar27;
                                  if (uVar19 == 0) goto LAB_01819138;
                                  pbVar29 = pbVar27 + 1;
                                  uVar19 = uVar19 - 1;
                                  uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
                                  uVar17 = uVar17 + 8;
                                  uVar8 = uVar28 & uVar6;
                                  iVar16 = iVar7 + uVar8 * 4;
                                  uVar26 = (uint)*(byte *)(iVar16 + 1);
                                  uVar22 = uVar17;
                                  uVar4 = uVar19;
                                  pbVar27 = pbVar29;
                                } while (uVar17 < uVar26);
                              }
                              uVar8 = (uint)*(byte *)(iVar7 + uVar8 * 4);
                              uVar17 = (uint)*(ushort *)(iVar16 + 2);
                              if (uVar8 < 0x10) {
                                uVar8 = ~(-1 << (uVar8 + uVar26 & 0xff));
                                iVar16 = uVar17 + ((uVar8 & uVar28) >> uVar26);
                                iVar13 = iVar7 + iVar16 * 4;
                                uVar19 = (uint)*(byte *)(iVar13 + 1);
                                if (uVar22 < uVar19 + uVar26) {
                                  do {
                                    if (uVar4 == 0) {
                                      uVar4 = 0;
                                      uVar26 = 0;
                                      pbVar27 = pbVar29;
                                      goto LAB_0181913c;
                                    }
                                    pbVar27 = pbVar29 + 1;
                                    uVar4 = uVar4 - 1;
                                    uVar28 = uVar28 + ((uint)*pbVar29 << (uVar22 & 0xff));
                                    uVar22 = uVar22 + 8;
                                    iVar16 = uVar17 + ((uVar28 & uVar8) >> uVar26);
                                    iVar13 = iVar7 + iVar16 * 4;
                                    uVar19 = (uint)*(byte *)(iVar13 + 1);
                                    pbVar29 = pbVar27;
                                  } while (uVar22 < uVar19 + uVar26);
                                  bVar25 = *(byte *)(iVar7 + iVar16 * 4);
                                  uVar1 = *(ushort *)(iVar13 + 2);
                                }
                                else {
                                  bVar25 = *(byte *)(iVar7 + iVar16 * 4);
                                  uVar1 = *(ushort *)(iVar13 + 2);
                                }
                                uVar17 = (uint)uVar1;
                                uVar8 = (uint)bVar25;
                                uVar28 = uVar28 >> uVar26;
                                uVar22 = uVar22 - uVar26;
                                iVar7 = uVar26 + puVar23[0x6f2];
                              }
                              else {
                                iVar7 = puVar23[0x6f2];
                                uVar19 = uVar26;
                              }
                              uVar22 = uVar22 - uVar19;
                              uVar28 = uVar28 >> uVar19;
                              puVar23[0x6f2] = uVar19 + iVar7;
                              if ((uVar8 & 0x40) != 0) {
                                param_1[6] = "invalid distance code";
                                puVar23[1] = 0x3f51;
                                uVar26 = 0xfffffffd;
                                pbVar27 = pbVar29;
                                goto LAB_0181913c;
                              }
                              uVar8 = uVar8 & 0xf;
                              puVar23[0x12] = uVar17;
                              puVar23[0x13] = uVar8;
                              puVar23[1] = 0x3f4b;
                              uVar17 = uVar22;
                              uVar19 = uVar4;
LAB_018194b4:
                              if (uVar8 != 0) {
                                for (; uVar17 < uVar8; uVar17 = uVar17 + 8) {
                                  uVar4 = uVar19;
                                  if (uVar19 == 0) goto LAB_01819138;
                                  uVar19 = uVar19 - 1;
                                  uVar28 = uVar28 + ((uint)*pbVar29 << (uVar17 & 0xff));
                                  pbVar29 = pbVar29 + 1;
                                }
                                puVar23[0x12] = puVar23[0x12] + (uVar28 & ~(-1 << (uVar8 & 0xff)));
                                uVar17 = uVar17 - uVar8;
                                uVar28 = uVar28 >> (uVar8 & 0xff);
                                puVar23[0x6f2] = puVar23[0x6f2] + uVar8;
                              }
                              puVar23[1] = 0x3f4c;
                              uVar22 = uVar17;
                              uVar4 = uVar19;
                              pbVar27 = pbVar29;
switchD_01818f18_caseD_4c:
                              if (local_40 == 0) {
                                uVar26 = 0;
                                goto LAB_0181913c;
                              }
                              uVar17 = puVar23[0x12];
                              if (local_38 - local_40 < uVar17) {
                                uVar19 = (uVar17 + local_40) - local_38;
                                if (((uint)puVar23[0xc] < uVar19) && (puVar23[0x6f1] != 0)) {
                                  param_1[6] = "invalid distance too far back";
                                  puVar23[1] = 0x3f51;
                                  uVar26 = 0xfffffffd;
                                  goto LAB_0181913c;
                                }
                                uVar8 = puVar23[0xd];
                                if (uVar8 < uVar19) {
                                  uVar19 = uVar19 - uVar8;
                                  uVar8 = uVar8 + puVar23[0xb];
                                }
                                puVar14 = (undefined4 *)
                                          (puVar23[0xe] + uVar8 + (local_38 - (uVar17 + local_40)));
                                uVar8 = puVar23[0x11];
                                if (uVar8 < uVar19) {
                                  uVar19 = uVar8;
                                }
                                else {
                                }
                              }
                              else {
                                uVar8 = puVar23[0x11];
                                puVar14 = (undefined4 *)((int)local_34 - uVar17);
                                uVar19 = uVar8;
                              }
                              if (local_40 <= uVar19) {
                                uVar19 = local_40;
                              }
                              local_40 = local_40 - uVar19;
                              puVar23[0x11] = uVar8 - uVar19;
                              if ((uVar19 - 1 < 6) ||
                                 ((undefined1 *)((int)local_34 + (-1 - (int)puVar14)) <
                                  (undefined1 *)0x3)) {
                                puVar21 = (undefined1 *)((int)local_34 + -1);
                                puVar3 = puVar14;
                                do {
                                  puVar15 = (undefined4 *)((int)puVar3 + 1);
                                  puVar21 = puVar21 + 1;
                                  *puVar21 = *(undefined1 *)puVar3;
                                  puVar3 = puVar15;
                                } while ((undefined4 *)((int)puVar14 + uVar19) != puVar15);
                              }
                              else {
                                uVar17 = 0;
                                uVar8 = (uVar19 - 4 >> 2) + 1;
                                puVar3 = local_34;
                                puVar15 = puVar14;
                                do {
                                  uVar17 = uVar17 + 1;
                                  *puVar3 = *puVar15;
                                  puVar3 = puVar3 + 1;
                                  puVar15 = puVar15 + 1;
                                } while (uVar17 < uVar8);
                                uVar17 = uVar8 * 4;
                                if (uVar19 != uVar17) {
                                  *(undefined1 *)(local_34 + uVar8) =
                                       *(undefined1 *)(puVar14 + uVar8);
                                  iVar7 = uVar19 + uVar8 * -4;
                                  if ((iVar7 != 1) &&
                                     (*(undefined1 *)((int)local_34 + uVar17 + 1) =
                                           *(undefined1 *)((int)puVar14 + uVar17 + 1), iVar7 != 2))
                                  {
                                    *(undefined1 *)((int)local_34 + uVar17 + 2) =
                                         *(undefined1 *)((int)puVar14 + uVar17 + 2);
                                  }
                                }
                              }
                              local_34 = (undefined4 *)((int)local_34 + uVar19);
                              if (puVar23[0x11] != 0) {
                                iVar16 = puVar23[1];
                                goto LAB_01819688;
                              }
                            } while( true );
                          }
                          uVar26 = 0;
                          goto LAB_0181913c;
                        }
                        param_1[6] = "invalid distances set";
                        puVar23[1] = 0x3f51;
                      }
                      else {
                        param_1[6] = "invalid literal/lengths set";
                        puVar23[1] = 0x3f51;
                      }
                    }
                    goto switchD_01818f18_caseD_51;
                  }
                  param_1[6] = "invalid code lengths set";
                  puVar23[1] = 0x3f51;
                  uVar26 = 0xfffffffd;
                }
                goto LAB_0181913c;
              }
              if (uVar22 == 3) {
                uVar28 = uVar28 >> 3;
                param_1[6] = "invalid block type";
                puVar23[1] = 0x3f51;
                uVar22 = uVar17 - 3;
                uVar26 = 0xfffffffd;
                goto LAB_0181913c;
              }
              if (uVar22 == 1) {
                uVar28 = uVar28 >> 3;
                uVar22 = uVar17 - 3;
                puVar23[0x16] = 9;
                puVar23[0x17] = 5;
                puVar23[0x14] = &DAT_0045268c;
                puVar23[0x15] = &DAT_0045260c;
                puVar23[1] = 0x3f47;
                if (param_2 != 6) goto switchD_01818f18_caseD_47;
                goto LAB_0181913c;
              }
              uVar28 = uVar28 >> 3;
              uVar22 = uVar17 - 3;
              puVar23[1] = 0x3f41;
switchD_01818f18_caseD_41:
              uVar17 = uVar22 & 0xfffffff8;
              uVar28 = uVar28 >> (uVar22 & 7);
              uVar4 = uVar19;
              if (uVar17 < 0x20) {
                pbVar29 = pbVar27;
                if (uVar19 == 0) goto LAB_01819138;
                uVar26 = uVar17 + 8;
                uVar4 = uVar19 - 1;
                pbVar29 = pbVar27 + 1;
                uVar28 = uVar28 + ((uint)*pbVar27 << (uVar22 & 0xf8));
                if (uVar26 < 0x20) {
                  if (uVar4 == 0) goto LAB_0181a448;
                  uVar4 = uVar19 - 2;
                  uVar28 = uVar28 + ((uint)pbVar27[1] << (uVar26 & 0xff));
                  uVar26 = uVar17 + 0x10;
                  pbVar29 = pbVar27 + 2;
                  if (uVar26 < 0x20) {
                    if (uVar4 == 0) goto LAB_0181a448;
                    uVar28 = uVar28 + ((uint)pbVar27[2] << (uVar26 & 0xff));
                    uVar4 = uVar19 - 3;
                    if (0x1f < uVar17 + 0x18) {
                      uVar17 = 0x20;
                      pbVar27 = pbVar27 + 3;
                      goto LAB_01819f78;
                    }
                    if (uVar4 == 0) {
                      uVar22 = 0x18;
                      uVar26 = uVar4;
                      pbVar27 = pbVar27 + 3;
                      goto LAB_0181913c;
                    }
                    uVar17 = 0x20;
                    uVar28 = uVar28 + (uint)pbVar27[3] * 0x1000000;
                    pbVar27 = pbVar27 + 4;
                    uVar4 = uVar19 - 4;
                    goto LAB_01819f78;
                  }
                }
                pbVar27 = pbVar29;
                uVar17 = 0x20;
              }
LAB_01819f78:
              uVar8 = uVar28 & 0xffff;
              if (uVar8 != (uVar28 >> 0x10 ^ 0xffff)) {
                param_1[6] = "invalid stored block lengths";
                puVar23[1] = 0x3f51;
                uVar22 = uVar17;
                uVar26 = 0xfffffffd;
                goto LAB_0181913c;
              }
              uVar17 = 0;
              puVar23[0x11] = uVar8;
              puVar23[1] = 0x3f42;
              if (param_2 == 6) {
                uVar28 = 0;
                uVar22 = uVar17;
                uVar26 = 0;
                goto LAB_0181913c;
              }
              uVar28 = 0;
              uVar19 = uVar4;
              pbVar29 = pbVar27;
LAB_01819c70:
              puVar23[1] = 0x3f43;
              uVar22 = uVar17;
              uVar4 = uVar19;
LAB_018199b8:
              uVar17 = uVar22;
              pbVar27 = pbVar29;
              if (uVar8 != 0) goto code_r0x018199c0;
LAB_01819358:
              puVar23[1] = 0x3f3f;
              goto switchD_01818f18_caseD_3f;
            }
            uVar17 = 0;
            uVar28 = 0;
            do {
              uVar4 = 0;
              pbVar29 = pbVar27;
              if (uVar19 == 0) goto LAB_01819138;
              pbVar29 = pbVar27 + 1;
              uVar19 = uVar19 - 1;
              uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
              uVar17 = uVar17 + 8;
LAB_0181a040:
              pbVar27 = pbVar29;
            } while (uVar17 < 0x10);
            puVar23[0x11] = uVar28;
            if (puVar23[9] != 0) {
              *(uint *)(puVar23[9] + 0x14) = uVar28;
              uVar8 = puVar23[5];
            }
            if (((uVar8 & 0x200) != 0) && ((puVar23[3] & 4) != 0)) {
              local_30 = CONCAT22(local_30._2_2_,(short)uVar28);
              uVar5 = FUN_01814534(puVar23[7],&local_30,2);
              uVar8 = puVar23[5];
              puVar23[7] = uVar5;
            }
            uVar17 = 0;
            uVar28 = 0;
            puVar23[1] = 0x3f39;
            uVar4 = uVar19;
LAB_01819bc4:
            uVar19 = uVar4;
            pbVar29 = pbVar27;
            if ((uVar8 & 0x400) == 0) goto LAB_01819028;
            uVar19 = puVar23[0x11];
            if (uVar4 < uVar19) {
              uVar22 = uVar4;
            }
            else {
              uVar22 = uVar19;
            }
            if (uVar22 != 0) {
              iVar7 = puVar23[9];
              if ((iVar7 != 0) && (*(int *)(iVar7 + 0x10) != 0)) {
                uVar26 = *(uint *)(iVar7 + 0x18);
                uVar6 = *(int *)(iVar7 + 0x14) - uVar19;
                if (uVar6 < uVar26) {
                  uVar8 = uVar22;
                  if (uVar26 < uVar22 + uVar6) {
                    uVar8 = (uVar26 + uVar19) - *(int *)(iVar7 + 0x14);
                  }
                  FUN_0181e3d4(*(int *)(iVar7 + 0x10) + uVar6,pbVar27,uVar8);
                  uVar8 = puVar23[5];
                }
              }
              if (((uVar8 & 0x200) != 0) && ((puVar23[3] & 4) != 0)) {
                uVar5 = FUN_01814534(puVar23[7],pbVar27,uVar22);
                puVar23[7] = uVar5;
              }
              uVar4 = uVar4 - uVar22;
              pbVar27 = pbVar27 + uVar22;
              uVar19 = puVar23[0x11] - uVar22;
              puVar23[0x11] = uVar19;
            }
            if (uVar19 == 0) {
              uVar8 = puVar23[5];
              uVar19 = uVar4;
              pbVar29 = pbVar27;
              goto LAB_01819028;
            }
LAB_0181a018:
            uVar22 = uVar17;
            uVar26 = 0;
            goto LAB_0181913c;
          }
          pcVar20 = "unknown header flags set";
        }
        else {
          pcVar20 = "unknown compression method";
        }
        param_1[6] = pcVar20;
        puVar23[1] = 0x3f51;
        uVar26 = 0xfffffffd;
        pbVar27 = pbVar29;
        goto LAB_0181913c;
      case 0x36:
        goto switchD_01818f18_caseD_36;
      case 0x37:
        goto switchD_01818f18_caseD_37;
      case 0x38:
        uVar8 = puVar23[5];
        if ((uVar8 & 0x400) != 0) goto LAB_0181a040;
        if (puVar23[9] != 0) {
          *(undefined4 *)(puVar23[9] + 0x10) = 0;
        }
        goto LAB_01819028;
      case 0x39:
        uVar8 = puVar23[5];
        goto LAB_01819bc4;
      case 0x3a:
        uVar8 = puVar23[5];
        goto LAB_01819038;
      case 0x3b:
        uVar8 = puVar23[5];
        goto LAB_0181905c;
      case 0x3c:
        uVar8 = puVar23[5];
        goto LAB_01819078;
      case 0x3d:
        goto switchD_01818f18_caseD_3d;
      case 0x3e:
        goto switchD_01818f18_caseD_3e;
      case 0x3f:
        goto switchD_01818f18_caseD_3f;
      case 0x40:
        goto switchD_01818f18_caseD_40;
      case 0x41:
        goto switchD_01818f18_caseD_41;
      case 0x42:
        uVar8 = puVar23[0x11];
        goto LAB_01819c70;
      case 0x43:
        uVar8 = puVar23[0x11];
        goto LAB_018199b8;
      case 0x44:
        goto switchD_01818f18_caseD_44;
      case 0x45:
        uVar22 = puVar23[0x1b];
        uVar8 = puVar23[0x18];
        if (uVar8 <= uVar22) goto LAB_0181a660;
        goto LAB_01819a30;
      case 0x46:
        iVar7 = puVar23[0x19];
        uVar8 = puVar23[0x1b];
        uVar26 = iVar7 + puVar23[0x1a];
        if (uVar26 <= uVar8) goto LAB_01819b78;
        goto LAB_01819b00;
      case 0x47:
        goto switchD_01818f18_caseD_47;
      case 0x48:
        goto switchD_01818f18_caseD_48;
      case 0x49:
        uVar8 = puVar23[0x13];
        goto LAB_018190c0;
      case 0x4a:
        goto switchD_01818f18_caseD_4a;
      case 0x4b:
        uVar8 = puVar23[0x13];
        goto LAB_018194b4;
      case 0x4c:
        goto switchD_01818f18_caseD_4c;
      case 0x4d:
        goto switchD_01818f18_caseD_4d;
      case 0x4e:
switchD_01818f18_caseD_4e:
        uVar8 = puVar23[3];
        if (uVar8 != 0) {
          if (0x1f < uVar17) {
LAB_0181942c:
            iVar7 = local_38 - local_40;
            param_1[5] = param_1[5] + iVar7;
            uVar4 = (uVar8 & 7) >> 2;
            if (iVar7 == 0) {
              uVar4 = 0;
            }
            puVar23[8] = puVar23[8] + iVar7;
            if (uVar4 == 0) {
              if ((uVar8 & 4) != 0) goto LAB_01819474;
              puVar23[1] = 0x3f4f;
LAB_0181a868:
              if (puVar23[5] != 0) {
                uVar17 = 0;
                uVar28 = 0;
                local_38 = local_40;
                goto LAB_018196b4;
              }
            }
            else {
              if (puVar23[5] == 0) {
                uVar5 = FUN_01814330(puVar23[7],
                                     (undefined1 *)((int)local_34 + (local_40 - local_38)));
              }
              else {
                uVar5 = FUN_01814534();
              }
              uVar8 = puVar23[3];
              puVar23[7] = uVar5;
              param_1[0xc] = uVar5;
              if ((uVar8 & 4) != 0) {
LAB_01819474:
                if (puVar23[5] == 0) {
                  if ((uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8
                      | uVar28 >> 0x18) == puVar23[7]) goto LAB_01819ca8;
                }
                else if (uVar28 == puVar23[7]) {
                  uVar17 = 0;
                  puVar23[1] = 0x3f4f;
                  uVar28 = 0;
                  local_38 = local_40;
                  goto LAB_018196b4;
                }
                param_1[6] = "incorrect data check";
                puVar23[1] = 0x3f51;
                local_38 = local_40;
                uVar4 = uVar19;
                goto switchD_01818f18_caseD_51;
              }
              puVar23[1] = 0x3f4f;
              if (uVar8 != 0) goto LAB_0181a868;
            }
LAB_01819ca8:
            uVar17 = 0;
            uVar28 = 0;
            local_38 = local_40;
            break;
          }
          uVar4 = uVar19;
          pbVar29 = pbVar27;
          if (uVar19 == 0) goto LAB_01819138;
          uVar22 = uVar17 + 8;
          uVar4 = uVar19 - 1;
          pbVar29 = pbVar27 + 1;
          uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
          if (0x1f < uVar22) {
LAB_0181a810:
            pbVar27 = pbVar29;
            uVar17 = uVar22;
            uVar19 = uVar4;
            goto LAB_0181942c;
          }
          if (uVar4 != 0) {
            pbVar29 = pbVar27 + 2;
            uVar28 = uVar28 + ((uint)pbVar27[1] << (uVar22 & 0xff));
            uVar22 = uVar17 + 0x10;
            uVar4 = uVar19 - 2;
            if (0x1f < uVar22) goto LAB_0181a810;
            if (uVar4 != 0) {
              pbVar29 = pbVar27 + 3;
              uVar28 = uVar28 + ((uint)pbVar27[2] << (uVar22 & 0xff));
              uVar22 = uVar17 + 0x18;
              uVar4 = uVar19 - 3;
              if (0x1f < uVar22) goto LAB_0181a810;
              if (uVar4 != 0) {
                pbVar29 = pbVar27 + 3;
                pbVar27 = pbVar27 + 4;
                uVar28 = uVar28 + ((uint)*pbVar29 << (uVar22 & 0xff));
                uVar17 = uVar17 + 0x20;
                uVar19 = uVar19 - 4;
                goto LAB_0181942c;
              }
            }
          }
LAB_0181a6fc:
          uVar26 = uVar4;
          pbVar27 = pbVar29;
          goto LAB_0181913c;
        }
        break;
      case 0x4f:
        uVar8 = puVar23[3];
        if ((uVar8 == 0) || (puVar23[5] == 0)) break;
        if (uVar17 < 0x20) {
LAB_018196b4:
          uVar4 = uVar19;
          pbVar29 = pbVar27;
          if (uVar19 == 0) goto LAB_01819138;
          uVar22 = uVar17 + 8;
          uVar4 = uVar19 - 1;
          pbVar29 = pbVar27 + 1;
          uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
          if (uVar22 < 0x20) {
            if (uVar4 != 0) {
              uVar4 = uVar19 - 2;
              uVar28 = uVar28 + ((uint)pbVar27[1] << (uVar22 & 0xff));
              uVar22 = uVar17 + 0x10;
              pbVar29 = pbVar27 + 2;
              if (0x1f < uVar22) goto LAB_0181a45c;
              if (uVar4 != 0) {
                uVar4 = uVar19 - 3;
                uVar28 = uVar28 + ((uint)pbVar27[2] << (uVar22 & 0xff));
                uVar22 = uVar17 + 0x18;
                pbVar29 = pbVar27 + 3;
                if (0x1f < uVar22) goto LAB_0181a45c;
                if (uVar4 != 0) {
                  uVar28 = uVar28 + ((uint)pbVar27[3] << (uVar22 & 0xff));
                  pbVar29 = pbVar27 + 4;
                  uVar17 = uVar17 + 0x20;
                  uVar4 = uVar19 - 4;
                  goto LAB_0181973c;
                }
              }
            }
            uVar17 = uVar22;
            goto LAB_01819138;
          }
LAB_0181a45c:
          uVar17 = uVar22;
        }
LAB_0181973c:
        pbVar27 = pbVar29;
        uVar19 = uVar4;
        if ((uVar8 & 4) == 0) {
          uVar17 = 0;
          uVar28 = 0;
        }
        else {
          if (puVar23[8] != uVar28) {
            param_1[6] = "incorrect length check";
            puVar23[1] = 0x3f51;
            uVar22 = uVar17;
            uVar26 = 0xfffffffd;
            goto LAB_0181913c;
          }
          uVar17 = 0;
          uVar28 = 0;
        }
        break;
      case 0x50:
        goto switchD_01818f18_caseD_50;
      case 0x51:
switchD_01818f18_caseD_51:
        uVar22 = uVar17;
        uVar26 = 0xfffffffd;
        goto LAB_0181913c;
      case 0x52:
        goto switchD_01818f18_caseD_52;
      default:
        goto switchD_01818f18_default;
      }
      puVar23[1] = 0x3f50;
      uVar4 = uVar19;
switchD_01818f18_caseD_50:
      uVar22 = uVar17;
      uVar26 = 1;
      goto LAB_0181913c;
    }
  }
switchD_01818f18_default:
  uVar26 = 0xfffffffe;
  goto LAB_01818e68;
code_r0x018199c0:
  if (uVar4 < uVar8) {
    uVar8 = uVar4;
  }
  if (local_40 <= uVar8) {
    uVar8 = local_40;
  }
  uVar26 = 0;
  if (uVar8 == 0) goto LAB_0181913c;
  uVar4 = uVar4 - uVar8;
  FUN_0181e3d4(local_34,pbVar29,uVar8);
  pbVar27 = pbVar29 + uVar8;
  local_40 = local_40 - uVar8;
  local_34 = (undefined4 *)((int)local_34 + uVar8);
  puVar23[0x11] = puVar23[0x11] - uVar8;
  iVar16 = puVar23[1];
LAB_01819688:
  iVar16 = iVar16 + -0x3f00;
  uVar17 = uVar22;
  uVar19 = uVar4;
  pbVar29 = pbVar27;
  goto LAB_01818f04;
code_r0x0181a434:
  puVar23[0x6f2] = 0xffffffff;
  puVar23[1] = 0x3f3f;
  goto switchD_01818f18_caseD_3f;
switchD_01818f18_caseD_3d:
  if (uVar17 < 0x20) {
LAB_01819290:
    uVar4 = 0;
    pbVar29 = pbVar27;
    if (uVar19 == 0) {
LAB_01819138:
      uVar22 = uVar17;
      uVar26 = uVar4;
      pbVar27 = pbVar29;
LAB_0181913c:
      param_1[4] = local_40;
      param_1[1] = uVar4;
      *param_1 = pbVar27;
      param_1[3] = local_34;
      puVar23[0xf] = uVar28;
      puVar23[0x10] = uVar22;
      uVar28 = param_1[4];
      if (puVar23[0xb] == 0) {
        if (local_38 != uVar28) {
          if (((uint)puVar23[1] < 0x3f51) && ((uint)puVar23[1] < 0x3f4e || param_2 != 4))
          goto LAB_01819260;
          goto LAB_01819188;
        }
        iVar16 = uVar24 - param_1[1];
        param_1[2] = param_1[2] + iVar16;
        iVar7 = 0;
      }
      else {
LAB_01819260:
        iVar7 = FUN_018189b8(param_1,local_34,local_38 - uVar28);
        if (iVar7 != 0) {
          puVar23[1] = 0x3f52;
switchD_01818f18_caseD_52:
          uVar26 = 0xfffffffc;
          goto LAB_01818e68;
        }
        uVar28 = param_1[4];
LAB_01819188:
        iVar16 = uVar24 - param_1[1];
        iVar7 = local_38 - uVar28;
        param_1[2] = param_1[2] + iVar16;
        param_1[5] = param_1[5] + iVar7;
        uVar17 = (*(byte *)(puVar23 + 3) & 7) >> 2;
        if (iVar7 == 0) {
          uVar17 = 0;
        }
        puVar23[8] = puVar23[8] + iVar7;
        if (uVar17 != 0) {
          if (puVar23[5] == 0) {
            uVar5 = FUN_01814330(puVar23[7],param_1[3] + (uVar28 - local_38),iVar7);
          }
          else {
            uVar5 = FUN_01814534();
          }
          puVar23[7] = uVar5;
          param_1[0xc] = uVar5;
        }
        uVar22 = puVar23[0x10];
      }
      iVar13 = puVar23[1];
      iVar18 = uVar22 + (uint)(puVar23[2] != 0) * 0x40;
      if (iVar13 == 0x3f3f) {
        iVar18 = iVar18 + 0x80;
      }
      else {
        iVar18 = iVar18 + (uint)(iVar13 == 0x3f42 || iVar13 == 0x3f47) * 0x100;
      }
      param_1[0xb] = iVar18;
      if ((iVar7 == 0 && iVar16 == 0 || param_2 == 4) && (uVar26 == 0)) {
        uVar26 = 0xfffffffb;
      }
      goto LAB_01818e68;
    }
    uVar26 = uVar17 + 8;
    uVar4 = uVar19 - 1;
    pbVar29 = pbVar27 + 1;
    uVar28 = uVar28 + ((uint)*pbVar27 << (uVar17 & 0xff));
    if (uVar26 < 0x20) {
      if (uVar4 == 0) {
LAB_0181a448:
        uVar22 = uVar26;
        uVar26 = uVar4;
        pbVar27 = pbVar29;
        goto LAB_0181913c;
      }
      uVar4 = uVar19 - 2;
      uVar28 = uVar28 + ((uint)pbVar27[1] << (uVar26 & 0xff));
      uVar26 = uVar17 + 0x10;
      pbVar29 = pbVar27 + 2;
      if (uVar26 < 0x20) {
        if (uVar4 == 0) goto LAB_0181a448;
        uVar22 = uVar17 + 0x18;
        uVar28 = uVar28 + ((uint)pbVar27[2] << (uVar26 & 0xff));
        uVar4 = uVar19 - 3;
        pbVar29 = pbVar27 + 3;
        if (uVar22 < 0x20) {
          if (uVar4 == 0) {
            uVar26 = uVar4;
            pbVar27 = pbVar29;
            goto LAB_0181913c;
          }
          uVar4 = uVar19 - 4;
          uVar28 = uVar28 + ((uint)pbVar27[3] << (uVar22 & 0xff));
          pbVar29 = pbVar27 + 4;
        }
      }
    }
  }
  uVar28 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
           uVar28 >> 0x18;
  puVar23[7] = uVar28;
  param_1[0xc] = uVar28;
  uVar28 = 0;
  uVar17 = 0;
  puVar23[1] = 0x3f3e;
  pbVar27 = pbVar29;
switchD_01818f18_caseD_3e:
  if (puVar23[4] != 0) {
    uVar5 = FUN_01814330(0,0);
    puVar23[7] = uVar5;
    param_1[0xc] = uVar5;
    goto LAB_01819358;
  }
  uVar26 = 2;
  param_1[3] = local_34;
  param_1[4] = local_40;
  *param_1 = pbVar27;
  param_1[1] = uVar4;
  puVar23[0xf] = uVar28;
  puVar23[0x10] = uVar17;
LAB_01818e68:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar26;
}

