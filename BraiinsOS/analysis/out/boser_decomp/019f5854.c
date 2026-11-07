// FUN_019f5854 @ 019f5854 size=252 calls_out=1 calls_in=10
// strings: assertion failed: self.0 <= isize::MAX as usize

void FUN_019f5854(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  uint local_10;
  uint local_c;
  
  DataMemoryBarrier(0xb);
  uVar3 = *param_1;
  do {
    if ((uVar3 & 0x22) == 0) {
      if ((uVar3 & 1) == 0) {
        if ((uVar3 & 4) != 0) {
          uVar2 = uVar3 | 0x20;
          goto LAB_019f58b0;
        }
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: self.0 <= isize::MAX as usize",0x2f,&DAT_01d28e04);
        }
        uVar2 = uVar3 + 100;
        bVar1 = true;
      }
      else {
        uVar2 = uVar3 | 0x24;
LAB_019f58b0:
        bVar1 = false;
      }
      local_c = 1;
      puVar5 = &local_10;
    }
    else {
      bVar1 = false;
      uVar2 = 0;
      puVar5 = &local_c;
    }
    *puVar5 = uVar2;
    if (local_c != 1) break;
    uVar2 = *param_1;
    if (uVar2 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar4 = (bool)hasExclusiveAccess(param_1);
        if (bVar4) {
          *param_1 = local_10;
          bVar4 = true;
          goto LAB_019f5908;
        }
        uVar2 = *param_1;
      } while (uVar2 == uVar3);
    }
    bVar4 = false;
    ClearExclusiveLocal();
LAB_019f5908:
    DataMemoryBarrier(0xb);
    uVar3 = uVar2;
  } while (!bVar4);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x019f5934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 4))();
    return;
  }
  return;
}

