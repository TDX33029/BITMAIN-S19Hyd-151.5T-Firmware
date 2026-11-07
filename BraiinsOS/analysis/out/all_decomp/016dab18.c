// FUN_016dab18 @ 016dab18 size=166 calls_out=0 calls_in=8
// strings: 

longlong FUN_016dab18(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar3 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  uVar4 = *(uint *)(iVar3 + -0x60);
  if ((*(uint *)(param_1 + 0x4c) & 0xbfffffff) == uVar4) {
    return (ulonglong)param_2 << 0x20;
  }
  puVar5 = (uint *)(param_1 + 0x4c);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar5);
    uVar2 = *puVar5;
    if (uVar2 != 0) break;
    bVar1 = (bool)hasExclusiveAccess(puVar5);
    if (bVar1) {
      *puVar5 = uVar4;
    }
    uVar2 = 0;
  } while (!bVar1);
  DataMemoryBarrier(0x1b);
  if (uVar2 == 0) {
    return CONCAT44(param_2,1);
  }
LAB_016dab70:
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar5);
    uVar2 = *puVar5;
    if (uVar2 != 0) break;
    bVar1 = (bool)hasExclusiveAccess(puVar5);
    if (bVar1) {
      *puVar5 = uVar4 | 0x40000000;
    }
    uVar2 = 0;
  } while (!bVar1);
  DataMemoryBarrier(0x1b);
  if (uVar2 == 0) {
    return CONCAT44(param_2,1);
  }
  if (-1 < (int)(uVar2 << 1)) goto LAB_016dab54;
  goto LAB_016dab92;
LAB_016dab54:
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar5);
    param_2 = *puVar5;
    if (param_2 != uVar2) goto LAB_016dab68;
    bVar1 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar1);
  *puVar5 = uVar2 | 0x40000000;
LAB_016dab68:
  DataMemoryBarrier(0x1b);
  if (param_2 == uVar2) {
LAB_016dab92:
    param_2 = 0x80;
    software_interrupt(0);
    if (param_1 == -0x72) {
      param_2 = 0;
      software_interrupt(0);
    }
  }
  goto LAB_016dab70;
}

