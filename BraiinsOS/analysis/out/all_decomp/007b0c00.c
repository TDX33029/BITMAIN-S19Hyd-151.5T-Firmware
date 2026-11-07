// FUN_007b0c00 @ 007b0c00 size=260 calls_out=2 calls_in=1
// strings: 

void FUN_007b0c00(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar2,param_1);
  }
  if (*(byte *)(param_1 + 0x5e6) - 3 < 2) {
    piVar3 = *(int **)(param_1 + 0x4f4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  else {
    if (*(byte *)(param_1 + 0x5e6) != 0) goto LAB_007b0cbc;
    piVar3 = *(int **)(param_1 + 0x4f4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x4f4));
  }
LAB_007b0cbc:
  if (*(uint *)(param_1 + 8) != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar2,param_1);
  }
  FUN_005c3320(param_1);
  return;
}

