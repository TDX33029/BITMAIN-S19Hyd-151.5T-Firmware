// FUN_00b8a4d0 @ 00b8a4d0 size=5024 calls_out=40 calls_in=3
// strings: /var/run/bosminer.pid | /var/run/bosminer.pid | /var/run/bosminer.pid | background task failed | bosminer-am- | bosminer-plus-

void FUN_00b8a4d0(undefined4 *param_1,undefined4 *param_2,uint ****param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint ***pppuVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint ****ppppuVar12;
  uint ****ppppuVar13;
  uint ****ppppuVar14;
  uint ****ppppuVar15;
  uint ****ppppuVar16;
  uint ****ppppuVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined8 uVar20;
  uint ****local_508;
  undefined4 *local_4ec;
  undefined4 *local_4e8;
  undefined4 *local_4e4;
  uint ****local_4dc;
  undefined4 *local_4d8;
  undefined4 *local_4d4;
  uint ****local_4c8;
  uint ****local_4c4;
  undefined4 local_4c0;
  uint ***local_4bc;
  uint ****local_4b8;
  uint ***local_4b4;
  undefined4 *local_4b0;
  uint ****local_4ac;
  uint ****local_4a8;
  uint ****local_4a4;
  uint ***local_4a0;
  uint ***local_49c;
  uint ***local_498;
  uint ****local_494;
  uint ****local_490;
  uint ****local_48c;
  uint ****local_488;
  uint ****local_484;
  uint ****local_480;
  uint ****ppppuStack_47c;
  uint ****local_478;
  uint ****local_474;
  uint ****local_470;
  uint ****local_468;
  uint ***local_464;
  undefined4 *local_460;
  uint ****local_458;
  uint ****local_454;
  undefined1 local_450;
  undefined1 uStack_44f;
  undefined1 uStack_44e;
  undefined1 uStack_44d;
  uint ****local_44c;
  uint ****local_448;
  uint ****ppppuStack_444;
  uint ****local_240;
  uint ****local_23c;
  uint ****local_238;
  uint ****local_234;
  uint ****local_230;
  uint ****local_22c;
  uint ****local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  uint ****local_140;
  int local_13c;
  uint ****local_134;
  
  ppppuVar13 = (uint ****)(param_2 + 0xb);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 6)) {
  case 0:
    *(undefined2 *)((int)param_2 + 0x1a) = 1;
    param_2[7] = *param_2;
    param_2[8] = param_2[1];
    param_2[9] = param_2[2];
    *(undefined1 *)(param_2 + 0xd) = 0;
switchD_00b8a564_caseD_0:
    uVar8 = 0x15;
    pcVar7 = "/var/run/bosminer.pid";
    param_2[0xe] = "/var/run/bosminer.pid";
    param_2[0xf] = 0x15;
    *(undefined1 *)(param_2 + 0x17) = 0;
LAB_00b8a5a0:
    param_2[0x10] = pcVar7;
    param_2[0x11] = uVar8;
    FUN_019afae4(&local_468,pcVar7,uVar8);
    param_2[0x12] = local_468;
    param_2[0x13] = local_464;
    param_2[0x14] = local_460;
    *(undefined1 *)(param_2 + 0x16) = 0;
switchD_00b8acac_caseD_0:
    local_490 = (uint ****)param_2[0x12];
    local_48c = (uint ****)param_2[0x13];
    local_488 = (uint ****)param_2[0x14];
    uVar8 = FUN_007972a8(&local_490,&DAT_01c230d0);
    param_2[0x15] = uVar8;
LAB_00b8a608:
    local_4d8 = param_2 + 10;
    local_4e8 = param_2 + 0x12;
    puVar10 = param_2 + 0x16;
    FUN_00798728(&local_240,uVar8,*param_3);
    if (local_240 == (uint ****)0x2) {
      *(undefined1 *)puVar10 = 3;
LAB_00b8a630:
      uVar2 = 3;
      *(undefined1 *)(param_2 + 0x17) = 3;
      goto LAB_00b8ae88;
    }
    local_458 = local_240;
    local_454 = local_23c;
    local_450 = SUB41(local_238,0);
    uStack_44f = (undefined1)((uint)local_238 >> 8);
    uStack_44e = (undefined1)((uint)local_238 >> 0x10);
    uStack_44d = (undefined1)((uint)local_238 >> 0x18);
    local_44c = local_234;
    local_448 = local_230;
    ppppuStack_444 = local_22c;
    piVar4 = (int *)param_2[0x15];
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar1) goto LAB_00b8a708;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00b8a708:
      (**(code **)(piVar4[2] + 0x10))();
    }
    if (local_458 == (uint ****)&DAT_00000001) {
      FUN_019a18a8(&local_240,0x28,"background task failed",0x16);
      ppppuVar15 = local_23c;
      ppppuVar14 = local_240;
      FUN_00b8bfc8(&local_458);
      *(undefined1 *)puVar10 = 1;
      ppppuVar12 = (uint ****)&DAT_80000000;
    }
    else {
      ppppuVar14 = (uint ****)
                   CONCAT13(uStack_44d,CONCAT12(uStack_44e,CONCAT11(uStack_44f,local_450)));
      *(undefined1 *)puVar10 = 1;
      ppppuVar15 = local_44c;
      ppppuVar12 = local_454;
      if (local_454 == (uint ****)&DAT_80000001) goto LAB_00b8a630;
    }
    FUN_00b71be0(local_4e8);
    *(undefined1 *)(param_2 + 0x17) = 1;
    param_2[10] = ppppuVar12;
    *ppppuVar13 = (uint ***)ppppuVar14;
    param_2[0xc] = ppppuVar15;
    if (ppppuVar12 != (uint ****)&DAT_80000000) {
      param_2[0xe] = *local_4d8;
      param_2[0xf] = param_2[0xb];
      param_2[0x10] = param_2[0xc];
      uVar20 = FUN_013245a0(param_2[0xf],param_2[0x10]);
      ppppuVar14 = (uint ****)(param_2 + 0x11);
      *(undefined8 *)ppppuVar14 = uVar20;
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d4c844 - 1 < 2 ||
           ((DAT_01d4c844 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c83c), cVar3 != '\0')))) &&
          (iVar5 = FUN_01aaa278(DAT_01d4c83c), iVar5 != 0)))) {
        local_240 = *(uint *****)(DAT_01d4c83c + 0x1c);
        local_23c = *(uint *****)(DAT_01d4c83c + 0x20);
        if (local_23c == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20114);
        }
        local_454 = (uint ****)&local_478;
        local_238 = *(uint *****)(DAT_01d4c83c + 0x24);
        local_234 = *(uint *****)(DAT_01d4c83c + 0x28);
        local_458 = (uint ****)&local_240;
        local_490 = (uint ****)&local_458;
        local_48c = (uint ****)0x1;
        local_474 = (uint ****)&local_468;
        local_230 = (uint ****)0x0;
        local_450 = 0x4c;
        uStack_44f = 0xea;
        uStack_44e = 0xd2;
        uStack_44d = 1;
        local_478 = (uint ****)&DAT_0058a516;
        local_464 = (uint ***)&DAT_0132b6a0;
        local_488 = (uint ****)(DAT_01d4c83c + 0x1c);
        local_468 = ppppuVar14;
        FUN_00b8c044(&local_490);
      }
      else {
        iVar5 = DAT_01d4c83c;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_4c4 = *(uint *****)(DAT_01d4c83c + 0x14);
          local_4c0 = *(undefined4 *)(DAT_01d4c83c + 0x18);
          local_4c8 = (uint ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar10 = DAT_01d4edc8;
          pcVar7 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar10 = &DAT_01cfc5e0;
            pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar10[3])(pcVar7,&local_4c8);
          if (iVar6 != 0) {
            local_460 = (undefined4 *)(DAT_01d4c83c + 0x1c);
            local_240 = (uint ****)*local_460;
            local_23c = *(uint *****)(DAT_01d4c83c + 0x20);
            if (local_23c == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20114);
            }
            local_48c = (uint ****)&local_4ac;
            local_238 = *(uint *****)(DAT_01d4c83c + 0x24);
            local_234 = *(uint *****)(DAT_01d4c83c + 0x28);
            local_490 = (uint ****)&local_240;
            local_468 = (uint ****)&local_490;
            local_464 = (uint ***)&DAT_00000001;
            local_4a8 = (uint ****)&local_478;
            local_230 = (uint ****)0x0;
            local_488 = (uint ****)&DAT_01d2ea4c;
            local_474 = (uint ****)&DAT_0132b6a0;
            local_4ac = (uint ****)&DAT_0058a516;
            local_458 = local_4c8;
            local_454 = local_4c4;
            local_450 = (undefined1)local_4c0;
            uStack_44f = (undefined1)((uint)local_4c0 >> 8);
            uStack_44e = (undefined1)((uint)local_4c0 >> 0x10);
            uStack_44d = (undefined1)((uint)local_4c0 >> 0x18);
            local_478 = ppppuVar14;
            FUN_01aaa328(iVar5,pcVar7,puVar10[4],&local_458,&local_468);
          }
        }
      }
      local_48c = (uint ****)&DAT_0132b6a0;
      local_490 = ppppuVar14;
      FUN_00664898(&local_458,&DAT_005b0279,&local_490);
      local_238 = (uint ****)
                  CONCAT13(uStack_44d,CONCAT12(uStack_44e,CONCAT11(uStack_44f,local_450)));
      local_240 = local_458;
      local_23c = local_454;
      param_2[0x13] = local_458;
      param_2[0x14] = local_454;
      param_2[0x15] = local_238;
      param_2[0x16] = local_234;
      param_2[0x17] = local_230;
      param_2[0x18] = local_22c;
      param_2[0x19] = local_228;
      param_2[0x1a] = uStack_224;
      param_2[0x1b] = uStack_220;
      param_2[0x1c] = uStack_21c;
      param_2[0x1d] = uStack_218;
      *(undefined1 *)(param_2 + 0x1e) = 0;
