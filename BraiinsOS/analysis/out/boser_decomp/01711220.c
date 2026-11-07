// FUN_01711220 @ 01711220 size=1456 calls_out=14 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Out of bounds access | FieldSet corrupted (this is a bug)

void FUN_01711220(undefined4 *******param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 *******pppppppuVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *******pppppppuVar20;
  undefined *local_98;
  undefined4 *******local_8c;
  code *local_88;
  int *local_84;
  undefined *local_80;
  undefined4 *******local_7c;
  undefined4 *******local_78;
  undefined4 *******local_74;
  undefined1 *local_70;
  undefined4 *******local_68;
  undefined **local_64;
  int *local_60;
  undefined4 ******local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined1 *local_38;
  undefined4 *******local_30;
  undefined4 *******local_2c;
  undefined1 *local_28;
  
  local_5c = param_1[7];
  param_1[7] = (undefined4 ******)0x0;
  if (local_5c == (undefined4 ******)0x0) {
    return;
  }
  FUN_0170c1b0(&local_5c);
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4fbbc - 1 < 2 ||
       ((DAT_01d4fbbc != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fbb4), cVar2 != '\0')))) &&
      (iVar16 = FUN_01aaa278(DAT_01d4fbb4), iVar16 != 0)))) {
    local_58 = *(int *)(DAT_01d4fbb4 + 0x20);
    if (local_58 == 0) {
LAB_017117c0:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20fe8);
    }
    local_54 = *(undefined4 *)(DAT_01d4fbb4 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4fbb4 + 0x28);
    local_64 = &local_80;
    local_84 = (int *)(DAT_01d4fbb4 + 0x1c);
    local_5c = (undefined4 ******)*local_84;
    pppppppuVar20 = &local_8c;
    local_8c = &local_68;
    local_88 = (code *)0x1;
    local_7c = &local_48;
    local_4c = 0;
    local_60 = (int *)&DAT_01d2ea4c;
    local_80 = &DAT_0058d40d;
    local_44 = (undefined4 *******)FUN_0188d23c;
    local_68 = &local_5c;
    local_48 = param_1;
    FUN_01aaaecc(DAT_01d4fbb4,pppppppuVar20);
    iVar16 = DAT_01d4fbb4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined4 ********)(DAT_01d4fbb4 + 0x14);
      local_38 = *(undefined1 **)(DAT_01d4fbb4 + 0x18);
      local_40 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar13 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar13 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar10[3])(pcVar13,&local_40);
      if (iVar3 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        uVar7 = puVar10[4];
        goto LAB_01711394;
      }
    }
  }
  else {
    iVar16 = DAT_01d4fbb4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_74 = *(undefined4 ********)(DAT_01d4fbb4 + 0x14);
      local_70 = *(undefined1 **)(DAT_01d4fbb4 + 0x18);
      local_78 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar13 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar13 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar10[3])(pcVar13,&local_78);
      if (iVar3 != 0) {
        local_60 = (int *)(DAT_01d4fbb4 + 0x1c);
        local_58 = *(int *)(DAT_01d4fbb4 + 0x20);
        if (local_58 == 0) goto LAB_017117c0;
        local_3c = &local_48;
        local_54 = *(undefined4 *)(DAT_01d4fbb4 + 0x24);
        local_50 = *(undefined4 *)(DAT_01d4fbb4 + 0x28);
        local_68 = &local_40;
        local_64 = (undefined **)&DAT_00000001;
        local_44 = &local_8c;
        local_38 = &DAT_01d2ea4c;
        local_4c = 0;
        local_88 = FUN_0188d23c;
        local_48 = (undefined4 *******)&DAT_0058d40d;
        local_30 = local_78;
        local_2c = local_74;
        local_28 = local_70;
        pppppppuVar20 = &local_68;
        uVar7 = puVar10[4];
        local_8c = param_1;
        local_5c = (undefined4 ******)*local_60;
        local_40 = &local_5c;
LAB_01711394:
        FUN_01aaa328(iVar16,pcVar13,uVar7,&local_30,pppppppuVar20);
      }
    }
  }
  if (param_1[6] == (undefined4 ******)0x0) {
    return;
  }
  FUN_01933ff0(&local_30,param_1[6] + 2);
  puVar1 = local_28;
  pppppppuVar20 = local_2c;
  if ((local_30 == (undefined4 *******)0x2) || (((uint)local_30 & 1) != 0)) {
    if (((uint)local_30 & 1) == 0) {
      return;
    }
    goto LAB_01711778;
  }
  pppppppuVar15 = local_2c + 0x16;
  puVar4 = (uint *)FUN_01709e78(pppppppuVar15,param_1);
  if (puVar4 == (uint *)0x0) goto LAB_01711778;
  uVar6 = puVar4[3];
  uVar9 = 0;
  if (uVar6 == 0) {
    uVar11 = 0;
LAB_01711618:
    if (uVar11 < uVar6) {
      puVar8 = &DAT_01d20e0c;
      local_98 = &DAT_01d20e1c;
      puVar5 = &DAT_0056c0e8;
LAB_0171163c:
      do {
        if (puVar4[3] <= uVar11) {
LAB_01711784:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("Out of bounds access",0x14,puVar8);
        }
        uVar18 = puVar4[2];
        if (*puVar4 <= uVar11 + uVar18) {
          uVar18 = uVar18 - *puVar4;
        }
        DataMemoryBarrier(0xb);
        if (*(char *)(*(int *)(puVar4[1] + (uVar11 + uVar18) * 4) + 0x40) != '\0') {
          uVar11 = uVar11 + 1;
          if (uVar6 <= uVar11) break;
          goto LAB_0171163c;
        }
        if (puVar4[3] <= uVar9) {
LAB_017117ac:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(puVar5,0x20,local_98);
        }
        if (puVar4[3] <= uVar11) {
          puVar5 = &DAT_0056c748;
          local_98 = &DAT_01d20e2c;
          goto LAB_017117ac;
        }
        uVar19 = *puVar4;
        uVar12 = puVar4[2] + uVar11;
        uVar14 = puVar4[2] + uVar9;
        uVar17 = puVar4[1];
        uVar18 = uVar12 - uVar19;
        if (uVar12 < uVar19) {
          uVar18 = uVar12;
        }
        uVar12 = uVar14 - uVar19;
        if (uVar14 < uVar19) {
          uVar12 = uVar14;
        }
        uVar11 = uVar11 + 1;
        uVar7 = *(undefined4 *)(uVar17 + uVar12 * 4);
        uVar9 = uVar9 + 1;
        *(undefined4 *)(uVar17 + uVar12 * 4) = *(undefined4 *)(uVar17 + uVar18 * 4);
        *(undefined4 *)(uVar17 + uVar18 * 4) = uVar7;
      } while (uVar11 < uVar6);
    }
    if (uVar11 == uVar9) goto LAB_0171174c;
    uVar6 = puVar4[3];
    if (uVar9 < uVar6) {
      uVar18 = *puVar4;
      uVar12 = puVar4[1];
      uVar14 = puVar4[2];
      puVar4[3] = uVar9;
      uVar11 = uVar14 - uVar18;
      if (uVar14 < uVar18) {
        uVar11 = uVar14;
      }
      uVar18 = uVar18 - uVar11;
      iVar16 = uVar6 - uVar18;
      if (uVar6 < uVar18) {
        iVar16 = 0;
      }
      if (uVar18 < uVar6) {
        uVar6 = uVar18;
      }
      if (uVar18 < uVar9) {
        iVar16 = iVar16 - (uVar9 - uVar6);
        uVar12 = uVar12 + (uVar9 - uVar6) * 4;
      }
      else {
        FUN_0170f430(uVar12 + uVar11 * 4 + uVar9 * 4,uVar6 - uVar9);
      }
      FUN_0170f430(uVar12,iVar16);
      goto LAB_0171174c;
    }
  }
  else {
    puVar8 = &DAT_01d20dfc;
    do {
      if (puVar4[3] <= uVar9) goto LAB_01711784;
      uVar11 = puVar4[2];
      if (*puVar4 <= uVar9 + uVar11) {
        uVar11 = uVar11 - *puVar4;
      }
      DataMemoryBarrier(0xb);
      if (*(char *)(*(int *)(puVar4[1] + (uVar9 + uVar11) * 4) + 0x40) != '\0') {
        uVar11 = uVar9 + 1;
        goto LAB_01711618;
      }
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar9);
LAB_0171174c:
    uVar6 = puVar4[3];
  }
  if (uVar6 == 0) {
    FUN_0181e654(&local_5c,pppppppuVar15,param_1);
    FUN_0170f364(&local_5c);
  }
LAB_01711778:
  FUN_00a97e8c(pppppppuVar20,(uint)puVar1 & 0xff);
  return;
}

