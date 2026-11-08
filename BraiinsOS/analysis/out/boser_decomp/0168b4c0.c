// FUN_0168b4c0 @ 0168b4c0 size=68 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_0168b4c0(int param_1,uint param_2)

{
  if (param_2 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(5,param_2,param_2,&DAT_01d0787c);
  }
  if (param_2 - 5 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,4,param_2 - 5,&DAT_01d0794c);
  }
  return *(undefined4 *)(param_1 + 5);
}

