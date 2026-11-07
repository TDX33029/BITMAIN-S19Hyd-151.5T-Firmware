// FUN_00ff8f5c @ 00ff8f5c size=1376 calls_out=5 calls_in=1
// strings: 

void FUN_00ff8f5c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  int *local_120;
  undefined4 local_11c;
  int *local_118;
  undefined4 local_114;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == 3) {
    uVar3 = FUN_011d96fc(param_2[1],param_2[2]);
    *param_1 = 3;
    param_1[1] = uVar3;
    param_1[2] = &DAT_01c1bf88;
    return;
  }
  piVar10 = (int *)*param_3;
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_00ff94b8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xff94b8);
    (*pcVar1)();
  }
  uVar3 = param_3[1];
  piVar7 = (int *)param_3[2];
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  uVar8 = param_3[3];
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(local_b0,param_2,&local_120);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00ff94b8;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(local_a0,param_2 + 3,&local_120);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00ff94b8;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(local_90,param_2 + 6,&local_120);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00ff94b8;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(local_80,param_2 + 9,&local_120);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00ff94b8;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(local_70,param_2 + 0xc,&local_120);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00ff94b8;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(local_60,param_2 + 0xf,&local_120);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00ff94b8;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(local_50,param_2 + 0x12,&local_120);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00ff94b8;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(local_40,param_2 + 0x15,&local_120);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00ff94b8;
  do {
    iVar4 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar4 + 1;
  local_120 = piVar10;
  local_11c = uVar3;
  if (iVar4 < 0) goto LAB_00ff94b8;
  local_118 = piVar7;
  local_114 = uVar8;
  FUN_00ff9b30(&local_30,param_2 + 0x18,&local_120);
  piVar10 = (int *)param_3[2];
  iVar6 = param_2[0x1b];
  iVar4 = param_2[0x1c];
  iVar5 = param_2[0x1d];
  uVar3 = param_3[3];
  piVar7 = (int *)*param_3;
  uVar8 = param_3[1];
  if (iVar6 == 0) {
    do {
      iVar9 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_00ff94b8;
    do {
      iVar9 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar9 + 1;
    local_120 = piVar7;
    local_11c = uVar8;
    if (iVar9 < 0) goto LAB_00ff94b8;
    local_118 = piVar10;
    local_114 = uVar3;
    uVar12 = FUN_011d96fc(iVar4,iVar5,&local_120);
  }
  else {
    if (iVar6 != 1) {
      uVar12 = FUN_011d950c();
      goto LAB_00ff93f0;
    }
    do {
      iVar9 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_00ff94b8;
    do {
      iVar9 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar9 + 1;
    local_120 = piVar7;
    local_11c = uVar8;
    if (iVar9 < 0) goto LAB_00ff94b8;
    local_118 = piVar10;
    local_114 = uVar3;
    uVar12 = FUN_011d96fc(iVar4,iVar5,&local_120);
  }
  FUN_00ff9c3c(param_3);
LAB_00ff93f0:
  iVar4 = param_2[0x1f];
  iVar5 = param_2[0x20];
  iVar9 = param_2[0x21];
  iVar11 = param_2[0x22];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = iVar4;
  param_1[0x20] = iVar5;
  param_1[0x21] = iVar9;
  param_1[0x22] = iVar11;
  local_c0 = local_30;
  uStack_bc = uStack_2c;
  uStack_b8 = uStack_28;
  FUN_01bed4e2(param_1,&local_120,0x6c);
  param_1[0x1b] = iVar6;
  *(undefined8 *)(param_1 + 0x1c) = uVar12;
  return;
}

