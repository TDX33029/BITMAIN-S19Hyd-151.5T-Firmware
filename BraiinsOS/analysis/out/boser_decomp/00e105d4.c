// FUN_00e105d4 @ 00e105d4 size=2884 calls_out=25 calls_in=2
// strings: /var/run/bosminer.pid | /var/run/bosminer.pid | /var/run/bosminer.pid | background task failed | boser::monitor::bosmineropen/boser/boser/src/monitor/bosminer.rsevent open/boser/boser/src/monitor/bosminer.rs:69 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined1 FUN_00e105d4(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint ****ppppuVar7;
  uint ***pppuVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  uint ****ppppuVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint ****ppppuVar14;
  bool bVar15;
  undefined8 uVar16;
  int *local_230;
  uint ****local_228;
  uint ****local_224;
  undefined4 local_220;
  uint ****local_21c;
  uint ****local_218;
  uint ****local_214;
  uint ****local_210;
  uint ****local_20c;
  int local_208;
  uint ****local_204;
  int local_200;
  int local_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  uint ***local_110;
  int local_10c;
  undefined4 local_104;
  uint ***local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined *local_80;
  uint ****local_7c;
  uint ****local_78;
  uint ****local_74;
  undefined4 *local_70;
  uint ****local_68;
  undefined **local_64;
  undefined4 *local_60;
  uint ****local_58;
  uint ****local_54;
  uint ****local_50;
  uint ****local_4c;
  int local_48;
  int iStack_44;
  uint ****local_40;
  uint ****local_3c;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  uint ****local_34;
  int local_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    iVar6 = 0x15;
    pcVar5 = "/var/run/bosminer.pid";
    param_1[4] = (int)"/var/run/bosminer.pid";
    param_1[5] = 0x15;
    *(undefined1 *)(param_1 + 0xd) = 0;
LAB_00e10660:
    param_1[6] = (int)pcVar5;
    param_1[7] = iVar6;
    FUN_019afae4(&local_68,pcVar5,iVar6);
    param_1[8] = (int)local_68;
    param_1[9] = (int)local_64;
    param_1[10] = (int)local_60;
    *(undefined1 *)(param_1 + 0xc) = 0;
