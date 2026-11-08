// FUN_013a310c @ 013a310c size=416 calls_out=5 calls_in=0
// strings: 

void FUN_013a310c(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uStack_3d4;
  undefined1 auStack_3c0 [112];
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined1 auStack_310 [192];
  undefined1 auStack_250 [176];
  undefined1 auStack_1a0 [192];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = param_2[0x301];
  piVar3 = *(int **)(iVar2 + 0x13c);
  do {
    iVar5 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13a32a8);
    (*pcVar1)();
  }
  iVar5 = *(int *)(iVar2 + 0x13c);
  uVar4 = 0;
  bVar6 = *(int *)(iVar5 + 0x10) == 0;
  iVar2 = 0;
  if (!bVar6) {
    iVar2 = *(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x10) * 8;
    bVar6 = iVar2 == 8;
  }
  if (!bVar6) {
    uVar4 = *(undefined4 *)(iVar2 + -4);
  }
  FUN_005ff9d4(&local_e0,uVar4);
  uVar4 = 0;
  FUN_0138a4d8(auStack_3c0,param_2[0x2a4]);
  local_340 = 4;
  local_34c = 4;
  local_338 = 0;
  local_33c = 0;
  local_344 = 0;
  local_348 = 0;
  if (param_2[0x2aa] == 2) {
    uVar4 = 0x80000000;
  }
  local_350 = uVar4;
  FUN_0138a6bc(&local_330,param_2[0x2b1],param_2[0x2ba]);
  uVar4 = 2;
  if (*param_2 != 2 || param_2[1] != 0) {
    FUN_0138ff60(auStack_1a0,param_2);
    FUN_0138ff60(&local_e0,param_2 + 0xa2);
    FUN_016dd1aa(auStack_310,auStack_1a0,0xc0);
    FUN_016dd1aa(auStack_250,&local_e0,0xb0);
    local_320 = local_2c;
    uStack_31c = uStack_28;
    uStack_318 = uStack_24;
    uVar4 = local_30;
  }
  *param_1 = 0;
  param_1[1] = uStack_3d4;
  param_1[2] = local_e0;
  param_1[3] = uStack_dc;
  param_1[4] = uStack_d8;
  param_1[5] = iVar5;
  FUN_016dd1aa(param_1 + 0x9a,auStack_3c0,0x6c);
  param_1[0xb5] = local_350;
  param_1[0xb6] = local_34c;
  param_1[0xb7] = local_348;
  param_1[0xb8] = local_344;
  param_1[0xb9] = local_340;
  param_1[0xba] = local_33c;
  param_1[0xbb] = local_338;
  param_1[0x96] = local_330;
  param_1[0x97] = uStack_32c;
  param_1[0x98] = uStack_328;
  param_1[0x99] = uStack_324;
  FUN_016dd1aa(param_1 + 0x36,auStack_310,0x170);
  param_1[0x32] = 2;
  param_1[0x92] = uVar4;
  param_1[0x93] = local_320;
  param_1[0x94] = uStack_31c;
  param_1[0x95] = uStack_318;
  return;
}

