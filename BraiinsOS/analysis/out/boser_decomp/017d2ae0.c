// FUN_017d2ae0 @ 017d2ae0 size=456 calls_out=7 calls_in=2
// strings: assertion failed: self.inner.semaphore.is_idle()

void FUN_017d2ae0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint unaff_r8;
  uint local_d0 [43];
  
  uVar2 = FUN_019ec670(param_3);
  if ((uVar2 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar2 & 1) != 0) {
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    unaff_r8 = (uVar2 & 0xffffff) >> 0x10;
    uVar2 = (uVar2 & 0xffffff) >> 8;
  }
  FUN_017c52b8(local_d0,param_2 + 0x70,param_2 + 0x20);
  if ((local_d0[0] & 7) == 4) {
    DataMemoryBarrier(0xb);
    if (1 < *(uint *)(param_2 + 0x80)) {
      puVar4 = &DAT_01d2e18c;
LAB_017d2c98:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,puVar4);
    }
LAB_017d2c20:
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    if (local_d0[0] == 5) {
      FUN_019f79e0(param_2 + 0x40,param_3);
      FUN_017c52b8(local_d0,param_2 + 0x70,param_2 + 0x20);
      if ((local_d0[0] & 7) == 4) {
        DataMemoryBarrier(0xb);
        if (1 < *(uint *)(param_2 + 0x80)) {
          puVar4 = &DAT_01d2e17c;
          goto LAB_017d2c98;
        }
        goto LAB_017d2c20;
      }
      if (local_d0[0] == 5) {
        if ((*(char *)(param_2 + 0x7c) == '\0') ||
           (DataMemoryBarrier(0xb), 1 < *(uint *)(param_2 + 0x80))) {
          *param_1 = 5;
          param_1[1] = 0;
        }
        else {
          uVar2 = 0;
          *param_1 = 4;
          param_1[1] = 0;
        }
        goto LAB_017d2c68;
      }
      puVar3 = (uint *)(param_2 + 0x80);
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar2 - 2;
    }
    else {
      puVar3 = (uint *)(param_2 + 0x80);
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar2 - 2;
    }
    if (uVar2 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0197a954();
    }
    FUN_01bed4e2(param_1,local_d0,0xa8);
  }
  uVar2 = 0;
LAB_017d2c68:
  FUN_019edbc4(uVar2,unaff_r8);
  return;
}

