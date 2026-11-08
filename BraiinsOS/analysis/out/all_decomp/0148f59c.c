// FUN_0148f59c @ 0148f59c size=336 calls_out=4 calls_in=5
// strings: 

int FUN_0148f59c(int param_1)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  uint local_d8;
  uint local_d4;
  
  puVar2 = (uint *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar3 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar3);
  *puVar2 = *puVar2 | 1;
  FUN_0163b708(param_1 + 0x60);
  while (FUN_014efd24(&local_d8,param_1 + 0x70,param_1 + 0x20),
        local_d4 != local_d8 < 3 || local_d4 - (local_d8 < 3) < (uint)(1 < local_d8 - 3)) {
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar2;
      bVar3 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar3);
    *puVar2 = uVar1 - 2;
    if (uVar1 < 2) goto LAB_0148f6e8;
    if (local_d4 != local_d8 < 3 || local_d4 - (local_d8 < 3) < (uint)(1 < local_d8 - 3)) {
      FUN_0148da18(&local_d8);
    }
  }
  while( true ) {
    FUN_014efd24(&local_d8,param_1 + 0x70,param_1 + 0x20);
    uVar1 = local_d4 - (local_d8 < 3);
    bVar3 = 1 < local_d8 - 3;
    if (uVar1 == 0 && bVar3 <= uVar1) {
      return uVar1 - !bVar3;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar2;
      bVar3 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar3);
    *puVar2 = uVar1 - 2;
    if (uVar1 < 2) break;
    if (local_d4 != local_d8 < 3 || local_d4 - (local_d8 < 3) < (uint)(1 < local_d8 - 3)) {
      FUN_0148da18(&local_d8);
    }
  }
LAB_0148f6e8:
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

