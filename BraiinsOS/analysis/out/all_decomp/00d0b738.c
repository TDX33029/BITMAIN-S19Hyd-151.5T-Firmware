// FUN_00d0b738 @ 00d0b738 size=548 calls_out=4 calls_in=7
// strings: 

/* WARNING: Removing unreachable block (ram,0x00d0b8ec) */
/* WARNING: Removing unreachable block (ram,0x00d0b8f4) */
/* WARNING: Removing unreachable block (ram,0x00d0b8fc) */
/* WARNING: Removing unreachable block (ram,0x00d0b8b4) */
/* WARNING: Removing unreachable block (ram,0x00d0b8bc) */
/* WARNING: Removing unreachable block (ram,0x00d0b8c4) */
/* WARNING: Removing unreachable block (ram,0x00d0b8cc) */
/* WARNING: Removing unreachable block (ram,0x00d0b8d4) */
/* WARNING: Removing unreachable block (ram,0x00d0b8dc) */
/* WARNING: Removing unreachable block (ram,0x00d0b908) */
/* WARNING: Removing unreachable block (ram,0x00d0b914) */
/* WARNING: Removing unreachable block (ram,0x00d0b8a4) */
/* WARNING: Removing unreachable block (ram,0x00d0b918) */
/* WARNING: Removing unreachable block (ram,0x00d0b920) */
/* WARNING: Removing unreachable block (ram,0x00d0b928) */
/* WARNING: Removing unreachable block (ram,0x00d0b93c) */

void FUN_00d0b738(int *param_1)

{
  bool bVar1;
  int **ppiVar2;
  int iVar3;
  uint *puVar4;
  char local_24 [4];
  int *local_20;
  int *local_1c;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar3 + 0x10) < 0) {
      puVar4 = (uint *)(iVar3 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar3 = *param_1;
    }
    else {
      iVar3 = *param_1;
    }
    if (iVar3 != 0) {
LAB_00d0b7b8:
      FUN_00cf4ccc(local_24,param_1);
      if (local_24[0] == '\a') {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187bde8);
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(*param_1 + 0x10) != 0) goto code_r0x00d0b82c;
      }
      else if (local_24[0] != '\x06') goto LAB_00d0b7d8;
    }
  }
  return;
code_r0x00d0b82c:
  FUN_016da3a8();
  if (local_24[0] != '\a' && local_24[0] != '\x06') {
LAB_00d0b7d8:
    if (local_24[0] == '\x02') {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *local_1c;
        bVar1 = (bool)hasExclusiveAccess(local_1c);
      } while (!bVar1);
      *local_1c = iVar3 + -1;
      ppiVar2 = &local_1c;
    }
    else {
      ppiVar2 = &local_20;
      if (local_24[0] == '\x03') {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_20;
          bVar1 = (bool)hasExclusiveAccess(local_20);
        } while (!bVar1);
        *local_20 = iVar3 + -1;
      }
      else {
        if (local_24[0] != '\x04') goto LAB_00d0b7b8;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_20;
          bVar1 = (bool)hasExclusiveAccess(local_20);
        } while (!bVar1);
        *local_20 = iVar3 + -1;
      }
    }
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba06c(*ppiVar2);
    }
  }
  goto LAB_00d0b7b8;
}

