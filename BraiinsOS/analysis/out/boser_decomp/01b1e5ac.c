// FUN_01b1e5ac @ 01b1e5ac size=80 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b1e5ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 0x180;
    FUN_01b1df34(iVar1,param_2);
    param_2 = param_2 + 0x200;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x600);
  return 0;
}

