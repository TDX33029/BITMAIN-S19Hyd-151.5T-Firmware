// FUN_017445a8 @ 017445a8 size=444 calls_out=7 calls_in=2
// strings: assertion failed: self.inner.semaphore.is_idle()

void FUN_017445a8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint unaff_r8;
  uint local_e8 [49];
  
  uVar2 = FUN_019ec670(param_3);
  if ((uVar2 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    if ((uVar2 & 1) != 0) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    unaff_r8 = (uVar2 & 0xffffff) >> 0x10;
    uVar2 = (uVar2 & 0xffffff) >> 8;
  }
  FUN_017075e4(local_e8,param_2 + 0x70,param_2 + 0x20);
  if ((local_e8[0] & 7) == 3) {
    DataMemoryBarrier(0xb);
    if (1 < *(uint *)(param_2 + 0x80)) {
      puVar4 = &DAT_01d2e18c;
LAB_01744754:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,puVar4);
    }
LAB_017446dc:
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    if (local_e8[0] == 4) {
      FUN_019f79e0(param_2 + 0x40,param_3);
      FUN_017075e4(local_e8,param_2 + 0x70,param_2 + 0x20);
      if ((local_e8[0] & 7) == 3) {
        DataMemoryBarrier(0xb);
        if (1 < *(uint *)(param_2 + 0x80)) {
          puVar4 = &DAT_01d2e17c;
          goto LAB_01744754;
        }
        goto LAB_017446dc;
      }
      if (local_e8[0] == 4) {
        if ((*(char *)(param_2 + 0x7c) == '\0') ||
           (DataMemoryBarrier(0xb), 1 < *(uint *)(param_2 + 0x80))) {
          *param_1 = 4;
          param_1[1] = 0;
        }
        else {
          uVar2 = 0;
          *param_1 = 3;
          param_1[1] = 0;
        }
        goto LAB_01744724;
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
    FUN_01bed4e2(param_1,local_e8,0xc0);
  }
  uVar2 = 0;
LAB_01744724:
  FUN_019edbc4(uVar2,unaff_r8);
  return;
}

