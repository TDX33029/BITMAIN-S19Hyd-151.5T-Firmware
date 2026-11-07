// FUN_00d2cb18 @ 00d2cb18 size=288 calls_out=4 calls_in=2
// strings: 

void FUN_00d2cb18(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint local_28 [4];
  
  puVar3 = (uint *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = *puVar3 | 1;
  FUN_0163b708(param_1 + 0x60);
  while (FUN_00c73e94(local_28,param_1 + 0x70,param_1 + 0x20),
        (local_28[0] & 0xfffffffe) != 0x80000002) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar2 - 2;
    if (uVar2 < 2) goto LAB_00d2cc34;
    if ((local_28[0] & 0xfffffffe) != 0x80000002) {
      FUN_00ac6f0c(local_28);
    }
  }
  while( true ) {
    FUN_00c73e94(local_28,param_1 + 0x70,param_1 + 0x20);
    if ((local_28[0] & 0xfffffffe) == 0x80000002) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar2 - 2;
    if (uVar2 < 2) break;
    if ((local_28[0] & 0xfffffffe) != 0x80000002) {
      FUN_00ac6f0c(local_28);
    }
  }
LAB_00d2cc34:
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

