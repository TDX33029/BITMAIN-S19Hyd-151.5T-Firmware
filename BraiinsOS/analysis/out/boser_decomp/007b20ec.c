// FUN_007b20ec @ 007b20ec size=92 calls_out=3 calls_in=1
// strings: 

int FUN_007b20ec(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x90);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x90);
  }
  *(int *)(iVar1 + 0x60) = param_1;
  *(undefined2 *)(iVar1 + 0x5e) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x58) = iVar1;
  return iVar1;
}

