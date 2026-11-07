// FUN_013d9eb8 @ 013d9eb8 size=1348 calls_out=12 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_013d9eb8(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *******pppppppuVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  char local_15d;
  undefined4 *******local_15c;
  undefined **local_158;
  undefined1 *local_154;
  char local_150;
  undefined4 ******local_14c;
  int local_148;
  undefined *local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_12c;
  undefined4 local_128;
  undefined *local_124;
  undefined4 local_f0;
  undefined *local_ec;
  undefined4 local_bc;
  undefined *local_b8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined4 local_9c;
  undefined *local_98;
  undefined *local_8c;
  undefined *local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined *local_7c;
  undefined4 *******local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *******local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined *local_34;
  char **local_30;
  char *local_2c;
  code *local_28;
  
  uVar9 = *param_1;
  uVar12 = FUN_013d9414(uVar9);
  if ((0x3ffffffff < uVar12) && (*(int *)uVar12 == 0x2d2d6e78)) {
    uVar13 = FUN_013d9414(uVar9);
    FUN_006643f0(&local_16c,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    uVar10 = local_168;
    local_88 = &DAT_01cf90fc;
    local_98 = &DAT_01cf9014;
    local_b8 = &DAT_01cf9054;
    local_9e = 0x41;
    local_a0 = 0x41;
    local_144 = &DAT_01cf906c;
    local_7c = &DAT_01cf9084;
    local_80 = 0;
    local_9c = 0;
    local_bc = 0;
    local_ec = &DAT_01cf9084;
    local_f0 = 0;
    local_124 = &DAT_01cf9020;
    local_128 = 0;
    local_12c = 1;
    local_148 = 0;
    local_14c = (undefined4 ******)0x1;
    local_84 = &DAT_01cf912c;
    local_8c = &DAT_01cf915c;
    FUN_0144994c(&local_15c,&local_14c,local_168,local_164);
    puVar5 = local_154;
    ppuVar3 = local_158;
    pppppppuVar2 = local_15c;
    local_15d = local_150;
    FUN_013da4dc(&local_14c);
    if (local_15d == '\0') {
      uVar9 = (**(code **)(param_2[1] + 0xc))(*param_2,ppuVar3,puVar5);
      if (pppppppuVar2 != (undefined4 *******)&DAT_80000000) {
        FUN_019bb7e0(pppppppuVar2,ppuVar3);
      }
      if (local_16c == -0x80000000) {
        return uVar9;
      }
      FUN_019bb7e0(local_16c,uVar10);
      return uVar9;
    }
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4e560 - 1 < 2 ||
         ((DAT_01d4e560 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4e558), cVar4 != '\0')))) &&
        (iVar7 = FUN_01aaa278(DAT_01d4e558), iVar7 != 0)))) {
      if (*(int *)(DAT_01d4e558 + 0x20) == 0) {
LAB_013da3e4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf2d90);
      }
      local_144 = *(undefined **)(DAT_01d4e558 + 0x24);
      local_140 = *(undefined4 *)(DAT_01d4e558 + 0x28);
      local_4c = &local_40;
      local_44 = (undefined4 *)(DAT_01d4e558 + 0x1c);
      local_14c = (undefined4 ******)*local_44;
      local_3c = &local_34;
      local_48 = 1;
      local_30 = &local_2c;
      local_13c = 0;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_34 = &DAT_00597183;
      local_28 = FUN_013da5bc;
      local_2c = &local_15d;
      local_148 = *(int *)(DAT_01d4e558 + 0x20);
      local_40 = &local_14c;
      FUN_01aaaecc(DAT_01d4e558,&local_4c);
      iVar7 = DAT_01d4e558;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_158 = *(undefined ***)(DAT_01d4e558 + 0x14);
        local_154 = *(undefined1 **)(DAT_01d4e558 + 0x18);
        local_15c = (undefined4 *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar8[3])(pcVar1,&local_15c);
        if (iVar6 != 0) {
          FUN_01aaa328(iVar7,pcVar1,puVar8[4],&local_15c,&local_4c);
        }
      }
    }
    else {
      iVar7 = DAT_01d4e558;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_48 = *(undefined4 *)(DAT_01d4e558 + 0x14);
        local_44 = *(undefined4 **)(DAT_01d4e558 + 0x18);
        local_4c = (undefined4 *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar8[3])(pcVar1,&local_4c);
        if (iVar6 != 0) {
          local_38 = (undefined4 *)(DAT_01d4e558 + 0x1c);
          if (*(int *)(DAT_01d4e558 + 0x20) == 0) goto LAB_013da3e4;
          local_144 = *(undefined **)(DAT_01d4e558 + 0x24);
          local_140 = *(undefined4 *)(DAT_01d4e558 + 0x28);
          local_158 = &local_34;
          local_13c = 0;
          local_3c = (undefined **)&DAT_00000001;
          local_154 = &DAT_01d2ea4c;
          local_30 = &local_2c;
          local_34 = &DAT_00597183;
          local_28 = FUN_013da5bc;
          local_2c = &local_15d;
          local_15c = &local_14c;
          local_14c = (undefined4 ******)*local_38;
          local_148 = *(int *)(DAT_01d4e558 + 0x20);
          local_40 = &local_15c;
          FUN_01aaa328(iVar7,pcVar1,puVar8[4],&local_4c,&local_40);
        }
      }
    }
    if (pppppppuVar2 != (undefined4 *******)&DAT_80000000) {
      FUN_019bb7e0(pppppppuVar2,ppuVar3);
    }
    if (local_16c != -0x80000000) {
      FUN_019bb7e0(local_16c,local_168);
    }
  }
  uVar13 = FUN_013d9414(uVar9);
  iVar7 = (int)((ulonglong)uVar13 >> 0x20);
  puVar5 = (undefined1 *)uVar13;
  uVar9 = *param_2;
  if (iVar7 == 0) {
    uVar10 = param_2[1];
    puVar11 = puVar5;
  }
  else {
    uVar10 = param_2[1];
    iVar6 = FUN_013d9d8c(*puVar5,uVar9,uVar10,1);
    puVar11 = puVar5 + 1;
    if (iVar6 != 0) {
      return 1;
    }
  }
  do {
    if (puVar11 == puVar5 + iVar7) {
      return 0;
    }
    iVar6 = FUN_013d9d8c(*puVar11,uVar9,uVar10,0);
    puVar11 = puVar11 + 1;
  } while (iVar6 == 0);
  return 1;
}

