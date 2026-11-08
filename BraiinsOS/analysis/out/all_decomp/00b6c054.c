// FUN_00b6c054 @ 00b6c054 size=4856 calls_out=9 calls_in=2
// strings: BUG: impossible | BUG: impossible | BUG: impossible | BUG: impossible

void FUN_00b6c054(double *param_1,uint param_2,double *param_3,uint param_4,int param_5,
                 double *param_6)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  double *pdVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double *local_38;
  double *local_34;
  undefined8 local_30;
  
  local_34 = param_1;
  if (0x20 < param_2) {
    local_38 = param_6;
LAB_00b6c0e0:
    if (param_5 == 0) {
      FUN_00b6b918(local_34,param_2,param_3,param_4,1);
      return;
    }
    pdVar5 = local_34 + ((param_2 >> 3) * 8 - (param_2 >> 3));
    if (param_2 < 0x40) {
      dVar31 = *local_34;
      dVar30 = local_34[(param_2 >> 3) * 4];
      if (NAN(dVar31)) {
        dVar29 = *pdVar5;
        bVar2 = !NAN(dVar30);
        bVar28 = !NAN(dVar29);
      }
      else {
        bVar2 = true;
        if (!NAN(dVar30)) {
          if (dVar31 <= dVar30) {
            bVar2 = false;
            if (dVar31 < dVar30) {
              bVar2 = true;
            }
          }
          else {
            bVar2 = true;
            if (dVar31 < dVar30) goto LAB_00b6cdc0;
          }
        }
        dVar29 = *pdVar5;
        bVar28 = !NAN(dVar29);
        if ((dVar29 < dVar31) && (dVar31 < dVar29)) goto LAB_00b6cdc0;
      }
      if (NAN(dVar30)) {
        bVar14 = bVar28;
      }
      else {
        bVar14 = 1;
        if (bVar28) {
          if (dVar30 <= dVar29) {
            bVar14 = 0;
            if (dVar30 < dVar29) {
              bVar14 = 0xff;
            }
          }
          else {
            bVar14 = 1;
            if (dVar30 < dVar29) goto LAB_00b6cdc0;
          }
        }
      }
      pdVar4 = local_34 + (param_2 >> 3) * 4;
      if ((char)(bVar14 ^ bVar2) < '\0') {
        pdVar4 = pdVar5;
      }
    }
    else {
      pdVar4 = (double *)FUN_00b6dda4(local_34);
    }
    local_30 = *pdVar4;
    param_5 = param_5 + -1;
    uVar24 = (uint)((int)pdVar4 - (int)local_34) >> 3;
    if (local_38 == (double *)0x0) {
LAB_00b6c290:
      if (param_2 <= param_4) {
        pdVar7 = param_3 + param_2;
        uVar11 = 0;
        pdVar5 = local_34;
        uVar9 = uVar24;
LAB_00b6c2a8:
        iVar13 = uVar9 - 3;
        if (uVar9 < 3) {
          iVar13 = 0;
        }
LAB_00b6c2e4:
        if (local_34 + iVar13 <= pdVar5) goto LAB_00b6c4c4;
        dVar30 = *pdVar5;
        if (NAN(dVar30)) {
LAB_00b6c34c:
          uVar15 = 0;
          pdVar8 = pdVar7 + -1;
        }
        else {
          dVar31 = *pdVar4;
          if (!NAN(dVar31)) {
            if (dVar31 < dVar30) {
              if (dVar31 <= dVar30) goto LAB_00b6c34c;
              goto LAB_00b6cdc0;
            }
            if (dVar30 < dVar31) {
              uVar15 = 0xffffffff;
              goto LAB_00b6c340;
            }
            goto LAB_00b6c34c;
          }
          uVar15 = 0xff;
LAB_00b6c340:
          pdVar8 = param_3;
        }
        pdVar8[uVar11] = dVar30;
        dVar30 = pdVar5[1];
        if (NAN(dVar30)) {
LAB_00b6c3c0:
          uVar20 = 0;
          pdVar8 = pdVar7 + -2;
        }
        else {
          dVar31 = *pdVar4;
          if (!NAN(dVar31)) {
            if (dVar31 < dVar30) {
              if (dVar31 <= dVar30) goto LAB_00b6c3c0;
              goto LAB_00b6cdc0;
            }
            if (dVar30 < dVar31) {
              uVar20 = 0xffffffff;
              goto LAB_00b6c3ac;
            }
            goto LAB_00b6c3c0;
          }
          uVar20 = 0xff;
LAB_00b6c3ac:
          pdVar8 = param_3;
        }
        iVar19 = uVar11 + ((uVar15 & 0xff) >> 7);
        pdVar8[iVar19] = dVar30;
        dVar30 = pdVar5[2];
        if (NAN(dVar30)) {
LAB_00b6c43c:
          uVar11 = 0;
          pdVar8 = pdVar7 + -3;
        }
        else {
          dVar31 = *pdVar4;
          if (!NAN(dVar31)) {
            if (dVar31 < dVar30) {
              if (dVar31 <= dVar30) goto LAB_00b6c43c;
              goto LAB_00b6cdc0;
            }
            if (dVar30 < dVar31) {
              uVar11 = 0xffffffff;
              goto LAB_00b6c428;
            }
            goto LAB_00b6c43c;
          }
          uVar11 = 0xff;
LAB_00b6c428:
          pdVar8 = param_3;
        }
        iVar19 = iVar19 + ((uVar20 & 0xff) >> 7);
        pdVar8[iVar19] = dVar30;
        dVar30 = pdVar5[3];
        if (!NAN(dVar30)) {
          dVar31 = *pdVar4;
          if (NAN(dVar31)) {
            uVar15 = 0xff;
LAB_00b6c2c4:
            pdVar8 = param_3;
            goto LAB_00b6c2c8;
          }
          if (dVar30 <= dVar31) {
            if (dVar30 < dVar31) {
              uVar15 = 0xffffffff;
              goto LAB_00b6c2c4;
            }
            goto LAB_00b6c4ac;
          }
          if (dVar30 < dVar31) goto LAB_00b6cdc0;
        }
LAB_00b6c4ac:
        uVar15 = 0;
        pdVar8 = pdVar7 + -4;
LAB_00b6c2c8:
        pdVar7 = pdVar7 + -4;
        pdVar5 = pdVar5 + 4;
        iVar19 = iVar19 + ((uVar11 & 0xff) >> 7);
        pdVar8[iVar19] = dVar30;
        uVar11 = iVar19 + ((uVar15 & 0xff) >> 7);
        goto LAB_00b6c2e4;
      }
      goto LAB_00b6d298;
    }
    dVar30 = *local_38;
    if (!NAN(dVar30)) {
      if (NAN(local_30)) goto LAB_00b6c290;
      if (dVar30 <= local_30) {
        if (dVar30 < local_30) goto LAB_00b6c290;
        goto LAB_00b6c628;
      }
      if (dVar30 < local_30) goto LAB_00b6cdc0;
    }
    goto LAB_00b6c628;
  }
