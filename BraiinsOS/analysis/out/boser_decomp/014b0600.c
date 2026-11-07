// FUN_014b0600 @ 014b0600 size=216 calls_out=8 calls_in=1
// strings: 

void FUN_014b0600(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x324) == '\0') {
    FUN_00b76614(param_1);
    piVar2 = *(int **)(param_1 + 0x2f8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014afd70(*(undefined4 *)(param_1 + 0x2f8));
    }
    FUN_010a7080(param_1 + 0x10);
    FUN_006763fc(param_1 + 0x2fc);
    if (*(int *)(param_1 + 0x2e0) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x2e0),*(undefined4 *)(param_1 + 0x2e4));
    }
  }
  else {
    if (*(char *)(param_1 + 0x324) != '\x03') {
      return;
    }
    FUN_019f1850((int *)(param_1 + 0x18));
    FUN_00668d74(param_1 + 0x48);
    iVar3 = *(int *)(param_1 + 0x1c);
    bVar1 = *(int *)(param_1 + 0x18) == 0;
    bVar4 = bVar1 && iVar3 == 0;
    if (!bVar1 || iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x38);
      bVar4 = iVar3 == 0;
    }
    if (!bVar4) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(param_1 + 0x3c));
    }
    FUN_014b07cc(param_1 + 0x68);
    FUN_006763fc(param_1 + 0x2fc);
  }
  if (*(int *)(param_1 + 0x2ec) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x2ec),*(undefined4 *)(param_1 + 0x2f0));
  return;
}