switchD_00b8aa70_caseD_0:
      param_2[0x16] = param_2[0x13];
      param_2[0x17] = param_2[0x14];
      param_2[0x18] = param_2[0x15];
      FUN_019afae4(&local_478,param_2[0x17],param_2[0x18]);
      param_2[0x19] = local_478;
      param_2[0x1a] = local_474;
      param_2[0x1b] = local_470;
      *(undefined1 *)(param_2 + 0x1d) = 0;
switchD_00b8aaa0_caseD_0:
      local_468 = (uint ****)param_2[0x19];
      local_464 = (uint ***)param_2[0x1a];
      local_460 = (undefined4 *)param_2[0x1b];
      uVar8 = FUN_00a98224(&local_468,&DAT_01c230d0);
      param_2[0x1c] = uVar8;
      goto LAB_00b8ae54;
    }
LAB_00b8a7a8:
    FUN_00799fb0(param_2 + 10);
LAB_00b8a7b0:
    uStack_44d = 2;
    uStack_44f = 2;
    local_454 = (uint ****)0x1000000;
    local_450 = 0;
    local_458 = (uint ****)0x0;
    FUN_019c7348(&local_240,&local_458);
    local_484 = (uint ****)((int)local_140 + local_13c + 1);
    local_488 = local_140 + 1;
    local_480 = local_134;
    local_490 = local_140;
    local_48c = (uint ****)(~(uint)*local_140 & 0x80808080);
    do {
      do {
        uVar20 = FUN_00ab9798(&local_490);
        iVar5 = (int)((ulonglong)uVar20 >> 0x20);
        bVar19 = (int)uVar20 != 0;
        bVar1 = bVar19 && iVar5 != 0;
        if (!bVar19 || iVar5 == 0) goto LAB_00b8b0a4;
      } while (*(int *)(iVar5 + 0xcc) == 0);
      pppuVar9 = *(uint ****)(iVar5 + 200);
      local_4bc = pppuVar9;
      iVar5 = FUN_00b8c13c(pppuVar9[1],pppuVar9[2],"bosminer-am-",0xc);
    } while (((iVar5 == 0) &&
             (iVar5 = FUN_00b8c13c(pppuVar9[1],pppuVar9[2],"bosminer-plus-",0xe), iVar5 == 0)) &&
            (iVar5 = FUN_00b8c13c(pppuVar9[1],pppuVar9[2],"bosminer-dummy",0xe), iVar5 == 0));
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4c850 - 1 < 2 ||
         ((DAT_01d4c850 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c848), cVar3 != '\0')))))) &&
       (iVar5 = FUN_01aaa278(DAT_01d4c848), iVar5 != 0)) {
      local_470 = (uint ****)(DAT_01d4c848 + 0x1c);
      if (*(uint *****)(DAT_01d4c848 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20124);
      }
      uVar8 = *(undefined4 *)(DAT_01d4c848 + 0x24);
      local_44c = *(uint *****)(DAT_01d4c848 + 0x28);
      local_464 = (uint ***)&local_498;
      local_474 = (uint ****)&DAT_00000001;
      local_494 = (uint ****)&local_4ac;
      local_468 = (uint ****)&local_458;
      local_4ac = &local_4bc;
      local_478 = (uint ****)&local_468;
      local_450 = (undefined1)uVar8;
      uStack_44f = (undefined1)((uint)uVar8 >> 8);
      uStack_44e = (undefined1)((uint)uVar8 >> 0x10);
      uStack_44d = (undefined1)((uint)uVar8 >> 0x18);
      local_448 = (uint ****)0x0;
      local_460 = (undefined4 *)&DAT_01d2ea4c;
      local_498 = (uint ***)&DAT_005bdccb;
      local_4a8 = (uint ****)&LAB_0193a90c;
      local_458 = (uint ****)*local_470;
      local_454 = *(uint *****)(DAT_01d4c848 + 0x20);
      FUN_00e11508(&local_478);
    }
    else {
      iVar5 = DAT_01d4c848;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_4b4 = *(uint ****)(DAT_01d4c848 + 0x14);
        local_4b0 = *(undefined4 **)(DAT_01d4c848 + 0x18);
        local_4b8 = (uint ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar7 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar7,&local_4b8);
        if (iVar6 != 0) {
          if (*(uint *****)(DAT_01d4c848 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20124);
          }
          local_474 = &local_4a0;
          uVar8 = *(undefined4 *)(DAT_01d4c848 + 0x24);
          local_44c = *(uint *****)(DAT_01d4c848 + 0x28);
          local_478 = (uint ****)&local_458;
          local_4ac = (uint ****)&local_478;
          local_4a8 = (uint ****)&DAT_00000001;
          local_49c = (uint ***)&local_498;
          local_448 = (uint ****)0x0;
          local_450 = (undefined1)uVar8;
          uStack_44f = (undefined1)((uint)uVar8 >> 8);
          uStack_44e = (undefined1)((uint)uVar8 >> 0x10);
          uStack_44d = (undefined1)((uint)uVar8 >> 0x18);
          local_470 = (uint ****)&DAT_01d2ea4c;
          local_494 = (uint ****)&LAB_0193a90c;
          local_4a0 = (uint ***)&DAT_005bdccb;
          local_498 = (uint ***)&local_4bc;
          local_468 = local_4b8;
          local_464 = local_4b4;
          local_460 = local_4b0;
          local_4a4 = (uint ****)(DAT_01d4c848 + 0x1c);
          local_458 = *(uint *****)(DAT_01d4c848 + 0x1c);
          local_454 = *(uint *****)(DAT_01d4c848 + 0x20);
          FUN_01aaa328(iVar5,pcVar7,puVar10[4],&local_468,&local_4ac);
        }
      }
    }