LAB_00b6c074:
  uVar24 = param_2 >> 1;
  if (uVar24 == 0) {
    return;
  }
  pdVar5 = param_3 + param_2;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar18 = *(undefined4 *)((int)local_34 + 4);
      *(undefined4 *)param_3 = *(undefined4 *)local_34;
      *(undefined4 *)((int)param_3 + 4) = uVar18;
      *(undefined4 *)(param_3 + uVar24) = *(undefined4 *)(local_34 + uVar24);
      *(undefined4 *)((int)(param_3 + uVar24) + 4) = *(undefined4 *)((int)(local_34 + uVar24) + 4);
      uVar9 = 1;
      if (uVar24 < 2) goto LAB_00b6cf40;
    }
    else {
      dVar30 = *local_34;
      dVar31 = local_34[1];
      if (NAN(dVar31)) {
        uVar9 = (uint)!NAN(dVar30);
      }
      else if (NAN(dVar30)) {
        uVar9 = 0xff;
      }
      else if (dVar31 <= dVar30) {
        uVar9 = 0;
        if (dVar31 < dVar30) {
          uVar9 = 0xffffffff;
        }
      }
      else {
        uVar9 = 1;
        if (dVar31 < dVar30) goto LAB_00b6cdc0;
      }
      pdVar4 = local_34 + 2;
      dVar30 = *pdVar4;
      dVar31 = local_34[3];
      if (NAN(dVar31)) {
LAB_00b6ca4c:
        iVar13 = (int)(uVar9 << 0x18) >> 0x1f;
        pdVar7 = local_34 + -iVar13;
        pdVar8 = local_34 + (-iVar13 ^ 1);
        iVar13 = 3;
      }
      else if (NAN(dVar30)) {
        iVar13 = (int)(uVar9 << 0x18) >> 0x1f;
        pdVar7 = local_34 + -iVar13;
        pdVar8 = local_34 + (-iVar13 ^ 1);
LAB_00b6ca84:
        iVar13 = 2;
        pdVar4 = local_34 + 3;
        dVar30 = dVar31;
      }
      else {
        if (dVar30 < dVar31) {
          if (dVar31 < dVar30) goto LAB_00b6cdc0;
          goto LAB_00b6ca4c;
        }
        iVar13 = (int)(uVar9 << 0x18) >> 0x1f;
        pdVar7 = local_34 + -iVar13;
        pdVar8 = local_34 + (-iVar13 ^ 1);
        iVar13 = 3;
        if (dVar31 < dVar30) goto LAB_00b6ca84;
      }
      pdVar6 = local_34 + iVar13;
      if (NAN(dVar30)) {
        bVar28 = false;
      }
      else if (NAN(*pdVar7)) {
        bVar28 = true;
      }
      else {
        bVar28 = false;
        if (dVar30 < *pdVar7) {
          bVar28 = true;
        }
      }
      dVar30 = *pdVar6;
      pdVar12 = pdVar7;
      if (NAN(dVar30)) {
LAB_00b6caf8:
        if (bVar28) {
          pdVar12 = pdVar4;
        }
LAB_00b6cb30:
        if (bVar28) {
          pdVar4 = pdVar8;
        }
        else {
          pdVar7 = pdVar8;
        }
        dVar30 = *pdVar4;
        pdVar8 = pdVar6;
      }
      else {
        dVar31 = *pdVar8;
        if (!NAN(dVar31)) {
          if (dVar31 < dVar30) {
            if (dVar30 < dVar31) goto LAB_00b6cdc0;
            goto LAB_00b6caf8;
          }
          if (bVar28) {
            pdVar12 = pdVar4;
          }
          if (dVar30 < dVar31) goto LAB_00b6cb20;
          goto LAB_00b6cb30;
        }
        if (bVar28) {
          pdVar12 = pdVar4;
        }
LAB_00b6cb20:
        if (!bVar28) {
          pdVar7 = pdVar4;
        }
        pdVar4 = pdVar6;
      }
      pdVar6 = pdVar4;
      if (!NAN(dVar30)) {
        dVar31 = *pdVar7;
        if (!NAN(dVar31)) {
          if (dVar31 < dVar30) {
            if (dVar30 < dVar31) goto LAB_00b6cdc0;
          }
          else if (dVar30 < dVar31) goto LAB_00b6cb8c;
        }
        else {
LAB_00b6cb8c:
          pdVar6 = pdVar7;
          pdVar7 = pdVar4;
        }
      }
      uVar26 = *(undefined4 *)((int)pdVar6 + 4);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)pdVar6;
      uVar21 = *(undefined4 *)pdVar12;
      *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)((int)pdVar12 + 4);
      pdVar4 = local_34 + uVar24;
      uVar17 = *(undefined4 *)pdVar8;
      uVar16 = *(undefined4 *)((int)pdVar8 + 4);
      dVar30 = *pdVar4;
      dVar31 = pdVar4[1];
      uVar25 = *(undefined4 *)pdVar7;
      uVar18 = *(undefined4 *)((int)pdVar7 + 4);
      *(undefined4 *)param_3 = uVar21;
      *(undefined4 *)(param_3 + 1) = uVar25;
      *(undefined4 *)((int)param_3 + 0xc) = uVar18;
      *(undefined4 *)((int)param_3 + 0x14) = uVar26;
      *(undefined4 *)(param_3 + 3) = uVar17;
      *(undefined4 *)((int)param_3 + 0x1c) = uVar16;
      if (NAN(dVar31)) {
        uVar9 = (uint)!NAN(dVar30);
      }
      else if (NAN(dVar30)) {
        uVar9 = 0xff;
      }
      else if (dVar31 <= dVar30) {
        uVar9 = 0;
        if (dVar31 < dVar30) {
          uVar9 = 0xffffffff;
        }
      }
      else {
        uVar9 = 1;
        if (dVar31 < dVar30) goto LAB_00b6cdc0;
      }
      dVar31 = pdVar4[3];
      dVar30 = pdVar4[2];
      pdVar7 = pdVar4 + 2;
      if (NAN(dVar31)) {
LAB_00b6cc90:
        iVar13 = (int)(uVar9 << 0x18) >> 0x1f;
        pdVar8 = pdVar4 + -iVar13;
        pdVar6 = pdVar4 + (-iVar13 ^ 1);
        iVar13 = 3;
      }
      else if (NAN(dVar30)) {
        iVar13 = (int)(uVar9 << 0x18) >> 0x1f;
        pdVar8 = pdVar4 + -iVar13;
        pdVar6 = pdVar4 + (-iVar13 ^ 1);
LAB_00b6ccc8:
        iVar13 = 2;
        pdVar7 = pdVar4 + 3;
        dVar30 = dVar31;
      }
      else {
        if (dVar30 < dVar31) {
          if (dVar31 < dVar30) goto LAB_00b6cdc0;
          goto LAB_00b6cc90;
        }
        iVar13 = (int)(uVar9 << 0x18) >> 0x1f;
        pdVar8 = pdVar4 + -iVar13;
        pdVar6 = pdVar4 + (-iVar13 ^ 1);
        iVar13 = 3;
        if (dVar31 < dVar30) goto LAB_00b6ccc8;
      }
      pdVar4 = pdVar4 + iVar13;
      if (NAN(dVar30)) {
        bVar28 = false;
      }
      else if (NAN(*pdVar8)) {
        bVar28 = true;
      }
      else {
        bVar28 = false;
        if (dVar30 < *pdVar8) {
          bVar28 = true;
        }
      }
      dVar30 = *pdVar4;
      pdVar12 = pdVar8;
      if (NAN(dVar30)) {
LAB_00b6cd3c:
        if (bVar28) {
          pdVar12 = pdVar7;
        }
LAB_00b6cd74:
        if (bVar28) {
          pdVar7 = pdVar6;
        }
        else {
          pdVar8 = pdVar6;
        }
        dVar30 = *pdVar7;
        pdVar6 = pdVar4;
      }
      else {
        dVar31 = *pdVar6;
        if (!NAN(dVar31)) {
          if (dVar31 < dVar30) {
            if (dVar30 < dVar31) goto LAB_00b6cdc0;
            goto LAB_00b6cd3c;
          }
          if (bVar28) {
            pdVar12 = pdVar7;
          }
          if (dVar30 < dVar31) goto LAB_00b6cd64;
          goto LAB_00b6cd74;
        }
        if (bVar28) {
          pdVar12 = pdVar7;
        }
LAB_00b6cd64:
        if (!bVar28) {
          pdVar8 = pdVar7;
        }
        pdVar7 = pdVar4;
      }
      pdVar4 = pdVar7;
      if (!NAN(dVar30)) {
        dVar31 = *pdVar8;
        if (!NAN(dVar31)) {
          if (dVar31 < dVar30) {
            if (dVar30 < dVar31) {
LAB_00b6cdc0:
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
            }
          }
          else if (dVar30 < dVar31) goto LAB_00b6cde4;
        }
        else {
LAB_00b6cde4:
          pdVar4 = pdVar8;
          pdVar8 = pdVar7;
        }
      }
      pdVar7 = param_3 + uVar24;
      uVar16 = *(undefined4 *)pdVar6;
      uVar21 = *(undefined4 *)((int)pdVar6 + 4);
      uVar18 = *(undefined4 *)pdVar4;
      uVar27 = *(undefined4 *)((int)pdVar4 + 4);
      uVar25 = *(undefined4 *)pdVar12;
      uVar26 = *(undefined4 *)pdVar8;
      uVar17 = *(undefined4 *)((int)pdVar12 + 4);
      *(undefined4 *)((int)pdVar7 + 0xc) = *(undefined4 *)((int)pdVar8 + 4);
      uVar9 = 4;
      *(undefined4 *)(pdVar7 + 1) = uVar26;
      *(undefined4 *)((int)pdVar7 + 4) = uVar17;
      *(undefined4 *)pdVar7 = uVar25;
      *(undefined4 *)((int)pdVar7 + 0x14) = uVar27;
      *(undefined4 *)(pdVar7 + 2) = uVar18;
      *(undefined4 *)((int)pdVar7 + 0x1c) = uVar21;
      *(undefined4 *)(pdVar7 + 3) = uVar16;
      if (uVar24 < 5) goto LAB_00b6cf40;
    }
  }
  else {
    FUN_00b6d3b0(local_34,param_3,pdVar5);
    FUN_00b6d3b0(local_34 + uVar24,param_3 + uVar24,pdVar5 + 8);
    uVar9 = 8;
    if (uVar24 < 9) goto LAB_00b6cf40;
  }
  iVar13 = uVar9 * -8 + 8;
  uVar11 = uVar9;
  do {
    pdVar4 = local_34 + uVar11;
    uVar18 = *(undefined4 *)pdVar4;
    uVar17 = *(undefined4 *)((int)pdVar4 + 4);
    dVar31 = *pdVar4;
    dVar30 = *pdVar4;
    pdVar4 = param_3 + uVar11;
    *(undefined4 *)pdVar4 = uVar18;
    *(undefined4 *)((int)pdVar4 + 4) = uVar17;
    if (!NAN(dVar30)) {
      dVar29 = pdVar4[-1];
      if (NAN(dVar29)) {
LAB_00b6cebc:
        *pdVar4 = dVar29;
        for (iVar19 = iVar13; local_30 = dVar31, iVar19 != 0; iVar19 = iVar19 + 8) {
          pdVar7 = pdVar4 + -1;
          if (NAN(dVar31)) goto LAB_00b6cf38;
          dVar30 = pdVar4[-2];
          if (!NAN(dVar30)) {
            if (dVar30 < dVar31) {
              if (dVar31 < dVar30) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
              }
              goto LAB_00b6cf38;
            }
            if (dVar30 <= dVar31) goto LAB_00b6cf38;
          }
          *pdVar7 = dVar30;
          pdVar4 = pdVar7;
        }
        pdVar7 = param_3;
LAB_00b6cf38:
        *(undefined4 *)pdVar7 = uVar18;
        *(undefined4 *)((int)pdVar7 + 4) = uVar17;
      }
      else if (dVar29 < dVar30) {
        if (dVar30 < dVar29) goto LAB_00b6cdc0;
      }
      else if (dVar30 < dVar29) goto LAB_00b6cebc;
    }
    uVar11 = uVar11 + 1;
    iVar13 = iVar13 + -8;
  } while (uVar11 != uVar24);
