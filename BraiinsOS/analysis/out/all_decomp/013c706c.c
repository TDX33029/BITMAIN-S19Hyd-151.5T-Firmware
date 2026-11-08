// FUN_013c706c @ 013c706c size=124 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_013c706c(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_018942e8);
  }
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    return 0;
  }
  uVar1 = param_3 * 4 + 0xd;
  if (param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,param_2,param_2,&DAT_018942f8);
  }
  if (param_2 - uVar1 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,4,param_2 - uVar1,&DAT_01892db0);
  }
  return *(undefined4 *)((byte *)(param_1 + 8) + uVar1);
}

