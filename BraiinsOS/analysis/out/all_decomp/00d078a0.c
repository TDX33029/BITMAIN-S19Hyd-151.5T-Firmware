// FUN_00d078a0 @ 00d078a0 size=112 calls_out=2 calls_in=1
// strings: 

uint * FUN_00d078a0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(*param_1 + 0x98);
  uVar2 = *(uint *)(*param_1 + 0x98);
  if ((uVar2 < 0xfffffff0) && ((uVar2 & 8) == 0)) {
    if (*puVar3 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
      if (bVar1) {
        *puVar3 = uVar2 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_00d078f0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0127d66c(puVar3);
LAB_00d078f0:
  FUN_0128236c(puVar3);
  FUN_0128236c((uint)puVar3 | 1);
  DataMemoryBarrier(0xb);
  return puVar3;
}

