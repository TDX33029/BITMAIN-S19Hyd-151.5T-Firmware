// FUN_00669d70 @ 00669d70 size=260 calls_out=8 calls_in=2
// strings: 

void FUN_00669d70(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x33)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00687810(*(undefined4 *)(param_1 + 0x24));
    }
    FUN_00668c04(param_1 + 0x28);
    FUN_005faf6c(param_1 + 0x2c);
    return;
  default:
    return;
  case 3:
    FUN_019ede44(param_1 + 0x50);
    break;
  case 4:
    FUN_00668b80(param_1 + 0x1e0);
    *(undefined1 *)(param_1 + 0x32) = 0;
    FUN_00668cb0(param_1 + 0xd0);
    FUN_006a0304(param_1 + 0x338);
    break;
  case 5:
    FUN_00668b80(param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 0x31) = 0;
    FUN_00668cb0(param_1 + 0xc0);
    FUN_006a0304(param_1 + 0x328);
  }
  FUN_00668c84(*(undefined4 *)(param_1 + 0x10));
  FUN_005faf6c(param_1 + 0x20);
  FUN_00668c04(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00687810(*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}

