// FUN_013f4f9c @ 013f4f9c size=112 calls_out=4 calls_in=4
// strings: asse

void FUN_013f4f9c(int param_1,uint param_2)

{
  undefined1 *local_18;
  uint local_14;
  
  if (param_2 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("asse",0x20,&DAT_01cf3530);
  }
  if (param_1 == 0) {
    DataMemoryBarrier(0xb);
    FUN_013f6a60(param_2 & 0xfffffffc);
    thunk_FUN_01be4678(param_2 & 0xfffffffc);
    return;
  }
  local_18 = &LAB_01406e84;
  local_14 = param_2;
  FUN_01319ffc(param_1,&local_18);
  return;
}

