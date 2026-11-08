// FUN_014c5df4 @ 014c5df4 size=2440 calls_out=21 calls_in=0
// strings: 

void FUN_014c5df4(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_11c8 [712];
  int local_f00;
  int iStack_efc;
  int iStack_ef8;
  int local_ef0;
  int iStack_eec;
  int iStack_ee8;
  int local_ee0;
  int iStack_edc;
  int iStack_ed8;
  int local_ed4;
  undefined1 auStack_bf0 [736];
  int local_910;
  int local_90c;
  undefined4 local_908;
  undefined4 local_904;
  undefined4 local_900;
  undefined4 local_8fc;
  undefined4 uStack_8f8;
  undefined1 local_628 [776];
  int local_320;
  int local_31c;
  int iStack_318;
  int iStack_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304 [184];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x154]) {
  case '\0':
    param_2[0x155] = '\x01';
    param_2[0x156] = '\x01';
    FUN_016dd1aa(param_2 + 0x158,param_2 + 0x18,0x13c);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6294);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6294);
  case '\x04':
    iVar8 = *(int *)(param_2 + 0x160);
    goto LAB_014c60b8;
  }
  pcVar9 = param_2 + 0x158;
  FUN_014c57f0(&local_310,pcVar9,param_3);
  iStack_ed8 = local_308;
  iStack_edc = local_30c;
  iVar8 = local_310;
  if (local_310 == 3) {
    *param_1 = 4;
    param_2[0x154] = '\x03';
    return;
  }
  if (param_2[0x290] == '\x03') {
    pcVar9 = param_2 + 500;
LAB_014c5f0c:
    FUN_014c5278(pcVar9);
  }
  else if (param_2[0x290] == '\0') goto LAB_014c5f0c;
  if (iVar8 == 2) {
    local_310 = iStack_edc;
    local_30c = iStack_ed8;
    piVar3 = (int *)thunk_FUN_016d4a50(8);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *piVar3 = local_310;
    piVar3[1] = local_30c;
    if (param_2[0x156] != '\0') {
      piVar4 = *(int **)(param_2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01561b24(*(undefined4 *)(param_2 + 0x14));
      }
    }
    if (((param_2[0x155] != '\0') && (*param_2 == '\0')) &&
       ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 8));
    }
    *param_1 = 3;
    param_1[1] = piVar3;
    param_1[2] = &DAT_018a500c;
    FUN_016dd1aa(param_1 + 3,auStack_bf0,0x2dc);
    param_2[0x154] = '\x01';
    return;
  }
  piVar3 = *(int **)(param_2 + 0x14);
  param_2[0x156] = '\0';
  param_2[0x155] = '\0';
  *(int **)(param_2 + 0x158) = piVar3;
  local_908 = *(undefined4 *)param_2;
  local_904 = *(undefined4 *)(param_2 + 4);
  local_900 = *(undefined4 *)(param_2 + 8);
  local_8fc = *(undefined4 *)(param_2 + 0xc);
  uStack_8f8 = *(undefined4 *)(param_2 + 0x10);
  local_ed4 = local_304[0];
  local_ee0 = iVar8;
  piVar4 = (int *)((uint)&local_ee0 | 4);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x14c6af0);
    (*pcVar1)();
  }
  FUN_0151d57c(&local_310,piVar3,&local_908);
  if (local_310 == 2) {
    local_320 = local_ee0;
    local_31c = iStack_edc;
    iStack_318 = iStack_ed8;
    iStack_314 = local_ed4;
    FUN_014b39a0(&local_910,0x28,&local_308);
    iVar8 = 4;
    local_ef0 = local_ee0;
    iStack_eec = iStack_edc;
    iStack_ee8 = iStack_ed8;
    iVar5 = local_304[0];
    iVar6 = local_910;
    iVar7 = local_90c;
  }
  else {
    FUN_016dd1aa(local_628,local_304,0x2c4);
    local_ef0 = *piVar4;
    iStack_eec = piVar4[1];
    iStack_ee8 = piVar4[2];
    iVar5 = local_310;
    iVar6 = local_30c;
    iVar7 = local_308;
  }
  local_f00 = local_ef0;
  iStack_efc = iStack_eec;
  iStack_ef8 = iStack_ee8;
  FUN_016dd1aa(auStack_11c8,local_628,0x2c4);
  *(int *)(param_2 + 0x174) = iVar6;
  *(int *)(param_2 + 0x178) = iVar7;
  *(int *)(param_2 + 0x164) = local_f00;
  *(int *)(param_2 + 0x168) = iStack_efc;
  *(int *)(param_2 + 0x16c) = iStack_ef8;
  *(int *)(param_2 + 0x170) = iVar5;
  *(int *)(param_2 + 0x160) = iVar8;
  FUN_016dd1aa(param_2 + 0x17c,auStack_11c8,0x2c4);
  param_2[0x440] = '\0';
LAB_014c60b8:
  iVar5 = iVar8 + -1;
  param_2[0x160] = '\x02';
  param_2[0x161] = '\0';
  param_2[0x162] = '\0';
  param_2[0x163] = '\0';
  if (iVar8 == 0) {
    iVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x014c60e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_014c60ec + (&DAT_014c60ec)[iVar5]))
            (param_2 + 0x17c,(&DAT_014c60ec)[iVar5],&DAT_014c60ec,*(undefined4 *)(param_2 + 400));
  return;
}

