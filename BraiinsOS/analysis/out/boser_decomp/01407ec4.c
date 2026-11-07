// FUN_01407ec4 @ 01407ec4 size=184 calls_out=1 calls_in=1
// strings: 

bool FUN_01407ec4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = param_1[1];
  if (iVar4 == 0) goto LAB_01407f6c;
  iVar3 = *(int *)(iVar4 + 4);
  param_1[1] = iVar3;
  if (iVar3 == 0) {
    *param_1 = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  piVar2 = *(int **)(iVar4 + 0xc);
  *(undefined4 *)(iVar4 + 4) = 0;
  piVar5 = (int *)(iVar4 + -8);
  *(undefined4 *)(iVar4 + 8) = 0;
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (!bVar1) goto LAB_01407f34;
    *piVar2 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_01407f34:
    (**(code **)(piVar2[2] + 0x10))();
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cf470(piVar5);
  }
LAB_01407f6c:
  return iVar4 != 0;
}

