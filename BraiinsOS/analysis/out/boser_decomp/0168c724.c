// FUN_0168c724 @ 0168c724 size=124 calls_out=2 calls_in=6
// strings: 

undefined4 FUN_0168c724(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d077ec);
  }
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    return 0;
  }
  uVar1 = param_3 * 4 + 0xd;
  if (param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,param_2,param_2,&DAT_01d077dc);
  }
  if (param_2 - uVar1 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,4,param_2 - uVar1,&DAT_01d09988);
  }
  return *(undefined4 *)((byte *)(param_1 + 8) + uVar1);
}

