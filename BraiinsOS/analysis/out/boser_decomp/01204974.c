// FUN_01204974 @ 01204974 size=3068 calls_out=14 calls_in=0
// strings: boser_unix::logevent open/boser/boser-unix/src/log.rs:138event open/boser/boser-unix/src/log.rs:142 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_unix::logevent open/boser/boser-unix/src/log.rs:138event open/boser/boser-unix/src/log.rs:142 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_unix::logevent open/boser/boser-unix/src/log.rs:138event open/boser/boser-unix/src/log.rs:142

void FUN_01204974(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 ***pppuVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  int extraout_r3;
  undefined4 *puVar11;
  code *pcVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 ***local_e8;
  undefined1 auStack_e4 [20];
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  int *piStack_c8;
  int local_c4 [2];
  undefined4 ***local_bc;
  int local_b8;
  undefined4 ****local_b4;
  undefined4 ****local_b0;
  undefined4 *local_ac;
  undefined4 ****local_a8;
  undefined4 ****local_a4;
  int *local_a0;
  undefined4 ****local_98;
  undefined4 ****local_94;
  int *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 ****local_84;
  undefined4 ***local_80;
  int *local_7c;
  undefined4 ***local_78;
  undefined4 ****local_74;
  undefined4 ****local_70;
  undefined4 ****local_6c;
  int *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 ****local_58;
  undefined2 *local_54;
  int *local_50;
  code *local_4c;
  undefined4 ****local_48;
  code *local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  int *local_38;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  int *local_28;
  
  FUN_019b9f84(&local_e8);
  puVar4 = (undefined4 *)param_2[2];
  local_90 = (int *)0x0;
  local_94 = (undefined4 ****)&DAT_00000001;
  local_98 = (undefined4 ****)0x0;
  local_30 = (undefined4 ****)*puVar4;
  local_2c = (undefined4 ****)puVar4[1];
  local_48 = (undefined4 ****)(puVar4 + 3);
  local_50 = puVar4 + 2;
  local_58 = &local_30;
  local_44 = FUN_012fd02c;
  local_4c = FUN_012fd02c;
  local_54 = &DAT_0132b6a0;
  iVar5 = FUN_012fa178(&local_98,&DAT_01c23714,&DAT_005bd7bb,&local_58);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_58,&DAT_01c2372c,&DAT_01d30334);
  }
  local_d0 = local_98;
  local_cc = local_94;
  piStack_c8 = local_90;
  puVar11 = (undefined4 *)*param_2;
  pcVar12 = *(code **)(param_2[1] + 0xc);
  (*pcVar12)(&local_58,puVar11);
  uVar6 = 4;
  puVar4 = puVar11;
  if ((local_58 == (undefined4 ****)0xd6cb5d6d && local_50 == (int *)0x57a64178) &&
      (local_54 == (undefined2 *)0x63eb502c && local_4c == (code *)0xb98b1b71)) {
LAB_01204ad8:
    uVar10 = *(undefined4 *)((int)puVar11 + uVar6);
    puVar8 = (undefined *)*puVar4;
  }
  else {
    (*pcVar12)(&local_58,puVar11);
    uVar6 = (uint)local_58 ^ 0x50f052f7 | (uint)local_50 ^ 0xdf97b325 |
            (uint)local_54 ^ 0x9909b2a5 | (uint)local_4c ^ 0xb55cb20e;
    if (uVar6 == 0) {
      puVar4 = puVar11 + 1;
      uVar6 = 8;
      goto LAB_01204ad8;
    }
    uVar10 = 0xc;
    puVar8 = &DAT_00526a84;
  }
  uVar14 = thunk_FUN_01bee35a(uVar6,puVar8,uVar10,0x240);
  local_c4[0] = (int)((ulonglong)uVar14 >> 0x20);
  uVar6 = *(uint *)((int)uVar14 + extraout_r3);
  if (uVar6 < 3) {
    uVar14 = FUN_019b03e8();
  }
  else {
    piVar13 = (int *)(uVar6 - 8);
    do {
      iVar5 = *piVar13;
      iVar9 = iVar5 + 1;
      uVar14 = CONCAT44(iVar9,piVar13);
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar9;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)software_udf(0xfdee,0x1205570);
      (*pcVar12)();
    }
  }
  local_b8 = (int)((ulonglong)uVar14 >> 0x20);
  piVar13 = (int *)uVar14;
  pppuVar7 = (undefined4 ***)piVar13[4];
  if (pppuVar7 == (undefined4 ***)0x0) {
    ClearExclusiveLocal();
    if (DAT_01d51ab0 == 0 && DAT_01d51ab4 == 0) {
      pppuVar7 = (undefined4 ***)0x0;
    }
    else {
      pppuVar7 = (undefined4 ***)&DAT_0056f91c;
      if (DAT_01d51ab0 != piVar13[2] || DAT_01d51ab4 != piVar13[3]) {
        pppuVar7 = (undefined4 ***)0x0;
      }
      local_b8 = 4;
    }
  }
  else {
    local_b8 = piVar13[5] + -1;
  }
  if (pppuVar7 == (undefined4 ***)0x0) {
    local_b8 = 9;
  }
  local_bc = (undefined4 ***)&DAT_00531aad;
  if (pppuVar7 != (undefined4 ***)0x0) {
    local_bc = pppuVar7;
  }
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d4ca54 - 1 < 2 ||
       ((DAT_01d4ca54 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4ca4c), cVar3 != '\0')))) &&
      (iVar5 = FUN_01aaa278(DAT_01d4ca4c), iVar5 != 0)))) {
    if (*(undefined4 *****)(DAT_01d4ca4c + 0x20) == (undefined4 ****)0x0) {
LAB_01205540:
      puVar8 = &DAT_01c235d8;
      goto LAB_01205560;
    }
    local_80 = &local_78;
    local_90 = *(int **)(DAT_01d4ca4c + 0x24);
    local_8c = *(undefined4 *)(DAT_01d4ca4c + 0x28);
    local_ac = (undefined4 *)(DAT_01d4ca4c + 0x1c);
    local_98 = (undefined4 ****)*local_ac;
    local_84 = &local_98;
    local_b4 = &local_84;
    local_88 = 0;
    local_b0 = (undefined4 ****)&DAT_00000001;
    local_74 = &local_58;
    local_4c = (code *)&DAT_0132b6a0;
    local_44 = (code *)&LAB_00632348;
    local_50 = local_c4;
    local_58 = &local_bc;
    local_7c = (int *)&DAT_01d2ea4c;
    local_78 = (undefined4 ***)&DAT_00590df5;
    local_54 = &DAT_0132b6a0;
    local_94 = *(undefined4 *****)(DAT_01d4ca4c + 0x20);
    local_48 = &local_d0;
    FUN_01aaaecc(DAT_01d4ca4c,&local_b4);
    iVar5 = DAT_01d4ca4c;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_3c = *(undefined4 *****)(DAT_01d4ca4c + 0x14);
      local_38 = *(int **)(DAT_01d4ca4c + 0x18);
      local_40 = (undefined4 ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar4[3])(pcVar2,&local_40);
      if (iVar9 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar5,pcVar2,puVar4[4],&local_30,&local_b4);
      }
    }
  }
  else {
    iVar5 = DAT_01d4ca4c;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_a4 = *(undefined4 *****)(DAT_01d4ca4c + 0x14);
      local_a0 = *(int **)(DAT_01d4ca4c + 0x18);
      local_a8 = (undefined4 ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar4[3])(pcVar2,&local_a8);
      if (iVar9 != 0) {
        if (*(undefined4 *****)(DAT_01d4ca4c + 0x20) == (undefined4 ****)0x0) goto LAB_01205540;
        local_40 = &local_98;
        local_84 = &local_40;
        local_90 = *(int **)(DAT_01d4ca4c + 0x24);
        local_8c = *(undefined4 *)(DAT_01d4ca4c + 0x28);
        local_3c = &local_b4;
        local_88 = 0;
        local_80 = (undefined4 ***)&DAT_00000001;
        local_38 = (int *)&DAT_01d2ea4c;
        local_b0 = &local_58;
        local_b4 = (undefined4 ****)&DAT_00590df5;
        local_44 = (code *)&LAB_00632348;
        local_50 = local_c4;
        local_58 = &local_bc;
        local_4c = (code *)&DAT_0132b6a0;
        local_54 = &DAT_0132b6a0;
        local_30 = local_a8;
        local_2c = local_a4;
        local_28 = local_a0;
        local_98 = *(undefined4 *****)(DAT_01d4ca4c + 0x1c);
        local_94 = *(undefined4 *****)(DAT_01d4ca4c + 0x20);
        local_7c = (int *)(DAT_01d4ca4c + 0x1c);
        local_48 = &local_d0;
        FUN_01aaa328(iVar5,pcVar2,puVar4[4],&local_30,&local_84);
      }
    }
  }
  if (((DAT_01d50f88 < 5) &&
      ((DAT_01d4ca6c - 1 < 2 ||
       ((DAT_01d4ca6c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4ca64), cVar3 != '\0')))))) &&
     (iVar5 = FUN_01aaa278(DAT_01d4ca64), iVar5 != 0)) {
    if (*(undefined2 **)(DAT_01d4ca64 + 0x20) == (undefined2 *)0x0) {
LAB_0120554c:
      puVar8 = &DAT_01c235e8;
      goto LAB_01205560;
    }
    local_3c = &local_78;
    local_50 = *(int **)(DAT_01d4ca64 + 0x24);
    local_4c = *(code **)(DAT_01d4ca64 + 0x28);
    local_7c = (int *)(DAT_01d4ca64 + 0x1c);
    local_58 = (undefined4 ****)*local_7c;
    local_40 = &local_58;
    local_84 = &local_40;
    local_48 = (undefined4 ****)0x0;
    local_80 = (undefined4 ***)&DAT_00000001;
    local_74 = &local_b4;
    local_b4 = &local_e8;
    local_38 = (int *)&DAT_01d2ea4c;
    local_78 = (undefined4 ***)&DAT_00531476;
    local_b0 = (undefined4 ****)FUN_019bac7c;
    local_54 = *(undefined2 **)(DAT_01d4ca64 + 0x20);
    FUN_01aaaecc(DAT_01d4ca64,&local_84);
    iVar5 = DAT_01d4ca64;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_2c = *(undefined4 *****)(DAT_01d4ca64 + 0x14);
      local_28 = *(int **)(DAT_01d4ca64 + 0x18);
      local_30 = (undefined4 ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar4[3])(pcVar2,&local_30);
      if (iVar9 != 0) {
        local_98 = local_30;
        local_94 = local_2c;
        local_90 = local_28;
        FUN_01aaa328(iVar5,pcVar2,puVar4[4],&local_98,&local_84);
      }
    }
  }
  else {
    iVar5 = DAT_01d4ca64;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_6c = *(undefined4 *****)(DAT_01d4ca64 + 0x14);
      local_68 = *(int **)(DAT_01d4ca64 + 0x18);
      local_70 = (undefined4 ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar4[3])(pcVar2,&local_70);
      if (iVar9 != 0) {
        if (*(undefined2 **)(DAT_01d4ca64 + 0x20) == (undefined2 *)0x0) goto LAB_0120554c;
        local_2c = &local_b4;
        local_50 = *(int **)(DAT_01d4ca64 + 0x24);
        local_4c = *(code **)(DAT_01d4ca64 + 0x28);
        local_30 = &local_58;
        local_40 = &local_30;
        local_48 = (undefined4 ****)0x0;
        local_3c = (undefined4 ****)&DAT_00000001;
        local_b0 = &local_84;
        local_84 = &local_e8;
        local_28 = (int *)&DAT_01d2ea4c;
        local_b4 = (undefined4 ****)&DAT_00531476;
        local_80 = (undefined4 ***)FUN_019bac7c;
        local_98 = local_70;
        local_94 = local_6c;
        local_90 = local_68;
        local_58 = *(undefined4 *****)(DAT_01d4ca64 + 0x1c);
        local_54 = *(undefined2 **)(DAT_01d4ca64 + 0x20);
        local_38 = (int *)(DAT_01d4ca64 + 0x1c);
        FUN_01aaa328(iVar5,pcVar2,puVar4[4],&local_98,&local_40);
      }
    }
  }
  if (local_e8 != (undefined4 ***)0x1) goto LAB_01205348;
  if (((DAT_01d50f88 < 5) &&
      ((DAT_01d4ca60 - 1 < 2 ||
       ((DAT_01d4ca60 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4ca58), cVar3 != '\0')))))) &&
     (iVar5 = FUN_01aaa278(DAT_01d4ca58), iVar5 != 0)) {
    if (*(undefined2 **)(DAT_01d4ca58 + 0x20) != (undefined2 *)0x0) {
      local_2c = &local_84;
      local_50 = *(int **)(DAT_01d4ca58 + 0x24);
      local_4c = *(code **)(DAT_01d4ca58 + 0x28);
      local_38 = (int *)(DAT_01d4ca58 + 0x1c);
      local_58 = (undefined4 ****)*local_38;
      local_30 = &local_58;
      local_40 = &local_30;
      local_48 = (undefined4 ****)0x0;
      local_3c = (undefined4 ****)&DAT_00000001;
      local_28 = (int *)&DAT_01d2ea4c;
      local_80 = (undefined4 ***)0x95;
      local_84 = (undefined4 ****)0x40211a;
      local_54 = *(undefined2 **)(DAT_01d4ca58 + 0x20);
      FUN_01aaaecc(DAT_01d4ca58,&local_40);
      iVar5 = DAT_01d4ca58;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_94 = *(undefined4 *****)(DAT_01d4ca58 + 0x14);
        local_90 = *(int **)(DAT_01d4ca58 + 0x18);
        local_98 = (undefined4 ****)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar4 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar4 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar9 = (*(code *)puVar4[3])(pcVar2,&local_98);
        if (iVar9 != 0) {
          FUN_01aaa328(iVar5,pcVar2,puVar4[4],&local_98,&local_40);
        }
      }
      goto LAB_01205348;
    }
  }
  else {
    iVar5 = DAT_01d4ca58;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 == 0)) {
LAB_01205348:
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar13;
        bVar1 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar1);
      *piVar13 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019a2ffc(piVar13);
      }
      FUN_019bb7e0(local_d0,local_cc);
      if ((undefined4 ***)0x1 < local_e8) {
        FUN_006676f8(auStack_e4);
      }
      return;
    }
    local_60 = *(undefined4 *)(DAT_01d4ca58 + 0x14);
    local_5c = *(undefined4 *)(DAT_01d4ca58 + 0x18);
    local_64 = 1;
    DataMemoryBarrier(0xb);
    puVar4 = DAT_01d4edc8;
    pcVar2 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      puVar4 = &DAT_01cfc5e0;
      pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar9 = (*(code *)puVar4[3])(pcVar2,&local_64);
    if (iVar9 == 0) goto LAB_01205348;
    if (*(undefined2 **)(DAT_01d4ca58 + 0x20) != (undefined2 *)0x0) {
      local_94 = &local_40;
      local_50 = *(int **)(DAT_01d4ca58 + 0x24);
      local_4c = *(code **)(DAT_01d4ca58 + 0x28);
      local_98 = &local_58;
      local_30 = &local_98;
      local_48 = (undefined4 ****)0x0;
      local_2c = (undefined4 ****)&DAT_00000001;
      local_90 = (int *)&DAT_01d2ea4c;
      local_3c = (undefined4 ****)0x95;
      local_40 = (undefined4 ****)0x40211a;
      local_58 = *(undefined4 *****)(DAT_01d4ca58 + 0x1c);
      local_54 = *(undefined2 **)(DAT_01d4ca58 + 0x20);
      local_28 = (int *)(DAT_01d4ca58 + 0x1c);
      FUN_01aaa328(iVar5,pcVar2,puVar4[4],&local_64,&local_30);
      goto LAB_01205348;
    }
  }
  puVar8 = &DAT_01c235f8;
LAB_01205560:
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar8);
}

