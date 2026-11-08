// FUN_00e903b4 @ 00e903b4 size=3008 calls_out=28 calls_in=3
// strings: /var/run/bosminer.pid | /var/run/bosminer.pid | /var/run/bosminer.pid | background task failed | bosminer-am- | bosminer-plus-

void FUN_00e903b4(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint ***pppuVar8;
  undefined4 *puVar9;
  uint ****ppppuVar10;
  uint ****ppppuVar11;
  undefined4 uVar12;
  uint ****ppppuVar13;
  int *piVar14;
  bool bVar15;
  undefined8 uVar16;
  int *local_298;
  int *local_294;
  undefined1 auStack_288 [96];
  uint ****local_228;
  uint ****local_224;
  undefined4 local_220;
  uint ****local_21c;
  uint ****local_218;
  uint ****local_214;
  uint ****local_210;
  uint ****local_20c;
  uint uStack_208;
  uint ****local_204;
  int local_200;
  int local_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  uint ****local_110;
  int local_10c;
  int local_104;
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
  switch((char)param_2[0x15]) {
  case '\0':
    *(undefined1 *)(param_2 + 3) = 0;
switchD_00e90414_caseD_0:
    iVar7 = 0x15;
    pcVar6 = "/var/run/bosminer.pid";
    param_2[4] = (int)"/var/run/bosminer.pid";
    param_2[5] = 0x15;
    *(undefined1 *)(param_2 + 0xd) = 0;
LAB_00e90454:
    param_2[6] = (int)pcVar6;
    param_2[7] = iVar7;
    FUN_019afae4(&local_68,pcVar6,iVar7);
    param_2[8] = (int)local_68;
    param_2[9] = (int)local_64;
    param_2[10] = (int)local_60;
    *(undefined1 *)(param_2 + 0xc) = 0;
switchD_00e90a40_caseD_0:
    local_58 = (uint ****)param_2[8];
    local_54 = (uint ****)param_2[9];
    local_50 = (uint ****)param_2[10];
    iVar7 = FUN_007972a8(&local_58,&DAT_01c230d0);
    param_2[0xb] = iVar7;
LAB_00e904b0:
    local_298 = param_2 + 0xd;
    piVar14 = param_2 + 0xc;
    FUN_00798728(&local_210,iVar7,*param_3);
    if (local_210 == (uint ****)0x2) {
      *(undefined1 *)piVar14 = 3;
LAB_00e904d8:
      uVar2 = 3;
      *(undefined1 *)local_298 = 3;
      goto LAB_00e90c14;
    }
    local_40 = local_210;
    local_3c = local_20c;
    local_38 = (undefined1)uStack_208;
    uStack_37 = (undefined1)(uStack_208 >> 8);
    uStack_36 = (undefined1)(uStack_208 >> 0x10);
    uStack_35 = (undefined1)(uStack_208 >> 0x18);
    local_34 = local_204;
    local_30 = local_200;
    iStack_2c = local_1fc;
    piVar4 = (int *)param_2[0xb];
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar1) goto LAB_00e90528;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00e90528:
      (**(code **)(piVar4[2] + 0x10))();
    }
    if (local_40 == (uint ****)&DAT_00000001) {
      FUN_019a18a8(&local_210,0x28,"background task failed",0x16);
      ppppuVar11 = local_20c;
      ppppuVar10 = local_210;
      FUN_00e917d8(&local_40);
      *(undefined1 *)piVar14 = 1;
      ppppuVar13 = (uint ****)&DAT_80000000;
    }
    else {
      ppppuVar10 = (uint ****)CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,local_38)));
      *(undefined1 *)piVar14 = 1;
      ppppuVar11 = local_34;
      ppppuVar13 = local_3c;
      if (local_3c == (uint ****)&DAT_80000001) goto LAB_00e904d8;
    }
    FUN_00b71be0(param_2 + 8);
    *(undefined1 *)(param_2 + 0xd) = 1;
    *param_2 = (int)ppppuVar13;
    param_2[1] = (int)ppppuVar10;
    param_2[2] = (int)ppppuVar11;
    if (ppppuVar13 != (uint ****)&DAT_80000000) {
      param_2[4] = *param_2;
      param_2[5] = param_2[1];
      param_2[6] = param_2[2];
      uVar16 = FUN_013245a0(param_2[5],param_2[6]);
      ppppuVar10 = (uint ****)(param_2 + 7);
      *(undefined8 *)ppppuVar10 = uVar16;
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d4c844 - 1 < 2 ||
           ((DAT_01d4c844 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c83c), cVar3 != '\0')))) &&
          (iVar7 = FUN_01aaa278(DAT_01d4c83c), iVar7 != 0)))) {
        local_210 = *(uint *****)(DAT_01d4c83c + 0x1c);
        local_20c = *(uint *****)(DAT_01d4c83c + 0x20);
        if (local_20c == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20114);
        }
        local_3c = (uint ****)&local_78;
        uStack_208 = *(uint *)(DAT_01d4c83c + 0x24);
        local_204 = *(uint *****)(DAT_01d4c83c + 0x28);
        local_40 = (uint ****)&local_210;
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
        local_68 = ppppuVar10;
        local_50 = (uint ****)(DAT_01d4c83c + 0x1c);
        FUN_00b8c044(&local_58);
      }
      else {
        iVar7 = DAT_01d4c83c;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_224 = *(uint *****)(DAT_01d4c83c + 0x14);
          local_220 = *(undefined4 *)(DAT_01d4c83c + 0x18);
          local_228 = (uint ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar6 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar9[3])(pcVar6,&local_228);
          if (iVar5 != 0) {
            local_60 = (undefined4 *)(DAT_01d4c83c + 0x1c);
            local_210 = (uint ****)*local_60;
            local_20c = *(uint *****)(DAT_01d4c83c + 0x20);
            if (local_20c == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20114);
            }
            local_54 = (uint ****)&local_21c;
            uStack_208 = *(uint *)(DAT_01d4c83c + 0x24);
            local_204 = *(uint *****)(DAT_01d4c83c + 0x28);
            local_58 = (uint ****)&local_210;
            local_68 = (uint ****)&local_58;
            local_200 = 0;
            local_64 = (undefined **)&DAT_00000001;
            local_218 = (uint ****)&local_78;
            local_50 = (uint ****)&DAT_01d2ea4c;
            local_74 = (uint ****)&DAT_0132b6a0;
            local_21c = (uint ****)&DAT_0058a516;
            local_40 = local_228;
            local_3c = local_224;
            local_38 = (undefined1)local_220;
            uStack_37 = (undefined1)((uint)local_220 >> 8);
            uStack_36 = (undefined1)((uint)local_220 >> 0x10);
            uStack_35 = (undefined1)((uint)local_220 >> 0x18);
            local_78 = ppppuVar10;
            FUN_01aaa328(iVar7,pcVar6,puVar9[4],&local_40,&local_68);
          }
        }
      }
      local_54 = (uint ****)&DAT_0132b6a0;
      local_58 = ppppuVar10;
      FUN_00664898(&local_40,&DAT_005b0279,&local_58);
      uStack_208 = CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,local_38)));
      local_210 = local_40;
      local_20c = local_3c;
      param_2[9] = (int)local_40;
      param_2[10] = (int)local_3c;
      param_2[0xb] = uStack_208;
      param_2[0xc] = (int)local_204;
      param_2[0xd] = local_200;
      param_2[0xe] = local_1fc;
      param_2[0xf] = iStack_1f8;
      param_2[0x10] = iStack_1f4;
      param_2[0x11] = iStack_1f0;
      param_2[0x12] = iStack_1ec;
      param_2[0x13] = iStack_1e8;
      *(undefined1 *)(param_2 + 0x14) = 0;