switchD_00e107c0_caseD_0:
    local_58 = (uint ****)param_1[8];
    local_54 = (uint ****)param_1[9];
    local_50 = (uint ****)param_1[10];
    iVar6 = FUN_007972a8(&local_58,&DAT_01c230d0);
    param_1[0xb] = iVar6;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20104);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20104);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xd]) {
    case '\0':
      pcVar5 = (char *)param_1[4];
      iVar6 = param_1[5];
      goto LAB_00e10660;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2044c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2044c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xc]) {
    case '\0':
      goto switchD_00e107c0_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case '\x03':
      iVar6 = param_1[0xb];
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x14]) {
    case '\0':
      goto switchD_00e1071c_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2044c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2044c);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x13]) {
      case '\0':
        goto switchD_00e10748_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case '\x03':
        iVar6 = param_1[0x12];
      }
    }
    goto LAB_00e10b8c;
  }
  local_230 = param_1 + 8;
  piVar13 = param_1 + 0xc;
  FUN_00798728(&local_210,iVar6,*param_2);
  if (local_210 == (uint ****)0x2) {
    *(undefined1 *)piVar13 = 3;
LAB_00e106f4:
    uVar1 = 3;
    uVar10 = 2;
    *(undefined1 *)(param_1 + 0xd) = 3;
    goto LAB_00e11020;
  }
  local_40 = local_210;
  local_3c = local_20c;
  local_38 = (undefined1)local_208;
  uStack_37 = (undefined1)((uint)local_208 >> 8);
  uStack_36 = (undefined1)((uint)local_208 >> 0x10);
  uStack_35 = (undefined1)((uint)local_208 >> 0x18);
  local_34 = local_204;
  local_30 = local_200;
  iStack_2c = local_1fc;
  piVar3 = (int *)param_1[0xb];
  if (*piVar3 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar15 = (bool)hasExclusiveAccess(piVar3);
    if (!bVar15) goto LAB_00e107e8;
    *piVar3 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00e107e8:
    (**(code **)(piVar3[2] + 0x10))();
  }
  if (local_40 == (uint ****)&DAT_00000001) {
    FUN_019a18a8(&local_210,0x28,"background task failed",0x16);
    ppppuVar11 = local_20c;
    ppppuVar7 = local_210;
    FUN_00e114b8(&local_40);
    *(undefined1 *)piVar13 = 1;
    ppppuVar14 = (uint ****)&DAT_80000000;
  }
  else {
    ppppuVar7 = (uint ****)CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,local_38)));
    *(undefined1 *)piVar13 = 1;
    ppppuVar11 = local_34;
    ppppuVar14 = local_3c;
    if (local_3c == (uint ****)&DAT_80000001) goto LAB_00e106f4;
  }
  FUN_00b71be0(local_230);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *param_1 = (int)ppppuVar14;
  param_1[1] = (int)ppppuVar7;
  param_1[2] = (int)ppppuVar11;
  if (ppppuVar14 == (uint ****)&DAT_80000000) {
LAB_00e10cc0:
    FUN_00e114e4(param_1);
LAB_00e10cc8:
    uStack_35 = 2;
    uStack_37 = 2;
    local_3c = (uint ****)0x1000000;
    local_38 = 0;
    local_40 = (uint ****)0x0;
    FUN_019c7348(&local_210,&local_40);
    local_4c = (uint ****)((int)local_110 + local_10c + 1);
    local_50 = (uint ****)(local_110 + 1);
    local_48 = local_104;
    local_58 = (uint ****)local_110;
    local_54 = (uint ****)(~(uint)*local_110 & 0x80808080);
    do {
      do {
        uVar16 = FUN_00ab9798(&local_58);
        iVar6 = (int)((ulonglong)uVar16 >> 0x20);
        bVar15 = (int)uVar16 != 0;
        uVar10 = bVar15 && iVar6 != 0;
        if (!bVar15 || iVar6 == 0) goto LAB_00e11010;
      } while (*(int *)(iVar6 + 0xcc) == 0);
      pppuVar8 = *(uint ****)(iVar6 + 200);
      local_90 = pppuVar8;
      iVar6 = FUN_00b8c13c(pppuVar8[1],pppuVar8[2],"bosminer-am-",0xc);
    } while (((iVar6 == 0) &&
             (iVar6 = FUN_00b8c13c(pppuVar8[1],pppuVar8[2],"bosminer-plus-",0xe), iVar6 == 0)) &&
            (iVar6 = FUN_00b8c13c(pppuVar8[1],pppuVar8[2],"bosminer-dummy",0xe), iVar6 == 0));
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4c850 - 1 < 2 ||
         ((DAT_01d4c850 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4c848), cVar2 != '\0')))))) &&
       (iVar6 = FUN_01aaa278(DAT_01d4c848), iVar6 != 0)) {
      local_70 = (undefined4 *)(DAT_01d4c848 + 0x1c);
      if (*(int *)(DAT_01d4c848 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20124);
      }
      uVar9 = *(undefined4 *)(DAT_01d4c848 + 0x24);
      local_64 = &local_80;
      local_34 = *(uint *****)(DAT_01d4c848 + 0x28);
      local_74 = (uint ****)&DAT_00000001;
      local_7c = (uint ****)&local_21c;
      local_78 = (uint ****)&local_68;
      local_21c = &local_90;
      local_30 = 0;
      local_38 = (undefined1)uVar9;
      uStack_37 = (undefined1)((uint)uVar9 >> 8);
      uStack_36 = (undefined1)((uint)uVar9 >> 0x10);
      uStack_35 = (undefined1)((uint)uVar9 >> 0x18);
      local_60 = (undefined4 *)&DAT_01d2ea4c;
      local_80 = &DAT_005bdccb;
      local_218 = (uint ****)&LAB_0193a90c;
      local_68 = (uint ****)&local_40;
      local_40 = (uint ****)*local_70;
      local_3c = (uint ****)*(int *)(DAT_01d4c848 + 0x20);
      FUN_00e11508(&local_78);
    }
    else {
      iVar6 = DAT_01d4c848;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_88 = *(undefined4 *)(DAT_01d4c848 + 0x14);
        local_84 = *(undefined4 *)(DAT_01d4c848 + 0x18);
        local_8c = 5;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar12[3])(pcVar5,&local_8c);
        if (iVar4 != 0) {
          local_70 = (undefined4 *)(DAT_01d4c848 + 0x1c);
          if (*(int *)(DAT_01d4c848 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20124);
          }
          uVar9 = *(undefined4 *)(DAT_01d4c848 + 0x24);
          local_64 = &local_80;
          local_34 = *(uint *****)(DAT_01d4c848 + 0x28);
          local_78 = (uint ****)&local_68;
          local_74 = (uint ****)&DAT_00000001;
          local_7c = (uint ****)&local_21c;
          local_21c = &local_90;
          local_30 = 0;
          local_38 = (undefined1)uVar9;
          uStack_37 = (undefined1)((uint)uVar9 >> 8);
          uStack_36 = (undefined1)((uint)uVar9 >> 0x10);
          uStack_35 = (undefined1)((uint)uVar9 >> 0x18);
          local_60 = (undefined4 *)&DAT_01d2ea4c;
          local_80 = &DAT_005bdccb;
          local_218 = (uint ****)&LAB_0193a90c;
          local_68 = (uint ****)&local_40;
          local_40 = (uint ****)*local_70;
          local_3c = (uint ****)*(int *)(DAT_01d4c848 + 0x20);
          FUN_01aaa328(iVar6,pcVar5,puVar12[4],&local_8c,&local_78);
        }
      }
    }
