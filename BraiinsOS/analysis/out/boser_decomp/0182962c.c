// FUN_0182962c @ 0182962c size=2132 calls_out=19 calls_in=0
// strings: tls handshake eof

void FUN_0182962c(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_11d0 [712];
  int local_f08;
  int iStack_f04;
  int iStack_f00;
  int iStack_efc;
  int local_ef8;
  int local_ef4;
  int iStack_ef0;
  int iStack_eec;
  int local_ee8;
  int local_ee4;
  int iStack_ee0;
  int iStack_edc;
  undefined1 auStack_bf8 [736];
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined1 local_638 [784];
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int iStack_318;
  int local_314;
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
    FUN_01bed4e2(param_2 + 0x158,param_2 + 0x18,0x13c);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1e0bc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1e0bc);
  case '\x04':
    iVar8 = *(int *)(param_2 + 0x160);
    goto LAB_018298bc;
  }
  pcVar7 = param_2 + 0x158;
  FUN_018290e0(&local_310,pcVar7,param_3);
  iStack_ee0 = local_308;
  local_ee4 = local_30c;
  iVar8 = local_310;
  if (local_310 == 3) {
    *param_1 = 4;
    cVar3 = '\x03';
    goto LAB_01829ec8;
  }
  if (param_2[0x290] == '\x03') {
    pcVar7 = param_2 + 500;
LAB_01829714:
    FUN_017520a0(pcVar7);
  }
  else if (param_2[0x290] == '\0') goto LAB_01829714;
  if (iVar8 != 2) {
    piVar5 = *(int **)(param_2 + 0x14);
    param_2[0x156] = '\0';
    param_2[0x155] = '\0';
    *(int **)(param_2 + 0x158) = piVar5;
    local_918 = *(undefined4 *)param_2;
    uStack_914 = *(undefined4 *)(param_2 + 4);
    uStack_910 = *(undefined4 *)(param_2 + 8);
    uStack_90c = *(undefined4 *)(param_2 + 0xc);
    uStack_908 = *(undefined4 *)(param_2 + 0x10);
    local_ee8 = iVar8;
    iStack_edc = local_304[0];
    piVar9 = (int *)((uint)&local_ee8 | 4);
    do {
      iVar6 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x182a004);
      (*pcVar1)();
    }
    FUN_018ff358(&local_310,piVar5,&local_918);
    if (local_310 == 2) {
      local_320 = local_ee8;
      local_31c = local_ee4;
      iStack_318 = iStack_ee0;
      local_314 = iStack_edc;
      FUN_0187ab4c(&local_328,0x28,&local_308);
      iVar8 = 4;
      local_ef8 = local_ee8;
      local_ef4 = local_ee4;
      iStack_ef0 = iStack_ee0;
      iStack_eec = iStack_edc;
      iVar6 = local_324;
      iVar10 = local_328;
    }
    else {
      local_314 = local_310;
      FUN_01bed4e2(local_638,local_304,0x2c4);
      local_ef8 = *piVar9;
      local_ef4 = piVar9[1];
      iStack_ef0 = piVar9[2];
      iStack_eec = local_314;
      iVar6 = local_308;
      iVar10 = local_30c;
      local_320 = local_ef8;
      local_31c = local_ef4;
      iStack_318 = iStack_ef0;
    }
    local_f08 = local_ef8;
    iStack_f04 = local_ef4;
    iStack_f00 = iStack_ef0;
    iStack_efc = iStack_eec;
    FUN_01bed4e2(auStack_11d0,local_638,0x2c4);
    *(int *)(param_2 + 0x160) = iVar8;
    *(int *)(param_2 + 0x164) = local_f08;
    *(int *)(param_2 + 0x168) = iStack_f04;
    *(int *)(param_2 + 0x16c) = iStack_f00;
    *(int *)(param_2 + 0x170) = iStack_efc;
    *(int *)(param_2 + 0x174) = iVar10;
    *(int *)(param_2 + 0x178) = iVar6;
    FUN_01bed4e2(param_2 + 0x17c,auStack_11d0,0x2c4);
    param_2[0x440] = '\0';
LAB_018298bc:
    iVar6 = iVar8 + -1;
    param_2[0x160] = '\x02';
    param_2[0x161] = '\0';
    param_2[0x162] = '\0';
    param_2[0x163] = '\0';
    if (iVar8 == 0) {
      iVar6 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x018298ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((int)&DAT_018298f0 + (&DAT_018298f0)[iVar6]))
              (param_2 + 0x17c,(&DAT_018298f0)[iVar6],&DAT_018298f0,param_2 + 0x174);
    return;
  }
  local_310 = local_ee4;
  local_30c = iStack_ee0;
  uVar4 = FUN_0142322c(&local_310);
  if (param_2[0x156] != '\0') {
    piVar5 = *(int **)(param_2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_2 + 0x14));
    }
  }
  if (((param_2[0x155] != '\0') && (*param_2 == '\0')) && (*(int *)(param_2 + 4) != -0x80000000)) {
    FUN_019bb7e0(*(int *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  }
  *param_1 = 3;
  param_1[1] = uVar4;
  param_1[2] = &DAT_01cf48ac;
  FUN_01bed4e2(param_1 + 3,auStack_bf8,0x2dc);
  cVar3 = '\x01';
LAB_01829ec8:
  param_2[0x154] = cVar3;
  return;
}