LAB_00b6cf40:
  pdVar4 = param_3 + uVar24;
  if (uVar9 < param_2 - uVar24) {
    iVar13 = uVar9 * -8 + 8;
    do {
      pdVar8 = local_34 + uVar24 + uVar9;
      uVar18 = *(undefined4 *)((int)pdVar8 + 4);
      dVar31 = *pdVar8;
      dVar30 = *pdVar8;
      pdVar7 = pdVar4 + uVar9;
      *(undefined4 *)pdVar7 = *(undefined4 *)pdVar8;
      *(undefined4 *)((int)pdVar7 + 4) = uVar18;
      if (!NAN(dVar30)) {
        dVar29 = pdVar7[-1];
        if (NAN(dVar29)) {
LAB_00b6cfcc:
          *pdVar7 = dVar29;
          local_30._0_4_ = SUB84(dVar31,0);
          local_30._4_4_ = (undefined4)((ulonglong)dVar31 >> 0x20);
          for (iVar19 = iVar13; local_30 = dVar31, iVar19 != 0; iVar19 = iVar19 + 8) {
            pdVar8 = pdVar7 + -1;
            if (NAN(dVar31)) goto LAB_00b6d05c;
            dVar30 = pdVar7[-2];
            if (!NAN(dVar30)) {
              if (dVar30 < dVar31) {
                if (dVar31 < dVar30) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
                }
                goto LAB_00b6d05c;
              }
              if (dVar30 <= dVar31) goto LAB_00b6d05c;
            }
            *pdVar8 = dVar30;
            pdVar7 = pdVar8;
          }
          pdVar8 = pdVar4;
LAB_00b6d05c:
          *(undefined4 *)pdVar8 = (undefined4)local_30;
          *(undefined4 *)((int)pdVar8 + 4) = local_30._4_4_;
        }
        else if (dVar29 < dVar30) {
          if (dVar30 < dVar29) goto LAB_00b6cdc0;
        }
        else if (dVar30 < dVar29) goto LAB_00b6cfcc;
      }
      uVar9 = uVar9 + 1;
      iVar13 = iVar13 + -8;
    } while (uVar9 != param_2 - uVar24);
  }
  pdVar7 = pdVar4 + -1;
  iVar13 = 0;
  pdVar5 = pdVar5 + -1;
  do {
    dVar31 = *pdVar4;
    dVar30 = *param_3;
    if (NAN(dVar31)) {
      bVar14 = !NAN(dVar30);
    }
    else if (NAN(dVar30)) {
      bVar14 = 0xff;
    }
    else if (dVar31 <= dVar30) {
      bVar14 = 0;
      if (dVar31 < dVar30) {
        bVar14 = 0xff;
      }
    }
    else {
      bVar14 = 1;
      if (dVar31 < dVar30) goto LAB_00b6d224;
    }
    pdVar8 = pdVar4;
    if ((uint)(int)(char)bVar14 < 0x80000000) {
      pdVar8 = param_3;
    }
    uVar18 = *(undefined4 *)((int)pdVar8 + 4);
    *(undefined4 *)((int)local_34 + iVar13) = *(undefined4 *)pdVar8;
    dVar31 = *pdVar5;
    dVar30 = *pdVar7;
    ((undefined4 *)((int)local_34 + iVar13))[1] = uVar18;
    if (NAN(dVar31)) {
      cVar3 = !NAN(dVar30);
    }
    else if (NAN(dVar30)) {
      cVar3 = -1;
    }
    else if (dVar31 <= dVar30) {
      cVar3 = '\0';
      if (dVar31 < dVar30) {
        cVar3 = -1;
      }
    }
    else {
      cVar3 = '\x01';
      if (dVar31 < dVar30) {
LAB_00b6d224:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
      }
    }
    pdVar8 = pdVar7;
    if ((uint)(int)cVar3 < 0x80000000) {
      pdVar8 = pdVar5;
    }
    uVar24 = uVar24 - 1;
    uVar18 = *(undefined4 *)((int)pdVar8 + 4);
    puVar10 = (undefined4 *)((int)local_34 + ((param_2 * 8 + -8) - iVar13));
    *puVar10 = *(undefined4 *)pdVar8;
    iVar13 = iVar13 + 8;
    puVar10[1] = uVar18;
    uVar9 = (int)cVar3 >> 7;
    pdVar7 = pdVar7 + uVar9;
    pdVar5 = pdVar5 + ~uVar9;
    iVar19 = (int)((uint)bVar14 << 0x18) >> 0x1f;
    pdVar4 = pdVar4 + -iVar19;
    pdVar8 = (double *)(-iVar19 ^ 1);
    param_3 = param_3 + (int)pdVar8;
    if (uVar24 == 0) {
      pdVar7 = pdVar7 + 1;
      if ((param_2 & 1) != 0) {
        bVar28 = param_3 < pdVar7;
        pdVar8 = pdVar4;
        if (bVar28) {
          pdVar8 = param_3;
        }
        uVar18 = *(undefined4 *)((int)pdVar8 + 4);
        *(undefined4 *)((int)local_34 + iVar13) = *(undefined4 *)pdVar8;
        pdVar8 = (double *)(uint)bVar28;
        ((undefined4 *)((int)local_34 + iVar13))[1] = uVar18;
        param_3 = param_3 + (int)pdVar8;
        pdVar4 = pdVar4 + !bVar28;
      }
      if (param_3 == pdVar7) {
        pdVar8 = pdVar5 + 1;
      }
      if (param_3 == pdVar7 && pdVar4 == pdVar8) {
        return;
      }
      FUN_00fb7254();
LAB_00b6d298:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb6d298);
      (*pcVar1)();
    }
  } while( true );
