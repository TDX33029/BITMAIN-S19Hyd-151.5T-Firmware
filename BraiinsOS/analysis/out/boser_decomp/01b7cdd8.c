// FUN_01b7cdd8 @ 01b7cdd8 size=148 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b7cdd8(int param_1,uint param_2)

{
  if (param_2 < 0xf) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(&DAT_005619e8 + (param_2 - 1) * 4);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(&DAT_00561a24 + (param_2 - 1) * 4);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0x200;
    *(undefined4 *)(param_1 + 0x2c) = 0x200;
  }
  return 0;
}

