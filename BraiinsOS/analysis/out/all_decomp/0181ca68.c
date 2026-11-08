// FUN_0181ca68 @ 0181ca68 size=3144 calls_out=3 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0181ca68(undefined1 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  ushort *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  short *psVar23;
  int iVar24;
  undefined1 *puVar25;
  int iVar26;
  int iVar27;
  undefined4 *puVar28;
  uint uVar29;
  bool bVar30;
  undefined1 *local_74;
  char *local_58;
  undefined4 *local_54;
  ushort auStack_50 [5];
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  uint local_3e;
  uint local_3a;
  short local_36;
  short local_34;
  short local_32;
  int local_2c;
  
  piVar3 = (int *)param_2[2];
  iVar27 = 0;
  psVar23 = (short *)*param_2;
  iVar24 = piVar3[3];
  local_2c = DAT_018ddaf8;
  iVar4 = *piVar3;
  *(undefined4 *)(param_1 + 0x1450) = 0;
  *(undefined4 *)(param_1 + 0x1454) = 0x23d;
  if (iVar24 < 1) {
    puVar11 = (undefined1 *)0xffffffff;
  }
  else {
    puVar9 = param_1 + 0x1458;
    puVar25 = puVar9 + iVar24;
    puVar11 = (undefined1 *)0xffffffff;
    psVar5 = psVar23;
    do {
      if (*psVar5 == 0) {
        psVar5[1] = 0;
      }
      else {
        iVar27 = *(int *)(param_1 + 0x1450);
        *(int *)(param_1 + 0x1450) = iVar27 + 1;
        puVar11 = puVar9 + (-0x1458 - (int)param_1);
        *(undefined1 **)(param_1 + (iVar27 + 0x2d7) * 4 + 4) = puVar11;
        *puVar9 = 0;
      }
      puVar9 = puVar9 + 1;
      psVar5 = psVar5 + 2;
    } while (puVar9 != puVar25);
    iVar27 = *(int *)(param_1 + 0x1450);
    if (1 < iVar27) {
      local_74 = puVar11;
      goto LAB_0181cc68;
    }
  }
  iVar18 = *(int *)(param_1 + 0x16a8);
  if (iVar4 == 0) {
    puVar9 = param_1 + iVar27 * 4 + 0xb5c;
    iVar12 = iVar27;
LAB_0181d590:
    puVar25 = puVar9;
    iVar12 = iVar12 + 1;
    if ((int)puVar11 < 2) goto LAB_0181d600;
    *(undefined4 *)(puVar25 + 4) = 0;
    *psVar23 = 1;
    param_1[0x1458] = 0;
    if (iVar12 != 2) {
      *(undefined4 *)(puVar25 + 4) = 0;
      puVar28 = (undefined4 *)(param_1 + iVar12 * 4 + 0xb5c);
      do {
        iVar12 = iVar12 + 1;
        puVar28 = puVar28 + 1;
        *puVar28 = 0;
      } while (iVar12 != 2);
      *(undefined4 *)(param_1 + 0x1450) = 2;
      *puVar28 = 0;
      *psVar23 = 1;
      param_1[0x1458] = 0;
      *(int *)(param_1 + 0x16a8) = iVar27 + iVar18 + -2;
      local_74 = puVar11;
      goto LAB_0181cc64;
    }
    local_74 = (undefined1 *)0x0;
    psVar5 = psVar23;
    puVar22 = param_1;
    goto LAB_0181d640;
  }
  puVar9 = param_1 + 0xb5c;
  puVar28 = (undefined4 *)(puVar9 + iVar27 * 4);
  iVar10 = *(int *)(param_1 + 0x16ac);
  iVar12 = iVar27 + 1;
  local_74 = puVar9;
  while( true ) {
    if ((int)puVar11 < 2) {
      puVar22 = puVar11 + 1;
      puVar25 = (undefined1 *)((int)puVar22 * 4);
      psVar5 = psVar23 + (int)puVar22 * 2;
      local_74 = puVar22;
    }
    else {
      puVar22 = (undefined1 *)0x0;
      psVar5 = psVar23;
      puVar25 = puVar22;
    }
    puVar28 = puVar28 + 1;
    *puVar28 = puVar22;
    if (1 < (int)puVar11) {
      local_74 = puVar11;
    }
    *psVar5 = 1;
    puVar22[(int)(param_1 + 0x1458)] = 0;
    iVar10 = iVar10 - (uint)*(ushort *)(puVar25 + iVar4 + 2);
    if (iVar12 == 2) {
      *(undefined4 *)(param_1 + 0x1450) = 2;
      *puVar28 = puVar22;
      *psVar5 = 1;
      puVar22[(int)(param_1 + 0x1458)] = 0;
      *(int *)(param_1 + 0x16ac) = iVar10;
      *(int *)(param_1 + 0x16a8) = iVar27 + iVar18 + -2;
      goto LAB_0181cc64;
    }
    if (1 < (int)puVar11) break;
    puVar11 = local_74;
    iVar12 = iVar12 + 1;
  }
  *puVar28 = puVar22;
  *psVar5 = 1;
  puVar22[(int)(param_1 + 0x1458)] = 0;
  uVar1 = *(ushort *)(iVar4 + 2);
  puVar28 = (undefined4 *)(puVar9 + iVar12 * 4);
  iVar12 = iVar12 + 1;
  do {
    iVar6 = iVar12;
    iVar12 = iVar6 + 1;
    iVar10 = iVar10 - (uint)uVar1;
    puVar28 = puVar28 + 1;
    *puVar28 = 0;
  } while (iVar12 != 3);
  *(undefined4 *)(param_1 + 0x1450) = 2;
  *puVar28 = 0;
  *psVar23 = 1;
  param_1[0x1458] = 0;
  *(int *)(param_1 + 0x16a8) = (iVar27 + iVar18) - iVar6;
  *(int *)(param_1 + 0x16ac) = iVar10;
  goto LAB_0181cc64;
