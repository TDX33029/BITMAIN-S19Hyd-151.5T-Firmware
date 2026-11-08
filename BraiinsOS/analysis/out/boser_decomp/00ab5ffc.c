// FUN_00ab5ffc @ 00ab5ffc size=1820 calls_out=6 calls_in=2
// strings: const  | const 

void FUN_00ab5ffc(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  undefined *puVar9;
  uint extraout_r3;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined4 local_50;
  undefined4 *local_4c;
  uint local_48;
  uint local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  cVar3 = FUN_00a4ac84(param_2,param_3);
  local_30 = param_2 + param_3;
  local_28 = 1;
  local_2c = 0;
  local_44 = 0;
  iStack_40 = param_3;
  iStack_3c = param_2;
  local_38 = param_3;
  local_34 = param_2;
  FUN_01318760(&local_50,&local_44);
  if (local_48 < 3) {
    uVar4 = 2;
    puVar9 = &DAT_01c100e8;
    goto LAB_00ab6708;
  }
  uVar4 = local_4c[5];
  if (uVar4 == 0) {
    uVar16 = 0;
    uVar10 = extraout_r3;
  }
  else {
    pbVar8 = (byte *)local_4c[4];
    if (uVar4 == 1) {
      uVar10 = (uint)*pbVar8;
      uVar16 = 0;
      if ((uVar10 == 0x2b) || (uVar10 == 0x2d)) goto LAB_00ab613c;
    }
    else {
      uVar10 = (uint)*pbVar8;
    }
    if (uVar10 == 0x2b) {
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 - 1;
    }
    if (uVar4 < 9) {
      if (uVar4 == 0) {
LAB_00ab6138:
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        do {
          uVar10 = *pbVar8 - 0x30;
          if (9 < uVar10) goto LAB_00ab6138;
          pbVar8 = pbVar8 + 1;
          uVar4 = uVar4 - 1;
          uVar16 = uVar10 + uVar16 * 10;
        } while (uVar4 != 0);
      }
    }
    else {
      uVar12 = 0;
      uVar10 = 10;
      uVar16 = 0;
      do {
        if (uVar4 == 0) {
          uVar16 = uVar12;
          break;
        }
        uVar15 = (uint)((ulonglong)uVar12 * 10);
        if ((int)((ulonglong)uVar12 * 10 >> 0x20) != 0) goto LAB_00ab6138;
        uVar14 = *pbVar8 - 0x30;
        uVar12 = uVar14 + uVar15;
        if (9 < uVar14) break;
        uVar4 = uVar4 - 1;
        pbVar8 = pbVar8 + 1;
      } while (!CARRY4(uVar14,uVar15));
    }
  }
LAB_00ab613c:
  uVar4 = local_4c[3];
  if (uVar4 == 0) {
    uVar12 = 0;
  }
  else {
    pbVar8 = (byte *)local_4c[2];
    if (uVar4 == 1) {
      uVar10 = (uint)*pbVar8;
      uVar12 = 0;
      if ((uVar10 == 0x2b) || (uVar10 == 0x2d)) goto LAB_00ab6210;
    }
    else {
      uVar10 = (uint)*pbVar8;
    }
    if (uVar10 == 0x2b) {
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 - 1;
    }
    if (uVar4 < 9) {
      if (uVar4 == 0) {
LAB_00ab620c:
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          uVar10 = *pbVar8 - 0x30;
          if (9 < uVar10) goto LAB_00ab620c;
          pbVar8 = pbVar8 + 1;
          uVar4 = uVar4 - 1;
          uVar12 = uVar10 + uVar12 * 10;
        } while (uVar4 != 0);
      }
    }
    else {
      uVar15 = 0;
      uVar10 = 10;
      uVar12 = 0;
      do {
        if (uVar4 == 0) {
          uVar12 = uVar15;
          break;
        }
        uVar14 = (uint)((ulonglong)uVar15 * 10);
        if ((int)((ulonglong)uVar15 * 10 >> 0x20) != 0) goto LAB_00ab620c;
        uVar13 = *pbVar8 - 0x30;
        uVar15 = uVar13 + uVar14;
        if (9 < uVar13) break;
        uVar4 = uVar4 - 1;
        pbVar8 = pbVar8 + 1;
      } while (!CARRY4(uVar13,uVar14));
    }
  }
