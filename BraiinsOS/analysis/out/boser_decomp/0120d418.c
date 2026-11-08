// FUN_0120d418 @ 0120d418 size=140 calls_out=4 calls_in=1
// strings: 

void FUN_0120d418(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    FUN_007372d8(param_1);
    puVar4 = (undefined4 *)(param_1 + 0x10);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x6c) != '\x03') {
      return;
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    FUN_011ea478(param_1 + 0x20);
    puVar4 = (undefined4 *)(param_1 + 0x18);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*puVar4,puVar4[1]);
    return;
  }
  return;
}

