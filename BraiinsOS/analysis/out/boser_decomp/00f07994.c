// FUN_00f07994 @ 00f07994 size=32 calls_out=2 calls_in=5
// strings: 

undefined4 FUN_00f07994(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  FUN_0142e6dc();
  FUN_0178e884(*(undefined4 *)(param_1 + 0x44));
  return uVar1;
}

