// FUN_013f4dd8 @ 013f4dd8 size=124 calls_out=5 calls_in=2
// strings: asse

void FUN_013f4dd8(int param_1,uint param_2)

{
  uint uVar1;
  code *local_18;
  uint local_14;
  
  if (param_2 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("asse",0x20,&DAT_01cf3520);
  }
  if (param_1 != 0) {
    local_18 = FUN_01406d34;
    local_14 = param_2;
    FUN_01319ffc(param_1,&local_18);
    return;
  }
  uVar1 = param_2 & 0xfffffff8;
  DataMemoryBarrier(0xb);
  if ((param_2 & 2) == 0) {
    FUN_01406d64(uVar1);
  }
  FUN_019bb7e0(*(undefined4 *)(uVar1 + 0x20),*(undefined4 *)(uVar1 + 0x24));
  thunk_FUN_01be4678(uVar1);
  return;
}