LAB_00e11010:
    FUN_00d463dc(&local_210);
  }
  else {
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    uVar16 = FUN_013245a0(param_1[5],param_1[6]);
    ppppuVar7 = (uint ****)(param_1 + 7);
    *(undefined8 *)ppppuVar7 = uVar16;
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4c844 - 1 < 2 ||
         ((DAT_01d4c844 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4c83c), cVar2 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d4c83c), iVar6 != 0)))) {
      local_210 = *(uint *****)(DAT_01d4c83c + 0x1c);
      local_20c = *(uint *****)(DAT_01d4c83c + 0x20);
      if (local_20c == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20114);
      }
      local_208 = *(int *)(DAT_01d4c83c + 0x24);
      local_3c = (uint ****)&local_78;
      local_204 = *(uint *****)(DAT_01d4c83c + 0x28);
      local_58 = (uint ****)&local_40;
      local_54 = (uint ****)0x1;
      local_74 = (uint ****)&local_68;
      local_200 = 0;
      local_38 = 0x4c;
      uStack_37 = 0xea;
      uStack_36 = 0xd2;
      uStack_35 = 1;
      local_78 = (uint ****)&DAT_0058a516;
      local_64 = (undefined **)&DAT_0132b6a0;
      local_68 = ppppuVar7;
      local_50 = (uint ****)(DAT_01d4c83c + 0x1c);
      local_40 = (uint ****)&local_210;
      FUN_00b8c044(&local_58);
    }
    else {
      iVar6 = DAT_01d4c83c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_224 = *(uint *****)(DAT_01d4c83c + 0x14);
        local_220 = *(undefined4 *)(DAT_01d4c83c + 0x18);
        local_228 = (uint ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar12[3])(pcVar5,&local_228);
        if (iVar4 != 0) {
          local_60 = (undefined4 *)(DAT_01d4c83c + 0x1c);
          local_210 = (uint ****)*local_60;
          local_20c = *(uint *****)(DAT_01d4c83c + 0x20);
          if (local_20c == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20114);
          }
          local_54 = (uint ****)&local_21c;
          local_68 = (uint ****)&local_58;
          local_208 = *(int *)(DAT_01d4c83c + 0x24);
          local_204 = *(uint *****)(DAT_01d4c83c + 0x28);
          local_200 = 0;
          local_64 = (undefined **)&DAT_00000001;
          local_50 = (uint ****)&DAT_01d2ea4c;
          local_218 = (uint ****)&local_78;
          local_74 = (uint ****)&DAT_0132b6a0;
          local_21c = (uint ****)&DAT_0058a516;
          local_40 = local_228;
          local_3c = local_224;
          local_38 = (undefined1)local_220;
          uStack_37 = (undefined1)((uint)local_220 >> 8);
          uStack_36 = (undefined1)((uint)local_220 >> 0x10);
          uStack_35 = (undefined1)((uint)local_220 >> 0x18);
          local_78 = ppppuVar7;
          local_58 = (uint ****)&local_210;
          FUN_01aaa328(iVar6,pcVar5,puVar12[4],&local_40,&local_68);
        }
      }
    }
    local_54 = (uint ****)&DAT_0132b6a0;
    local_58 = ppppuVar7;
    FUN_00664898(&local_40,&DAT_005b0279,&local_58);
    local_208 = CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,local_38)));
    local_210 = local_40;
    local_20c = local_3c;
    param_1[9] = (int)local_40;
    param_1[10] = (int)local_3c;
    param_1[0xb] = local_208;
    param_1[0xc] = (int)local_204;
    param_1[0xd] = local_200;
    param_1[0xe] = local_1fc;
    param_1[0xf] = iStack_1f8;
    param_1[0x10] = iStack_1f4;
    param_1[0x11] = iStack_1f0;
    param_1[0x12] = iStack_1ec;
    param_1[0x13] = iStack_1e8;
    *(undefined1 *)(param_1 + 0x14) = 0;