LAB_00b6c4c4:
LAB_00b6c4f0:
  if (local_34 + uVar9 <= pdVar5) goto LAB_00b6c564;
  dVar30 = *pdVar5;
  if (!NAN(dVar30)) {
    dVar31 = *pdVar4;
    if (NAN(dVar31)) {
      uVar15 = 0xff;
LAB_00b6c4d8:
      pdVar8 = param_3;
      goto LAB_00b6c4dc;
    }
    if (dVar30 <= dVar31) {
      if (dVar30 < dVar31) {
        uVar15 = 0xffffffff;
        goto LAB_00b6c4d8;
      }
      goto LAB_00b6c554;
    }
    if (dVar30 < dVar31) goto LAB_00b6cdc0;
  }
LAB_00b6c554:
  uVar15 = 0;
  pdVar8 = pdVar7 + -1;
LAB_00b6c4dc:
  pdVar7 = pdVar7 + -1;
  pdVar5 = pdVar5 + 1;
  pdVar8[uVar11] = dVar30;
  uVar11 = uVar11 + ((uVar15 & 0xff) >> 7);
  goto LAB_00b6c4f0;
LAB_00b6c564:
  if (uVar9 == param_2) goto LAB_00b6c58c;
  pdVar7 = pdVar7 + -1;
  uVar18 = *(undefined4 *)pdVar5;
  uVar17 = *(undefined4 *)((int)pdVar5 + 4);
  pdVar5 = pdVar5 + 1;
  *(undefined4 *)(pdVar7 + uVar11) = uVar18;
  *(undefined4 *)((int)(pdVar7 + uVar11) + 4) = uVar17;
  uVar9 = param_2;
  goto LAB_00b6c2a8;
