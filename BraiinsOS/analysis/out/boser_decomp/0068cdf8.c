// FUN_0068cdf8 @ 0068cdf8 size=412 calls_out=7 calls_in=1
// strings: assertion failed: self.inner.semaphore.is_idle()

void FUN_0068cdf8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  uint unaff_r8;
  uint local_138 [34];
  uint local_b0 [35];
  
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar1 & 1) != 0) {
      *param_1 = 3;
      param_1[1] = 0;
      return;
    }
    unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  FUN_0069b3e8(local_138,param_2 + 0x70,param_2 + 0x20);
  if ((local_138[0] & 3) == 2) {
    DataMemoryBarrier(0xb);
    if (*(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1) {
      puVar3 = &DAT_01d2e18c;
LAB_0068cf84:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,puVar3);
    }
  }
  else {
    if (local_138[0] != 3) {
      FUN_019f8c54(param_2 + 0x80,1);
      puVar2 = local_138;
LAB_0068cf58:
      FUN_01bed4e2(param_1,puVar2,0x88);
      uVar1 = 0;
      goto LAB_0068cf68;
    }
    FUN_019f79e0(param_2 + 0x40,param_3);
    FUN_0069b3e8(local_b0,param_2 + 0x70,param_2 + 0x20);
    if ((local_b0[0] & 3) == 2) {
      DataMemoryBarrier(0xb);
      if (*(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1) {
        puVar3 = &DAT_01d2e17c;
        goto LAB_0068cf84;
      }
    }
    else {
      if (local_b0[0] != 3) {
        FUN_019f8c54(param_2 + 0x80,1);
        puVar2 = local_b0;
        goto LAB_0068cf58;
      }
      if ((*(char *)(param_2 + 0x7c) == '\0') ||
         (DataMemoryBarrier(0xb), *(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1)) {
        *param_1 = 3;
        param_1[1] = 0;
        goto LAB_0068cf68;
      }
    }
  }
  uVar1 = 0;
  *param_1 = 2;
  param_1[1] = 0;
LAB_0068cf68:
  FUN_019edbc4(uVar1,unaff_r8);
  return;
}

