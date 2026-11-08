// FUN_01b0b7c4 @ 01b0b7c4 size=140 calls_out=4 calls_in=0
// strings: 

bool FUN_01b0b7c4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b6ad8c(0x41);
  if (iVar1 != 0) {
    FUN_01b4777c(param_2,&DAT_01d352f4);
    FUN_01b54e7c(iVar1,iVar1 + 0x20);
    *(undefined1 *)(iVar1 + 0x40) = 1;
    FUN_01b6b1c4(*(undefined4 *)(param_2 + 8));
    *(int *)(param_2 + 8) = iVar1;
  }
  return iVar1 != 0;
}

