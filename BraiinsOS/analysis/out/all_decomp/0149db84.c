// FUN_0149db84 @ 0149db84 size=572 calls_out=11 calls_in=0
// strings: 

void FUN_0149db84(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar8;
  undefined4 *puVar9;
  
  piVar3 = (int *)param_1[0x1d];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b53fc(param_1[0x1d]);
    }
  }
  FUN_0148b99c(param_1 + 0x10);
  iVar6 = param_1[0x13];
  DataMemoryBarrier(0xb);
  pcVar7 = (char *)(iVar6 + 0x10);
  *(undefined1 *)(iVar6 + 0x20) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar2 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar2);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar6 + 8);
    *(undefined4 *)(iVar6 + 8) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x10) = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar6 + 0xc));
    }
  }
  pcVar7 = (char *)(iVar6 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar2 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar2);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar6 + 0x14);
    *(undefined4 *)(iVar6 + 0x14) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar6 + 0x18));
    }
  }
  piVar3 = (int *)param_1[0x13];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089dea4(param_1[0x13]);
  }
  piVar3 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0x14],param_1[0x15]);
  }
  FUN_0148b5d0(param_1 + 0x16);
  FUN_0149d378(param_1 + 0x1b);
  if (*param_1 == 2) {
    return;
  }
  piVar8 = param_1 + 3;
  FUN_0102c440(piVar8);
  piVar3 = (int *)*piVar8;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0102a7d0(*piVar8);
  }
  FUN_0148c7a0(param_1 + 7);
  if (param_1[0xb] == 0) {
    iVar6 = param_1[0xc];
    puVar9 = (undefined4 *)param_1[0xd];
    pcVar5 = (code *)*puVar9;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar6);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(iVar6);
      FUN_0147c310(param_1);
      return;
    }
  }
  else {
    (**(code **)(param_1[0xb] + 0x10))
              (param_1 + 0xe,param_1[0xc],param_1[0xd],param_1[0xd],unaff_r4,unaff_r5);
  }
  FUN_0147c310(param_1);
  return;
}

