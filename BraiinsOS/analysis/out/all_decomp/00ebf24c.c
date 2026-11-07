// FUN_00ebf24c @ 00ebf24c size=260 calls_out=3 calls_in=6
// strings: 

void FUN_00ebf24c(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint local_28;
  int local_24;
  
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
  while ((FUN_005c8fb0(&local_28,param_1 + 0x70,param_1 + 0x20), local_28 != 2 || local_24 != 0 &&
         ((local_28 & 1) == 0))) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar2 - 2;
    if (uVar2 < 2) goto LAB_00ebf344;
  }
  do {
    FUN_005c8fb0(&local_28,param_1 + 0x70,param_1 + 0x20);
    if ((local_28 == 2 && local_24 == 0) || ((local_28 & 1) != 0)) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar2 - 2;
  } while (1 < uVar2);
LAB_00ebf344:
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

