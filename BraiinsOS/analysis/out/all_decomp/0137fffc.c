// FUN_0137fffc @ 0137fffc size=3872 calls_out=9 calls_in=2
// strings: 

void FUN_0137fffc(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  int local_78;
  undefined4 *local_4c;
  int local_48;
  undefined4 *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 < 0x21) {
LAB_01380024:
    if (1 < param_2) {
      if (param_4 < param_2 + 0x10) {
LAB_01380ee8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1380ee8);
        (*pcVar1)();
      }
      uVar30 = param_2 >> 1;
      if (param_2 < 0x10) {
        puVar11 = param_3 + uVar30 * 4;
        puVar24 = param_1 + uVar30 * 4;
        if (param_2 < 8) {
          uVar19 = param_1[1];
          uVar28 = param_1[2];
          uVar20 = param_1[3];
          uVar26 = 1;
          *param_3 = *param_1;
          param_3[1] = uVar19;
          param_3[2] = uVar28;
          param_3[3] = uVar20;
          uVar19 = puVar24[1];
          uVar28 = puVar24[2];
          uVar20 = puVar24[3];
          *puVar11 = *puVar24;
          puVar11[1] = uVar19;
          puVar11[2] = uVar28;
          puVar11[3] = uVar20;
        }
        else {
          FUN_01380f44(param_1,param_3);
          FUN_01380f44(puVar24,puVar11);
          uVar26 = 4;
        }
      }
      else {
        puVar24 = param_3 + param_2 * 4;
        FUN_01380f44(param_1,puVar24);
        FUN_01380f44(param_1 + 0x10,puVar24 + 0x10);
        uVar26 = 8;
        FUN_013811a4(puVar24,8,param_3);
        FUN_01380f44(param_1 + uVar30 * 4,puVar24 + 0x20);
        FUN_01380f44(param_1 + uVar30 * 4 + 0x10,puVar24 + 0x30);
        FUN_013811a4(puVar24 + 0x20,8,param_3 + uVar30 * 4);
      }
      if (uVar26 < uVar30) {
        local_3c = uVar26 << 4;
        uVar21 = uVar26;
        do {
          puVar24 = param_1 + uVar21 * 4;
          uVar28 = puVar24[1];
          uVar29 = puVar24[2];
          uVar19 = puVar24[3];
          puVar11 = param_3 + uVar21 * 4;
          *puVar11 = *puVar24;
          puVar11[1] = uVar28;
          puVar11[2] = uVar29;
          uVar25 = puVar11[-2];
          puVar11[3] = uVar19;
          uVar27 = uVar25;
          if (uVar29 < uVar25) {
            uVar27 = uVar29;
          }
          iVar15 = FUN_016dd50a(uVar28,puVar11[-3],uVar27);
          bVar5 = *(byte *)(puVar11 + 3);
          if (iVar15 == 0) {
            iVar15 = uVar29 - uVar25;
          }
          bVar7 = -1 < iVar15;
          if (iVar15 == 0) {
            bVar7 = *(byte *)(puVar11 + -1) <= bVar5;
          }
          if (!bVar7) {
            uVar19 = *puVar11;
            iVar15 = local_3c;
            do {
              iVar16 = iVar15;
              *(undefined4 *)((int)param_3 + iVar16) =
                   *(undefined4 *)((int)param_3 + iVar16 + -0x10);
              *(undefined4 *)((int)param_3 + iVar16 + 4) =
                   *(undefined4 *)((int)param_3 + iVar16 + -0xc);
              *(undefined4 *)((int)param_3 + iVar16 + 8) =
                   *(undefined4 *)((int)param_3 + iVar16 + -8);
              *(undefined4 *)((int)param_3 + iVar16 + 0xc) =
                   *(undefined4 *)((int)param_3 + iVar16 + -4);
              if (iVar16 == 0x10) {
                puVar11 = param_3;
                goto LAB_01380bd4;
              }
              uVar25 = *(uint *)((int)param_3 + iVar16 + -0x18);
              uVar27 = uVar25;
              if (uVar29 < uVar25) {
                uVar27 = uVar29;
              }
              iVar15 = FUN_016dd50a(uVar28,*(undefined4 *)((int)param_3 + iVar16 + -0x1c),uVar27);
              if (iVar15 == 0) {
                iVar15 = uVar29 - uVar25;
              }
              bVar7 = -1 < iVar15;
              if (iVar15 == 0) {
                bVar7 = *(byte *)((int)param_3 + iVar16 + -0x14) <= bVar5;
              }
              iVar15 = iVar16 + -0x10;
            } while (!bVar7);
            puVar11 = (undefined4 *)((int)param_3 + iVar16 + -0x10);
LAB_01380bd4:
            *puVar11 = uVar19;
            *(byte *)((int)param_3 + iVar16 + -4) = bVar5;
            uVar6 = *(undefined2 *)((int)puVar24 + 0xd);
            uVar4 = *(undefined1 *)((int)puVar24 + 0xf);
            *(undefined4 *)((int)param_3 + iVar16 + -0xc) = uVar28;
            *(uint *)((int)param_3 + iVar16 + -8) = uVar29;
            *(undefined2 *)((int)param_3 + iVar16 + -3) = uVar6;
            *(undefined1 *)((int)param_3 + iVar16 + -1) = uVar4;
          }
          uVar21 = uVar21 + 1;
          local_3c = local_3c + 0x10;
        } while (uVar21 != uVar30);
      }
      if (uVar26 < param_2 - uVar30) {
        iVar15 = uVar26 * 0x10;
        puVar24 = param_3 + uVar30 * 4;
        local_48 = 0x10;
        uVar21 = uVar26;
        local_4c = puVar24;
        do {
          puVar10 = param_1 + uVar30 * 4 + uVar21 * 4;
          uVar19 = puVar10[1];
          uVar29 = puVar10[2];
          uVar28 = puVar10[3];
          puVar11 = puVar24 + uVar21 * 4;
          *puVar11 = *puVar10;
          puVar11[1] = uVar19;
          puVar11[2] = uVar29;
          uVar25 = puVar11[-2];
          puVar11[3] = uVar28;
          uVar27 = uVar25;
          if (uVar29 < uVar25) {
            uVar27 = uVar29;
          }
          iVar16 = FUN_016dd50a(uVar19,puVar11[-3],uVar27);
          bVar5 = *(byte *)(puVar11 + 3);
          if (iVar16 == 0) {
            iVar16 = uVar29 - uVar25;
          }
          bVar7 = -1 < iVar16;
          if (iVar16 == 0) {
            bVar7 = *(byte *)(puVar11 + -1) <= bVar5;
          }
          if (!bVar7) {
            uVar28 = *puVar11;
            puVar11 = local_4c;
            iVar16 = local_48;
            do {
              puVar13 = puVar11;
              uVar23 = puVar13[uVar26 * 4 + -1];
              uVar22 = puVar13[uVar26 * 4 + -2];
              uVar20 = puVar13[uVar26 * 4 + -3];
              puVar13[uVar26 * 4] = puVar13[uVar26 * 4 + -4];
              puVar13[uVar26 * 4 + 1] = uVar20;
              puVar13[uVar26 * 4 + 2] = uVar22;
              puVar13[uVar26 * 4 + 3] = uVar23;
              if (iVar15 == iVar16) {
                puVar11 = puVar24;
                goto LAB_01380d60;
              }
              uVar25 = puVar13[uVar26 * 4 + -6];
              uVar27 = uVar25;
              if (uVar29 < uVar25) {
                uVar27 = uVar29;
              }
              iVar17 = FUN_016dd50a(uVar19,puVar13[uVar26 * 4 + -7],uVar27);
              if (iVar17 == 0) {
                iVar17 = uVar29 - uVar25;
              }
              iVar16 = iVar16 + 0x10;
              bVar7 = -1 < iVar17;
              if (iVar17 == 0) {
                bVar7 = *(byte *)(puVar13 + uVar26 * 4 + -5) <= bVar5;
              }
              puVar11 = puVar13 + -4;
            } while (!bVar7);
            puVar11 = puVar13 + -4 + uVar26 * 4;
LAB_01380d60:
            *puVar11 = uVar28;
            *(byte *)(puVar13 + uVar26 * 4 + -1) = bVar5;
            puVar13[uVar26 * 4 + -3] = uVar19;
            uVar6 = *(undefined2 *)((int)puVar10 + 0xd);
            uVar4 = *(undefined1 *)((int)puVar10 + 0xf);
            puVar13[uVar26 * 4 + -2] = uVar29;
            *(undefined2 *)((int)puVar13 + iVar15 + -3) = uVar6;
            *(undefined1 *)((int)puVar13 + iVar15 + -1) = uVar4;
          }
          uVar21 = uVar21 + 1;
          local_48 = local_48 + -0x10;
          local_4c = local_4c + 4;
        } while (uVar21 != param_2 - uVar30);
      }
      FUN_013811a4(param_3,param_2,param_1);
    }
    return;
  }
  local_78 = param_6;
