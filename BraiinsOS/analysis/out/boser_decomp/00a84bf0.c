// FUN_00a84bf0 @ 00a84bf0 size=1548 calls_out=16 calls_in=3
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00a84bf0(int param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined **ppuVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined *local_94;
  undefined4 ****local_80;
  undefined **local_7c;
  int *local_78;
  undefined4 ****local_70;
  undefined **local_6c;
  int *local_68;
  undefined4 ***local_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *local_50;
  int *local_4c;
  int local_48;
  code *local_44;
  undefined4 ****local_40;
  undefined **local_3c;
  int *local_38;
  undefined4 ****local_30;
  undefined **local_2c;
  int *local_28;
  
  piVar22 = (int *)(param_1 + 0x1c);
  local_64 = (undefined4 ***)*piVar22;
  *piVar22 = 0;
  if (local_64 == (undefined4 ***)0x0) goto LAB_00a8515c;
  FUN_00a7d218(&local_64);
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4fbbc - 1 < 2 ||
       ((DAT_01d4fbbc != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fbb4), cVar4 != '\0')))) &&
      (iVar12 = FUN_01aaa278(DAT_01d4fbb4), iVar12 != 0)))) {
    iStack_60 = *(int *)(DAT_01d4fbb4 + 0x20);
    if (iStack_60 == 0) {
LAB_00a851e8:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20fe8);
    }
    local_6c = &local_50;
    uStack_5c = *(undefined4 *)(DAT_01d4fbb4 + 0x24);
    uStack_58 = *(undefined4 *)(DAT_01d4fbb4 + 0x28);
    local_78 = (int *)(DAT_01d4fbb4 + 0x1c);
    local_64 = (undefined4 ***)*local_78;
    local_80 = &local_70;
    uStack_54 = 0;
    local_7c = (undefined **)&DAT_00000001;
    local_4c = &local_48;
    local_68 = (int *)&DAT_01d2ea4c;
    local_50 = &DAT_0058d40d;
    local_44 = FUN_0188d23c;
    local_70 = &local_64;
    local_48 = param_1;
    FUN_01aaaecc(DAT_01d4fbb4,&local_80);
    iVar12 = DAT_01d4fbb4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined ***)(DAT_01d4fbb4 + 0x14);
      local_38 = *(int **)(DAT_01d4fbb4 + 0x18);
      local_40 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar16 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar16 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar16[3])(pcVar2,&local_40);
      if (iVar5 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar12,pcVar2,puVar16[4],&local_30,&local_80);
      }
    }
  }
  else {
    iVar12 = DAT_01d4fbb4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_7c = *(undefined ***)(DAT_01d4fbb4 + 0x14);
      local_78 = *(int **)(DAT_01d4fbb4 + 0x18);
      local_80 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar16 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar16 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar16[3])(pcVar2,&local_80);
      if (iVar5 != 0) {
        local_68 = (int *)(DAT_01d4fbb4 + 0x1c);
        iStack_60 = *(int *)(DAT_01d4fbb4 + 0x20);
        if (iStack_60 == 0) goto LAB_00a851e8;
        local_3c = &local_50;
        uStack_5c = *(undefined4 *)(DAT_01d4fbb4 + 0x24);
        uStack_58 = *(undefined4 *)(DAT_01d4fbb4 + 0x28);
        local_70 = &local_40;
        uStack_54 = 0;
        local_6c = (undefined **)&DAT_00000001;
        local_4c = &local_48;
        local_38 = (int *)&DAT_01d2ea4c;
        local_50 = &DAT_0058d40d;
        local_44 = FUN_0188d23c;
        local_30 = local_80;
        local_2c = local_7c;
        local_28 = local_78;
        local_64 = (undefined4 ***)*local_68;
        local_48 = param_1;
        local_40 = &local_64;
        FUN_01aaa328(iVar12,pcVar2,puVar16[4],&local_30,&local_70);
      }
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_00a8515c;
  FUN_01933ff0(&local_30,*(int *)(param_1 + 0x18) + 8);
  piVar10 = local_28;
  ppuVar3 = local_2c;
  if ((local_30 == (undefined4 ****)0x2) || (((uint)local_30 & 1) != 0)) {
    if (((uint)local_30 & 1) == 0) goto LAB_00a8515c;
  }
  else {
    ppuVar20 = local_2c + 0x16;
    puVar6 = (uint *)FUN_01709e78(ppuVar20,param_1);
    if (puVar6 != (uint *)0x0) {
      uVar11 = puVar6[3];
      if (uVar11 == 0) {
        uVar15 = 0;
        uVar7 = 0;
LAB_00a84fe4:
        if (uVar7 < uVar11) {
          uVar8 = puVar6[1];
          uVar17 = puVar6[2];
          uVar21 = *puVar6;
          local_94 = &DAT_01d20e1c;
          puVar9 = &DAT_0056c0e8;
          do {
            while( true ) {
              uVar19 = uVar21;
              if (uVar17 + uVar7 < uVar21) {
                uVar19 = 0;
              }
              DataMemoryBarrier(0xb);
              if (*(char *)(*(int *)(uVar8 + uVar17 * 4 + uVar19 * -4 + uVar7 * 4) + 0x40) == '\0')
              break;
              uVar7 = uVar7 + 1;
              if (uVar11 <= uVar7) goto LAB_00a850ac;
            }
            if (puVar6[3] <= uVar15) {
LAB_00a851d4:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(puVar9,0x20,local_94);
            }
            if (puVar6[3] <= uVar7) {
              puVar9 = &DAT_0056c748;
              local_94 = &DAT_01d20e2c;
              goto LAB_00a851d4;
            }
            uVar23 = *puVar6;
            uVar18 = puVar6[1];
            uVar13 = puVar6[2] + uVar7;
            uVar19 = uVar13 - uVar23;
            if (uVar13 < uVar23) {
              uVar19 = uVar13;
            }
            uVar14 = puVar6[2] + uVar15;
            uVar15 = uVar15 + 1;
            uVar13 = uVar14 - uVar23;
            if (uVar14 < uVar23) {
              uVar13 = uVar14;
            }
            uVar24 = *(undefined4 *)(uVar18 + uVar13 * 4);
            *(undefined4 *)(uVar18 + uVar13 * 4) = *(undefined4 *)(uVar18 + uVar19 * 4);
            uVar7 = uVar7 + 1;
            *(undefined4 *)(uVar18 + uVar19 * 4) = uVar24;
          } while (uVar7 < uVar11);
        }
LAB_00a850ac:
        if (uVar7 == uVar15) goto LAB_00a85128;
        uVar11 = puVar6[3];
        if (uVar15 < uVar11) {
          uVar8 = *puVar6;
          uVar21 = puVar6[1];
          uVar17 = puVar6[2];
          puVar6[3] = uVar15;
          uVar7 = uVar17 - uVar8;
          if (uVar17 < uVar8) {
            uVar7 = uVar17;
          }
          uVar8 = uVar8 - uVar7;
          iVar12 = uVar11 - uVar8;
          if (uVar11 < uVar8) {
            iVar12 = 0;
          }
          if (uVar8 < uVar11) {
            uVar11 = uVar8;
          }
          if (uVar8 < uVar15) {
            iVar12 = iVar12 - (uVar15 - uVar11);
            uVar21 = uVar21 + (uVar15 - uVar11) * 4;
          }
          else {
            FUN_009d0940(uVar21 + uVar7 * 4 + uVar15 * 4,uVar11 - uVar15);
          }
          FUN_009d0940(uVar21,iVar12);
          goto LAB_00a85128;
        }
      }
      else {
        uVar15 = 0;
        do {
          uVar7 = *puVar6;
          if (puVar6[2] + uVar15 < *puVar6) {
            uVar7 = 0;
          }
          DataMemoryBarrier(0xb);
          if (*(char *)(*(int *)(puVar6[1] + puVar6[2] * 4 + uVar7 * -4 + uVar15 * 4) + 0x40) !=
              '\0') {
            uVar7 = uVar15 + 1;
            goto LAB_00a84fe4;
          }
          uVar15 = uVar15 + 1;
        } while (uVar11 != uVar15);
LAB_00a85128:
        uVar11 = puVar6[3];
      }
      if (uVar11 == 0) {
        FUN_00abaa8c(&local_64,ppuVar20,param_1);
        FUN_00a802b0(&local_64);
      }
    }
  }
  FUN_00a97e8c(ppuVar3,(uint)piVar10 & 0xff);
LAB_00a8515c:
  FUN_0178e1c4(param_1);
  piVar10 = *(int **)(param_1 + 0x18);
  if (piVar10 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a8021c(*(undefined4 *)(param_1 + 0x18));
    }
  }
  if (*piVar22 == 0) {
    return;
  }
  FUN_00a7d218(piVar22);
  return;
}

