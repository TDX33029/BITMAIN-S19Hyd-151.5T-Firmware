// FUN_01940370 @ 01940370 size=2736 calls_out=25 calls_in=0
// strings: Could not get job metadata | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_01940370(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int ****ppppiVar9;
  undefined1 uVar10;
  uint *puVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  int ****local_398;
  int ****local_394;
  int ****local_390;
  int ****local_38c;
  int ***local_388;
  int local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  uint local_350;
  uint local_348;
  int local_344;
  int local_280;
  int local_27c;
  uint local_26c;
  undefined2 local_264;
  int local_260;
  int ****local_25c;
  int ****local_258;
  undefined1 auStack_254 [16];
  short local_244;
  int ***local_240;
  int ****local_23c;
  undefined4 uStack_238;
  undefined1 auStack_234 [16];
  short local_224;
  int ***local_220;
  int ****ppppiStack_21c;
  undefined4 uStack_218;
  int ****local_210;
  int ****local_20c;
  int ****local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  int ****local_1f0;
  int ****local_1ec;
  int ****local_1e8;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int ****local_128;
  int ****local_124;
  int ****local_120;
  int local_11c;
  int ****local_118;
  int ****local_114;
  char local_10d;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int ****local_100;
  int ****local_fc;
  int ****local_f8;
  int ****local_48;
  int ****local_44;
  int ****local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x155)) {
  case 0:
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)(param_1 + 0x61) = 0;
    param_1[0x56] = param_1[0x54] + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d25fa4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d25fa4);
  case 4:
    uVar13 = *(undefined8 *)(param_1 + 0x56);
    goto LAB_01940444;
  case 5:
    uVar13 = *(undefined8 *)(param_1 + 0x56);
    goto LAB_0194062c;
  }
  FUN_006177f4(&local_3a8,param_1 + 0x56,param_2);
  if (local_3a8 == 0) {
    uVar7 = 1;
    uVar10 = 3;
    goto LAB_019407c8;
  }
  param_1[0x4e] = local_3a8;
  param_1[0x4f] = uStack_3a4;
  param_1[0x50] = uStack_3a0;
  cVar3 = *(char *)(param_1 + 0x61);
  bVar12 = cVar3 == '\x03';
  if (bVar12) {
    cVar3 = *(char *)(param_1 + 0x60);
  }
  if (bVar12 && cVar3 == '\x03') {
    FUN_0193c3cc(param_1 + 0x58);
  }
  local_388 = (int ***)*param_1;
  local_384 = param_1[1];
  local_380 = param_1[2];
  local_37c = param_1[3];
  uVar13 = (**(code **)(((undefined4 *)param_1[0x50])[1] + 0xc))
                     (*(undefined4 *)param_1[0x50],&local_388);
  *(undefined8 *)(param_1 + 0x56) = uVar13;
