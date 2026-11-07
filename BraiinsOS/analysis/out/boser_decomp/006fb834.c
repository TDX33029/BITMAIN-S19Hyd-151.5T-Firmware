// FUN_006fb834 @ 006fb834 size=2072 calls_out=11 calls_in=1
// strings: position out of bounds | position out of bounds | internal error: entered unreachable code

void FUN_006fb834(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  byte *pbVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  byte *pbVar23;
  byte *local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar16 = param_3[2];
  pbVar13 = (byte *)*param_3;
  uVar20 = param_3[1];
  if (uVar16 != 0) {
    if (uVar16 < uVar20) {
      if (-0x41 < (char)pbVar13[uVar16]) goto LAB_006fb878;
    }
    else if (uVar16 == uVar20) goto LAB_006fb878;
    goto LAB_006fc040;
  }
LAB_006fb878:
  pbVar18 = pbVar13 + uVar16;
  if (uVar16 == uVar20) {
LAB_006fb948:
    if (uVar16 != 0) {
      if (uVar16 < uVar20) {
        if (-0x41 < (char)*pbVar18) goto LAB_006fb964;
      }
      else {
        puVar8 = &DAT_00110000;
        if (uVar16 == uVar20) goto LAB_006fb9c8;
      }
LAB_006fc040:
      puVar5 = &DAT_01c06350;
      uVar2 = uVar20;
      uVar6 = uVar16;
LAB_006fc04c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(pbVar13,uVar20,uVar6,uVar2,puVar5);
    }
LAB_006fb964:
    puVar8 = &DAT_00110000;
    if ((uVar16 != uVar20) &&
       (puVar8 = (undefined1 *)(uint)*pbVar18, 0x7fffffff < (uint)(int)(char)*pbVar18)) {
      if (puVar8 < (undefined1 *)0xe0) {
        puVar8 = (undefined1 *)(pbVar18[1] & 0x3f | ((uint)puVar8 & 0x1f) << 6);
      }
      else {
        uVar2 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
        if (puVar8 < (undefined1 *)0xf0) {
          puVar8 = (undefined1 *)(uVar2 | ((uint)puVar8 & 0x1f) << 0xc);
        }
        else {
          puVar8 = (undefined1 *)(pbVar18[3] & 0x3f | uVar2 << 6 | ((uint)puVar8 & 7) << 0x12);
        }
      }
    }
LAB_006fb9c8:
    if (uVar20 < uVar16) {
LAB_006fbfbc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("position out of bounds",0x2d,&DAT_01c06370);
    }
    uVar6 = FUN_01655dd0(param_3);
    uVar2 = FUN_01655c7c(param_3);
    puVar5 = &DAT_01c06360;
    if (uVar2 < uVar6) goto LAB_006fc04c;
    if (uVar6 != 0) {
      if (uVar6 < uVar20) {
        if ((char)pbVar13[uVar6] < -0x40) goto LAB_006fc04c;
      }
      else if (uVar6 != uVar20) goto LAB_006fc04c;
    }
    if (uVar2 != 0) {
      if (uVar2 < uVar20) {
        if ((char)pbVar13[uVar2] < -0x40) goto LAB_006fc04c;
      }
      else if (uVar2 != uVar20) goto LAB_006fc04c;
    }
    iVar7 = uVar2 - uVar6;
    local_44 = pbVar13 + uVar6;
    if (puVar8 == (undefined1 *)0xd) goto LAB_006fbc68;
    iVar22 = 1;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    pbVar14 = (byte *)0x0;
    if (iVar7 != 0) {
      pbVar9 = local_44;
      pbVar23 = (byte *)0x0;
LAB_006fbab0:
      pbVar3 = pbVar23;
      pbVar14 = pbVar9;
      do {
        pbVar9 = pbVar14 + 1;
        uVar6 = (uint)*pbVar14;
        if (0x7fffffff < (uint)(int)(char)*pbVar14) {
          if (uVar6 < 0xe0) {
            uVar6 = pbVar14[1] & 0x3f | (uVar6 & 0x1f) << 6;
            pbVar9 = pbVar14 + 2;
          }
          else {
            uVar10 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
            if (uVar6 < 0xf0) {
              uVar6 = uVar10 | (uVar6 & 0x1f) << 0xc;
              pbVar9 = pbVar14 + 3;
            }
            else {
              pbVar9 = pbVar14 + 4;
              uVar6 = pbVar14[3] & 0x3f | uVar10 << 6 | (uVar6 & 7) << 0x12;
            }
          }
        }
        pbVar14 = pbVar9 + ((int)pbVar3 - (int)pbVar14);
        iVar4 = 0;
        while (iVar4 != 8) {
          puVar1 = (uint *)("\r" + iVar4);
          iVar4 = iVar4 + 4;
          if (*puVar1 == uVar6) {
            uVar6 = (int)pbVar3 - (int)pbVar23;
            if ((uint)(local_30 - local_28) < uVar6) {
              FUN_006520b4(&local_30,local_28,uVar6,1,1);
              iVar22 = local_2c;
            }
            iVar4 = local_28;
            FUN_01bed4e2(iVar22 + local_28,local_44 + (int)pbVar23,uVar6);
            local_28 = iVar4 + uVar6;
            pbVar23 = pbVar14;
            if (pbVar9 != pbVar13 + uVar2) goto LAB_006fbab0;
            goto LAB_006fbbd0;
          }
        }
        pbVar3 = pbVar14;
        pbVar14 = pbVar9;
      } while (pbVar9 != pbVar13 + uVar2);
      pbVar14 = pbVar23;
    }
LAB_006fbbd0:
    uVar2 = iVar7 - (int)pbVar14;
    if ((uint)(local_30 - local_28) < uVar2) {
      FUN_006520b4(&local_30,local_28,uVar2,1,1);
      iVar22 = local_2c;
    }
    else {
    }
    iVar7 = local_28;
    FUN_01bed4e2(iVar22 + local_28,local_44 + (int)pbVar14,uVar2);
    iStack_38 = iVar7 + uVar2;
    local_40 = local_30;
    local_3c = local_2c;
    local_28 = iStack_38;
  }
  else {
    uVar2 = (uint)*pbVar18;
    if (0x7fffffff < (uint)(int)(char)*pbVar18) {
      if (uVar2 < 0xe0) {
        uVar2 = pbVar18[1] & 0x3f | (uVar2 & 0x1f) << 6;
      }
      else {
        uVar6 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
        if (uVar2 < 0xf0) {
          uVar2 = uVar6 | (uVar2 & 0x1f) << 0xc;
        }
        else {
          uVar2 = pbVar18[3] & 0x3f | uVar6 << 6 | (uVar2 & 7) << 0x12;
        }
      }
    }
    if (uVar2 != 10) goto LAB_006fb948;
    if (uVar20 < uVar16) goto LAB_006fbfbc;
    uVar6 = FUN_01655dd0(param_3);
    uVar2 = FUN_01655c7c(param_3);
    puVar5 = &DAT_01c06360;
    if (uVar2 < uVar6) goto LAB_006fc04c;
    if (uVar6 != 0) {
      if (uVar6 < uVar20) {
        if ((char)pbVar13[uVar6] < -0x40) goto LAB_006fc04c;
      }
      else if (uVar6 != uVar20) goto LAB_006fc04c;
    }
    if (uVar2 != 0) {
      if (uVar2 < uVar20) {
        if ((char)pbVar13[uVar2] < -0x40) goto LAB_006fc04c;
      }
      else if (uVar2 != uVar20) goto LAB_006fc04c;
    }
    local_44 = pbVar13 + uVar6;
    iVar7 = uVar2 - uVar6;
LAB_006fbc68:
    uVar21 = 0;
    if (iVar7 < 0) {
LAB_006fbc74:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar21,iVar7);
    }
    if (iVar7 == 0) {
      iVar4 = 1;
      iVar22 = 0;
    }
    else {
      uVar21 = 1;
      iVar4 = FUN_01298504(iVar7,1);
      iVar22 = iVar7;
      if (iVar4 == 0) goto LAB_006fbc74;
    }
    FUN_01bed4e2(iVar4,local_44);
    FUN_01655fc0(&local_30,iVar4,iVar7,0xd,&DAT_004c180d);
    iVar7 = local_2c;
    FUN_01655fc0(&local_40,local_2c,local_28,10,&DAT_004c1810);
    FUN_0134bd64(local_30,iVar7);
    FUN_0134bd64(iVar22,iVar4);
  }
  if (uVar20 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("position out of bounds",0x2d,&DAT_01c063a0);
  }
  if ((uVar16 == 0) || (uVar20 <= uVar16)) {
    if (uVar16 == 0) {
      iVar7 = 1;
      iVar22 = 1;
      goto LAB_006fbf58;
    }
  }
  else if ((char)*pbVar18 < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(pbVar13,uVar20,0,uVar16,&DAT_01c06380);
  }
  iVar22 = 1;
  iVar7 = 1;
  puVar8 = (undefined1 *)0x110001;
  uVar20 = uVar16;
  do {
    if (puVar8 == (undefined1 *)0x110001) {
      if (pbVar13 == pbVar18) goto LAB_006fc024;
      puVar8 = (undefined1 *)(uint)*pbVar13;
      pbVar14 = pbVar13 + 1;
      if (0x7fffffff < (uint)(int)(char)*pbVar13) {
        if (puVar8 < (undefined1 *)0xe0) {
          puVar8 = (undefined1 *)(pbVar13[1] & 0x3f | ((uint)puVar8 & 0x1f) << 6);
          pbVar14 = pbVar13 + 2;
        }
        else {
          uVar2 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (puVar8 < (undefined1 *)0xf0) {
            puVar8 = (undefined1 *)(uVar2 | ((uint)puVar8 & 0x1f) << 0xc);
            pbVar14 = pbVar13 + 3;
          }
          else {
            puVar8 = (undefined1 *)(pbVar13[3] & 0x3f | uVar2 << 6 | ((uint)puVar8 & 7) << 0x12);
            pbVar14 = pbVar13 + 4;
          }
        }
      }
    }
    else {
      pbVar14 = pbVar13;
    }
    pbVar13 = pbVar14;
    if (puVar8 == (undefined1 *)0xa) {
      iVar22 = iVar22 + 1;
      uVar20 = uVar20 - 1;
      iVar7 = 1;
LAB_006fbec8:
      puVar8 = (undefined1 *)0x110001;
    }
    else {
      if (puVar8 != (undefined1 *)0xd) {
        if (puVar8 == &DAT_00110000) {
LAB_006fc024:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06390);
        }
        iVar4 = -1;
        if ((undefined1 *)0x7f < puVar8) {
          iVar4 = -2;
        }
        if (((undefined1 *)0x7ff < puVar8) && (iVar4 = -4, puVar8 < (undefined1 *)0x10000)) {
          iVar4 = -3;
        }
        uVar20 = iVar4 + uVar20;
        iVar7 = iVar7 + 1;
        goto LAB_006fbec8;
      }
      puVar8 = &DAT_00110000;
      if (pbVar13 == pbVar18) {
        pbVar14 = pbVar18;
      }
      else {
        pbVar14 = pbVar13 + 1;
        puVar11 = (undefined1 *)(uint)*pbVar13;
        if (0x7fffffff < (uint)(int)(char)*pbVar13) {
          if (puVar11 < (undefined1 *)0xe0) {
            pbVar14 = pbVar13 + 2;
            puVar11 = (undefined1 *)(pbVar13[1] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
          }
          else {
            uVar2 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
            if (puVar11 < (undefined1 *)0xf0) {
              pbVar14 = pbVar13 + 3;
              puVar11 = (undefined1 *)(uVar2 | ((uint)puVar11 & 0x1f) << 0xc);
            }
            else {
              pbVar14 = pbVar13 + 4;
              puVar11 = (undefined1 *)(pbVar13[3] & 0x3f | uVar2 << 6 | ((uint)puVar11 & 7) << 0x12)
              ;
              if (puVar11 == &DAT_00110000) goto LAB_006fbf3c;
            }
          }
        }
        puVar8 = puVar11;
        if (puVar8 == (undefined1 *)0xa) {
          iVar22 = iVar22 + 1;
          iVar7 = 1;
          if (uVar20 != 1) {
            uVar20 = uVar20 - 2;
            pbVar13 = pbVar14;
            goto LAB_006fbec8;
          }
          break;
        }
      }
LAB_006fbf3c:
      iVar7 = iVar7 + 1;
      uVar20 = uVar20 - 1;
      pbVar13 = pbVar14;
    }
  } while (uVar20 != 0);
LAB_006fbf58:
  uVar21 = param_2[1];
  uVar12 = param_2[2];
  uVar15 = param_2[3];
  uVar17 = param_2[4];
  uVar19 = param_2[5];
  param_1[0xb] = *param_2;
  param_1[0xc] = uVar21;
  param_1[0xd] = uVar12;
  param_1[0xe] = uVar15;
  param_1[0xf] = uVar17;
  param_1[0x10] = uVar19;
  param_1[5] = iVar7;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = uVar16;
  param_1[0x11] = 0x80000000;
  param_1[4] = iVar22;
  param_1[8] = local_40;
  param_1[9] = local_3c;
  param_1[10] = iStack_38;
  param_1[0x17] = 0x80000000;
  param_1[0x14] = 0x80000000;
  return;
}