switchD_00e90860_caseD_0:
      param_2[0xc] = param_2[9];
      param_2[0xd] = param_2[10];
      param_2[0xe] = param_2[0xb];
      FUN_019afae4(&local_78,param_2[0xd],param_2[0xe]);
      param_2[0xf] = (int)local_78;
      param_2[0x10] = (int)local_74;
      param_2[0x11] = (int)local_70;
      *(undefined1 *)(param_2 + 0x13) = 0;
switchD_00e90890_caseD_0:
      local_68 = (uint ****)param_2[0xf];
      local_64 = (undefined **)param_2[0x10];
      local_60 = (undefined4 *)param_2[0x11];
      iVar7 = FUN_00a98224(&local_68,&DAT_01c230d0);
      param_2[0x12] = iVar7;
      goto LAB_00e90be0;
    }
LAB_00e905bc:
    FUN_00eab9a0(param_2);
LAB_00e905c4:
    uStack_35 = 2;
    uStack_37 = 2;
    local_3c = (uint ****)0x1000000;
    local_38 = 0;
    local_40 = (uint ****)0x0;
    FUN_019c7348(&local_210,&local_40);
    local_4c = (uint ****)((int)local_110 + local_10c + 1);
    local_50 = local_110 + 1;
    local_48 = local_104;
    local_58 = local_110;
    local_54 = (uint ****)(~(uint)*local_110 & 0x80808080);
    do {
      do {
        uVar16 = FUN_00ab9798(&local_58);
        iVar7 = (int)((ulonglong)uVar16 >> 0x20);
        bVar15 = (int)uVar16 != 0;
        bVar1 = bVar15 && iVar7 != 0;
        if (!bVar15 || iVar7 == 0) goto LAB_00e90e0c;
      } while (*(int *)(iVar7 + 0xcc) == 0);
      pppuVar8 = *(uint ****)(iVar7 + 200);
      local_90 = pppuVar8;
      iVar7 = FUN_00b8c13c(pppuVar8[1],pppuVar8[2],"bosminer-am-",0xc);
    } while (((iVar7 == 0) &&
             (iVar7 = FUN_00b8c13c(pppuVar8[1],pppuVar8[2],"bosminer-plus-",0xe), iVar7 == 0)) &&
            (iVar7 = FUN_00b8c13c(pppuVar8[1],pppuVar8[2],"bosminer-dummy",0xe), iVar7 == 0));
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4c850 - 1 < 2 ||
         ((DAT_01d4c850 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c848), cVar3 != '\0')))))) &&
       (iVar7 = FUN_01aaa278(DAT_01d4c848), iVar7 != 0)) {
      local_70 = (undefined4 *)(DAT_01d4c848 + 0x1c);
      if (*(uint *****)(DAT_01d4c848 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20124);
      }
      uVar12 = *(undefined4 *)(DAT_01d4c848 + 0x24);
      local_34 = *(uint *****)(DAT_01d4c848 + 0x28);
      local_64 = &local_80;
      local_74 = (uint ****)&DAT_00000001;
      local_7c = (uint ****)&local_21c;
      local_21c = &local_90;
      local_78 = (uint ****)&local_68;
      local_38 = (undefined1)uVar12;
      uStack_37 = (undefined1)((uint)uVar12 >> 8);
      uStack_36 = (undefined1)((uint)uVar12 >> 0x10);
      uStack_35 = (undefined1)((uint)uVar12 >> 0x18);
      local_30 = 0;
      local_60 = (undefined4 *)&DAT_01d2ea4c;
      local_80 = &DAT_005bdccb;
      local_218 = (uint ****)&LAB_0193a90c;
      local_68 = (uint ****)&local_40;
      local_40 = (uint ****)*local_70;
      local_3c = *(uint *****)(DAT_01d4c848 + 0x20);
      FUN_00e11508(&local_78);
    }
    else {
      iVar7 = DAT_01d4c848;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_88 = *(undefined4 *)(DAT_01d4c848 + 0x14);
        local_84 = *(undefined4 *)(DAT_01d4c848 + 0x18);
        local_8c = 5;
        DataMemoryBarrier(0xb);
        puVar9 = DAT_01d4edc8;
        pcVar6 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar9 = &DAT_01cfc5e0;
          pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar9[3])(pcVar6,&local_8c);
        if (iVar5 != 0) {
          local_70 = (undefined4 *)(DAT_01d4c848 + 0x1c);
          if (*(uint *****)(DAT_01d4c848 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20124);
          }
          local_64 = &local_80;
          uVar12 = *(undefined4 *)(DAT_01d4c848 + 0x24);
          local_34 = *(uint *****)(DAT_01d4c848 + 0x28);
          local_78 = (uint ****)&local_68;
          local_74 = (uint ****)&DAT_00000001;
          local_7c = (uint ****)&local_21c;
          local_30 = 0;
          local_21c = &local_90;
          local_38 = (undefined1)uVar12;
          uStack_37 = (undefined1)((uint)uVar12 >> 8);
          uStack_36 = (undefined1)((uint)uVar12 >> 0x10);
          uStack_35 = (undefined1)((uint)uVar12 >> 0x18);
          local_60 = (undefined4 *)&DAT_01d2ea4c;
          local_80 = &DAT_005bdccb;
          local_218 = (uint ****)&LAB_0193a90c;
          local_68 = (uint ****)&local_40;
          local_40 = (uint ****)*local_70;
          local_3c = *(uint *****)(DAT_01d4c848 + 0x20);
          FUN_01aaa328(iVar7,pcVar6,puVar9[4],&local_8c,&local_78);
        }
      }
    }
