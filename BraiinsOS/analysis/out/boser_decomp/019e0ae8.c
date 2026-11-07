// FUN_019e0ae8 @ 019e0ae8 size=412 calls_out=8 calls_in=10
// strings: assertion failed: self.tail.is_none()

void FUN_019e0ae8(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if ((char)param_1[7] != '\x01') {
    return;
  }
  puVar3 = (uint *)*param_1;
  puVar2 = puVar3 + 1;
  if ((char)*puVar2 == '\0') {
    bVar5 = (bool)hasExclusiveAccess(puVar2);
    if (bVar5) {
      *(char *)puVar2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019e0b24;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(puVar2);
LAB_019e0b24:
  FUN_0165098c(puVar2);
  uVar4 = *puVar3;
  DataMemoryBarrier(0xb);
  uVar6 = FUN_019dff38(param_1 + 6,0);
  FUN_019dffdc(puVar3 + 2,param_1 + 2);
  uVar1 = puVar3[2];
  if ((uVar1 == 0) && (puVar3[3] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.tail.is_none()",0x25,&DAT_01d2900c);
  }
  bVar5 = uVar1 == 0;
  if (bVar5) {
    uVar1 = uVar4 & 3;
  }
  if (bVar5 && uVar1 == 1) {
    DataMemoryBarrier(0xb);
    uVar4 = uVar4 & 0xfffffffc;
    *puVar3 = uVar4;
    DataMemoryBarrier(0xb);
  }
  if (((int)uVar6 != 2) && ((uVar6 & 1) == 0)) {
    uVar7 = FUN_019e01d8(puVar3 + 2,puVar3,uVar4,(int)(uVar6 >> 0x20));
    if ((int)uVar7 != 0) {
      FUN_01650a90(puVar2);
      if ((char)*puVar2 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar5 = (bool)hasExclusiveAccess(puVar2);
          if (bVar5) {
            *(char *)puVar2 = '\0';
            goto LAB_019e0c04;
          }
        } while ((char)*puVar2 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(puVar2);
LAB_019e0c04:
                    /* WARNING: Could not recover jumptable at 0x019e0c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)uVar7 + 4))((int)((ulonglong)uVar7 >> 0x20));
      return;
    }
  }
  FUN_01650a90(puVar2);
  if ((char)*puVar2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar5 = (bool)hasExclusiveAccess(puVar2);
      if (bVar5) {
        *(char *)puVar2 = '\0';
        return;
      }
    } while ((char)*puVar2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(puVar2);
  return;
}

