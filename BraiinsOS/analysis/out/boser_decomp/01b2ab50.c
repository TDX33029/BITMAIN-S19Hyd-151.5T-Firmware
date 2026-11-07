// FUN_01b2ab50 @ 01b2ab50 size=160 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_01b2ab50(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 0xffffffbf) != 0x80 && param_2 != 0x100) {
    return 0xfffffffe;
  }
  uVar2 = FUN_01b0c6d4();
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_01b72600(param_1,uVar1,param_3);
    return uVar1;
  }
  if ((DAT_01d532f0 & 1) == 0) {
    uVar1 = FUN_01b2a350(param_1,uVar1,param_3);
    return uVar1;
  }
  uVar1 = FUN_01b7aae0();
  return uVar1;
}

