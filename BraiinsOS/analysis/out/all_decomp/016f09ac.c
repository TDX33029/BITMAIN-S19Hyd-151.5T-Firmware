// FUN_016f09ac @ 016f09ac size=140 calls_out=4 calls_in=0
// strings: 

bool FUN_016f09ac(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0177a6c0(0x41);
  if (iVar1 != 0) {
    FUN_0173a734(param_2,&DAT_018b62dc);
    FUN_0174e280(iVar1,iVar1 + 0x20);
    *(undefined1 *)(iVar1 + 0x40) = 1;
    FUN_0177aafc(*(undefined4 *)(param_2 + 8));
    *(int *)(param_2 + 8) = iVar1;
  }
  return iVar1 != 0;
}

