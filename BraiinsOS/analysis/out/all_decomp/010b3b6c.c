// FUN_010b3b6c @ 010b3b6c size=312 calls_out=1 calls_in=8
// strings: 

void FUN_010b3b6c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (((iVar2 == 1 || iVar2 == 2) && (*(uint *)(param_1 + 0x48) < 2)) &&
     (*(int *)(param_1 + 0x68) != 0)) {
    piVar3 = *(int **)(param_1 + 0x74);
    if (((uint)piVar3 & 1) == 0) {
      piVar4 = piVar3 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 != 1) goto LAB_010b3c18;
      DataMemoryBarrier(0xb);
      if (*piVar3 != 0) {
        thunk_FUN_016d3fb4(piVar3[1]);
      }
    }
    else {
      if (*(int *)(param_1 + 0x70) + ((uint)piVar3 >> 5) == 0) goto LAB_010b3c18;
      piVar3 = (int *)(*(int *)(param_1 + 0x68) - ((uint)piVar3 >> 5));
    }
    thunk_FUN_016d3fb4(piVar3);
  }
LAB_010b3c18:
  *(int *)(param_1 + 0x40) = 4;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if ((*(int *)(param_1 + 0x90) == 0) && (iVar2 = *(int *)(param_1 + 0x94), iVar2 != -0x80000000)) {
    iVar6 = *(int *)(param_1 + 0x98);
    iVar5 = *(int *)(param_1 + 0x9c) + 1;
    iVar7 = 0;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      piVar3 = (int *)(iVar6 + iVar7);
      iVar7 = iVar7 + 0x14;
      (**(code **)(*piVar3 + 0x10))(piVar3 + 3,piVar3[1],piVar3[2]);
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(iVar6);
    }
  }
  *(undefined1 *)(param_1 + 0xf7) = 2;
  *(undefined4 *)(param_1 + 0x90) = 6;
  return;
}

