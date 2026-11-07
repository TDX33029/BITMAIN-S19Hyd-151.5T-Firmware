// FUN_01704eb4 @ 01704eb4 size=148 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01704eb4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0177a9c0(0x30);
  if (iVar1 != 0) {
    iVar2 = FUN_016e0ec4(iVar1 + 0x18,0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      return 1;
    }
    FUN_0177aafc(iVar1);
  }
  return 0;
}

