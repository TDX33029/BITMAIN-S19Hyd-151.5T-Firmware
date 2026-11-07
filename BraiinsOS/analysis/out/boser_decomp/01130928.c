// FUN_01130928 @ 01130928 size=1048 calls_out=7 calls_in=2
// strings: BUG: config conversion ta

void FUN_01130928(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  int local_380;
  int local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined1 local_370;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  int iStack_348;
  int iStack_344;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  undefined3 uStack_330;
  undefined1 local_32d;
  int *local_324;
  int *piStack_320;
  int *piStack_31c;
  int *piStack_318;
  int *piStack_314;
  int *local_310;
  int *piStack_30c;
  int *piStack_308;
  undefined1 auStack_1d8 [360];
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  undefined3 uStack_28;
  
  puVar7 = (undefined4 *)((uint)&local_358 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 2)) {
  case 0:
    piVar6 = (int *)*param_2;
    if (*piVar6 == -0x7fffffff) {
      iVar8 = -0x7fffffff;
      local_32d = local_370;
    }
    else {
      if (*piVar6 == -0x80000000) {
        local_44 = -0x80000000;
      }
      else {
        FUN_006666fc(&local_44,piVar6[1],piVar6[2]);
      }
      if (piVar6[3] == -0x80000000) {
        local_38 = -0x80000000;
      }
      else {
        FUN_006666fc(&local_38,piVar6[4],piVar6[5]);
      }
      if (piVar6[6] == -0x80000000) {
        local_358 = -0x80000000;
      }
      else {
        FUN_006666fc(&local_358,piVar6[7],piVar6[8]);
      }
      bVar9 = *(char *)((int)piVar6 + 0x2b) == '\0';
      if (bVar9) {
        local_37c = piVar6[0xb];
        local_380 = piVar6[0xc];
        local_2c = piVar6[9];
        uStack_28 = (undefined3)((uint)*(undefined4 *)((int)piVar6 + 0x27) >> 8);
      }
      local_32d = !bVar9;
      local_374 = local_40;
      local_378 = local_3c;
      local_50 = local_38;
      iStack_4c = iStack_34;
      iStack_48 = iStack_30;
      local_60 = local_358;
      iStack_5c = local_354;
      iStack_58 = local_350;
      iVar8 = local_44;
    }
    local_324 = (int *)piVar6[0xd];
    do {
      iVar5 = *local_324;
      bVar9 = (bool)hasExclusiveAccess(local_324);
    } while (!bVar9);
    *local_324 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_01130d34:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1130d34);
      (*pcVar1)();
    }
    piStack_320 = (int *)piVar6[0xe];
    do {
      iVar5 = *piStack_320;
      bVar9 = (bool)hasExclusiveAccess(piStack_320);
    } while (!bVar9);
    *piStack_320 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01130d34;
    piStack_31c = (int *)piVar6[0xf];
    do {
      iVar5 = *piStack_31c;
      bVar9 = (bool)hasExclusiveAccess(piStack_31c);
    } while (!bVar9);
    *piStack_31c = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01130d34;
    piStack_318 = (int *)piVar6[0x10];
    do {
      iVar5 = *piStack_318;
      bVar9 = (bool)hasExclusiveAccess(piStack_318);
    } while (!bVar9);
    *piStack_318 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01130d34;
    piStack_314 = (int *)piVar6[0x11];
    do {
      iVar5 = *piStack_314;
      bVar9 = (bool)hasExclusiveAccess(piStack_314);
    } while (!bVar9);
    *piStack_314 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01130d34;
    local_310 = (int *)piVar6[0x12];
    do {
      iVar5 = *local_310;
      bVar9 = (bool)hasExclusiveAccess(local_310);
    } while (!bVar9);
    *local_310 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01130d34;
    piStack_30c = (int *)piVar6[0x13];
    do {
      iVar5 = *piStack_30c;
      bVar9 = (bool)hasExclusiveAccess(piStack_30c);
    } while (!bVar9);
    *piStack_30c = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01130d34;
    piStack_308 = (int *)piVar6[0x14];
    do {
      iVar5 = *piStack_308;
      bVar9 = (bool)hasExclusiveAccess(piStack_308);
    } while (!bVar9);
    *piStack_308 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_01130d34;
    local_34c = local_50;
    iStack_348 = iStack_4c;
    iStack_344 = iStack_48;
    local_340 = local_60;
    iStack_33c = iStack_5c;
    iStack_338 = iStack_58;
    uStack_330 = uStack_28;
    iStack_334 = local_2c;
    *puVar7 = local_374;
    puVar7[1] = local_378;
    puVar7[10] = local_37c;
    puVar7[0xb] = local_380;
    local_358 = iVar8;
    uVar3 = FUN_00631738(&local_358,&DAT_01c1f1d0);
    param_2[1] = uVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f1e0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f1e0);
  }
  piVar6 = param_2 + 1;
  FUN_00f610ac(&local_358,piVar6,param_3);
  iVar8 = local_358;
  if (local_358 == 4 && local_354 == 0) {
    local_354 = 0;
    iVar8 = 3;
    uVar2 = 3;
    goto LAB_01130cf0;
  }
  local_70 = local_350;
  iStack_6c = local_34c;
  iStack_68 = iStack_348;
  iStack_64 = iStack_344;
  FUN_01bed4e2(auStack_1d8,&local_340,0x168);
  piVar4 = (int *)*piVar6;
  if (*piVar4 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar9 = (bool)hasExclusiveAccess(piVar4);
    if (!bVar9) goto LAB_01130cb0;
    *piVar4 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_01130cb0:
    (**(code **)(*(int *)(*piVar6 + 8) + 0x10))();
  }
  if (iVar8 == 3 && local_354 == 0) {
    local_358 = local_70;
    local_354 = iStack_6c;
    local_350 = iStack_68;
    local_34c = iStack_64;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: config conversion ta",0x28,&local_358,&DAT_01c1f93c,&DAT_01c1f1f0);
  }
  param_1[2] = local_70;
  param_1[3] = iStack_6c;
  param_1[4] = iStack_68;
  param_1[5] = iStack_64;
  FUN_01bed4e2(param_1 + 6,auStack_1d8,0x168);
  uVar2 = 1;
LAB_01130cf0:
  *(undefined1 *)(param_2 + 2) = uVar2;
  *param_1 = iVar8;
  param_1[1] = local_354;
  return;
}