LAB_00e90e0c:
    FUN_00d463dc(&local_210);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1812c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1812c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[3]) {
    case '\0':
      goto switchD_00e90414_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20104);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20104);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0xd]) {
      case '\0':
        pcVar6 = (char *)param_2[4];
        iVar7 = param_2[5];
        goto LAB_00e90454;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2044c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2044c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0xc]) {
      case '\0':
        goto switchD_00e90a40_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case '\x03':
        iVar7 = param_2[0xb];
      }
      goto LAB_00e904b0;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x14]) {
    case '\0':
      goto switchD_00e90860_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2044c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2044c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x13]) {
    case '\0':
      goto switchD_00e90890_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case '\x03':
      iVar7 = param_2[0x12];
    }
LAB_00e90be0:
    local_298 = param_2 + 9;
    piVar14 = param_2 + 0x13;
    FUN_00798728(&local_40,iVar7,*param_3);
    if (local_40 == (uint ****)0x2) {
      *(undefined1 *)piVar14 = 3;
LAB_00e90c08:
      *(undefined1 *)(param_2 + 0x14) = 3;
      uVar2 = 4;
LAB_00e90c14:
      local_294 = param_2 + 3;
      *(undefined1 *)local_294 = uVar2;
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 3;
      goto LAB_00e90e8c;
    }
    local_50 = (uint ****)CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,local_38)));
    local_58 = local_40;
    local_54 = local_3c;
    local_4c = local_34;
    local_48 = local_30;
    iStack_44 = iStack_2c;
    piVar4 = (int *)param_2[0x12];
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar1) goto LAB_00e90c70;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00e90c70:
      (**(code **)(piVar4[2] + 0x10))();
    }
    if (local_58 == (uint ****)&DAT_00000001) {
      FUN_019a18a8(&local_40,0x28,"background task failed",0x16);
      ppppuVar11 = local_3c;
      ppppuVar10 = local_40;
      FUN_00e917d8(&local_58);
      *(undefined1 *)piVar14 = 1;
      local_214 = ppppuVar11;
      ppppuVar11 = (uint ****)&DAT_80000000;
    }
    else {
      *(undefined1 *)piVar14 = 1;
      local_214 = local_4c;
      ppppuVar11 = local_54;
      ppppuVar10 = local_50;
      if (local_54 == (uint ****)&DAT_80000001) goto LAB_00e90c08;
    }
    FUN_00b71be0(param_2 + 0xf);
    FUN_019bb7e0(param_2[0xc],param_2[0xd]);
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_21c = ppppuVar11;
    local_218 = ppppuVar10;
    FUN_005f0650(local_298);
    if (ppppuVar11 == (uint ****)&DAT_80000000) {
      FUN_00eab9a0(&local_21c);
      FUN_019bb7e0(param_2[4],param_2[5]);
      if (*param_2 == -0x80000000) goto LAB_00e905bc;
      goto LAB_00e905c4;
    }
    FUN_00eab9a0(&local_21c);
    FUN_019bb7e0(param_2[4],param_2[5]);
    bVar1 = true;
    if (*param_2 == -0x80000000) {
      FUN_00eab9a0(param_2);
    }
  }
  *(undefined1 *)(param_2 + 3) = 1;
  FUN_00e7a724(param_2);
  if (bVar1) {
    ppppuVar11 = (uint ****)0x0;
    ppppuVar10 = (uint ****)&DAT_00000003;
  }
  else {
    FUN_01a71aac(&local_210,9,&DAT_003f2fc4,0x17);
    ppppuVar11 = local_20c;
    ppppuVar10 = local_210;
    FUN_01bed4e2(auStack_288,&uStack_208,0x60);
  }
  *param_1 = ppppuVar10;
  param_1[1] = ppppuVar11;
  FUN_01bed4e2(param_1 + 2,auStack_288,0x60);
  uVar2 = 1;
LAB_00e90e8c:
  *(undefined1 *)(param_2 + 0x15) = uVar2;
  return;
}

