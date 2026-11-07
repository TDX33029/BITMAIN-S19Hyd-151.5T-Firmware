// FUN_014161c0 @ 014161c0 size=308 calls_out=6 calls_in=0
// strings: 

undefined4 * FUN_014161c0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  piVar2 = (int *)*param_1;
  do {
    if (*piVar2 != 1) {
      ClearExclusiveLocal();
      piVar2 = (int *)*param_1;
      iVar3 = FUN_014a5154(piVar2 + 2);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143d994(*param_1);
      }
      *param_1 = iVar3;
      return (undefined4 *)(iVar3 + 8);
    }
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 0;
  DataMemoryBarrier(0xb);
  puVar6 = (undefined4 *)*param_1;
  if (puVar6[1] == 1) {
    DataMemoryBarrier(0xb);
    *puVar6 = 1;
    return puVar6 + 2;
  }
  piVar2 = puVar6 + 1;
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x98);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x98);
  }
  *puVar5 = 1;
  puVar5[1] = 1;
  FUN_016dd1aa(puVar5 + 2,puVar6 + 2,0x90);
  *param_1 = (int)puVar5;
  if (puVar6 != (undefined4 *)0xffffffff) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(puVar6);
    }
  }
  return puVar5 + 2;
}

