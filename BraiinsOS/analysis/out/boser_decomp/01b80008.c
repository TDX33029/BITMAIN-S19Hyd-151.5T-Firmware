// FUN_01b80008 @ 01b80008 size=100 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01b80008(int param_1)

{
  FUN_01b7ff8c(param_1);
  *(undefined4 *)(param_1 + 0xcc) = 0x88;
  *(undefined4 *)(param_1 + 0xd0) = 0x11;
  *(undefined4 *)(param_1 + 0xd4) = 0x20;
  return 0;
}

