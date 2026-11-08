// FUN_0168c7ac @ 0168c7ac size=68 calls_out=2 calls_in=1
// strings: 

void FUN_0168c7ac(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d0785c);
  }
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 1) == 0 || (bVar1 & 2) == 0) {
    return;
  }
  FUN_0168b45c((byte *)(param_1 + 8));
  return;
}

