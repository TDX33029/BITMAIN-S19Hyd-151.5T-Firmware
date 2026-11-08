// FUN_01224b04 @ 01224b04 size=40 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01224b04(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01965c98();
  if ((int)uVar2 == 0) {
    uVar1 = FUN_014b5b50(param_1,(int)((ulonglong)uVar2 >> 0x20));
    return uVar1;
  }
  return 1;
}

