// FUN_01441048 @ 01441048 size=272 calls_out=4 calls_in=3
// strings: 

void FUN_01441048(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint local_c0 [42];
  
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
  while (FUN_01405abc(local_c0,param_1 + 0x70,param_1 + 0x20), (local_c0[0] & 6) != 4) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar2 - 2;
    if (uVar2 < 2) goto LAB_01441154;
    FUN_0143eb3c(local_c0);
  }
  FUN_0143eb3c(local_c0);
  while( true ) {
    FUN_01405abc(local_c0,param_1 + 0x70,param_1 + 0x20);
    if ((local_c0[0] & 6) == 4) {
      FUN_0143eb3c(local_c0);
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar2 - 2;
    if (uVar2 < 2) break;
    FUN_0143eb3c(local_c0);
  }
LAB_01441154:
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

