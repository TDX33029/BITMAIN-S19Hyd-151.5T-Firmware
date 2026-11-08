// FUN_019e0044 @ 019e0044 size=360 calls_out=5 calls_in=22
// strings: 

void FUN_019e0044(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  DataMemoryBarrier(0xb);
  while ((uVar1 & 1) == 0) {
    uVar2 = *param_1;
    if (uVar2 == uVar1) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(param_1);
        if (bVar3) {
          *param_1 = uVar1 & 0xfffffffc | 2;
          bVar3 = true;
          uVar1 = uVar2;
          goto LAB_019e00a0;
        }
        uVar2 = *param_1;
      } while (uVar2 == uVar1);
    }
    bVar3 = false;
    ClearExclusiveLocal();
    uVar1 = uVar2;
LAB_019e00a0:
    DataMemoryBarrier(0xb);
    if (bVar3) {
      return;
    }
  }
  puVar4 = param_1 + 1;
  if ((char)*puVar4 == '\0') {
    bVar3 = (bool)hasExclusiveAccess(puVar4);
    if (bVar3) {
      *(char *)puVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019e00d8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(puVar4);
LAB_019e00d8:
  FUN_0165098c(puVar4);
  DataMemoryBarrier(0xb);
  uVar5 = FUN_019e01d8(param_1 + 2,param_1,*param_1,0);
  if ((int)uVar5 == 0) {
    FUN_01650a90(puVar4);
    if ((char)*puVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar4);
        if (bVar3) {
          *(char *)puVar4 = '\0';
          return;
        }
      } while ((char)*puVar4 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(puVar4);
    return;
  }
  FUN_01650a90(puVar4);
  if ((char)*puVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar4);
      if (bVar3) {
        *(char *)puVar4 = '\0';
        goto LAB_019e0148;
      }
    } while ((char)*puVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(puVar4);
LAB_019e0148:
                    /* WARNING: Could not recover jumptable at 0x019e0154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)uVar5 + 4))((int)((ulonglong)uVar5 >> 0x20));
  return;
}

