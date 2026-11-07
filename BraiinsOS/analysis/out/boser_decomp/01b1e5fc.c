// FUN_01b1e5fc @ 01b1e5fc size=80 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_01b1e5fc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 0x200;
    FUN_01b1df88(iVar1,param_2);
    param_2 = param_2 + 0x180;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x800);
  return 0;
}

