// FUN_00b7c5e8 @ 00b7c5e8 size=1016 calls_out=14 calls_in=3
// strings: package installation is unsupported

void FUN_00b7c5e8(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int *local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  int local_348;
  int local_344;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int local_330;
  undefined4 local_32c;
  undefined4 local_328;
  int *local_320;
  undefined *local_31c;
  undefined4 local_318;
  undefined4 local_314;
  int local_310;
  int local_30c;
  int local_308;
  int **local_304;
  int **local_300;
  int iStack_2fc;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *local_38;
  undefined1 local_2e;
  undefined1 local_2d;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x4d)) {
  case 0:
    *(undefined1 *)(param_2 + 0x14) = 0;
    local_2d = *(undefined1 *)(param_2 + 0x13);
    param_2[0xd] = *param_2;
    param_2[0xe] = param_2[1];
    param_2[0xf] = param_2[2];
    param_2[0x10] = param_2[10];
    *(undefined1 *)((int)param_2 + 0x51) = 1;
    puVar4 = param_2 + 3;
    *(undefined1 *)((int)param_2 + 0x4f) = 0;
    *(undefined1 *)((int)param_2 + 0x4e) = 0;
    local_360 = (int *)*puVar4;
    uStack_35c = param_2[4];
    uStack_358 = param_2[5];
    uStack_354 = param_2[6];
    uStack_350 = param_2[7];
    uStack_34c = param_2[8];
    if (param_2[0xf] == 0) {
      local_38 = *(int **)(param_2[9] + 0x10);
      do {
        iVar8 = *local_38;
        bVar2 = (bool)hasExclusiveAccess(local_38);
      } while (!bVar2);
      *local_38 = iVar8 + 1;
      if (iVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb7c9d8);
        (*pcVar1)();
      }
      local_58 = param_2[0xb];
      *(undefined1 *)((int)param_2 + 0x51) = 0;
      local_54 = param_2[0xc];
      local_2e = 0;
      local_310 = 0;
      local_50 = local_360;
      uStack_4c = uStack_35c;
      uStack_48 = uStack_358;
      uStack_44 = uStack_354;
      uStack_40 = uStack_350;
      uStack_3c = uStack_34c;
      iVar8 = thunk_FUN_01be5118(0x2e8);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x2e8);
      }
      FUN_01bed4e2(iVar8,&local_310,0x2e8);
      param_2[0x11] = iVar8;
      puVar6 = &DAT_01c23210;
      param_2[0x12] = &DAT_01c23210;
      goto LAB_00b7c8d8;
    }
    FUN_019a18a8(&local_348,0x24,"package installation is unsupported",0x23);
    local_320 = &local_330;
    local_328 = 0;
    local_330 = 0;
    local_314 = 0;
    local_32c = 1;
    local_318 = 0x60000020;
    local_31c = &DAT_01c13230;
    iVar8 = FUN_019a7d7c(&local_348,&local_320);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_310,&DAT_01c13258,&DAT_01d30334);
    }
    local_310 = local_330;
    local_30c = local_32c;
    local_308 = local_328;
    local_320 = (int *)CONCAT31(local_320._1_3_,4);
    local_304 = &local_360;
    local_300 = &local_320;
    FUN_00ab3338(local_360[2]);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *local_360;
      bVar2 = (bool)hasExclusiveAccess(local_360);
    } while (!bVar2);
    *local_360 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(local_360);
    }
    piVar5 = (int *)param_2[0x10];
    *(undefined1 *)((int)param_2 + 0x51) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar5 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_2[0x10]);
    }
    FUN_006a41c0(param_2 + 0xd);
    if (*(char *)(param_2 + 0x14) != '\0') {
      FUN_006a41c0(param_2);
    }
    if (*(char *)((int)param_2 + 0x4f) != '\0') {
      piVar5 = (int *)param_2[10];
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar5 + 2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_2[10]);
      }
    }
    iVar8 = -0x7ffffffe;
    if (*(char *)((int)param_2 + 0x4e) != '\0') {
      piVar5 = (int *)*puVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0121cce0(*puVar4);
      }
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13720);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13720);
  case 3:
    iVar8 = param_2[0x11];
    puVar6 = (undefined *)param_2[0x12];
LAB_00b7c8d8:
    (**(code **)(puVar6 + 0xc))(&local_310,iVar8,param_3);
    iVar8 = local_310;
    if (local_310 == -0x7fffffe9) {
      *param_1 = -0x7fffffe9;
      uVar3 = 3;
      goto LAB_00b7c994;
    }
    local_340 = (int)local_304;
    iStack_33c = (int)local_300;
    iStack_338 = iStack_2fc;
    FUN_01139b38(param_2[0x11],param_2[0x12]);
    piVar5 = (int *)param_2[0x10];
    *(undefined1 *)((int)param_2 + 0x51) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar5 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_2[0x10]);
    }
    FUN_006a41c0(param_2 + 0xd);
    local_344 = local_308;
    local_348 = local_30c;
  }
  *param_1 = iVar8;
  param_1[1] = local_348;
  param_1[2] = local_344;
  param_1[3] = local_340;
  param_1[4] = iStack_33c;
  param_1[5] = iStack_338;
  uVar3 = 1;
LAB_00b7c994:
  *(undefined1 *)((int)param_2 + 0x4d) = uVar3;
  return;
}

