// FUN_0075d388 @ 0075d388 size=140 calls_out=0 calls_in=3
// strings: 

void FUN_0075d388(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_1 == 0) {
    return;
  }
  puVar4 = (uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x18);
  do {
    while( true ) {
      uVar2 = uVar3;
      if ((uVar2 & 4) != 0) goto LAB_0075d3f0;
      uVar3 = *puVar4;
      if (uVar3 == uVar2) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar4);
    if (bVar1) {
      *puVar4 = uVar2 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_0075d3f0:
  if ((uVar2 & 5) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0075d40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

