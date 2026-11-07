// FUN_0140b280 @ 0140b280 size=172 calls_out=4 calls_in=11
// strings: assertion failed: !new_ptr.is_null()

void FUN_0140b280(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_4 + 0x10);
  uVar2 = FUN_01403534(param_3);
  uVar3 = FUN_01403534(param_4);
LAB_0140b2b0:
  do {
    if (uVar4 <= *(uint *)(param_3 + 0x10)) {
      return;
    }
    if (*param_1 == uVar2) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar3;
        DataMemoryBarrier(0xb);
        FUN_013f4f9c(param_2,uVar2);
        goto LAB_0140b2b0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar2 = *param_1;
    if (uVar2 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: !new_ptr.is_null()",0x24,&DAT_01cf3dc8);
    }
    param_3 = uVar2 & 0xfffffffc;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01cf3db8);
    }
  } while( true );
}

