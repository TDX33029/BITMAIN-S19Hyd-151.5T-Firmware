// FUN_019788d0 @ 019788d0 size=76 calls_out=2 calls_in=2
// strings: 

int FUN_019788d0(int param_1,int param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  
  iVar1 = FUN_01498c44();
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined2 *)(iVar1 + 0x10e) = 0;
  iVar2 = extraout_r2;
  if (param_2 != -1) {
    iVar2 = 0x10c;
  }
  *(int *)(iVar1 + 0x110) = param_1;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + iVar2) = 0;
  *(int *)(param_1 + 0x108) = iVar1;
  return iVar1;
}

