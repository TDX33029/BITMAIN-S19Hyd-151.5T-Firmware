// FUN_016e4a80 @ 016e4a80 size=1724 calls_out=8 calls_in=3
// strings: 

void FUN_016e4a80(int *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int local_78;
  int iStack_74;
  uint uStack_70;
  int local_68;
  int local_64;
  uint local_60 [11];
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  
  if (*param_1 == -0x80000000) {
    return;
  }
  uVar13 = param_1[2];
  if (uVar13 == 0) {
    if (param_2 != 0) goto LAB_016e4bb0;
LAB_016e4bd0:
    iVar5 = param_1[2];
LAB_016e4bd4:
    iVar8 = param_1[1];
    iVar5 = iVar5 << 4;
    do {
      if (iVar5 == 0) {
        FUN_016e3a00(&local_78);
        goto LAB_016e4c10;
      }
      pcVar2 = (char *)(iVar8 + 0xc);
      iVar5 = iVar5 + -0x10;
      iVar8 = iVar8 + 0x10;
    } while (*pcVar2 != '\0');
  }
  else {
    uVar4 = *(uint *)(param_1[1] + 8);
    if (uVar13 != 1) {
      uVar9 = uVar13 - 1 & 0xfffffff;
      puVar6 = (uint *)(param_1[1] + 0x18);
      do {
        if (*puVar6 <= uVar4) {
          uVar4 = *puVar6;
        }
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 4;
      } while (uVar9 != 0);
    }
    if (uVar4 == 0) {
      FUN_016c904c(param_1);
      *param_1 = -0x80000000;
      return;
    }
    if (param_2 == 0) {
      uVar16 = param_1[1];
      uVar14 = 1;
      uVar18 = uVar16 + uVar13 * 0x10;
      uVar9 = *(uint *)(uVar16 + 8);
      bVar3 = false;
      uVar4 = uVar9;
      uVar19 = uVar16;
      do {
        if (bVar3) {
          if (uVar19 != uVar18) goto LAB_016e4b24;
LAB_016e4ef4:
          iVar5 = uVar9 - uVar4;
          if (uVar4 <= uVar9) {
            pbVar11 = (byte *)(*(int *)(uVar16 + 4) + iVar5);
            uVar19 = uVar13;
            uVar9 = uVar4;
            goto LAB_016e4f18;
          }
          puVar12 = &DAT_01d0a2d0;
LAB_016e50c4:
          uVar4 = uVar9;
          goto LAB_016e50d8;
        }
        if (uVar18 - uVar19 >> 4 <= uVar14) goto LAB_016e4ef4;
        uVar19 = uVar19 + uVar14 * 0x10;
LAB_016e4b24:
        iVar5 = uVar9 - uVar4;
        if (uVar9 < uVar4) {
          puVar12 = &DAT_01d0a2e0;
          goto LAB_016e50c4;
        }
        uVar14 = *(uint *)(uVar19 + 8);
        if (uVar14 == 0) {
          uVar14 = 0;
          break;
        }
        piVar1 = (int *)(uVar19 + 4);
        uVar19 = uVar19 + 0x10;
        uVar15 = 0;
        do {
          if (uVar4 == uVar15) goto LAB_016e4b7c;
          if (*(char *)((*piVar1 + uVar14 + -1) - uVar15) !=
              *(char *)((uVar9 + *(int *)(uVar16 + 4) + -1) - uVar15)) {
            uVar4 = uVar15;
            goto LAB_016e4b7c;
          }
          uVar15 = uVar15 + 1;
        } while (uVar14 != uVar15);
        uVar4 = uVar14;
LAB_016e4b7c:
        bVar3 = true;
        uVar14 = 0;
      } while (uVar4 != 0);
LAB_016e4fa0:
      iVar5 = uVar13 << 4;
      uVar4 = uVar16;
      do {
        if (iVar5 == 0) {
          if ((4 < uVar14) || (1 < uVar14 && 0x10 < uVar13)) goto LAB_016e4ff8;
          goto LAB_016e4bd0;
        }
        pcVar2 = (char *)(uVar4 + 0xc);
        iVar5 = iVar5 + -0x10;
        uVar4 = uVar4 + 0x10;
      } while (*pcVar2 != '\0');
      if (uVar14 < 2) goto LAB_016e4bd0;
LAB_016e4ff8:
      iVar5 = uVar13 << 4;
      if (param_2 == 0) {
        do {
          if (uVar14 < *(uint *)(uVar16 + 8)) {
            *(undefined1 *)(uVar16 + 0xc) = 0;
            local_60[1] = *(uint *)(uVar16 + 8) - uVar14;
            *(undefined4 *)(uVar16 + 8) = 0;
            local_68 = *(int *)(uVar16 + 4);
            local_64 = local_68 + local_60[1];
            local_60[0] = uVar16;
            local_60[2] = uVar14;
            FUN_01445cc0(&local_68);
          }
          uVar16 = uVar16 + 0x10;
          iVar5 = iVar5 + -0x10;
        } while (iVar5 != 0);
      }
      else {
        puVar6 = (uint *)(uVar16 + 8);
        do {
          if (uVar14 < *puVar6) {
            *puVar6 = uVar14;
            *(undefined1 *)(puVar6 + 1) = 0;
          }
          puVar6 = puVar6 + 4;
          iVar5 = iVar5 + -0x10;
        } while (iVar5 != 0);
      }
      if ((*param_1 == -0x80000000) || (FUN_016e34a4(param_1), *param_1 == -0x80000000)) {
        local_68 = 0;
LAB_016e5100:
        uVar7 = FUN_01307a30(&DAT_00570650,&local_68,0,&DAT_01d0a2f0);
        if (-0x7fffffff < local_78) {
          FUN_016c904c(&local_78);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01be040c(uVar7);
      }
      local_64 = param_1[2];
      iVar5 = 1;
      local_68 = 1;
      if (local_64 != 1) goto LAB_016e5100;
      goto LAB_016e4bd4;
    }
LAB_016e4bb0:
    FUN_016e47b4(param_1);
    if (*param_1 != -0x80000000) {
      uVar19 = param_1[2];
      if (uVar19 == 0) goto LAB_016e4bd0;
      uVar16 = param_1[1];
      uVar18 = 1;
      bVar3 = false;
      uVar15 = uVar16 + uVar19 * 0x10;
      uVar4 = *(uint *)(uVar16 + 8);
      pbVar11 = *(byte **)(uVar16 + 4);
      uVar9 = uVar4;
      uVar14 = uVar16;
      while (!bVar3) {
        if (uVar15 - uVar14 >> 4 <= uVar18) goto LAB_016e4f10;
        uVar14 = uVar14 + uVar18 * 0x10;
LAB_016e4e84:
        if (uVar4 < uVar9) {
          puVar12 = &DAT_01d0a2c0;
          goto LAB_016e50d4;
        }
        uVar18 = *(uint *)(uVar14 + 8);
        if (uVar9 < *(uint *)(uVar14 + 8)) {
          uVar18 = uVar9;
        }
        if (uVar18 == 0) goto LAB_016e4f9c;
        uVar9 = 0;
        do {
          if (*(byte *)(*(int *)(uVar14 + 4) + uVar9) != pbVar11[uVar9]) goto LAB_016e4ecc;
          uVar9 = uVar9 + 1;
        } while (uVar18 != uVar9);
        uVar9 = uVar18;
LAB_016e4ecc:
        bVar3 = true;
        uVar18 = 0;
        uVar14 = uVar14 + 0x10;
        if (uVar9 == 0) goto LAB_016e4f9c;
      }
      if (uVar14 != uVar15) goto LAB_016e4e84;
LAB_016e4f10:
      if (uVar4 < uVar9) {
        puVar12 = &DAT_01d0a2b0;
LAB_016e50d4:
        iVar5 = 0;
LAB_016e50d8:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(iVar5,uVar9,uVar4,puVar12);
      }
LAB_016e4f18:
      if ((((param_2 != 0) && (1 < uVar13)) && (uVar9 - 1 < 3)) &&
         ((byte)(&DAT_004d0188)[*pbVar11] < 200)) {
        puVar6 = (uint *)(uVar16 + 8);
        iVar5 = uVar19 << 4;
        do {
          if (1 < *puVar6) {
            *puVar6 = 1;
            *(undefined1 *)(puVar6 + 1) = 0;
          }
          puVar6 = puVar6 + 4;
          iVar5 = iVar5 + -0x10;
        } while (iVar5 != 0);
        FUN_016e34a4(param_1);
        return;
      }
      uVar13 = uVar19;
      uVar14 = uVar9;
      goto LAB_016e4fa0;
    }
  }
  local_78 = -0x7fffffff;
LAB_016e4c10:
  iVar5 = 0;
  local_60[0] = 5;
  local_60[1] = 10;
  local_60[2] = 4;
  local_60[3] = 10;
  local_60[4] = 3;
  local_60[5] = 0x40;
  local_60[6] = 2;
  local_60[7] = 0x40;
  local_60[8] = 1;
  local_60[9] = 10;
  do {
    if (*param_1 == -0x80000000) goto LAB_016e4d90;
    uVar13 = param_1[2];
    uVar4 = local_60[iVar5 * 2];
    if (uVar13 <= local_60[iVar5 * 2 + 1]) goto LAB_016e4d10;
    iVar8 = uVar13 << 4;
    if (param_2 == 0) {
      iVar17 = param_1[1];
      do {
        if (uVar4 < *(uint *)(iVar17 + 8)) {
          local_60[10] = *(int *)(iVar17 + 4);
          local_2c = *(uint *)(iVar17 + 8) - uVar4;
          local_34 = local_60[10] + local_2c;
          *(undefined1 *)(iVar17 + 0xc) = 0;
          *(undefined4 *)(iVar17 + 8) = 0;
          local_30 = iVar17;
          local_28 = uVar4;
          FUN_01445cc0(local_60 + 10);
        }
        iVar17 = iVar17 + 0x10;
        iVar8 = iVar8 + -0x10;
      } while (iVar8 != 0);
    }
    else {
      puVar6 = (uint *)(param_1[1] + 8);
      do {
        if (uVar4 < *puVar6) {
          *puVar6 = uVar4;
          *(undefined1 *)(puVar6 + 1) = 0;
        }
        puVar6 = puVar6 + 4;
        iVar8 = iVar8 + -0x10;
      } while (iVar8 != 0);
      FUN_016e47b4(param_1);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 5);
  bVar3 = true;
  if (*param_1 != -0x80000000) {
    uVar13 = param_1[2];
LAB_016e4d10:
    bVar3 = false;
    if (uVar13 != 0) {
      iVar5 = uVar13 << 4;
      puVar10 = (undefined4 *)(param_1[1] + 4);
      do {
        if (puVar10[1] == 1) {
          if ((byte)(&DAT_004d0188)[*(byte *)*puVar10] < 0xfa) goto LAB_016e4d5c;
LAB_016e4d80:
          FUN_016c904c(param_1);
          *param_1 = -0x80000000;
LAB_016e4d90:
          bVar3 = true;
          break;
        }
        if (puVar10[1] == 0) goto LAB_016e4d80;
LAB_016e4d5c:
        puVar10 = puVar10 + 4;
        iVar5 = iVar5 + -0x10;
      } while (iVar5 != 0);
    }
  }
  if (local_78 == -0x7fffffff) {
    return;
  }
  if (bVar3) {
    *param_1 = local_78;
    param_1[1] = iStack_74;
    param_1[2] = uStack_70;
    return;
  }
  uVar13 = param_1[2];
  if (uVar13 == 0) {
LAB_016e4e14:
    local_68 = local_78;
    local_64 = iStack_74;
    local_60[0] = uStack_70;
    FUN_016c904c(param_1);
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = local_60[0];
  }
  else {
    uVar4 = *(uint *)(param_1[1] + 8);
    if (uVar13 == 1) {
      if (uVar4 < 3) goto LAB_016e4e14;
    }
    else {
      uVar9 = uVar13 - 1 & 0xfffffff;
      puVar6 = (uint *)(param_1[1] + 0x18);
      do {
        if (*puVar6 <= uVar4) {
          uVar4 = *puVar6;
        }
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 4;
      } while (uVar9 != 0);
      if ((uVar4 < 3) || (0x40 < uVar13)) goto LAB_016e4e14;
    }
    if (local_78 != -0x80000000) {
      FUN_016c904c(&local_78);
    }
  }
  return;
LAB_016e4f9c:
  uVar14 = 0;
  uVar13 = uVar19;
  goto LAB_016e4fa0;
}