LAB_01940444:
  (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0xc))(&local_388,(int)uVar13,param_2);
  if (local_388 == (int ***)0x4 && local_384 == 0) {
    uVar7 = 1;
    uVar10 = 4;
    goto LAB_019407c8;
  }
  puVar11 = param_1 + 4;
  *(undefined1 *)(param_1 + 0x55) = 1;
  FUN_01bed4e2(puVar11,&local_388,0x128);
  FUN_01139b38(param_1[0x56],param_1[0x57]);
  if ((uint)-param_1[5] < (uint)(*puVar11 < 2)) {
    FUN_01bed4e2(&local_388,puVar11,0x128);
    if (2 < local_26c) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_100,&DAT_01d25fe4,&DAT_01d25fb4);
    }
    FUN_01298334(auStack_254,local_264,param_1 + 0x51);
    local_260 = param_1[0x51];
    local_25c = (int ****)param_1[0x52];
    local_258 = (int ****)param_1[0x53];
    if (local_280 == 0 && local_27c == 0) {
      local_220 = (int ***)0x0;
LAB_01940ae8:
      local_224 = 0x255;
    }
    else {
      FUN_01a2b1e0(&local_220,local_27c,local_280,local_27c);
      if (local_220 == (int ***)0x0) goto LAB_01940ae8;
      FUN_01298334(auStack_234,local_264,&local_220);
      local_240 = local_220;
      local_23c = ppppiStack_21c;
      uStack_238 = uStack_218;
    }
    sVar2 = local_224;
    if (local_26c == 2) {
LAB_01940b14:
      local_1f4 = CONCAT22(local_1f4._2_2_,0x255);
    }
    else {
      if (local_26c == 1) {
        if (((local_350 & 1) != 0) && (local_224 != 0x255)) {
          local_fc = (int ****)&DAT_00000020;
          local_100 = (int ****)&DAT_0056b2a8;
          if (&DAT_00418937 < &UNK_0020c49b + (uint)(0x5a1cac08 < local_348) + local_344 ||
              &UNK_0020c49b + (uint)(0x5a1cac08 < local_348) + local_344 + -0x418937 <
              (undefined *)(uint)(0x4bc6a7ee < local_348 + 0xa5e353f7)) {
                    /* WARNING: Subroutine does not return */
            FUN_0128ec48(&local_100,local_348 + 0x5a1cac08);
          }
          FUN_0128f70c(&local_100,&local_240,local_348,local_344,0);
          if (local_100 != (int ****)0x0) {
            local_1f0 = local_100;
            local_1ec = local_fc;
            local_1e8 = local_f8;
            FUN_01298334(&uStack_204,sVar2,&local_1f0);
            local_210 = local_1f0;
            local_20c = local_1ec;
            local_208 = local_1e8;
            goto LAB_01940ca4;
          }
        }
        goto LAB_01940b14;
      }
      FUN_01a2c5a4(&local_1f0,&local_388);
      if (local_1f0 == (int ****)&DAT_80000000) {
        local_1f4 = CONCAT22(local_1f4._2_2_,0x255);
      }
      else {
        FUN_01bed4e2(&local_100,&local_1f0,0xb8);
        FUN_01a20054(&local_48,&local_100,&local_260);
        if ((short)local_2c == 0x255) {
          local_1f4 = CONCAT22(local_1f4._2_2_,0x255);
          if (&DAT_00000003 < local_48) {
            FUN_019bb7e0(local_44,local_40);
          }
        }
        else {
          local_210 = local_48;
          local_20c = local_44;
          local_208 = local_40;
          uStack_204 = uStack_3c;
          local_200 = local_38;
          uStack_1fc = uStack_34;
          uStack_1f8 = uStack_30;
          local_1f4 = local_2c;
        }
        FUN_0193f164(&local_100);
      }
    }
LAB_01940ca4:
    ppppiVar9 = (int ****)0x0;
    if ((short)local_1f4 != 0x255) {
      local_1ec = local_208;
      local_1f0 = local_20c;
      ppppiVar9 = local_210;
    }
    iVar4 = 0;
    if (local_244 != 0x255) {
      local_fc = local_258;
      local_100 = local_25c;
      iVar4 = local_260;
    }
    local_390 = local_1f0;
    local_38c = local_1ec;
    local_394 = local_fc;
    local_398 = local_100;
    FUN_0193f694(&local_388);
    local_114 = local_394;
    local_118 = local_398;
    local_120 = local_38c;
    local_124 = local_390;
    local_388 = (int ***)*param_1;
    local_384 = param_1[1];
    local_380 = param_1[2];
    local_37c = param_1[3];
    local_128 = ppppiVar9;
    local_11c = iVar4;
    uVar13 = (**(code **)(((undefined4 *)param_1[0x50])[1] + 0x28))
                       (*(undefined4 *)param_1[0x50],&local_388,&local_128,&local_11c);
    *(undefined8 *)(param_1 + 0x56) = uVar13;