LAB_013800c0:
  uVar30 = param_2;
LAB_013800c4:
  if (param_5 == 0) {
    FUN_0137f86c(param_1,uVar30,param_3,param_4,1);
    return;
  }
  puVar11 = param_1 + (uVar30 >> 3) * 0x10;
  puVar24 = param_1 + ((uVar30 >> 3) * 8 - (uVar30 >> 3)) * 4;
  if (uVar30 < 0x40) {
    uVar27 = puVar11[2];
    uVar21 = param_1[2];
    uVar28 = puVar11[1];
    uVar19 = param_1[1];
    uVar26 = uVar27;
    if (uVar21 < uVar27) {
      uVar26 = uVar21;
    }
    iVar15 = FUN_016dd50a(uVar19,uVar28,uVar26);
    bVar5 = *(byte *)(puVar11 + 3);
    bVar2 = *(byte *)(param_1 + 3);
    if (iVar15 == 0) {
      iVar15 = uVar21 - uVar27;
    }
    uVar26 = puVar24[2];
    bVar7 = -1 < iVar15;
    if (iVar15 == 0) {
      bVar7 = bVar5 <= bVar2;
    }
    uVar20 = puVar24[1];
    uVar25 = uVar26;
    if (uVar21 < uVar26) {
      uVar25 = uVar21;
    }
    iVar15 = FUN_016dd50a(uVar19,uVar20,uVar25);
    if (iVar15 == 0) {
      iVar15 = uVar21 - uVar26;
    }
    bVar3 = *(byte *)(puVar24 + 3);
    bVar8 = -1 < iVar15;
    if (iVar15 == 0) {
      bVar8 = bVar3 <= bVar2;
    }
    puVar10 = param_1;
    if (!bVar7 == !bVar8) {
      uVar21 = uVar26;
      if (uVar27 < uVar26) {
        uVar21 = uVar27;
      }
      iVar15 = FUN_016dd50a(uVar28,uVar20,uVar21);
      if (iVar15 == 0) {
        iVar15 = uVar27 - uVar26;
      }
      bVar8 = -1 < iVar15;
      if (iVar15 == 0) {
        bVar8 = bVar3 <= bVar5;
      }
      puVar10 = puVar11;
      if (!bVar7 != !bVar8) {
        puVar10 = puVar24;
      }
    }
  }
  else {
    puVar10 = (undefined4 *)FUN_0138134c(param_1,puVar11,puVar24);
  }
  param_5 = param_5 + -1;
  local_38 = *puVar10;
  uStack_34 = puVar10[1];
  uStack_30 = puVar10[2];
  uStack_2c = puVar10[3];
  uVar26 = (uint)((int)puVar10 - (int)param_1) >> 4;
  if (local_78 != 0) {
    uVar25 = puVar10[2];
    uVar27 = *(uint *)(local_78 + 8);
    uVar21 = uVar25;
    if (uVar27 < uVar25) {
      uVar21 = uVar27;
    }
    iVar15 = FUN_016dd50a(*(undefined4 *)(local_78 + 4),puVar10[1],uVar21);
    if (iVar15 == 0) {
      iVar15 = uVar27 - uVar25;
    }
    bVar7 = -1 < iVar15;
    if (iVar15 == 0) {
      bVar7 = *(byte *)(puVar10 + 3) <= *(byte *)(local_78 + 0xc);
    }
    if (bVar7) goto LAB_013806ec;
  }
  if (uVar30 <= param_4) {
    param_2 = 0;
    puVar24 = param_3 + uVar30 * 4;
    uVar21 = uVar26;
    local_40 = param_1;
    do {
      iVar15 = uVar21 - 3;
      if (uVar21 < 3) {
        iVar15 = 0;
      }
      if (local_40 < param_1 + iVar15 * 4) {
        iVar16 = 0;
        puVar13 = local_40;
        do {
          uVar29 = puVar10[2];
          uVar25 = *(uint *)((int)local_40 + (8 - iVar16));
          uVar27 = uVar29;
          if (uVar25 < uVar29) {
            uVar27 = uVar25;
          }
          iVar17 = FUN_016dd50a(*(undefined4 *)((int)local_40 + (4 - iVar16)),puVar10[1],uVar27);
          if (iVar17 == 0) {
            iVar17 = uVar25 - uVar29;
          }
          bVar7 = -1 < iVar17;
          if (iVar17 == 0) {
            bVar7 = *(byte *)(puVar10 + 3) <= *(byte *)((int)local_40 + (0xc - iVar16));
          }
          puVar11 = param_3;
          if (!bVar7 == 0) {
            puVar11 = (undefined4 *)((int)puVar24 + iVar16 + -0x10);
          }
          uVar19 = puVar13[1];
          uVar28 = puVar13[2];
          uVar20 = puVar13[3];
          puVar11 = puVar11 + param_2 * 4;
          *puVar11 = *puVar13;
          puVar11[1] = uVar19;
          puVar11[2] = uVar28;
          puVar11[3] = uVar20;
          uVar29 = puVar10[2];
          uVar25 = *(uint *)((int)local_40 + (0x18 - iVar16));
          uVar27 = uVar29;
          if (uVar25 < uVar29) {
            uVar27 = uVar25;
          }
          iVar17 = FUN_016dd50a(*(undefined4 *)((int)local_40 + (0x14 - iVar16)),puVar10[1],uVar27);
          if (iVar17 == 0) {
            iVar17 = uVar25 - uVar29;
          }
          uVar28 = *(undefined4 *)((int)local_40 + (0x14 - iVar16));
          uVar19 = *(undefined4 *)((int)local_40 + (0x1c - iVar16));
          bVar8 = -1 < iVar17;
          if (iVar17 == 0) {
            bVar8 = *(byte *)(puVar10 + 3) <= *(byte *)((int)local_40 + (0x1c - iVar16));
          }
          puVar11 = param_3;
          if (!bVar8 == 0) {
            puVar11 = (undefined4 *)((int)puVar24 + iVar16 + -0x20);
          }
          iVar17 = param_2 + !bVar7;
          uVar20 = *(undefined4 *)((int)local_40 + (0x18 - iVar16));
          puVar11 = puVar11 + iVar17 * 4;
          *puVar11 = *(undefined4 *)((int)local_40 + (0x10 - iVar16));
          puVar11[2] = uVar20;
          iVar17 = iVar17 + (uint)!bVar8;
          puVar11[3] = uVar19;
          puVar11[1] = uVar28;
          uVar25 = *(uint *)((int)local_40 + (0x28 - iVar16));
          uVar29 = puVar10[2];
          uVar27 = uVar29;
          if (uVar25 < uVar29) {
            uVar27 = uVar25;
          }
          iVar12 = FUN_016dd50a(*(undefined4 *)((int)local_40 + (0x24 - iVar16)),puVar10[1],uVar27);
          if (iVar12 == 0) {
            iVar12 = uVar25 - uVar29;
          }
          uVar19 = puVar13[0xb];
          bVar7 = -1 < iVar12;
          if (iVar12 == 0) {
            bVar7 = *(byte *)(puVar10 + 3) <= *(byte *)((int)local_40 + (0x2c - iVar16));
          }
          puVar11 = param_3;
          if (!bVar7 == 0) {
            puVar11 = (undefined4 *)((int)puVar24 + iVar16 + -0x30);
          }
          uVar28 = puVar13[9];
          uVar20 = puVar13[10];
          puVar11 = puVar11 + iVar17 * 4;
          *puVar11 = puVar13[8];
          iVar17 = iVar17 + (uint)!bVar7;
          puVar11[1] = uVar28;
          puVar11[2] = uVar20;
          puVar11[3] = uVar19;
          uVar25 = *(uint *)((int)local_40 + (0x38 - iVar16));
          uVar29 = puVar10[2];
          uVar27 = uVar29;
          if (uVar25 < uVar29) {
            uVar27 = uVar25;
          }
          iVar12 = FUN_016dd50a(*(undefined4 *)((int)local_40 + (0x34 - iVar16)),puVar10[1],uVar27);
          if (iVar12 == 0) {
            iVar12 = uVar25 - uVar29;
          }
          iVar9 = 0x30 - iVar16;
          uVar19 = *(undefined4 *)((int)local_40 + (0x3c - iVar16));
          puVar13 = puVar13 + 0x10;
          bVar7 = -1 < iVar12;
          if (iVar12 == 0) {
            bVar7 = *(byte *)(puVar10 + 3) <= *(byte *)((int)local_40 + (0x3c - iVar16));
          }
          param_2 = iVar17 + (uint)!bVar7;
          puVar11 = param_3;
          if (!bVar7 == 0) {
            puVar11 = (undefined4 *)((int)puVar24 + iVar16 + -0x40);
          }
          uVar28 = *(undefined4 *)((int)local_40 + (0x34 - iVar16));
          uVar20 = *(undefined4 *)((int)local_40 + (0x38 - iVar16));
          iVar16 = iVar16 + -0x40;
          puVar11 = puVar11 + iVar17 * 4;
          *puVar11 = *(undefined4 *)((int)local_40 + iVar9);
          puVar11[1] = uVar28;
          puVar11[2] = uVar20;
          puVar11[3] = uVar19;
        } while (puVar13 < param_1 + iVar15 * 4);
        puVar24 = (undefined4 *)((int)puVar24 + iVar16);
        puVar11 = param_1 + uVar21 * 4;
        local_40 = puVar13;
        if (puVar13 < puVar11) goto LAB_01380564;
      }
      else {
        puVar11 = param_1 + uVar21 * 4;
        if (local_40 < puVar11) {
LAB_01380564:
          iVar15 = 0;
          puVar13 = local_40;
          do {
            uVar29 = puVar10[2];
            uVar25 = *(uint *)((int)local_40 + (8 - iVar15));
            uVar27 = uVar29;
            if (uVar25 < uVar29) {
              uVar27 = uVar25;
            }
            iVar16 = FUN_016dd50a(*(undefined4 *)((int)local_40 + (4 - iVar15)),puVar10[1],uVar27);
            if (iVar16 == 0) {
              iVar16 = uVar25 - uVar29;
            }
            puVar14 = (undefined4 *)((int)local_40 - iVar15);
            puVar13 = puVar13 + 4;
            uVar19 = *(undefined4 *)((int)local_40 + (4 - iVar15));
            uVar28 = *(undefined4 *)((int)local_40 + (8 - iVar15));
            uVar20 = *(undefined4 *)((int)local_40 + (0xc - iVar15));
            bVar7 = -1 < iVar16;
            if (iVar16 == 0) {
              bVar7 = *(byte *)(puVar10 + 3) <= *(byte *)((int)local_40 + (0xc - iVar15));
            }
            puVar18 = param_3;
            if (!bVar7 == 0) {
              puVar18 = (undefined4 *)((int)puVar24 + iVar15 + -0x10);
            }
            iVar15 = iVar15 + -0x10;
            puVar18 = puVar18 + param_2 * 4;
            *puVar18 = *puVar14;
            param_2 = param_2 + !bVar7;
            puVar18[1] = uVar19;
            puVar18[2] = uVar28;
            puVar18[3] = uVar20;
          } while (puVar13 < puVar11);
          puVar24 = (undefined4 *)((int)puVar24 + iVar15);
          local_40 = puVar13;
        }
      }
      if (uVar21 == uVar30) goto LAB_01380648;
      puVar24 = puVar24 + -4;
      uVar19 = local_40[1];
      uVar28 = local_40[2];
      uVar20 = local_40[3];
      puVar11 = puVar24 + param_2 * 4;
      *puVar11 = *local_40;
      local_40 = local_40 + 4;
      puVar11[1] = uVar19;
      puVar11[2] = uVar28;
      puVar11[3] = uVar20;
      uVar21 = uVar30;
    } while( true );
  }
  goto LAB_01380ee8;
