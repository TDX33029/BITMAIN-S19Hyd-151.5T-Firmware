// FUN_00f88abc @ 00f88abc size=808 calls_out=8 calls_in=0
// strings: BTC Tools v0.1Lua Configuration Interface

void FUN_00f88abc(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 5)) {
  case 0:
    puVar7 = (undefined4 *)param_2[1];
    *(undefined1 *)(param_2 + 8) = 0;
    param_2[6] = *param_2;
    param_2[7] = puVar7;
    param_2[2] = *param_2;
    param_2[3] = puVar7;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d058);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d058);
  case 3:
    if (*(char *)(param_2 + 8) != '\0') {
      if (*(char *)(param_2 + 8) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20db4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20db4);
    }
    puVar7 = (undefined4 *)param_2[7];
    break;
  case 4:
    if (*(char *)(param_2 + 8) != '\0') {
      if (*(char *)(param_2 + 8) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1ab00);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1ab00);
    }
    iVar5 = param_2[6];
    goto LAB_00f88b78;
  case 5:
    if (*(char *)(param_2 + 8) != '\0') {
      if (*(char *)(param_2 + 8) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1aaf0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1aaf0);
    }
    uVar4 = param_2[6];
    goto LAB_00f88c44;
  }
  piVar6 = (int *)*puVar7;
  do {
    iVar5 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf88e0c);
    (*pcVar1)();
  }
  iVar5 = param_2[2];
  param_2[4] = piVar6;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[6] = iVar5;
  param_2[7] = param_2[3];
LAB_00f88b78:
  iVar5 = FUN_011de1f0(*(undefined4 *)(iVar5 + 0x80));
  if (iVar5 == 0) {
    local_30 = 0;
    local_24 = local_24 & 0xffffff00;
    local_50 = 1;
    uStack_4c = 0;
    uStack_48 = local_24;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    FUN_006666fc(&local_30,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
    local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(iVar5 + 0xc));
    local_50 = local_2c;
    uStack_4c = local_28;
    uStack_48 = local_24;
    *(undefined1 *)(param_2 + 8) = 1;
    if (local_30 == -0x80000000) {
      uVar3 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00f88d48;
    }
  }
  param_2[9] = local_30;
  param_2[10] = local_50;
  param_2[0xb] = uStack_4c;
  param_2[0xc] = uStack_48;
  uVar4 = param_2[2];
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[6] = uVar4;
  param_2[7] = param_2[3];
LAB_00f88c44:
  local_30 = 0;
  local_2c = 0x46;
  local_28 = 0;
  local_24 = 0;
  iVar5 = FUN_0160ab20(uVar4);
  if (((iVar5 == 0) || (*(int *)(iVar5 + 8) != 0xe)) ||
     (iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar5 + 4),
                                 "BTC Tools v0.1Lua Configuration Interface",0xe), iVar5 != 0)) {
    *(undefined1 *)(param_2 + 8) = 1;
    FUN_019bb7e0(param_2[9],param_2[10]);
    piVar6 = (int *)param_2[4];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar5 + -1;
    uVar4 = 2;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      piVar6 = (int *)FUN_01182b58(param_2[4]);
    }
    uVar8 = 0;
  }
  else {
    uVar4 = param_2[4];
    *(undefined1 *)(param_2 + 8) = 1;
    piVar6 = (int *)param_2[9];
    local_40 = param_2[10];
    uStack_3c = param_2[0xb];
    uStack_38 = param_2[0xc];
    uVar8 = 3;
  }
  *param_1 = uVar8;
  param_1[1] = 0;
  param_1[2] = piVar6;
  param_1[3] = local_40;
  param_1[4] = uStack_3c;
  param_1[5] = uStack_38;
  uVar3 = 1;
  *(undefined1 *)((int)param_1 + 0x46) = 2;
  *(undefined2 *)(param_1 + 0x11) = 400;
  param_1[0x12] = 1;
  param_1[0x13] = &DAT_01c07674;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[6] = uVar4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 4;
  param_1[0xd] = 0;
LAB_00f88d48:
  *(undefined1 *)(param_2 + 5) = uVar3;
  return;
}

