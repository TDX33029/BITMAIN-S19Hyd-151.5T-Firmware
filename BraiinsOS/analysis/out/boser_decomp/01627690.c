// FUN_01627690 @ 01627690 size=32 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01627690(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x30;
  if ((param_1 & 0xff) < 0x2e) {
    uVar1 = (uint)(byte)(&DAT_00537420)[param_1 & 0xff];
  }
  return CONCAT44(param_1,uVar1);
}

