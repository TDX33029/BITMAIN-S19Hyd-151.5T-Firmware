// FUN_01ad37a4 @ 01ad37a4 size=100 calls_out=3 calls_in=1
// strings: 

int FUN_01ad37a4(int param_1,int param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  
  iVar1 = thunk_FUN_01be5118(0x3d8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x3d8);
  }
  *(undefined4 *)(iVar1 + 0x318) = 0;
  *(undefined2 *)(iVar1 + 0x3a2) = 0;
  iVar2 = extraout_r2;
  if (param_2 != -1) {
    iVar2 = 0x3a0;
  }
  *(int *)(iVar1 + 0x3a8) = param_1;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + iVar2) = 0;
  *(int *)(param_1 + 0x318) = iVar1;
  return iVar1;
}

