// FUN_0140b1c4 @ 0140b1c4 size=184 calls_out=5 calls_in=6
// strings: 

uint FUN_0140b1c4(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auStack_28 [24];
  
  bVar3 = false;
  bVar4 = true;
  puVar2 = param_1;
  do {
    while( true ) {
      uVar5 = *param_1 & 0xfffffffc;
      if (uVar5 != 0) {
        if (bVar4) {
          return uVar5;
        }
        FUN_013f6a60((uint)puVar2 & 0xfffffffc);
        thunk_FUN_01be4678((uint)puVar2 & 0xfffffffc);
        return uVar5;
      }
      if (!bVar3) {
        FUN_013f51d0(auStack_28,0,0x80);
        puVar2 = (uint *)FUN_013f6ab0(auStack_28);
      }
      if (*param_1 == 0) break;
      ClearExclusiveLocal();
      bVar3 = true;
      bVar4 = false;
    }
    DataMemoryBarrier(0xb);
    bVar3 = true;
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = (uint)puVar2;
    }
    bVar4 = false;
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  if (((uint)puVar2 & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01cf3da8);
  }
  return (uint)puVar2 & 0xfffffffc;
}

