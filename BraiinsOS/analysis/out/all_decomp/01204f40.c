// FUN_01204f40 @ 01204f40 size=1340 calls_out=8 calls_in=2
// strings: 

void FUN_01204f40(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  int *local_3e8;
  int *local_3e4;
  undefined4 local_3e0;
  int *local_3dc;
  int *local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  int *local_3c0;
  int *local_3bc;
  undefined4 local_3b8;
  int *local_3b4;
  int *local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
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
  int local_220 [42];
  int *local_178 [38];
  undefined4 local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int local_c0 [39];
  
  FUN_01223be0(&local_418);
  piVar9 = *(int **)(param_2 + 0x30);
  if (piVar9 == (int *)0x0) {
    local_3e8 = (int *)0x0;
  }
  else {
    do {
      iVar3 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_01205480;
    piVar4 = *(int **)(param_2 + 0x34);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_01205480;
    piVar7 = *(int **)(param_2 + 0x40);
    uVar11 = *(undefined4 *)(param_2 + 0x38);
    if (piVar7 != (int *)0x0) {
      do {
        iVar3 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01205480;
    }
    piVar8 = *(int **)(param_2 + 0x3c);
    do {
      iVar3 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_01205480;
    local_3e8 = piVar9;
    local_3e4 = piVar4;
    local_3e0 = uVar11;
    local_3dc = piVar8;
    local_3d8 = piVar7;
  }
  FUN_0115c540(&local_3d0,*(undefined4 *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 0x70));
  piVar9 = *(int **)(param_2 + 0x44);
  if (piVar9 == (int *)0x0) {
    local_3c0 = (int *)0x0;
  }
  else {
    do {
      iVar3 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_01205480;
    piVar4 = *(int **)(param_2 + 0x48);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_01205480;
    piVar7 = *(int **)(param_2 + 0x54);
    uVar11 = *(undefined4 *)(param_2 + 0x4c);
    if (piVar7 != (int *)0x0) {
      do {
        iVar3 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01205480;
    }
    piVar8 = *(int **)(param_2 + 0x50);
    do {
      iVar3 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_01205480;
    local_3c0 = piVar9;
    local_3bc = piVar4;
    local_3b8 = uVar11;
    local_3b4 = piVar8;
    local_3b0 = piVar7;
  }
  FUN_0115d424(&local_3a8,param_2 + 0x74);
  FUN_0115d424(&local_398,param_2 + 0x80);
  FUN_0115d424(&local_388,param_2 + 0x8c);
  iVar10 = *(int *)(param_2 + 0x58);
  iVar3 = 0;
  if (iVar10 != 0) {
    iVar3 = thunk_FUN_016d4a50(0x210);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x210);
    }
    piVar9 = *(int **)(iVar10 + 0x1f8);
    do {
      iVar6 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_01205480;
    piVar4 = *(int **)(iVar10 + 0x1fc);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_01205480;
    piVar7 = *(int **)(iVar10 + 0x208);
    uVar11 = *(undefined4 *)(iVar10 + 0x200);
    if (piVar7 != (int *)0x0) {
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01205480;
    }
    piVar8 = *(int **)(iVar10 + 0x204);
    do {
      iVar6 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_01205480;
    local_238 = piVar9;
    piStack_234 = piVar4;
    uStack_230 = uVar11;
    local_22c = piVar8;
    local_228 = piVar7;
    FUN_01204f40(local_220,iVar10 + 0x150);
    if (*(int *)(iVar10 + 0x98) == -0x80000000) {
      local_e0 = 0x80000000;
      iVar6 = *(int *)(iVar10 + 0x140);
    }
    else {
      FUN_01204f40(&local_378,iVar10);
      FUN_016dd1aa(local_178,&local_378,0xa8);
      iVar6 = *(int *)(iVar10 + 0x140);
    }
    uVar11 = 0x80000000;
    if (iVar6 != -0x80000000) {
      FUN_01204f40(&local_378,iVar10 + 0xa8);
      FUN_016dd1aa(local_c0,&local_378,0x98);
      local_d0 = local_2dc;
      uStack_cc = uStack_2d8;
      uStack_c8 = uStack_2d4;
      uVar11 = local_2e0;
    }
    *(int **)(iVar3 + 0x1f8) = local_238;
    *(int **)(iVar3 + 0x1fc) = piStack_234;
    *(undefined4 *)(iVar3 + 0x200) = uStack_230;
    *(int **)(iVar3 + 0x204) = local_22c;
    *(int **)(iVar3 + 0x208) = local_228;
    FUN_016dd1aa(iVar3 + 0x150,local_220,0xa8);
    FUN_016dd1aa(&local_378,local_178,0xa8);
    FUN_016dd1aa(auStack_2d0,local_c0,0x98);
    *(undefined4 *)(iVar3 + 0x144) = local_d0;
    *(undefined4 *)(iVar3 + 0x148) = uStack_cc;
    *(undefined4 *)(iVar3 + 0x14c) = uStack_c8;
    FUN_016dd1aa(iVar3,&local_378,0x140);
    *(undefined4 *)(iVar3 + 0x140) = uVar11;
  }
  iVar10 = 0;
  iVar6 = *(int *)(param_2 + 0x5c);
  local_238 = (int *)iVar3;
  if (iVar6 != 0) {
    iVar10 = thunk_FUN_016d4a50(0xa8);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xa8);
    }
    FUN_01204f40(&local_378,iVar6);
    FUN_016dd1aa(iVar10,&local_378,0xa8);
  }
  iVar6 = *(int *)(param_2 + 0x60);
  local_c0[0] = iVar10;
  if (iVar6 == 0) {
    iVar5 = 0;
    piVar9 = *(int **)(param_2 + 100);
  }
  else {
    iVar5 = thunk_FUN_016d4a50(0xa8);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xa8);
    }
    FUN_01204f40(&local_378,iVar6);
    FUN_016dd1aa(iVar5,&local_378,0xa8);
    piVar9 = *(int **)(param_2 + 100);
  }
  local_220[0] = iVar5;
  if (piVar9 != (int *)0x0) {
    do {
      iVar6 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_01205480:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1205480);
      (*pcVar1)();
    }
  }
  local_178[0] = piVar9;
  FUN_0115e4bc(&local_378,*(undefined4 *)(param_2 + 0x9c),*(undefined4 *)(param_2 + 0xa0));
  *param_1 = local_418;
  param_1[1] = uStack_414;
  param_1[2] = uStack_410;
  param_1[3] = uStack_40c;
  param_1[4] = uStack_408;
  param_1[5] = uStack_404;
  param_1[6] = local_400;
  param_1[7] = uStack_3fc;
  param_1[8] = uStack_3f8;
  param_1[9] = uStack_3f4;
  param_1[10] = uStack_3f0;
  param_1[0xb] = uStack_3ec;
  param_1[0xc] = local_3e8;
  param_1[0xd] = local_3e4;
  param_1[0xe] = local_3e0;
  param_1[0xf] = local_3dc;
  param_1[0x10] = local_3d8;
  param_1[0x1a] = local_3d0;
  param_1[0x1b] = uStack_3cc;
  param_1[0x1c] = uStack_3c8;
  param_1[0x11] = local_3c0;
  param_1[0x12] = local_3bc;
  param_1[0x13] = local_3b8;
  param_1[0x14] = local_3b4;
  param_1[0x15] = local_3b0;
  param_1[0x1d] = local_3a8;
  param_1[0x1e] = uStack_3a4;
  param_1[0x1f] = uStack_3a0;
  param_1[0x20] = local_398;
  param_1[0x21] = local_394;
  param_1[0x23] = local_388;
  param_1[0x24] = uStack_384;
  param_1[0x25] = uStack_380;
  param_1[0x17] = iVar10;
  param_1[0x16] = iVar3;
  param_1[0x22] = local_390;
  param_1[0x19] = piVar9;
  param_1[0x18] = iVar5;
  param_1[0x26] = local_378;
  param_1[0x27] = uStack_374;
  param_1[0x28] = uStack_370;
  return;
}

