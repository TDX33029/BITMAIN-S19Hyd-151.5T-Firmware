// FUN_006799e4 @ 006799e4 size=40 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_006799e4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_006794bc();
  if ((int)uVar2 == 0) {
    uVar1 = FUN_00679384(param_1,(int)((ulonglong)uVar2 >> 0x20));
    return uVar1;
  }
  return 1;
}

