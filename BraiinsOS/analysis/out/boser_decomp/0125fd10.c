// FUN_0125fd10 @ 0125fd10 size=68 calls_out=2 calls_in=2
// strings: 

int FUN_0125fd10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01264dc8();
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

