// FUN_01407d80 @ 01407d80 size=196 calls_out=2 calls_in=1
// strings: 

bool FUN_01407d80(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = param_1[1];
  if (iVar4 == 0) goto LAB_01407e34;
  iVar2 = *(int *)(iVar4 + 4);
  param_1[1] = iVar2;
  if (iVar2 == 0) {
    *param_1 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  piVar5 = *(int **)(iVar4 + 0xc);
  piVar3 = (int *)(iVar4 + -8);
  *(undefined4 *)(iVar4 + 4) = 0;
  *(undefined4 *)(iVar4 + 8) = 0;
  FUN_019f5854(piVar5);
  if (*piVar5 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar5);
    if (!bVar1) goto LAB_01407df8;
    *piVar5 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_01407df8:
    (**(code **)(piVar5[2] + 0x10))(piVar5);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cf470(piVar3);
  }
LAB_01407e34:
  return iVar4 != 0;
}

