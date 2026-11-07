// FUN_015e9814 @ 015e9814 size=320 calls_out=2 calls_in=26
// strings: assertion failed: is_unlocked(state)

void FUN_015e9814(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  if ((param_2 & 0x3fffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: is_unlocked(state)",0x24,&DAT_018aad78);
  }
  if (param_2 == 0x80000000) {
    do {
      param_2 = *param_1;
      if (param_2 != 0x80000000) {
        ClearExclusiveLocal();
        goto LAB_015e9858;
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
LAB_015e9858:
    if (param_2 != 0x40000000) {
      if (param_2 != 0xc0000000) {
        return;
      }
      do {
        if (*param_1 != 0xc0000000) goto LAB_015e98f4;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = 0x40000000;
      puVar3 = param_1 + 1;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 + 1;
      iVar2 = FUN_016d6968(0xf0,puVar3,0x81,1);
      if (0 < iVar2) {
        return;
      }
    }
    do {
      if (*param_1 != 0x40000000) {
LAB_015e98f4:
        ClearExclusiveLocal();
        return;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 0;
    uVar4 = 0x7fffffff;
  }
  software_interrupt(0);
  FUN_016d3496(param_1,0x81,uVar4,param_5);
  return;
}

