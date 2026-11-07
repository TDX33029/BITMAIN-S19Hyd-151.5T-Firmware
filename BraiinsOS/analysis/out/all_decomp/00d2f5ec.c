// FUN_00d2f5ec @ 00d2f5ec size=292 calls_out=4 calls_in=4
// strings: 

void FUN_00d2f5ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  puVar5 = (uint *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar1);
  *puVar5 = *puVar5 | 1;
  FUN_0163b708(param_1 + 0x60);
  while (uVar6 = FUN_00c740e8(param_1 + 0x70,param_1 + 0x20), piVar2 = (int *)uVar6,
        ((uint)((ulonglong)uVar6 >> 0x20) & 0xfe) != 2) {
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar3 - 2;
    if (uVar3 < 2) goto LAB_00d2f70c;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8();
    }
  }
  while( true ) {
    uVar6 = FUN_00c740e8(param_1 + 0x70,param_1 + 0x20);
    piVar2 = (int *)uVar6;
    if (((uint)((ulonglong)uVar6 >> 0x20) & 0xfe) == 2) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar3 - 2;
    if (uVar3 < 2) break;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8();
    }
  }
LAB_00d2f70c:
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

