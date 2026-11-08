// FUN_00d04900 @ 00d04900 size=260 calls_out=3 calls_in=1
// strings: 

int FUN_00d04900(int param_1)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  uint local_30;
  uint local_2c;
  
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
  while (FUN_00c74324(&local_30,param_1 + 0x70,param_1 + 0x20),
        local_2c != local_30 < 7 || local_2c - (local_30 < 7) < (uint)(1 < local_30 - 7)) {
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar2;
      bVar3 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar3);
    *puVar2 = uVar1 - 2;
    if (uVar1 < 2) goto LAB_00d049f8;
  }
  do {
    FUN_00c74324(&local_30,param_1 + 0x70,param_1 + 0x20);
    uVar1 = local_2c - (local_30 < 7);
    bVar3 = 1 < local_30 - 7;
    if (uVar1 == 0 && bVar3 <= uVar1) {
      return uVar1 - !bVar3;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar2;
      bVar3 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar3);
    *puVar2 = uVar1 - 2;
  } while (1 < uVar1);
LAB_00d049f8:
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

