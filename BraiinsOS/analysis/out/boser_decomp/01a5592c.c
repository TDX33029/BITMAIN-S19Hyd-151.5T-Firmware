// FUN_01a5592c @ 01a5592c size=52 calls_out=2 calls_in=2
// strings: 

void FUN_01a5592c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_01be5118(8);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *piVar1 = param_1;
  piVar1[1] = param_1 + param_2 * 0x70;
  return;
}

