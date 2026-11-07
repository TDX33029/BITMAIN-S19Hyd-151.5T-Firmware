// FUN_01654f0c @ 01654f0c size=228 calls_out=4 calls_in=2
// strings: assertion failed: prev.ref_count() >= 1

void FUN_01654f0c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar2 = *(uint **)(param_1 + 0x58);
  if (puVar2 != (uint *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar4 - 0x40;
    DataMemoryBarrier(0xb);
    if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
    }
    if ((uVar4 & 0xffffffc0) == 0x40) {
      (**(code **)(puVar2[2] + 8))();
    }
  }
  puVar6 = (undefined4 *)(param_1 + 0x50);
  FUN_01635e1c(puVar6);
  piVar3 = (int *)*puVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01658abc(*puVar6);
  }
  piVar3 = *(int **)(param_1 + 0x5c);
  if (piVar3 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01658b0c(*(undefined4 *)(param_1 + 0x5c));
    return;
  }
  return;
}

