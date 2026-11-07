// FUN_0139f4dc @ 0139f4dc size=560 calls_out=5 calls_in=0
// strings: 

void FUN_0139f4dc(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  int iStack_6bc;
  undefined1 auStack_6b8 [152];
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined1 auStack_5f8 [368];
  undefined4 local_488;
  undefined4 local_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_468 [108];
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  int iStack_3cc;
  undefined1 auStack_3c8 [112];
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 auStack_318 [192];
  undefined1 auStack_258 [176];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [176];
  undefined1 auStack_e8 [176];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = param_2[0x301];
  piVar3 = *(int **)(iVar2 + 0x13c);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x139f708);
    (*pcVar1)();
  }
  iVar5 = *(int *)(iVar2 + 0x13c);
  uVar4 = 0;
  bVar7 = *(int *)(iVar5 + 0x10) == 0;
  iVar2 = 0;
  if (!bVar7) {
    iVar2 = *(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x10) * 8;
    bVar7 = iVar2 == 8;
  }
  if (!bVar7) {
    uVar4 = *(undefined4 *)(iVar2 + -4);
  }
  FUN_005ff9d4(&local_6d0,uVar4);
  uVar4 = 0;
  local_3e0 = 0;
  local_3d8 = local_6d0;
  uStack_3d4 = uStack_6cc;
  uStack_3d0 = uStack_6c8;
  iStack_3cc = iVar5;
  FUN_0138a4d8(auStack_3c8,param_2[0x2a4]);
  local_348 = 4;
  local_354 = 4;
  local_340 = 0;
  local_344 = 0;
  local_34c = 0;
  local_350 = 0;
  if (param_2[0x2aa] == 2) {
    uVar4 = 0x80000000;
  }
  local_358 = uVar4;
  FUN_0138a6bc(&local_338,param_2[0x2b1],param_2[0x2ba]);
  uVar4 = 2;
  if (*param_2 != 2 || param_2[1] != 0) {
    FUN_0138ff60(auStack_e8,param_2);
    FUN_0138ff60(&local_6d0,param_2 + 0xa2);
    FUN_016dd1aa(auStack_318,auStack_e8,0xc0);
    FUN_016dd1aa(auStack_258,&local_6d0,0xb0);
    local_328 = local_61c;
    uStack_324 = uStack_618;
    uStack_320 = uStack_614;
    uVar4 = local_620;
  }
  local_6d0 = local_3e0;
  uStack_6cc = uStack_3dc;
  uStack_6c8 = local_3d8;
  uStack_6c4 = uStack_3d4;
  uStack_6c0 = uStack_3d0;
  iStack_6bc = iStack_3cc;
  FUN_016dd1aa(auStack_468,auStack_3c8,0x6c);
  uStack_3fc = local_358;
  uStack_3f8 = local_354;
  uStack_3f4 = local_350;
  local_3f0 = local_34c;
  uStack_3ec = local_348;
  uStack_3e8 = local_344;
  uStack_3e4 = local_340;
  local_478 = local_338;
  uStack_474 = uStack_334;
  uStack_470 = uStack_330;
  uStack_46c = uStack_32c;
  FUN_016dd1aa(auStack_5f8,auStack_318,0x170);
  local_484 = local_328;
  uStack_480 = uStack_324;
  uStack_47c = uStack_320;
  local_608 = 2;
  uVar6 = 2;
  local_488 = uVar4;
  if (param_2[0x304] != 2 || param_2[0x305] != 0) {
    FUN_0138ff60(auStack_e8,param_2 + 0x304);
    FUN_016dd1aa(auStack_198,auStack_e8,0xb0);
    local_1a8 = local_34;
    uStack_1a4 = local_30;
    uStack_1a0 = local_2c;
    uVar6 = local_38;
  }
  FUN_016dd1aa(auStack_6b8,auStack_198,0xb0);
  local_604 = local_1a8;
  uStack_600 = uStack_1a4;
  uStack_5fc = uStack_1a0;
  local_608 = uVar6;
  FUN_016dd1aa(param_1,&local_6d0,0x2f0);
  return;
}