LAB_00b8b0a4:
    FUN_00d463dc(&local_240);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13d8c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13d8c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xd)) {
    case 0:
      goto switchD_00b8a564_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20104);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20104);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x17)) {
      case 0:
        pcVar7 = (char *)param_2[0xe];
        uVar8 = param_2[0xf];
        goto LAB_00b8a5a0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2044c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2044c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x16)) {
      case 0:
        goto switchD_00b8acac_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case 3:
        uVar8 = param_2[0x15];
      }
      goto LAB_00b8a608;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e)) {
    case 0:
      goto switchD_00b8aa70_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2044c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2044c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1d)) {
    case 0:
      goto switchD_00b8aaa0_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      uVar8 = param_2[0x1c];
    }
LAB_00b8ae54:
    local_4e8 = param_2 + 0x13;
    puVar10 = param_2 + 0x1d;
    local_4d8 = param_2 + 10;
    FUN_00798728(&local_458,uVar8,*param_3);
    if (local_458 == (uint ****)0x2) {
      *(undefined1 *)puVar10 = 3;
LAB_00b8ae7c:
      *(undefined1 *)(param_2 + 0x1e) = 3;
      uVar2 = 4;
LAB_00b8ae88:
      local_4d4 = param_2 + 0xd;
      *(undefined1 *)local_4d4 = uVar2;
      *param_1 = 0x80000017;
      uVar2 = 3;
      goto LAB_00b8b6b0;
    }
    local_488 = (uint ****)CONCAT13(uStack_44d,CONCAT12(uStack_44e,CONCAT11(uStack_44f,local_450)));
    local_490 = local_458;
    local_48c = local_454;
    local_484 = local_44c;
    local_480 = local_448;
    ppppuStack_47c = ppppuStack_444;
    piVar4 = (int *)param_2[0x1c];
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar1) goto LAB_00b8aef0;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00b8aef0:
      (**(code **)(piVar4[2] + 0x10))();
    }
    if (local_490 == (uint ****)&DAT_00000001) {
      FUN_019a18a8(&local_458,0x28,"background task failed",0x16);
      ppppuVar12 = local_454;
      ppppuVar14 = local_458;
      FUN_00b8bfc8(&local_490);
      *(undefined1 *)puVar10 = 1;
      ppppuVar15 = (uint ****)&DAT_80000000;
      local_4a4 = ppppuVar12;
    }
    else {
      *(undefined1 *)puVar10 = 1;
      ppppuVar14 = local_488;
      ppppuVar15 = local_48c;
      local_4a4 = local_484;
      if (local_48c == (uint ****)&DAT_80000001) goto LAB_00b8ae7c;
    }
    FUN_00b71be0(param_2 + 0x19);
    FUN_019bb7e0(param_2[0x16],param_2[0x17]);
    *(undefined1 *)(param_2 + 0x1e) = 1;
    local_4ac = ppppuVar15;
    local_4a8 = ppppuVar14;
    FUN_005f0650(local_4e8);
    if (ppppuVar15 == (uint ****)&DAT_80000000) {
      FUN_00799fb0(&local_4ac);
      FUN_019bb7e0(param_2[0xe],param_2[0xf]);
      if (param_2[10] == -0x80000000) goto LAB_00b8a7a8;
      goto LAB_00b8a7b0;
    }
    FUN_00799fb0(&local_4ac);
    FUN_019bb7e0(param_2[0xe],param_2[0xf]);
    bVar1 = true;
    if (param_2[10] == -0x80000000) {
      FUN_00799fb0(local_4d8);
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xbe)) {
    case 0:
      uVar18 = param_2[0xb];
      goto LAB_00b8b0f0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13cb8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c13cb8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xbd)) {
      case 0:
        uVar8 = param_2[0xf];
        uVar18 = param_2[0x10];
        goto LAB_00b8b124;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1d604);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1d604);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0xbc)) {
        case 0:
          uVar8 = param_2[0x14];
          uVar18 = param_2[0x15];
          goto LAB_00b8b158;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1d5f4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1d5f4);
        }
      }
    }
    goto switchD_00b8ac64_caseD_3;
  }
  *(undefined1 *)(param_2 + 0xd) = 1;
  *(bool *)((int)param_2 + 0x19) = bVar1;
  FUN_00b8bf3c(param_2 + 10);
  *(undefined1 *)(param_2 + 0xbe) = 0;
  uVar18 = param_2[5];
  *(undefined1 *)((int)param_2 + 0x1a) = 0;
  param_2[10] = param_2[4];
  param_2[0xb] = uVar18;