LAB_00ab6210:
  uVar4 = local_4c[1];
  if (uVar4 == 0) {
    uVar15 = 0;
  }
  else {
    pbVar8 = (byte *)*local_4c;
    if (uVar4 == 1) {
      uVar10 = (uint)*pbVar8;
      uVar15 = 0;
      if ((uVar10 == 0x2b) || (uVar10 == 0x2d)) goto LAB_00ab62e8;
    }
    else {
      uVar10 = (uint)*pbVar8;
    }
    if (uVar10 == 0x2b) {
      pbVar8 = pbVar8 + 1;
      uVar4 = uVar4 - 1;
    }
    if (uVar4 < 9) {
      if (uVar4 == 0) {
LAB_00ab62e4:
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          uVar10 = *pbVar8 - 0x30;
          if (9 < uVar10) goto LAB_00ab62e4;
          pbVar8 = pbVar8 + 1;
          uVar4 = uVar4 - 1;
          uVar15 = uVar10 + uVar15 * 10;
        } while (uVar4 != 0);
      }
    }
    else {
      uVar14 = 0;
      do {
        if (uVar4 == 0) {
          uVar15 = uVar14;
          break;
        }
        uVar13 = (uint)((ulonglong)uVar14 * 10);
        if ((int)((ulonglong)uVar14 * 10 >> 0x20) != 0) goto LAB_00ab62e4;
        uVar10 = *pbVar8 - 0x30;
        uVar15 = 0;
        uVar14 = uVar10 + uVar13;
        if (9 < uVar10) break;
        uVar4 = uVar4 - 1;
        pbVar8 = pbVar8 + 1;
      } while (!CARRY4(uVar10,uVar13));
    }
  }
LAB_00ab62e8:
  if (cVar3 == '\0') {
    uVar11 = 1;
    uVar17 = 0;
    uVar14 = uVar12;
    uVar10 = uVar16;
    uVar16 = uVar15;
    goto LAB_00ab65b4;
  }
  if (cVar3 != '\x01') {
    if (local_48 == 3) {
      pcVar5 = "*";
LAB_00ab6388:
      bVar6 = *pcVar5;
      uVar17 = 2;
      uVar11 = 0;
      uVar14 = 1;
      if (bVar6 == 0x2d || bVar6 == 0x2b) goto LAB_00ab65b4;
      if (bVar6 == 0x2a) {
        if (param_4 != 0) {
          if (*(int *)(param_4 + 0x18) + *(int *)(param_4 + 0x14) + 0x1517fU < 0x2a2ff) {
            FUN_0128fca4(&local_44);
            uVar4 = (local_44 & 0x1fff) >> 3;
            if (0x2dc < uVar4) {
              local_48 = 0x2dd;
              puVar9 = &DAT_01d2a928;
LAB_00ab6708:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar4,local_48,puVar9);
            }
            uVar11 = 1;
            uVar14 = 1;
            uVar10 = ((local_44 >> 3) + (uint)(byte)""[uVar4] & 0x3f) >> 1;
            goto LAB_00ab65b4;
          }
          goto LAB_00ab66ec;
        }
        goto LAB_00ab65b4;
      }
      uVar4 = 1;
    }
    else {
      uVar4 = local_4c[7];
      if (uVar4 == 0) {
        uVar17 = 2;
        uVar11 = 0;
        uVar14 = 1;
        goto LAB_00ab65b4;
      }
      pcVar5 = (char *)local_4c[6];
      if (uVar4 == 1) goto LAB_00ab6388;
      bVar6 = *pcVar5;
    }
    if (bVar6 == 0x2b) {
      pcVar5 = pcVar5 + 1;
      uVar4 = uVar4 - 1;
    }
    if (uVar4 < 9) {
      uVar10 = 0;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        bVar6 = *pcVar5;
        if (9 < bVar6 - 0x30) goto LAB_00ab65b0;
        pcVar5 = pcVar5 + 1;
        uVar10 = (bVar6 - 0x30) + uVar10 * 10;
      }