LAB_01380648:
  FUN_016dd1aa(param_1,param_3,param_2 << 4);
  iVar15 = uVar30 - param_2;
  if (iVar15 != 0) {
    puVar11 = param_1 + param_2 * 4;
    puVar24 = param_3 + uVar30 * 4 + -4;
    iVar16 = iVar15;
    do {
      uVar22 = *puVar24;
      iVar16 = iVar16 + -1;
      uVar20 = puVar24[1];
      uVar28 = puVar24[2];
      uVar19 = puVar24[3];
      puVar24 = puVar24 + -4;
      *puVar11 = uVar22;
      puVar11[1] = uVar20;
      puVar11[2] = uVar28;
      puVar11[3] = uVar19;
      puVar11 = puVar11 + 4;
    } while (iVar16 != 0);
  }
  if (param_2 == 0) goto LAB_013806ec;
  if (uVar30 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
  }
  FUN_0137fffc(param_1 + param_2 * 4,iVar15,param_3,param_4,param_5,&local_38);
  uVar30 = param_2;
  if (param_2 < 0x21) goto LAB_01380024;
  goto LAB_013800c4;
LAB_013806ec:
  if (param_4 < uVar30) goto LAB_01380ee8;
  uVar21 = 0;
  puVar24 = param_3 + uVar30 * 4;
  local_40 = param_1;
  while( true ) {
    iVar15 = uVar26 - 3;
    if (uVar26 < 3) {
      iVar15 = 0;
    }
    if (local_40 < param_1 + iVar15 * 4) {
      iVar16 = 0;
      puVar11 = local_40;
      do {
        uVar29 = puVar10[2];
        uVar25 = *(uint *)((int)local_40 + (8 - iVar16));
        uVar27 = uVar25;
        if (uVar29 < uVar25) {
          uVar27 = uVar29;
        }
        uVar27 = FUN_016dd50a(puVar10[1],*(undefined4 *)((int)local_40 + (4 - iVar16)),uVar27);
        if (uVar27 == 0) {
          uVar27 = uVar29 - uVar25;
        }
        bVar7 = *(byte *)((int)local_40 + (0xc - iVar16)) <= *(byte *)(puVar10 + 3);
        if (uVar27 != 0) {
          bVar7 = uVar27 < 0x80000000;
        }
        puVar13 = param_3;
        if (bVar7 == 0) {
          puVar13 = (undefined4 *)((int)puVar24 + iVar16 + -0x10);
        }
        uVar19 = puVar11[1];
        uVar28 = puVar11[2];
        uVar20 = puVar11[3];
        puVar13 = puVar13 + uVar21 * 4;
        *puVar13 = *puVar11;
        puVar13[1] = uVar19;
        puVar13[2] = uVar28;
        puVar13[3] = uVar20;
        uVar29 = *(uint *)((int)local_40 + (0x18 - iVar16));
        uVar25 = puVar10[2];
        uVar27 = uVar29;
        if (uVar25 < uVar29) {
          uVar27 = uVar25;
        }
        uVar27 = FUN_016dd50a(puVar10[1],*(undefined4 *)((int)local_40 + (0x14 - iVar16)),uVar27);
        if (uVar27 == 0) {
          uVar27 = uVar25 - uVar29;
        }
        uVar19 = *(undefined4 *)((int)local_40 + (0x14 - iVar16));
        bVar8 = *(byte *)((int)local_40 + (0x1c - iVar16)) <= *(byte *)(puVar10 + 3);
        if (uVar27 != 0) {
          bVar8 = uVar27 < 0x80000000;
        }
        puVar13 = param_3;
        if (bVar8 == 0) {
          puVar13 = (undefined4 *)((int)puVar24 + iVar16 + -0x20);
        }
        iVar17 = uVar21 + bVar7;
        uVar20 = *(undefined4 *)((int)local_40 + (0x18 - iVar16));
        uVar28 = *(undefined4 *)((int)local_40 + (0x1c - iVar16));
        puVar13 = puVar13 + iVar17 * 4;
        *puVar13 = *(undefined4 *)((int)local_40 + (0x10 - iVar16));
        uVar22 = *(undefined4 *)((int)local_40 + (0x24 - iVar16));
        puVar13[2] = uVar20;
        iVar17 = iVar17 + (uint)bVar8;
        puVar13[3] = uVar28;
        puVar13[1] = uVar19;
        uVar27 = *(uint *)((int)local_40 + (0x28 - iVar16));
        uVar25 = puVar10[2];
        uVar21 = uVar27;
        if (uVar25 < uVar27) {
          uVar21 = uVar25;
        }
        uVar21 = FUN_016dd50a(puVar10[1],uVar22,uVar21);
        if (uVar21 == 0) {
          uVar21 = uVar25 - uVar27;
        }
        uVar19 = puVar11[0xb];
        bVar7 = *(byte *)((int)local_40 + (0x2c - iVar16)) <= *(byte *)(puVar10 + 3);
        if (uVar21 != 0) {
          bVar7 = uVar21 < 0x80000000;
        }
        puVar13 = param_3;
        if (bVar7 == 0) {
          puVar13 = (undefined4 *)((int)puVar24 + iVar16 + -0x30);
        }
        uVar28 = puVar11[9];
        uVar20 = puVar11[10];
        puVar13 = puVar13 + iVar17 * 4;
        *puVar13 = puVar11[8];
        iVar17 = iVar17 + (uint)bVar7;
        puVar13[1] = uVar28;
        puVar13[2] = uVar20;
        puVar13[3] = uVar19;
        uVar27 = *(uint *)((int)local_40 + (0x38 - iVar16));
        uVar25 = puVar10[2];
        uVar21 = uVar27;
        if (uVar25 < uVar27) {
          uVar21 = uVar25;
        }
        uVar21 = FUN_016dd50a(puVar10[1],*(undefined4 *)((int)local_40 + (0x34 - iVar16)),uVar21);
        if (uVar21 == 0) {
          uVar21 = uVar25 - uVar27;
        }
        iVar12 = 0x30 - iVar16;
        uVar19 = *(undefined4 *)((int)local_40 + (0x3c - iVar16));
        bVar7 = *(byte *)((int)local_40 + (0x3c - iVar16)) <= *(byte *)(puVar10 + 3);
        if (uVar21 != 0) {
          bVar7 = uVar21 < 0x80000000;
        }
        uVar21 = iVar17 + (uint)bVar7;
        puVar13 = param_3;
        if (bVar7 == 0) {
          puVar13 = (undefined4 *)((int)puVar24 + iVar16 + -0x40);
        }
        uVar28 = *(undefined4 *)((int)local_40 + (0x34 - iVar16));
        uVar20 = *(undefined4 *)((int)local_40 + (0x38 - iVar16));
        iVar16 = iVar16 + -0x40;
        puVar13 = puVar13 + iVar17 * 4;
        *puVar13 = *(undefined4 *)((int)local_40 + iVar12);
        puVar11 = puVar11 + 0x10;
        puVar13[1] = uVar28;
        puVar13[2] = uVar20;
        puVar13[3] = uVar19;
      } while (puVar11 < param_1 + iVar15 * 4);
      puVar24 = (undefined4 *)((int)puVar24 + iVar16);
      local_40 = puVar11;
    }
    if (local_40 < param_1 + uVar26 * 4) {
      iVar15 = 0;
      puVar11 = local_40;
      do {
        uVar29 = puVar10[2];
        uVar25 = *(uint *)((int)local_40 + (8 - iVar15));
        uVar27 = uVar25;
        if (uVar29 < uVar25) {
          uVar27 = uVar29;
        }
        uVar27 = FUN_016dd50a(puVar10[1],*(undefined4 *)((int)local_40 + (4 - iVar15)),uVar27);
        if (uVar27 == 0) {
          uVar27 = uVar29 - uVar25;
        }
        puVar13 = (undefined4 *)((int)local_40 - iVar15);
        puVar11 = puVar11 + 4;
        uVar19 = *(undefined4 *)((int)local_40 + (4 - iVar15));
        bVar7 = *(byte *)((int)local_40 + (0xc - iVar15)) <= *(byte *)(puVar10 + 3);
        if (uVar27 != 0) {
          bVar7 = uVar27 < 0x80000000;
        }
        puVar14 = param_3;
        if (bVar7 == 0) {
          puVar14 = (undefined4 *)((int)puVar24 + iVar15 + -0x10);
        }
        uVar28 = *(undefined4 *)((int)local_40 + (8 - iVar15));
        uVar20 = *(undefined4 *)((int)local_40 + (0xc - iVar15));
        iVar15 = iVar15 + -0x10;
        puVar14 = puVar14 + uVar21 * 4;
        *puVar14 = *puVar13;
        uVar21 = uVar21 + bVar7;
        puVar14[1] = uVar19;
        puVar14[2] = uVar28;
        puVar14[3] = uVar20;
      } while (puVar11 < param_1 + uVar26 * 4);
      puVar24 = (undefined4 *)((int)puVar24 + iVar15);
      local_40 = puVar11;
    }
    if (uVar26 == uVar30) break;
    puVar24 = puVar24 + -4;
    uVar19 = local_40[1];
    uVar28 = local_40[2];
    uVar20 = local_40[3];
    puVar11 = param_3 + uVar21 * 4;
    *puVar11 = *local_40;
    local_40 = local_40 + 4;
    uVar21 = uVar21 + 1;
    puVar11[1] = uVar19;
    puVar11[2] = uVar28;
    puVar11[3] = uVar20;
    uVar26 = uVar30;
  }
  FUN_016dd1aa(param_1,param_3,uVar21 << 4);
  param_2 = uVar30 - uVar21;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar21 * 4;
  puVar11 = param_3 + uVar30 * 4 + -4;
  uVar26 = param_2;
  puVar24 = param_1;
  do {
    uVar19 = *puVar11;
    uVar22 = puVar11[1];
    uVar26 = uVar26 - 1;
    uVar20 = puVar11[2];
    uVar28 = puVar11[3];
    puVar11 = puVar11 + -4;
    *puVar24 = uVar19;
    puVar24[1] = uVar22;
    puVar24[2] = uVar20;
    puVar24[3] = uVar28;
    puVar24 = puVar24 + 4;
  } while (uVar26 != 0);
  if (uVar30 < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar21,uVar30,uVar30,&DAT_018af348);
  }
  local_78 = 0;
  if (param_2 < 0x21) goto LAB_01380024;
  goto LAB_013800c0;
}

