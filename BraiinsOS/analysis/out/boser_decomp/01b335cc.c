// FUN_01b335cc @ 01b335cc size=108 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01b335cc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b2bf20();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_01b33580(param_2,param_2,*(undefined4 *)(param_1 + 0x11c),param_1 + 0x104);
  return 1;
}

