// FUN_01ad3824 @ 01ad3824 size=80 calls_out=2 calls_in=3
// strings: 

int FUN_01ad3824(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01adb62c();
  *(undefined4 *)(&DAT_00001028 + iVar1) = 0;
  *(int *)(iVar1 + 0x10b8) = param_1;
  *(undefined2 *)(iVar1 + 0x10b2) = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(&DAT_000010b0 + param_1) = 0;
  *(int *)(&DAT_00001028 + param_1) = iVar1;
  return iVar1;
}

