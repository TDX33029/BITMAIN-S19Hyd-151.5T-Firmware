// FUN_01b29398 @ 01b29398 size=64 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01b29398(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 0x200;
    FUN_01b2926c(iVar1);
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x800);
  return 0;
}

