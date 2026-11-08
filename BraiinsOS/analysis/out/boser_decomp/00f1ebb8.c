// FUN_00f1ebb8 @ 00f1ebb8 size=408 calls_out=6 calls_in=2
// strings: assertion failed: self.inner.semaphore.is_idle()

void FUN_00f1ebb8(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint unaff_r8;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar2 = FUN_019ec670(param_3);
  if ((uVar2 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    if ((uVar2 & 1) != 0) {
      *param_1 = 4;
      return;
    }
    unaff_r8 = (uVar2 & 0xffffff) >> 0x10;
    uVar2 = (uVar2 & 0xffffff) >> 8;
  }
  FUN_01194610(&local_38,param_2 + 0x70,param_2 + 0x20);
  if (local_38 == 3) {
    DataMemoryBarrier(0xb);
    if (1 < *(uint *)(param_2 + 0x80)) {
      puVar4 = &DAT_01d2e18c;
LAB_00f1ed40:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,puVar4);
    }
LAB_00f1ece4:
    *param_1 = 3;
  }
  else {
    if (local_38 == 4) {
      FUN_019f79e0(param_2 + 0x40,param_3);
      FUN_01194610(&local_38,param_2 + 0x70,param_2 + 0x20);
      if (local_38 == 3) {
        DataMemoryBarrier(0xb);
        if (1 < *(uint *)(param_2 + 0x80)) {
          puVar4 = &DAT_01d2e17c;
          goto LAB_00f1ed40;
        }
      }
      else {
        if (local_38 != 4) {
          puVar3 = (uint *)(param_2 + 0x80);
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *puVar3;
            bVar1 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar1);
          *puVar3 = uVar2 - 2;
          goto LAB_00f1ed0c;
        }
        if ((*(char *)(param_2 + 0x7c) == '\0') ||
           (DataMemoryBarrier(0xb), 1 < *(uint *)(param_2 + 0x80))) {
          *param_1 = 4;
          goto LAB_00f1ed20;
        }
      }
      goto LAB_00f1ece4;
    }
    puVar3 = (uint *)(param_2 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar2 - 2;
LAB_00f1ed0c:
    if (uVar2 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0197a954();
    }
    *param_1 = local_38;
    param_1[1] = iStack_34;
    param_1[2] = iStack_30;
    param_1[3] = iStack_2c;
  }
  uVar2 = 0;
LAB_00f1ed20:
  FUN_019edbc4(uVar2,unaff_r8);
  return;
}

