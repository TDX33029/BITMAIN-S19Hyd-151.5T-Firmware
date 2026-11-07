// FUN_006b2358 @ 006b2358 size=76 calls_out=2 calls_in=2
// strings: 

int FUN_006b2358(int param_1,int param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  
  iVar1 = FUN_006c8e08();
  *(undefined4 *)(iVar1 + 0x210) = 0;
  *(undefined2 *)(iVar1 + 0x29a) = 0;
  iVar2 = extraout_r2;
  if (param_2 != -1) {
    iVar2 = 0x298;
  }
  *(int *)(iVar1 + 0x2a0) = param_1;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + iVar2) = 0;
  *(int *)(param_1 + 0x210) = iVar1;
  return iVar1;
}