switchD_00e1071c_caseD_0:
    param_1[0xc] = param_1[9];
    param_1[0xd] = param_1[10];
    param_1[0xe] = param_1[0xb];
    FUN_019afae4(&local_78,param_1[0xd],param_1[0xe]);
    param_1[0xf] = (int)local_78;
    param_1[0x10] = (int)local_74;
    param_1[0x11] = (int)local_70;
    *(undefined1 *)(param_1 + 0x13) = 0;
switchD_00e10748_caseD_0:
    local_68 = (uint ****)param_1[0xf];
    local_64 = (undefined **)param_1[0x10];
    local_60 = (undefined4 *)param_1[0x11];
    iVar6 = FUN_00a98224(&local_68,&DAT_01c230d0);
    param_1[0x12] = iVar6;
LAB_00e10b8c:
    local_230 = param_1 + 9;
    piVar13 = param_1 + 0x13;
    FUN_00798728(&local_40,iVar6,*param_2);
    if (local_40 == (uint ****)0x2) {
      *(undefined1 *)piVar13 = 3;
LAB_00e10bb4:
      uVar10 = 2;
      *(undefined1 *)(param_1 + 0x14) = 3;
      uVar1 = 4;
      goto LAB_00e11020;
    }
    local_50 = (uint ****)CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,local_38)));
    local_58 = local_40;
    local_54 = local_3c;
    local_4c = local_34;
    local_48 = local_30;
    iStack_44 = iStack_2c;
    piVar3 = (int *)param_1[0x12];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar15 = (bool)hasExclusiveAccess(piVar3);
      if (!bVar15) goto LAB_00e10c04;
      *piVar3 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00e10c04:
      (**(code **)(piVar3[2] + 0x10))();
    }
    if (local_58 == (uint ****)&DAT_00000001) {
      FUN_019a18a8(&local_40,0x28,"background task failed",0x16);
      ppppuVar11 = local_3c;
      ppppuVar7 = local_40;
      FUN_00e114b8(&local_58);
      *(undefined1 *)piVar13 = 1;
      local_214 = ppppuVar11;
      ppppuVar11 = (uint ****)&DAT_80000000;
    }
    else {
      *(undefined1 *)piVar13 = 1;
      local_214 = local_4c;
      ppppuVar11 = local_54;
      ppppuVar7 = local_50;
      if (local_54 == (uint ****)&DAT_80000001) goto LAB_00e10bb4;
    }
    FUN_00b71be0(param_1 + 0xf);
    FUN_019bb7e0(param_1[0xc],param_1[0xd]);
    *(undefined1 *)(param_1 + 0x14) = 1;
    local_21c = ppppuVar11;
    local_218 = ppppuVar7;
    FUN_005f0650(local_230);
    if (ppppuVar11 == (uint ****)&DAT_80000000) {
      FUN_00e114e4(&local_21c);
      FUN_019bb7e0(param_1[4],param_1[5]);
      if (*param_1 == -0x80000000) goto LAB_00e10cc0;
      goto LAB_00e10cc8;
    }
    FUN_00e114e4(&local_21c);
    FUN_019bb7e0(param_1[4],param_1[5]);
    uVar10 = true;
    if (*param_1 == -0x80000000) {
      FUN_00e114e4(param_1);
    }
  }
  uVar1 = 1;
LAB_00e11020:
  *(undefined1 *)(param_1 + 3) = uVar1;
  return uVar10;
}

