// FUN_019a33c4 @ 019a33c4 size=320 calls_out=2 calls_in=26
// strings: assertion failed: is_unlocked(state)

void FUN_019a33c4(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  if ((param_2 & 0x3fffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: is_unlocked(state)",0x24,&DAT_01d279a4);
  }
  if (param_2 == 0x80000000) {
    do {
      param_2 = *param_1;
      if (param_2 != 0x80000000) {
        ClearExclusiveLocal();
        goto LAB_019a3408;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 0;
    param_1 = param_1 + 1;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = *param_1 + 1;
    uVar4 = 1;
  }
  else {
LAB_019a3408:
    if (param_2 != 0x40000000) {
      if (param_2 != 0xc0000000) {
        return;
      }
      do {
        if (*param_1 != 0xc0000000) goto LAB_019a34a4;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = 0x40000000;
      puVar3 = param_1 + 1;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 + 1;
      iVar2 = FUN_01be6c3c(0xf0,puVar3,0x81,1);
      if (0 < iVar2) {
        return;
      }
    }
    do {
      if (*param_1 != 0x40000000) {
LAB_019a34a4:
        ClearExclusiveLocal();
        return;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 0;
    uVar4 = 0x7fffffff;
  }
  software_interrupt(0);
  FUN_01be3b5a(param_1,0x81,uVar4,param_5);
  return;
}