LAB_0181d600:
  puVar11 = puVar11 + 1;
  puVar22 = param_1 + (int)puVar11;
  *(undefined1 **)(puVar25 + 4) = puVar11;
  psVar23[(int)puVar11 * 2] = 1;
  psVar5 = psVar23 + (int)puVar11 * 2;
  puVar22[0x1458] = 0;
  puVar9 = puVar25 + 4;
  if (iVar12 == 2) goto code_r0x0181d630;
  goto LAB_0181d590;
code_r0x0181d630:
  local_74 = puVar11;
LAB_0181d640:
  *(undefined4 *)(param_1 + 0x1450) = 2;
  *(undefined1 **)(puVar25 + 4) = local_74;
  *psVar5 = 1;
  puVar22[0x1458] = 0;
  *(int *)(param_1 + 0x16a8) = iVar27 + iVar18 + -2;
  local_74 = puVar11;
LAB_0181cc64:
  iVar27 = 2;
LAB_0181cc68:
  local_58 = (char *)(iVar27 >> 1);
  iVar18 = (int)local_58 << 1;
  param_2[1] = local_74;
  piVar21 = (int *)(param_1 + (int)local_58 * 4 + 0xb60);
  do {
    piVar21 = piVar21 + -1;
    iVar12 = *piVar21;
    pcVar14 = local_58;
    if (iVar18 <= iVar27) {
      uVar1 = psVar23[iVar12 * 2];
      iVar10 = iVar18;
      do {
        iVar6 = *(int *)(param_1 + iVar10 * 4 + 0xb5c);
        uVar2 = psVar23[iVar6 * 2];
        if (iVar10 < iVar27) {
          iVar19 = *(int *)(param_1 + iVar10 * 4 + 0xb60);
          iVar26 = iVar10 + 1;
          uVar17 = psVar23[iVar19 * 2];
          if (uVar2 <= uVar17) {
            if (uVar17 != uVar2) goto LAB_0181cd24;
            if ((byte)param_1[iVar6 + 0x1458] < (byte)param_1[iVar19 + 0x1458]) {
              iVar19 = iVar6;
              iVar26 = iVar10;
              uVar17 = uVar2;
            }
            else {
              uVar17 = uVar2;
            }
          }
        }
        else {
LAB_0181cd24:
          iVar19 = iVar6;
          iVar26 = iVar10;
          uVar17 = uVar2;
        }
        if ((uVar1 < uVar17) ||
           ((uVar1 == uVar17 && ((byte)param_1[iVar12 + 0x1458] <= (byte)param_1[iVar19 + 0x1458])))
           ) {
          break;
        }
        iVar10 = iVar26 * 2;
        *(int *)(param_1 + ((int)pcVar14 + 0x2d6) * 4 + 4) = iVar19;
        pcVar14 = (char *)iVar26;
      } while (iVar10 <= iVar27);
    }
    iVar18 = iVar18 + -2;
    local_58 = (char *)((int)local_58 + -1);
    *(int *)(param_1 + ((int)pcVar14 + 0x2d6) * 4 + 4) = iVar12;
  } while (local_58 != (char *)0x0);
  iVar27 = *(int *)(param_1 + 0x1450);
  local_54 = (undefined4 *)(param_1 + iVar27 * 4 + 0xb60);
  local_58 = param_1 + iVar24 + 0x1457;
  while( true ) {
    iVar27 = iVar27 + -1;
    iVar12 = *(int *)(param_1 + 0xb60);
    *(int *)(param_1 + 0x1450) = iVar27;
    local_54 = local_54 + -1;
    *(undefined4 *)(param_1 + 0xb60) = *local_54;
    FUN_0181c908(param_1,psVar23);
    iVar10 = *(int *)(param_1 + 0x1454);
    iVar18 = *(int *)(param_1 + 0xb60);
    iVar6 = iVar10 + -2;
    *(int *)(param_1 + iVar10 * 4 + 0xb58) = iVar12;
    *(int *)(param_1 + 0x1454) = iVar6;
    *(int *)(param_1 + iVar10 * 4 + 0xb54) = iVar18;
    psVar23[iVar24 * 2] = psVar23[iVar12 * 2] + psVar23[iVar18 * 2];
    uVar13 = (uint)(byte)param_1[iVar18 + 0x1458];
    bVar30 = (byte)param_1[iVar12 + 0x1458] < uVar13;
    if (bVar30) {
      pcVar14 = (char *)(uVar13 + 1);
      local_58 = local_58 + 1;
      *local_58 = (char)pcVar14;
    }
    else {
      pcVar14 = local_58 + 1;
      *pcVar14 = param_1[iVar12 + 0x1458] + 1;
    }
    psVar23[iVar18 * 2 + 1] = (short)iVar24;
    psVar23[iVar12 * 2 + 1] = (short)iVar24;
    *(int *)(param_1 + 0xb60) = iVar24;
    if (!bVar30) {
      local_58 = pcVar14;
    }
    FUN_0181c908(param_1,psVar23);
    if (iVar27 < 2) break;
    iVar24 = iVar24 + 1;
  }
  *(int *)(param_1 + 0x1454) = iVar10 + -3;
  iVar27 = *(int *)(param_1 + 0xb60);
  *(int *)(param_1 + iVar10 * 4 + 0xb50) = iVar27;
  iVar18 = param_2[1];
  iVar10 = piVar3[1];
  iVar12 = piVar3[2];
  uVar13 = piVar3[4];
  FUN_016dd606(param_1 + 0xb3c,0,0x20);
  iVar24 = 0;
  psVar23[iVar27 * 2 + 1] = 0;
  if (iVar6 < 0x23d) {
    if (iVar4 == 0) {
      piVar3 = (int *)(param_1 + iVar6 * 4 + 0xb58);
      iVar24 = 0;
      do {
        piVar3 = piVar3 + 1;
        iVar4 = *piVar3;
        uVar15 = (ushort)psVar23[(uint)(ushort)psVar23[iVar4 * 2 + 1] * 2 + 1] + 1;
        if ((int)uVar13 < (int)((ushort)psVar23[(uint)(ushort)psVar23[iVar4 * 2 + 1] * 2 + 1] + 1))
        {
          iVar24 = iVar24 + 1;
          uVar15 = uVar13;
        }
        psVar23[iVar4 * 2 + 1] = (short)uVar15;
        if (iVar4 <= iVar18) {
          *(short *)(param_1 + uVar15 * 2 + 0xb3c) = *(short *)(param_1 + uVar15 * 2 + 0xb3c) + 1;
          if (iVar12 <= iVar4) {
            uVar15 = uVar15 + *(int *)(iVar10 + (iVar4 - iVar12) * 4);
          }
          *(uint *)(param_1 + 0x16a8) =
               uVar15 * (ushort)psVar23[iVar4 * 2] + *(int *)(param_1 + 0x16a8);
        }
      } while (piVar3 != (int *)(param_1 + 0x144c));
    }
    else {
      piVar3 = (int *)(param_1 + iVar6 * 4 + 0xb58);
      do {
        piVar3 = piVar3 + 1;
        iVar27 = *piVar3;
        uVar15 = (ushort)psVar23[(uint)(ushort)psVar23[iVar27 * 2 + 1] * 2 + 1] + 1;
        if ((int)uVar13 < (int)((ushort)psVar23[(uint)(ushort)psVar23[iVar27 * 2 + 1] * 2 + 1] + 1))
        {
          iVar24 = iVar24 + 1;
          uVar15 = uVar13;
        }
        psVar23[iVar27 * 2 + 1] = (short)uVar15;
        if (iVar27 <= iVar18) {
          if (iVar27 < iVar12) {
            iVar6 = 0;
          }
          else {
            iVar6 = iVar27 - iVar12;
          }
          *(short *)(param_1 + uVar15 * 2 + 0xb3c) = *(short *)(param_1 + uVar15 * 2 + 0xb3c) + 1;
          if (iVar12 <= iVar27) {
            iVar6 = *(int *)(iVar10 + iVar6 * 4);
            uVar15 = uVar15 + iVar6;
          }
          uVar1 = psVar23[iVar27 * 2];
          uVar2 = *(ushort *)(iVar4 + iVar27 * 4 + 2);
          *(uint *)(param_1 + 0x16a8) = uVar1 * uVar15 + *(int *)(param_1 + 0x16a8);
          *(uint *)(param_1 + 0x16ac) =
               (uint)uVar1 * ((uint)uVar2 + iVar6) + *(int *)(param_1 + 0x16ac);
        }
      } while ((int *)(param_1 + 0x144c) != piVar3);
    }
    if (iVar24 != 0) {
      iVar4 = uVar13 * 2;
      uVar15 = uVar13 - 1;
      do {
        sVar8 = *(short *)(param_1 + iVar4 + 0xb3a);
        if (sVar8 == 0) {
          sVar8 = *(short *)(param_1 + iVar4 + 0xb38);
          if (sVar8 == 0) {
            sVar8 = *(short *)(param_1 + iVar4 + 0xb36);
            if (sVar8 == 0) {
              sVar8 = *(short *)(param_1 + iVar4 + 0xb34);
              uVar7 = uVar13 - 4;
              uVar29 = uVar7;
              uVar16 = uVar13 - 3;
              if (sVar8 == 0) {
                uVar16 = uVar13 - 5;
                sVar8 = *(short *)(param_1 + iVar4 + 0xb32);
                if (sVar8 == 0) {
                  uVar7 = uVar13 - 6;
                  sVar8 = *(short *)(param_1 + iVar4 + 0xb30);
                  uVar29 = uVar7;
                  if (sVar8 == 0) {
                    uVar16 = uVar13 - 7;
                    sVar8 = *(short *)(param_1 + iVar4 + 0xb2e);
                    if (sVar8 != 0) goto LAB_0181d1b8;
                    uVar7 = uVar13 - 8;
                    sVar8 = *(short *)(param_1 + iVar4 + 0xb2c);
                    uVar29 = uVar7;
                    if (sVar8 == 0) {
                      uVar16 = uVar13 - 9;
                      sVar8 = *(short *)(param_1 + iVar4 + 0xb2a);
                      if (sVar8 != 0) goto LAB_0181d1b8;
                      uVar7 = uVar13 - 10;
                      sVar8 = *(short *)(param_1 + iVar4 + 0xb28);
                      uVar29 = uVar7;
                      if (sVar8 == 0) {
                        uVar16 = uVar13 - 0xb;
                        sVar8 = *(short *)(param_1 + iVar4 + 0xb26);
                        if (sVar8 != 0) goto LAB_0181d1b8;
                        uVar7 = uVar13 - 0xc;
                        sVar8 = *(short *)(param_1 + iVar4 + 0xb24);
                        uVar29 = uVar7;
                        if (sVar8 == 0) {
                          uVar16 = uVar13 - 0xd;
                          sVar8 = *(short *)(param_1 + iVar4 + 0xb22);
                          if (sVar8 != 0) goto LAB_0181d1b8;
                          uVar7 = uVar13 - 0xe;
                          sVar8 = *(short *)(param_1 + iVar4 + 0xb20);
                          uVar29 = uVar7;
                          if (sVar8 == 0) {
                            uVar16 = uVar13 - 0xf;
                            sVar8 = *(short *)(param_1 + iVar4 + 0xb1e);
                            if (sVar8 != 0) goto LAB_0181d1b8;
                            sVar8 = *(short *)(param_1 + iVar4 + 0xb1c);
                            uVar29 = uVar13 - 0x10;
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_0181d1b8:
                  uVar29 = uVar16;
                  uVar16 = uVar7;
                }
              }
            }
            else {
              uVar29 = uVar13 - 3;
              uVar16 = uVar13 - 2;
            }
          }
          else {
            uVar29 = uVar13 - 2;
            uVar16 = uVar15;
          }
        }
        else {
          uVar29 = uVar15;
          uVar16 = uVar13;
        }
        iVar24 = iVar24 + -2;
        *(short *)(param_1 + (uVar29 + 0x59c) * 2 + 4) = sVar8 + -1;
        *(short *)(param_1 + uVar16 * 2 + 0xb3c) = *(short *)(param_1 + uVar16 * 2 + 0xb3c) + 2;
        *(short *)(param_1 + iVar4 + 0xb3c) = *(short *)(param_1 + iVar4 + 0xb3c) + -1;
      } while (0 < iVar24);
      if (uVar13 != 0) {
        puVar20 = (ushort *)(param_1 + iVar4 + 0xb3e);
        iVar4 = 0x23d;
        do {
          uVar29 = uVar15;
          puVar20 = puVar20 + -1;
          uVar15 = (uint)*puVar20;
          if (uVar15 != 0) {
            piVar3 = (int *)(param_1 + iVar4 * 4 + 0xb5c);
            do {
              piVar3 = piVar3 + -1;
              iVar24 = *piVar3;
              iVar4 = iVar4 + -1;
              if (iVar24 <= iVar18) goto LAB_0181d424;
              while( true ) {
                piVar3 = piVar3 + -1;
                iVar24 = *piVar3;
                iVar4 = iVar4 + -1;
                if (iVar18 < iVar24) break;
LAB_0181d424:
                if ((ushort)psVar23[iVar24 * 2 + 1] != uVar13) {
                  *(uint *)(param_1 + 0x16a8) =
                       (uint)(ushort)psVar23[iVar24 * 2] *
                       (uVar13 - (ushort)psVar23[iVar24 * 2 + 1]) + *(int *)(param_1 + 0x16a8);
                  psVar23[iVar24 * 2 + 1] = (short)uVar13;
                }
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_0181d460;
              }
            } while( true );
          }
LAB_0181d460:
          if (uVar29 == 0) break;
          uVar15 = uVar29 - 1;
          uVar13 = uVar29;
        } while( true );
      }
    }
  }
  auStack_50[1] = (short)((uint)*(ushort *)(param_1 + 0xb3c) * 2);
  iVar4 = ((uint)*(ushort *)(param_1 + 0xb3c) * 2 + (uint)*(ushort *)(param_1 + 0xb3e)) * 2;
  auStack_50[2] = (short)iVar4;
  iVar4 = ((uint)*(ushort *)(param_1 + 0xb40) + iVar4) * 2;
  auStack_50[3] = (short)iVar4;
  iVar4 = ((uint)*(ushort *)(param_1 + 0xb42) + iVar4) * 2;
  auStack_50[4] = (short)iVar4;
  iVar4 = ((uint)*(ushort *)(param_1 + 0xb44) + iVar4) * 2;
  local_46 = (short)iVar4;
  iVar4 = ((uint)*(ushort *)(param_1 + 0xb46) + iVar4) * 2;
  local_44 = (short)iVar4;
  iVar4 = ((uint)*(ushort *)(param_1 + 0xb48) + iVar4) * 2;
  local_42 = (short)iVar4;
  iVar4 = ((uint)*(ushort *)(param_1 + 0xb4a) + iVar4) * 2;
  local_40 = (short)iVar4;
  uVar13 = ((uint)*(ushort *)(param_1 + 0xb4c) + iVar4) * 2;
  iVar4 = *(ushort *)(param_1 + 0xb4e) + uVar13;
  uVar15 = ((uint)*(ushort *)(param_1 + 0xb50) + iVar4 * 2) * 2;
  iVar24 = *(ushort *)(param_1 + 0xb52) + uVar15;
  local_36 = (*(short *)(param_1 + 0xb54) + (short)iVar24 * 2) * 2;
  local_34 = (*(short *)(param_1 + 0xb56) + local_36) * 2;
  local_32 = (*(short *)(param_1 + 0xb58) + local_34) * 2;
  local_3e = uVar13 & 0xffff | iVar4 * 0x20000;
  local_3a = uVar15 & 0xffff | iVar24 * 0x20000;
  if (-1 < (int)local_74) {
    psVar5 = psVar23 + (int)local_74 * 2 + 2;
    do {
      while (uVar13 = (uint)(ushort)psVar23[1], uVar13 != 0) {
        uVar15 = 0;
        uVar29 = (uint)auStack_50[uVar13];
        auStack_50[uVar13] = auStack_50[uVar13] + 1;
        do {
          uVar13 = uVar13 - 1;
          uVar16 = uVar29 & 1 | uVar15;
          uVar29 = uVar29 >> 1;
          uVar15 = uVar16 << 1;
        } while (uVar13 != 0);
        *psVar23 = (short)uVar16;
        psVar23 = psVar23 + 2;
        if (psVar5 == psVar23) goto LAB_0181d378;
      }
      psVar23 = psVar23 + 2;
    } while (psVar5 != psVar23);
  }
LAB_0181d378:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