LAB_00b8b0f0:
  uVar8 = param_2[10];
  param_2[0xc] = param_2[7];
  param_2[0xd] = param_2[8];
  param_2[0xe] = param_2[9];
  *(undefined1 *)(param_2 + 0xbd) = 0;
  param_2[0xf] = uVar8;
  param_2[0x10] = uVar18;
LAB_00b8b124:
  param_2[0x11] = param_2[0xc];
  param_2[0x12] = param_2[0xd];
  param_2[0x13] = param_2[0xe];
  *(undefined1 *)(param_2 + 0xbc) = 0;
  param_2[0x14] = uVar8;
  param_2[0x15] = uVar18;
LAB_00b8b158:
  local_468 = (uint ****)param_2[0x11];
  local_464 = (uint ***)param_2[0x12];
  local_460 = (undefined4 *)param_2[0x13];
  FUN_00b8d954(param_2 + 0x16,&local_468,uVar8,uVar18);
  FUN_019eb218(&local_240,param_2 + 0x16);
  FUN_01bed4e2(&local_458,&local_240,0x218);
  FUN_01bed4e2(param_2 + 0x36,&local_458,0x218);
  local_4dc = param_3;
switchD_00b8ac64_caseD_3:
  local_4e4 = param_2 + 0xbd;
  local_4e8 = param_2 + 0xbc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xbb)) {
  case 0:
    ppppuVar14 = (uint ****)param_2[0x37];
    ppppuVar15 = (uint ****)param_2[0x38];
    if (param_2[0x36] != 3) {
      param_2[0x4e] = param_2[0x36];
      param_2[0x4f] = ppppuVar14;
      param_2[0x50] = ppppuVar15;
      FUN_01bed4e2(param_2 + 0x51,param_2 + 0x39,0x54);
      FUN_01bed4e2(param_2 + 0x66,param_2 + 0x4e,0x60);
      *(undefined1 *)(param_2 + 0xb9) = 0;
switchD_00b8b248_caseD_0:
      local_4ec = param_2 + 0x66;
      FUN_01bed4e2(param_2 + 0x7e,local_4ec,0x60);
      param_2[0x96] = param_2[0x6a];
      param_2[0x97] = param_2[0x6b];
      param_2[0x98] = param_2[0x6c];
      param_2[0x99] = param_2[0x6d];
      *(undefined1 *)(param_2 + 0xba) = 1;
      param_2[0x82] = 2;
      param_2[0x9a] = param_2[0x6e];
      param_2[0x9b] = param_2[0x6f];
      param_2[0x9c] = param_2[0x70];
      param_2[0x9d] = param_2[0x71];
      *(undefined2 *)((int)param_2 + 0x2e5) = 0;
      *(undefined1 *)((int)param_2 + 0x2e7) = 1;
      param_2[0x86] = 2;
      *(undefined1 *)(param_2 + 0xb8) = 0;
      param_2[0xae] = 0;
      param_2[0xaf] = param_2 + 0x9a;
      *(undefined1 *)(param_2 + 0xad) = 0;
      param_2[0xa3] = 0;
      param_2[0xa4] = param_2 + 0x96;
      *(undefined1 *)(param_2 + 0xa2) = 0;
      param_2[0x9e] = 0;
      param_2[0x9f] = param_2 + 0x7e;
      goto switchD_00b8b248_caseD_3;
    }
    param_2[0x4f] = ppppuVar14;
    param_2[0x4e] = 3;
    ppppuVar12 = (uint ****)&DAT_80000000;
    param_2[0x50] = ppppuVar15;
LAB_00b8b4ac:
    *(undefined1 *)(param_2 + 0xbb) = 1;
    FUN_00b8c5f0(param_2 + 0x36);
    if (ppppuVar12 == (uint ****)&DAT_80000000) {
      FUN_010a7c94(param_2 + 0x16);
      param_3 = (uint ****)&DAT_80000000;
      ppppuVar13 = (uint ****)&DAT_80000000;
      ppppuVar16 = ppppuVar15;
      ppppuVar17 = ppppuVar14;
LAB_00b8b554:
LAB_00b8b584:
      *(undefined1 *)local_4e8 = 1;
      ppppuVar15 = (uint ****)(param_2 + 0x36);
    }
    else {
      local_490 = ppppuVar12;
      local_48c = ppppuVar14;
      local_488 = ppppuVar15;
      FUN_010a7c94(param_2 + 0x16);
      ppppuVar16 = local_48c;
      ppppuVar17 = local_490;
      if (ppppuVar13 == (uint ****)0x0) {
        FUN_019bb7e0(param_3,local_508);
        param_3 = (uint ****)0x80000003;
        ppppuVar13 = ppppuVar15;
        goto LAB_00b8b554;
      }
      local_450 = SUB41(local_4dc,0);
      uStack_44f = (undefined1)((uint)local_4dc >> 8);
      uStack_44e = (undefined1)((uint)local_4dc >> 0x10);
      uStack_44d = (undefined1)((uint)local_4dc >> 0x18);
      local_454 = local_508;
      local_458 = param_3;
      FUN_012fbd94(&local_240);
      ppppuVar15 = local_238;
      ppppuVar13 = local_23c;
      ppppuVar17 = local_454;
      if (local_240 == (uint ****)0x0) {
        ppppuVar16 = local_454;
        ppppuVar17 = local_458;
LAB_00b8b570:
        FUN_019bb7e0(ppppuVar12,ppppuVar14);
        param_3 = (uint ****)0x80000002;
        ppppuVar13 = local_4dc;
        goto LAB_00b8b584;
      }
      ppppuVar16 = (uint ****)
                   CONCAT13(uStack_44d,CONCAT12(uStack_44e,CONCAT11(uStack_44f,local_450)));
      local_4dc = local_23c;
      if (param_3 == (uint ****)&DAT_80000000) {
        goto LAB_00b8b570;
      }
      FUN_019bb7e0(ppppuVar12,ppppuVar14);
      *(undefined1 *)local_4e8 = 1;
      if (param_3 == (uint ****)&DAT_80000004) goto LAB_00b8b384;
    }
    FUN_00b8c59c(param_2 + 0x11);
    if (param_3 == (uint ****)0x80000003) {
      local_478 = ppppuVar17;
      local_474 = ppppuVar16;
      local_470 = ppppuVar13;
      FUN_012fbd94(&local_240,ppppuVar16,ppppuVar13);
      if (local_240 != (uint ****)0x0) {
        ppppuVar16 = local_470;
        ppppuVar13 = local_23c;
        if (ppppuVar17 != (uint ****)&DAT_80000000) {
          ppppuVar15 = local_238;
          param_3 = ppppuVar17;
          ppppuVar17 = local_474;
          goto LAB_00b8b5fc;
        }
        ppppuVar17 = local_474;
      }
      param_3 = (uint ****)0x80000003;
      *(undefined1 *)local_4e4 = 1;
    }
    else {
LAB_00b8b5fc:
      *(undefined1 *)local_4e4 = 1;
      if (param_3 == (uint ****)&DAT_80000004) goto LAB_00b8b610;
    }
    FUN_00b8c578(param_2 + 0xc);
    puVar11 = (undefined1 *)0x80000001;
    if (param_3 == (uint ****)0x80000003) {
      FUN_019bb7e0(ppppuVar17,ppppuVar16);
      puVar11 = &DAT_80000016;
    }
    *(undefined1 *)(param_2 + 0xbe) = 1;
    FUN_00b8c554(param_2 + 7);
    ppppuVar14 = param_3;
    if (param_3 == (uint ****)0x80000003) {
      ppppuVar14 = (uint ****)(uint)*(byte *)((int)param_2 + 0x19);
    }
    *param_1 = puVar11;
    *(short *)((int)param_1 + 5) = (short)((uint)param_3 >> 8);
    param_1[4] = ppppuVar13;
    *(char *)((int)param_1 + 7) = (char)((uint)param_3 >> 0x18);
    uVar2 = 1;
    param_1[2] = ppppuVar17;
    *(char *)(param_1 + 1) = (char)ppppuVar14;
    *(undefined1 *)((int)param_2 + 0x1a) = 0;
    param_1[5] = ppppuVar15;
    param_1[3] = ppppuVar16;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1e128);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1e128);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb9)) {
    case 0:
      goto switchD_00b8b248_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2655c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2655c);
    }
