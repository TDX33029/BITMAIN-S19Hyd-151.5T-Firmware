// FUN_01278b74 @ 01278b74 size=40 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_01278b74(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0167459c();
  if ((int)uVar2 == 0) {
    uVar1 = FUN_01278434(param_1,(int)((ulonglong)uVar2 >> 0x20));
    return uVar1;
  }
  return 1;
}

