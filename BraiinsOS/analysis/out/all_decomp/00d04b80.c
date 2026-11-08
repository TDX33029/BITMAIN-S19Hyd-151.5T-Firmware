// FUN_00d04b80 @ 00d04b80 size=204 calls_out=2 calls_in=0
// strings: 

void FUN_00d04b80(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  piVar6 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  piVar4 = piVar6 + 0x21;
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    FUN_00c74f48(piVar6 + 8);
    puVar3 = (uint *)(piVar6 + 0x12);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar2 = piVar6[0x10];
      piVar6[0x10] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = 0;
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 4))(piVar6[0x11]);
      }
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04c88(*param_1);
    return;
  }
  return;
}

