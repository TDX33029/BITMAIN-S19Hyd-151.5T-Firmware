// FUN_0168b45c @ 0168b45c size=92 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_0168b45c(byte *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d077ec);
  }
  uVar1 = 0;
  if ((*param_1 & 2) != 0) {
    if (param_2 < 0xd) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(9,0xd,param_2,&DAT_01d0783c);
    }
    uVar1 = *(undefined4 *)(param_1 + 9);
  }
  return uVar1;
}

