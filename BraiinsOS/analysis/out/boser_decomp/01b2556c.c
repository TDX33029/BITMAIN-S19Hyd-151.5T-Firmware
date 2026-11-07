// FUN_01b2556c @ 01b2556c size=64 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01b2556c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 0x400;
    FUN_01b25490(iVar1);
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x1000);
  return 0;
}

