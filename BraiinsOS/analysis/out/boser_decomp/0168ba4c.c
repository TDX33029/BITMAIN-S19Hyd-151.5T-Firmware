// FUN_0168ba4c @ 0168ba4c size=72 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_0168ba4c(int param_1,uint param_2)

{
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(1,0,0,&DAT_01d077bc);
  }
  if (param_2 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,4,param_2 - 1,&DAT_01d0794c);
  }
  return *(undefined4 *)(param_1 + 1);
}

