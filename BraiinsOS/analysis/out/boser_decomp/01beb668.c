// FUN_01beb668 @ 01beb668 size=182 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01beb668(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined8 uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x4c);
  if (((int)uVar4 < 0) ||
     ((uVar4 != 0 &&
      (iVar2 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0),
      (uVar4 & 0xbfffffff) == *(uint *)(iVar2 + -0x60))))) {
    pbVar3 = *(byte **)(param_1 + 4);
    if (pbVar3 == *(byte **)(param_1 + 8)) {
      uVar6 = FUN_01beb1a0();
      return uVar6;
    }
    *(byte **)(param_1 + 4) = pbVar3 + 1;
    return CONCAT44(param_2,(uint)*pbVar3);
  }
  piVar5 = (int *)(param_1 + 0x4c);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar5);
    iVar2 = *piVar5;
    if (iVar2 != 0) break;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
    if (bVar1) {
      *piVar5 = 0x3fffffff;
    }
    iVar2 = 0;
  } while (!bVar1);
  DataMemoryBarrier(0x1b);
  if (iVar2 != 0) {
    FUN_01beae30(param_1);
  }
  pbVar3 = *(byte **)(param_1 + 4);
  if (pbVar3 == *(byte **)(param_1 + 8)) {
    uVar4 = FUN_01beb1a0(param_1);
  }
  else {
    *(byte **)(param_1 + 4) = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
  }
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar5);
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = 0;
  DataMemoryBarrier(0x1b);
  if (iVar2 << 1 < 0) {
    iVar2 = 0x81;
    software_interrupt(0);
    if (param_1 == -0x72) {
      iVar2 = 1;
      software_interrupt(0);
    }
  }
  return CONCAT44(iVar2,uVar4);
}

