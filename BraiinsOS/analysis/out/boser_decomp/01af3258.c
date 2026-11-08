// FUN_01af3258 @ 01af3258 size=100 calls_out=3 calls_in=1
// strings: 

int FUN_01af3258(int param_1,int param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  
  iVar1 = thunk_FUN_01be5118(0x278);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x278);
  }
  *(undefined4 *)(iVar1 + 0x1b8) = 0;
  *(undefined2 *)(iVar1 + 0x242) = 0;
  iVar2 = extraout_r2;
  if (param_2 != -1) {
    iVar2 = 0x240;
  }
  *(int *)(iVar1 + 0x248) = param_1;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + iVar2) = 0;
  *(int *)(param_1 + 0x1b8) = iVar1;
  return iVar1;
}

