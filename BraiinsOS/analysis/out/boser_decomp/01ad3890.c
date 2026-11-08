// FUN_01ad3890 @ 01ad3890 size=76 calls_out=2 calls_in=3
// strings: 

int FUN_01ad3890(int param_1,int param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  
  iVar1 = FUN_01adb6ac();
  *(undefined4 *)(iVar1 + 0x528) = 0;
  *(undefined2 *)(iVar1 + 0x5b2) = 0;
  iVar2 = extraout_r2;
  if (param_2 != -1) {
    iVar2 = 0x5b0;
  }
  *(int *)(iVar1 + 0x5b8) = param_1;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(param_1 + iVar2) = 0;
  *(int *)(param_1 + 0x528) = iVar1;
  return iVar1;
}

