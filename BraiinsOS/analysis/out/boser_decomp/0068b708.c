// FUN_0068b708 @ 0068b708 size=2144 calls_out=13 calls_in=2
// strings: Ignoring telemetry API usage config with window_duration_min set to 0. | api_logging::manageropen/utils-rs/api-logging/src/manager.rsevent open/utils-rs/api-logging/src/manager.rs:163 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Ignoring telemetry API usage config with max_user_agents set to 0. | Ignoring telemetry API usage config with max_endpoints set to 0.

void FUN_0068b708(undefined4 param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int ****ppppiVar13;
  undefined4 *puVar14;
  int *****pppppiVar15;
  undefined4 *****local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  char *local_78;
  undefined4 local_74;
  int ***local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int ***local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int ***local_58;
  undefined4 local_54;
  undefined4 local_50;
  int ****local_4c;
  char **local_48;
  undefined4 *local_44;
  int ***local_40;
  int iStack_3c;
  int iStack_38;
  undefined1 local_34;
  undefined2 uStack_33;
  uint uStack_31;
  undefined1 uStack_2d;
  undefined4 ****local_2c;
  int *****local_28;
  undefined1 *local_24;
  
  cVar7 = (char)param_3[3];
  if (cVar7 == '\x02') {
    FUN_012e310c(param_2 + 0x98);
    iVar8 = FUN_0069bf2c(param_2 + 0x9c);
    *(undefined1 *)(iVar8 + 0x6c) = 1;
    *(undefined1 *)(iVar8 + 0x5c) = 1;
    *(undefined1 *)(iVar8 + 0x4c) = 1;
    *(undefined1 *)(iVar8 + 0x3c) = 1;
    *(undefined1 *)(iVar8 + 0x2c) = 1;
    *(undefined1 *)(iVar8 + 0x1c) = 1;
    *(undefined1 *)(iVar8 + 0xc) = 1;
    *(undefined1 *)(iVar8 + 0x71) = 0;
    piVar9 = (int *)(param_2 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar6);
    *piVar9 = *piVar9 + 2;
    FUN_009dd354(param_2 + 0x98);
    iVar8 = 0;
    do {
      FUN_019e03e8(param_2 + 8 + iVar8);
      iVar8 = iVar8 + 0x10;
    } while (iVar8 != 0x80);
    local_34 = 2;
    FUN_0069dd24(param_1,&local_40);
    return;
  }
  local_40 = (int ***)*param_3;
  if (local_40 == (int ***)0x0) {
    if ((DAT_01d50f88 < 4) &&
       (((DAT_01d4b5b0 - 1 < 2 ||
         ((DAT_01d4b5b0 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4b5a8), cVar7 != '\0')))) &&
        (iVar8 = FUN_01aaa278(DAT_01d4b5a8), iVar8 != 0)))) {
      iStack_3c = *(int *)(DAT_01d4b5a8 + 0x20);
      if (iStack_3c == 0) {
LAB_0068bf20:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04d0c);
      }
      local_48 = &local_78;
      iStack_38 = *(undefined4 *)(DAT_01d4b5a8 + 0x24);
      uStack_31 = *(uint *)(DAT_01d4b5a8 + 0x28);
      local_7c = (undefined4 *)(DAT_01d4b5a8 + 0x1c);
      local_40 = (int ***)*local_7c;
      local_4c = &local_40;
      local_84 = &local_4c;
      local_34 = (undefined1)uStack_31;
      uStack_33 = (undefined2)(uStack_31 >> 8);
      uStack_31 = uStack_31 >> 0x18;
      uStack_2d = 0;
      pppppiVar15 = (int *****)&local_84;
      local_80 = 1;
      local_74 = 0x8d;
      local_44 = (undefined4 *)&DAT_01d2ea4c;
      local_78 = "Ignoring telemetry API usage config with window_duration_min set to 0.";
      FUN_01aaaecc(DAT_01d4b5a8,pppppiVar15);
      iVar8 = DAT_01d4b5a8;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 2) {
        return;
      }
      local_28 = *(int ******)(DAT_01d4b5a8 + 0x14);
      local_24 = *(undefined1 **)(DAT_01d4b5a8 + 0x18);
      local_2c = (undefined4 ****)0x2;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
      }
      pcVar11 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar10 = (*(code *)puVar14[3])(pcVar11,&local_2c);
      if (iVar10 == 0) {
        return;
      }
      uVar12 = puVar14[4];
      ppppiVar13 = (int ****)&local_2c;
      goto LAB_0068bec4;
    }
    iVar8 = DAT_01d4b5a8;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 2) {
      return;
    }
    local_6c = *(undefined4 *)(DAT_01d4b5a8 + 0x14);
    local_68 = *(undefined4 *)(DAT_01d4b5a8 + 0x18);
    local_70 = (int ***)0x2;
    DataMemoryBarrier(0xb);
    puVar14 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar14 = &DAT_01cfc5e0;
    }
    pcVar11 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar10 = (*(code *)puVar14[3])(pcVar11,&local_70);
    if (iVar10 == 0) {
      return;
    }
    local_44 = (undefined4 *)(DAT_01d4b5a8 + 0x1c);
    local_40 = (int ***)*local_44;
    iStack_3c = *(int *)(DAT_01d4b5a8 + 0x20);
    if (iStack_3c == 0) goto LAB_0068bf20;
    iStack_38 = *(undefined4 *)(DAT_01d4b5a8 + 0x24);
    uStack_31 = *(uint *)(DAT_01d4b5a8 + 0x28);
    local_34 = (undefined1)uStack_31;
    uStack_33 = (undefined2)(uStack_31 >> 8);
    uStack_31 = uStack_31 >> 0x18;
    local_84 = (undefined4 *****)0x3d4ca3;
    local_80 = 0x8d;
    ppppiVar13 = &local_70;
  }
  else {
    iStack_3c = param_3[1];
    if (iStack_3c == 0) {
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4b598 - 1 < 2 ||
           ((DAT_01d4b598 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4b590), cVar7 != '\0')))))) &&
         (iVar8 = FUN_01aaa278(DAT_01d4b590), iVar8 != 0)) {
        local_44 = (undefined4 *)(DAT_01d4b590 + 0x1c);
        local_40 = (int ***)*local_44;
        iStack_3c = *(int *)(DAT_01d4b590 + 0x20);
        if (iStack_3c != 0) {
          local_28 = (int *****)&local_84;
          iStack_38 = *(undefined4 *)(DAT_01d4b590 + 0x24);
          uStack_31 = *(uint *)(DAT_01d4b590 + 0x28);
          local_2c = &local_40;
          local_4c = (int ****)&local_2c;
          local_34 = (undefined1)uStack_31;
          uStack_33 = (undefined2)(uStack_31 >> 8);
          uStack_31 = uStack_31 >> 0x18;
          uStack_2d = 0;
          local_48 = (char **)0x1;
          local_80 = 0x85;
          local_24 = &DAT_01d2ea4c;
          local_84 = (undefined4 *****)0x3d4ce9;
          FUN_0068c0ec(&local_4c);
          return;
        }
LAB_0068bf38:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04d1c);
      }
      iVar8 = DAT_01d4b590;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 2) {
        return;
      }
      local_60 = *(undefined4 *)(DAT_01d4b590 + 0x14);
      local_5c = *(undefined4 *)(DAT_01d4b590 + 0x18);
      local_64 = (int ***)0x2;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
      }
      pcVar11 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar10 = (*(code *)puVar14[3])(pcVar11,&local_64);
      if (iVar10 == 0) {
        return;
      }
      local_44 = (undefined4 *)(DAT_01d4b590 + 0x1c);
      local_40 = (int ***)*local_44;
      iStack_3c = *(int *)(DAT_01d4b590 + 0x20);
      if (iStack_3c == 0) goto LAB_0068bf38;
      iStack_38 = *(undefined4 *)(DAT_01d4b590 + 0x24);
      uStack_31 = *(uint *)(DAT_01d4b590 + 0x28);
      local_34 = (undefined1)uStack_31;
      uStack_33 = (undefined2)(uStack_31 >> 8);
      uStack_31 = uStack_31 >> 0x18;
      local_84 = (undefined4 *****)0x3d4ce9;
      local_80 = 0x85;
      ppppiVar13 = &local_64;
    }
    else {
      iStack_38 = param_3[2];
      if (iStack_38 != 0) {
        iVar8 = param_3[3];
        local_34 = (undefined1)iVar8;
        uStack_33 = (undefined2)((uint)iVar8 >> 8);
        uStack_31._1_3_ = (undefined3)((uint)*(undefined4 *)((int)param_3 + 0xf) >> 8);
        uStack_31._0_1_ = (undefined1)((uint)iVar8 >> 0x18);
        FUN_0069dd24(param_1,&local_40);
        FUN_012e310c(param_2 + 0x98);
        iVar10 = FUN_0069bf2c(param_2 + 0x9c);
        uVar1 = *(undefined1 *)((int)param_3 + 0xd);
        uVar2 = *(undefined1 *)((int)param_3 + 0xe);
        uVar3 = *(undefined1 *)((int)param_3 + 0xf);
        iVar8 = param_3[4];
        *(char *)(iVar10 + 0xc) = cVar7;
        uVar4 = *(undefined1 *)((int)param_3 + 0x12);
        uVar5 = *(undefined1 *)((int)param_3 + 0x11);
        *(undefined1 *)(iVar10 + 0x71) = 1;
        *(undefined1 *)(iVar10 + 0x1c) = uVar1;
        *(undefined1 *)(iVar10 + 0x2c) = uVar2;
        *(undefined1 *)(iVar10 + 0x3c) = uVar3;
        *(char *)(iVar10 + 0x4c) = (char)iVar8;
        *(undefined1 *)(iVar10 + 0x5c) = uVar5;
        *(undefined1 *)(iVar10 + 0x6c) = uVar4;
        piVar9 = (int *)(param_2 + 0xa0);
        DataMemoryBarrier(0xb);
        do {
          bVar6 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar6);
        *piVar9 = *piVar9 + 2;
        FUN_009dd354(param_2 + 0x98);
        iVar8 = 0;
        do {
          FUN_019e03e8(param_2 + 8 + iVar8);
          iVar8 = iVar8 + 0x10;
        } while (iVar8 != 0x80);
        return;
      }
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4b5a4 - 1 < 2 ||
           ((DAT_01d4b5a4 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4b59c), cVar7 != '\0')))))) &&
         (iVar8 = FUN_01aaa278(DAT_01d4b59c), iVar8 != 0)) {
        local_44 = (undefined4 *)(DAT_01d4b59c + 0x1c);
        local_40 = (int ***)*local_44;
        iStack_3c = *(int *)(DAT_01d4b59c + 0x20);
        if (iStack_3c != 0) {
          local_28 = (int *****)&local_84;
          iStack_38 = *(undefined4 *)(DAT_01d4b59c + 0x24);
          uStack_31 = *(uint *)(DAT_01d4b59c + 0x28);
          local_2c = &local_40;
          local_4c = (int ****)&local_2c;
          local_34 = (undefined1)uStack_31;
          uStack_33 = (undefined2)(uStack_31 >> 8);
          uStack_31 = uStack_31 >> 0x18;
          uStack_2d = 0;
          local_48 = (char **)0x1;
          local_80 = 0x81;
          local_24 = &DAT_01d2ea4c;
          local_84 = (undefined4 *****)0x3d4d2b;
          FUN_0068c1e4(&local_4c);
          return;
        }
LAB_0068bf50:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04d2c);
      }
      iVar8 = DAT_01d4b59c;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 2) {
        return;
      }
      local_54 = *(undefined4 *)(DAT_01d4b59c + 0x14);
      local_50 = *(undefined4 *)(DAT_01d4b59c + 0x18);
      local_58 = (int ***)0x2;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
      }
      pcVar11 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar10 = (*(code *)puVar14[3])(pcVar11,&local_58);
      if (iVar10 == 0) {
        return;
      }
      local_44 = (undefined4 *)(DAT_01d4b59c + 0x1c);
      local_40 = (int ***)*local_44;
      iStack_3c = *(int *)(DAT_01d4b59c + 0x20);
      if (iStack_3c == 0) goto LAB_0068bf50;
      iStack_38 = *(undefined4 *)(DAT_01d4b59c + 0x24);
      uStack_31 = *(uint *)(DAT_01d4b59c + 0x28);
      local_34 = (undefined1)uStack_31;
      uStack_33 = (undefined2)(uStack_31 >> 8);
      uStack_31 = uStack_31 >> 0x18;
      local_84 = (undefined4 *****)0x3d4d2b;
      local_80 = 0x81;
      ppppiVar13 = &local_58;
    }
  }
  local_24 = &DAT_01d2ea4c;
  local_28 = (int *****)&local_84;
  local_2c = &local_40;
  uStack_2d = 0;
  local_48 = (char **)&DAT_00000001;
  local_4c = (int ****)&local_2c;
  pppppiVar15 = &local_4c;
  uVar12 = puVar14[4];
LAB_0068bec4:
  FUN_01aaa328(iVar8,pcVar11,uVar12,ppppiVar13,pppppiVar15);
  return;
}