LAB_0194062c:
    cVar3 = (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0xc))((int)uVar13,param_2);
    if (cVar3 == '\x1c') {
      uVar7 = 1;
      uVar10 = 5;
      goto LAB_019407c8;
    }
    FUN_01139b38(param_1[0x56],param_1[0x57]);
    if (cVar3 != '\x1b') {
      local_10d = cVar3;
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d50678 - 1 < 2 ||
           ((DAT_01d50678 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50670), cVar3 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d50670), iVar4 != 0)))) {
        if (*(int *)(DAT_01d50670 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25fd4);
        }
        local_fc = &local_240;
        local_380 = *(undefined4 *)(DAT_01d50670 + 0x24);
        local_37c = *(undefined4 *)(DAT_01d50670 + 0x28);
        local_1f0 = (int ****)&local_100;
        local_378 = 0;
        local_1ec = (int ****)&DAT_00000001;
        local_23c = (int ****)&local_48;
        local_48 = (int ****)&local_10d;
        local_f8 = (int ****)&DAT_01d2ea4c;
        local_240 = (int ***)&DAT_005b914d;
        local_44 = (int ****)FUN_01941074;
        local_388 = *(int ****)(DAT_01d50670 + 0x1c);
        local_384 = *(int *)(DAT_01d50670 + 0x20);
        local_1e8 = (int ****)(DAT_01d50670 + 0x1c);
        local_100 = &local_388;
        FUN_019410b0(&local_1f0);
      }
      else {
        iVar4 = DAT_01d50670;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_108 = *(undefined4 *)(DAT_01d50670 + 0x14);
          local_104 = *(undefined4 *)(DAT_01d50670 + 0x18);
          local_10c = 1;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar8[3])(pcVar1,&local_10c);
          if (iVar5 != 0) {
            if (*(int *)(DAT_01d50670 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25fd4);
            }
            local_380 = *(undefined4 *)(DAT_01d50670 + 0x24);
            local_fc = &local_240;
            local_37c = *(undefined4 *)(DAT_01d50670 + 0x28);
            local_1f0 = (int ****)&local_100;
            local_1ec = (int ****)&DAT_00000001;
            local_23c = (int ****)&local_48;
            local_240 = (int ***)&DAT_005b914d;
            local_48 = (int ****)&local_10d;
            local_378 = 0;
            local_f8 = (int ****)&DAT_01d2ea4c;
            local_44 = (int ****)FUN_01941074;
            local_388 = *(int ****)(DAT_01d50670 + 0x1c);
            local_384 = *(int *)(DAT_01d50670 + 0x20);
            local_1e8 = (int ****)(DAT_01d50670 + 0x1c);
            local_100 = &local_388;
            FUN_01aaa328(iVar4,pcVar1,puVar8[4],&local_10c,&local_1f0);
          }
        }
      }
    }
  }
  else if (((DAT_01d50f88 < 5) &&
           ((DAT_01d50690 - 1 < 2 ||
            ((DAT_01d50690 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50688), cVar3 != '\0')))))) &&
          (iVar4 = FUN_01aaa278(DAT_01d50688), iVar4 != 0)) {
    if (*(int *)(DAT_01d50688 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25fc4);
    }
    local_1ec = &local_240;
    local_380 = *(undefined4 *)(DAT_01d50688 + 0x24);
    local_37c = *(undefined4 *)(DAT_01d50688 + 0x28);
    local_40 = (int ****)(DAT_01d50688 + 0x1c);
    local_388 = *local_40;
    local_48 = (int ****)&local_1f0;
    local_378 = 0;
    local_44 = (int ****)&DAT_00000001;
    local_1e8 = (int ****)&DAT_01d2ea4c;
    local_23c = (int ****)&DAT_00000035;
    local_240 = (int ***)0x523df9;
    local_384 = *(int *)(DAT_01d50688 + 0x20);
    local_1f0 = &local_388;
    FUN_01aaaecc(DAT_01d50688,&local_48);
    iVar4 = DAT_01d50688;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_fc = *(int *****)(DAT_01d50688 + 0x14);
      local_f8 = *(int *****)(DAT_01d50688 + 0x18);
      local_100 = (int ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar8[3])(pcVar1,&local_100);
      if (iVar5 != 0) {
        FUN_01aaa328(iVar4,pcVar1,puVar8[4],&local_100,&local_48);
      }
    }
  }
  else {
    iVar4 = DAT_01d50688;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_130 = *(undefined4 *)(DAT_01d50688 + 0x14);
      local_12c = *(undefined4 *)(DAT_01d50688 + 0x18);
      local_134 = 1;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar8[3])(pcVar1,&local_134);
      if (iVar5 != 0) {
        local_1e8 = (int ****)(DAT_01d50688 + 0x1c);
        if (*(int *)(DAT_01d50688 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25fc4);
        }
        local_fc = (int ****)&local_48;
        local_380 = *(undefined4 *)(DAT_01d50688 + 0x24);
        local_37c = *(undefined4 *)(DAT_01d50688 + 0x28);
        local_1f0 = (int ****)&local_100;
        local_378 = 0;
        local_1ec = (int ****)&DAT_00000001;
        local_f8 = (int ****)&DAT_01d2ea4c;
        local_44 = (int ****)&DAT_00000035;
        local_48 = (int ****)0x523df9;
        local_388 = *local_1e8;
        local_384 = *(int *)(DAT_01d50688 + 0x20);
        local_100 = &local_388;
        FUN_01aaa328(iVar4,pcVar1,puVar8[4],&local_134,&local_1f0);
      }
    }
  }
  if (param_1[4] != 3 || param_1[5] != 0) {
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  *(undefined1 *)(param_1 + 0x55) = 0;
  FUN_019f8c54(param_1[0x4e],param_1[0x4f]);
  piVar6 = (int *)param_1[0x54];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar12 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar12);
  *piVar6 = iVar4 + -1;
  uVar7 = 0;
  uVar10 = 1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x54]);
  }
LAB_019407c8:
  *(undefined1 *)((int)param_1 + 0x155) = uVar10;
  return uVar7;
}