LAB_00b6c58c:
  FUN_016dd1aa(local_34,param_3,uVar11 << 3);
  iVar13 = param_2 - uVar11;
  if (iVar13 != 0) {
    pdVar5 = param_3 + (param_2 - 1);
    pdVar7 = local_34 + uVar11;
    iVar19 = iVar13;
    do {
      uVar18 = *(undefined4 *)pdVar5;
      uVar17 = *(undefined4 *)((int)pdVar5 + 4);
      pdVar5 = pdVar5 + -1;
      *(undefined4 *)pdVar7 = uVar18;
      *(undefined4 *)((int)pdVar7 + 4) = uVar17;
      pdVar7 = pdVar7 + 1;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  if (uVar11 == 0) {
LAB_00b6c628:
    if (param_2 <= param_4) {
      pdVar7 = param_3 + param_2;
      uVar9 = 0;
      pdVar5 = local_34;
LAB_00b6c640:
      iVar13 = uVar24 - 3;
      if (uVar24 < 3) {
        iVar13 = 0;
      }
LAB_00b6c674:
      if (local_34 + iVar13 <= pdVar5) goto LAB_00b6c820;
      dVar31 = *pdVar4;
      iVar19 = 1;
      dVar30 = *pdVar5;
      iVar22 = 1;
      pdVar8 = param_3;
      if (!NAN(dVar31)) {
        if (NAN(dVar30)) {
LAB_00b6c6dc:
          pdVar8 = pdVar7 + -1;
          iVar22 = 0;
        }
        else if (dVar31 <= dVar30) {
          if (dVar31 < dVar30) goto LAB_00b6c6dc;
        }
        else if (dVar31 < dVar30) goto LAB_00b6cdc0;
      }
      dVar31 = *pdVar4;
      pdVar8[uVar9] = dVar30;
      dVar30 = pdVar5[1];
      pdVar8 = param_3;
      if (!NAN(dVar31)) {
        if (!NAN(dVar30)) {
          if (dVar30 < dVar31) {
            if (dVar31 < dVar30) goto LAB_00b6cdc0;
          }
          else if (dVar31 < dVar30) goto LAB_00b6c740;
        }
        else {
LAB_00b6c740:
          pdVar8 = pdVar7 + -2;
          iVar19 = 0;
        }
      }
      dVar31 = *pdVar4;
      iVar23 = 1;
      pdVar8[uVar9 + iVar22] = dVar30;
      dVar30 = pdVar5[2];
      pdVar8 = param_3;
      if (!NAN(dVar31)) {
        if (!NAN(dVar30)) {
          if (dVar30 < dVar31) {
            if (dVar31 < dVar30) goto LAB_00b6cdc0;
          }
          else if (dVar31 < dVar30) goto LAB_00b6c7ac;
        }
        else {
LAB_00b6c7ac:
          pdVar8 = pdVar7 + -3;
          iVar23 = 0;
        }
      }
      dVar31 = *pdVar4;
      iVar19 = uVar9 + iVar22 + iVar19;
      pdVar8[iVar19] = dVar30;
      dVar30 = pdVar5[3];
      if (!NAN(dVar31)) {
        if (NAN(dVar30)) {
LAB_00b6c65c:
          pdVar8 = pdVar7 + -4;
          iVar22 = 0;
          goto LAB_00b6c660;
        }
        if (dVar31 <= dVar30) {
          if (dVar31 < dVar30) goto LAB_00b6c65c;
          goto LAB_00b6c814;
        }
        if (dVar31 < dVar30) goto LAB_00b6cdc0;
      }
LAB_00b6c814:
      iVar22 = 1;
      pdVar8 = param_3;
LAB_00b6c660:
      pdVar7 = pdVar7 + -4;
      iVar19 = iVar19 + iVar23;
      pdVar5 = pdVar5 + 4;
      uVar9 = iVar19 + iVar22;
      pdVar8[iVar19] = dVar30;
      goto LAB_00b6c674;
    }
    goto LAB_00b6d298;
  }
  if (param_2 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
  }
  FUN_00b6c054(local_34 + uVar11,iVar13,param_3,param_4,param_5,&local_30);
  param_2 = uVar11;
  goto joined_r0x00b6c614;
LAB_00b6c820:
LAB_00b6c848:
  if (local_34 + uVar24 <= pdVar5) goto LAB_00b6c8b0;
  dVar31 = *pdVar4;
  dVar30 = *pdVar5;
  if (!NAN(dVar31)) {
    if (NAN(dVar30)) {
LAB_00b6c834:
      pdVar8 = pdVar7 + -1;
      iVar13 = 0;
      goto LAB_00b6c838;
    }
    if (dVar31 <= dVar30) {
      if (dVar31 < dVar30) goto LAB_00b6c834;
      goto LAB_00b6c8a4;
    }
    if (dVar31 < dVar30) goto LAB_00b6cdc0;
  }
LAB_00b6c8a4:
  iVar13 = 1;
  pdVar8 = param_3;
LAB_00b6c838:
  pdVar7 = pdVar7 + -1;
  pdVar8 = pdVar8 + uVar9;
  uVar9 = uVar9 + iVar13;
  pdVar5 = pdVar5 + 1;
  *pdVar8 = dVar30;
  goto LAB_00b6c848;
LAB_00b6c8b0:
  if (uVar24 == param_2) goto LAB_00b6c8dc;
  uVar18 = *(undefined4 *)pdVar5;
  uVar17 = *(undefined4 *)((int)pdVar5 + 4);
  pdVar5 = pdVar5 + 1;
  pdVar8 = param_3 + uVar9;
  *(undefined4 *)pdVar8 = uVar18;
  uVar9 = uVar9 + 1;
  pdVar7 = pdVar7 + -1;
  *(undefined4 *)((int)pdVar8 + 4) = uVar17;
  uVar24 = param_2;
  goto LAB_00b6c640;
LAB_00b6c8dc:
  FUN_016dd1aa(local_34,param_3,uVar9 << 3);
  uVar24 = param_2 - uVar9;
  if (uVar24 == 0) {
    return;
  }
  local_34 = local_34 + uVar9;
  pdVar4 = param_3 + (param_2 - 1);
  uVar11 = uVar24;
  pdVar5 = local_34;
  do {
    uVar18 = *(undefined4 *)pdVar4;
    uVar17 = *(undefined4 *)((int)pdVar4 + 4);
    pdVar4 = pdVar4 + -1;
    *(undefined4 *)pdVar5 = uVar18;
    *(undefined4 *)((int)pdVar5 + 4) = uVar17;
    pdVar5 = pdVar5 + 1;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (param_2 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar9,param_2,param_2,&DAT_018af348);
  }
  local_38 = (double *)0x0;
  param_2 = uVar24;
joined_r0x00b6c614:
  if (param_2 < 0x21) goto LAB_00b6c074;
  goto LAB_00b6c0e0;
}

