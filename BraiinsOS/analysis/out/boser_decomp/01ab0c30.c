// FUN_01ab0c30 @ 01ab0c30 size=272 calls_out=5 calls_in=1
// strings: 

void FUN_01ab0c30(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  bVar1 = *param_1;
  if (bVar1 != 7) {
    if (bVar1 < 5) {
      return;
    }
    if (bVar1 != 5) {
      puVar5 = *(undefined4 **)(param_1 + 4);
      FUN_0134aee0(puVar5[0x18],puVar5[0x19],4,4);
      FUN_0134aee0(puVar5[0x6c],puVar5[0x6d],4,4);
      FUN_0165940c(puVar5 + 0x5c);
      FUN_0134aee0(puVar5[99],puVar5[100],4,4);
      if (*(char *)(puVar5 + 0x17) != '\x02') {
        piVar3 = (int *)puVar5[0x14];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(puVar5[0x14],puVar5[0x15]);
        }
      }
      piVar3 = (int *)*puVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*puVar5,puVar5[1]);
      }
      thunk_FUN_01be4678(puVar5);
      return;
    }
    piVar3 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      return;
    }
  }
  return;
}

