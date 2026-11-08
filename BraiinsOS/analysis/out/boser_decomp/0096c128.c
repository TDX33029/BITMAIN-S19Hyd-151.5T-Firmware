// FUN_0096c128 @ 0096c128 size=92 calls_out=3 calls_in=1
// strings: 

int FUN_0096c128(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xc0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xc0);
  }
  *(int *)(iVar1 + 0x90) = param_1;
  *(undefined2 *)(iVar1 + 0x8a) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(int *)(param_1 + 0x58) = iVar1;
  return iVar1;
}

