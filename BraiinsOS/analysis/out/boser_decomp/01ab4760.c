// FUN_01ab4760 @ 01ab4760 size=264 calls_out=5 calls_in=1
// strings: 

void FUN_01ab4760(byte *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*param_1 < 5) {
    return;
  }
  if (*param_1 == 5) {
    piVar2 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      return;
    }
    return;
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  FUN_0134aee0(puVar4[0x18],puVar4[0x19],4,4);
  FUN_0134aee0(puVar4[0x6c],puVar4[0x6d],4,4);
  FUN_0165940c(puVar4 + 0x5c);
  FUN_0134aee0(puVar4[99],puVar4[100],4,4);
  if (*(char *)(puVar4 + 0x17) != '\x02') {
    piVar2 = (int *)puVar4[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(puVar4[0x14],puVar4[0x15]);
    }
  }
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*puVar4,puVar4[1]);
  }
  thunk_FUN_01be4678(puVar4);
  return;
}

