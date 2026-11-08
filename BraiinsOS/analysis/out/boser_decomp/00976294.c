// FUN_00976294 @ 00976294 size=76 calls_out=2 calls_in=2
// strings: 

int FUN_00976294(int param_1,int param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  
  iVar1 = FUN_00ab2880();
  *(undefined4 *)(iVar1 + 0x2c0) = 0;
  *(undefined2 *)(iVar1 + 0x34a) = 0;
  iVar2 = extraout_r2;
  if (param_2 != -1) {
    iVar2 = 0x348;
  }
  *(int *)(iVar1 + 0x350) = param_1;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + iVar2) = 0;
  *(int *)(param_1 + 0x2c0) = iVar1;
  return iVar1;
}