switchD_00b8b248_caseD_3:
    local_4ec = param_2 + 0x66;
    FUN_0195cfa4(&local_240,param_2 + 0x9e,param_3);
    param_3 = local_230;
    ppppuVar13 = local_234;
    ppppuVar15 = local_238;
    ppppuVar14 = local_23c;
    ppppuVar12 = local_240;
    if (local_240 != (uint ****)&DAT_80000001) {
      local_4dc = local_228;
      FUN_00b8c628(param_2 + 0x9e);
      if (ppppuVar12 == (uint ****)&DAT_80000000) {
        *(undefined2 *)((int)param_2 + 0x2e5) = 0;
        if (param_2[0x9a] != 2) {
          FUN_01955d68();
        }
        *(undefined1 *)((int)param_2 + 0x2e7) = 0;
        if (param_2[0x96] != 2) {
          FUN_01955d68();
        }
        *(undefined1 *)(param_2 + 0xba) = 0;
        FUN_01955c2c(param_2 + 0x7e);
        ppppuVar13 = (uint ****)&local_240;
      }
      else {
        local_508 = local_22c;
        *(undefined1 *)(param_2 + 0xba) = 0;
        local_240 = (uint ****)param_2[0x96];
        local_23c = (uint ****)param_2[0x97];
        local_238 = (uint ****)param_2[0x98];
        local_234 = (uint ****)param_2[0x99];
        if (local_240 != (uint ****)0x2) {
          FUN_01955d68(&local_240);
        }
        *(undefined1 *)((int)param_2 + 0x2e7) = 0;
        local_240 = (uint ****)param_2[0x9a];
        local_23c = (uint ****)param_2[0x9b];
        local_238 = (uint ****)param_2[0x9c];
        local_234 = (uint ****)param_2[0x9d];
        if (local_240 != (uint ****)0x2) {
          FUN_01955d68(&local_240);
        }
        *(undefined4 *)((int)param_2 + 0x2e5) = 0;
        FUN_01955c2c(param_2 + 0x7e);
      }
      *(undefined1 *)(param_2 + 0xb9) = 1;
      FUN_00b8c68c(local_4ec);
      goto LAB_00b8b4ac;
    }
    *(undefined1 *)(param_2 + 0xbb) = 3;
    *(undefined1 *)(param_2 + 0xb9) = 3;
    *(undefined1 *)(param_2 + 0xbc) = 3;
LAB_00b8b384:
    *(undefined1 *)local_4e4 = 3;
LAB_00b8b610:
    *(undefined1 *)(param_2 + 0xbe) = 3;
    *param_1 = 0x80000017;
    uVar2 = 4;
  }
LAB_00b8b6b0:
  *(undefined1 *)(param_2 + 6) = uVar2;
  return;
}

