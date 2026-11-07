// FUN_013f5018 @ 013f5018 size=144 calls_out=3 calls_in=2
// strings: asse

void FUN_013f5018(int param_1,uint param_2)

{
  undefined1 *local_18;
  undefined4 local_14;
  
  if (param_2 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("asse",0x20,&DAT_01cf3550);
  }
  if ((param_2 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00475d01,0x23,&DAT_01cf3540);
  }
  DataMemoryBarrier(0xb);
  local_14 = *(undefined4 *)(param_2 & 0xfffffff8 | 4);
  if (param_1 == 0) {
    FUN_01406bcc(local_14);
    return;
  }
  local_18 = &LAB_01406c20;
  FUN_01319ffc(param_1,&local_18);
  return;
}

