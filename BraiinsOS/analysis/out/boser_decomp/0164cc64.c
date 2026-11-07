// FUN_0164cc64 @ 0164cc64 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_0164cc64(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 0x68);
  uVar1 = *(uint *)(param_1 + 100);
  iVar5 = iVar4 * 3;
  iVar2 = *(int *)(param_1 + 8);
  if (uVar1 < 9) {
    iVar2 = param_1 + 4;
  }
  piVar3 = (int *)(iVar2 + iVar4 * 0xc + 4);
  do {
    bVar6 = *(int *)(param_1 + 0x6c) != iVar4;
    if (bVar6) {
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x68) = iVar4;
      iVar5 = *piVar3;
      piVar3 = piVar3 + 3;
    }
  } while (bVar6 && iVar5 != 2);
  if (uVar1 < 9) {
    return;
  }
  FUN_0134c054(uVar1,*(int *)(param_1 + 8),4,0xc);
  return;
}