LAB_00ab655c:
      uVar17 = 2;
      uVar11 = 1;
      uVar14 = 1;
    }
    else {
      uVar10 = 0;
      do {
        if (uVar4 == 0) goto LAB_00ab655c;
        uVar2 = (ulonglong)uVar10;
        uVar10 = (uint)(uVar2 * 10);
        if ((int)(uVar2 * 10 >> 0x20) != 0) break;
        uVar14 = (byte)*pcVar5 - 0x30;
        bVar18 = CARRY4(uVar14,uVar10);
        uVar10 = uVar14 + uVar10;
        if (9 < uVar14) break;
        uVar4 = uVar4 - 1;
        pcVar5 = pcVar5 + 1;
      } while (!bVar18);
LAB_00ab65b0:
      uVar17 = 2;
      uVar11 = 0;
      uVar14 = 1;
    }
    goto LAB_00ab65b4;
  }
  if (local_48 < 6) {
    pcVar5 = "*";
LAB_00ab6350:
    bVar6 = *pcVar5;
    uVar11 = 0;
    if (bVar6 != 0x2d && bVar6 != 0x2b) {
      if (bVar6 != 0x2a) {
        uVar4 = 1;
        goto LAB_00ab64b0;
      }
      if (param_4 != 0) {
        if (0x2a2fe < *(int *)(param_4 + 0x18) + *(int *)(param_4 + 0x14) + 0x1517fU) {
LAB_00ab66ec:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01ce21ec);
        }
        FUN_0128fca4(&local_44);
        iVar7 = ((local_44 & 0x1fff) >> 4) + (local_44 & 7);
        uVar10 = iVar7 + ((uint)((short)iVar7 * 0x2493) >> 0x10) * -7 + 1 & 0xffff;
        goto LAB_00ab66c8;
      }
    }
  }
  else {
    uVar4 = local_4c[0xb];
    if (uVar4 == 0) {
      uVar11 = 0;
    }
    else {
      pcVar5 = (char *)local_4c[10];
      if (uVar4 == 1) goto LAB_00ab6350;
      bVar6 = *pcVar5;
LAB_00ab64b0:
      if (bVar6 == 0x2d) {
        iVar7 = uVar4 - 1;
        pbVar8 = (byte *)(pcVar5 + 1);
        if (8 < uVar4) {
          uVar11 = 0;
          uVar10 = 0;
          do {
            lVar1 = (longlong)(int)uVar10;
            uVar10 = (uint)(lVar1 * 10);
            if ((((int)((ulonglong)(lVar1 * 10) >> 0x20) != (int)uVar10 >> 0x1f) ||
                (uVar4 = *pbVar8 - 0x30, 9 < uVar4)) ||
               (bVar18 = SBORROW4(uVar10,uVar4), uVar10 = uVar10 - uVar4, bVar18))
            goto LAB_00ab6368;
            iVar7 = iVar7 + -1;
            pbVar8 = pbVar8 + 1;
          } while (iVar7 != 0);
          goto LAB_00ab66c8;
        }
        if (iVar7 == 0) goto LAB_00ab667c;
        uVar11 = 0;
        uVar10 = 0;
        do {
          bVar6 = *pbVar8;
          if (9 < bVar6 - 0x30) goto LAB_00ab6368;
          pbVar8 = pbVar8 + 1;
          iVar7 = iVar7 + -1;
          uVar10 = uVar10 * 10 - (bVar6 - 0x30);
        } while (iVar7 != 0);
      }
      else {
        if (bVar6 == 0x2b) {
          uVar4 = uVar4 - 1;
          pcVar5 = pcVar5 + 1;
        }
        if (7 < uVar4) {
          uVar11 = 0;
          uVar10 = 0;
          do {
            lVar1 = (longlong)(int)uVar10;
            uVar10 = (uint)(lVar1 * 10);
            if ((((int)((ulonglong)(lVar1 * 10) >> 0x20) != (int)uVar10 >> 0x1f) ||
                (uVar14 = (byte)*pcVar5 - 0x30, 9 < uVar14)) ||
               (bVar18 = SCARRY4(uVar10,uVar14), uVar10 = uVar10 + uVar14, bVar18))
            goto LAB_00ab6368;
            uVar4 = uVar4 - 1;
            pcVar5 = pcVar5 + 1;
          } while (uVar4 != 0);
LAB_00ab66c8:
          uVar11 = 1;
          goto LAB_00ab6368;
        }
        if (uVar4 == 0) {
LAB_00ab667c:
          uVar10 = 0;
        }
        else {
          uVar11 = 0;
          uVar10 = 0;
          do {
            bVar6 = *pcVar5;
            if (9 < bVar6 - 0x30) goto LAB_00ab6368;
            pcVar5 = pcVar5 + 1;
            uVar4 = uVar4 - 1;
            uVar10 = (bVar6 - 0x30) + uVar10 * 10;
          } while (uVar4 != 0);
        }
      }
      uVar11 = 1;
    }
  }
LAB_00ab6368:
  uVar17 = 1;
  uVar14 = 1;
LAB_00ab65b4:
  param_1[2] = uVar10;
  param_1[3] = uVar14;
  *param_1 = uVar17;
  param_1[1] = uVar11;
  param_1[4] = uVar16;
  param_1[5] = uVar12;
  param_1[6] = uVar15;
  FUN_0134aee0(local_50,local_4c,4,8);
  return;
}

