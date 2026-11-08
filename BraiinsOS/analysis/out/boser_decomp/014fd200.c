// FUN_014fd200 @ 014fd200 size=1372 calls_out=8 calls_in=3
// strings: 

void FUN_014fd200(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  int *local_4b8;
  int *local_4b4;
  undefined4 local_4b0;
  int *local_4ac;
  int *local_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  int *local_490;
  int *local_48c;
  undefined4 local_488;
  int *local_484;
  int *local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  int *local_448;
  int *piStack_444;
  undefined4 uStack_440;
  int *piStack_43c;
  int *piStack_438;
  undefined4 local_430 [42];
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 auStack_2d0 [152];
  int *local_238;
  int *piStack_234;
  undefined4 uStack_230;
  int *local_22c;
  int *local_228;
  undefined4 local_220 [42];
  int *local_178 [38];
  undefined4 local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int local_c0 [39];
  
  FUN_015409ac(&local_4e8);
  piVar9 = *(int **)(param_2 + 0x30);
  if (piVar9 == (int *)0x0) {
    local_4b8 = (int *)0x0;
  }
  else {
    do {
      iVar3 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_014fd758;
    piVar4 = *(int **)(param_2 + 0x34);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_014fd758;
    piVar7 = *(int **)(param_2 + 0x40);
    uVar11 = *(undefined4 *)(param_2 + 0x38);
    if (piVar7 != (int *)0x0) {
      do {
        iVar3 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_014fd758;
    }
    piVar8 = *(int **)(param_2 + 0x3c);
    do {
      iVar3 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_014fd758;
    local_4b8 = piVar9;
    local_4b4 = piVar4;
    local_4b0 = uVar11;
    local_4ac = piVar8;
    local_4a8 = piVar7;
  }
  FUN_014fe334(&local_4a0,*(undefined4 *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 0x70));
  piVar9 = *(int **)(param_2 + 0x44);
  if (piVar9 == (int *)0x0) {
    local_490 = (int *)0x0;
  }
  else {
    do {
      iVar3 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_014fd758;
    piVar4 = *(int **)(param_2 + 0x48);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_014fd758;
    piVar7 = *(int **)(param_2 + 0x54);
    uVar11 = *(undefined4 *)(param_2 + 0x4c);
    if (piVar7 != (int *)0x0) {
      do {
        iVar3 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_014fd758;
    }
    piVar8 = *(int **)(param_2 + 0x50);
    do {
      iVar3 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_014fd758;
    local_490 = piVar9;
    local_48c = piVar4;
    local_488 = uVar11;
    local_484 = piVar8;
    local_480 = piVar7;
  }
  FUN_014fe78c(&local_478,*(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x7c));
  FUN_014fe78c(&local_468,*(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0x88));
  FUN_014fe78c(&local_458,*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94));
  iVar10 = *(int *)(param_2 + 0x58);
  iVar3 = 0;
  if (iVar10 != 0) {
    iVar3 = FUN_0155dc20();
    piVar9 = *(int **)(iVar10 + 0x1f8);
    do {
      iVar6 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_014fd758;
    piVar4 = *(int **)(iVar10 + 0x1fc);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_014fd758;
    piVar7 = *(int **)(iVar10 + 0x208);
    uVar11 = *(undefined4 *)(iVar10 + 0x200);
    if (piVar7 != (int *)0x0) {
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_014fd758;
    }
    piVar8 = *(int **)(iVar10 + 0x204);
    do {
      iVar6 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_014fd758;
    local_238 = piVar9;
    piStack_234 = piVar4;
    uStack_230 = uVar11;
    local_22c = piVar8;
    local_228 = piVar7;
    FUN_014fd200(local_220,iVar10 + 0x150);
    if (*(int *)(iVar10 + 0x98) == -0x80000000) {
      local_e0 = 0x80000000;
    }
    else {
      FUN_014fd200(&local_378,iVar10);
      FUN_01bed4e2(local_178,&local_378,0xa8);
    }
    uVar11 = 0x80000000;
    if (*(int *)(iVar10 + 0x140) != -0x80000000) {
      FUN_014fd200(&local_378,iVar10 + 0xa8);
      FUN_01bed4e2(local_c0,&local_378,0x98);
      local_d0 = local_2dc;
      uStack_cc = uStack_2d8;
      uStack_c8 = uStack_2d4;
      uVar11 = local_2e0;
    }
    local_448 = local_238;
    piStack_444 = piStack_234;
    uStack_440 = uStack_230;
    piStack_43c = local_22c;
    piStack_438 = local_228;
    FUN_01bed4e2(local_430,local_220,0xa8);
    FUN_01bed4e2(&local_378,local_178,0xa8);
    FUN_01bed4e2(auStack_2d0,local_c0,0x98);
    local_388 = local_d0;
    uStack_384 = uStack_cc;
    uStack_380 = uStack_c8;
    FUN_01bed4e2(iVar3,&local_378,0x140);
    *(undefined4 *)(iVar3 + 0x140) = uVar11;
    *(undefined4 *)(iVar3 + 0x144) = local_388;
    *(undefined4 *)(iVar3 + 0x148) = uStack_384;
    *(undefined4 *)(iVar3 + 0x14c) = uStack_380;
    FUN_01bed4e2(iVar3 + 0x150,local_430,0xa8);
    *(int **)(iVar3 + 0x1f8) = local_448;
    *(int **)(iVar3 + 0x1fc) = piStack_444;
    *(undefined4 *)(iVar3 + 0x200) = uStack_440;
    *(int **)(iVar3 + 0x204) = piStack_43c;
    *(int **)(iVar3 + 0x208) = piStack_438;
  }
  uVar11 = 0;
  iVar10 = *(int *)(param_2 + 0x5c);
  local_c0[0] = iVar3;
  if (iVar10 != 0) {
    uVar11 = FUN_0155dc40();
    FUN_014fd200(&local_378,iVar10);
    FUN_01bed4e2(uVar11,&local_378,0xa8);
  }
  iVar10 = *(int *)(param_2 + 0x60);
  local_430[0] = uVar11;
  if (iVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0155dc40();
    FUN_014fd200(&local_378,iVar10);
    FUN_01bed4e2(uVar5,&local_378,0xa8);
  }
  piVar9 = *(int **)(param_2 + 100);
  local_220[0] = uVar5;
  if (piVar9 != (int *)0x0) {
    do {
      iVar10 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar10 + 1;
    if (iVar10 < 0) {
LAB_014fd758:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14fd758);
      (*pcVar1)();
    }
  }
  local_178[0] = piVar9;
  FUN_014fd0d8(&local_378,param_2 + 0x98);
  *param_1 = local_4e8;
  param_1[1] = uStack_4e4;
  param_1[2] = uStack_4e0;
  param_1[3] = uStack_4dc;
  param_1[4] = uStack_4d8;
  param_1[5] = uStack_4d4;
  param_1[6] = local_4d0;
  param_1[7] = uStack_4cc;
  param_1[8] = uStack_4c8;
  param_1[9] = uStack_4c4;
  param_1[10] = uStack_4c0;
  param_1[0xb] = uStack_4bc;
  param_1[0xc] = local_4b8;
  param_1[0xd] = local_4b4;
  param_1[0xe] = local_4b0;
  param_1[0xf] = local_4ac;
  param_1[0x10] = local_4a8;
  param_1[0x1a] = local_4a0;
  param_1[0x1b] = uStack_49c;
  param_1[0x1c] = uStack_498;
  param_1[0x11] = local_490;
  param_1[0x12] = local_48c;
  param_1[0x13] = local_488;
  param_1[0x14] = local_484;
  param_1[0x15] = local_480;
  param_1[0x1d] = local_478;
  param_1[0x1e] = uStack_474;
  param_1[0x1f] = uStack_470;
  param_1[0x20] = local_468;
  param_1[0x21] = uStack_464;
  param_1[0x22] = uStack_460;
  param_1[0x23] = local_458;
  param_1[0x24] = uStack_454;
  param_1[0x25] = uStack_450;
  param_1[0x16] = iVar3;
  param_1[0x17] = uVar11;
  param_1[0x18] = uVar5;
  param_1[0x19] = piVar9;
  param_1[0x26] = local_378;
  param_1[0x27] = uStack_374;
  param_1[0x28] = uStack_370;
  return;
}

