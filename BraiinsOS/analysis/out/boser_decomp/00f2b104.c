// FUN_00f2b104 @ 00f2b104 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_00f2b104(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x58)) {
  case 3:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    return;
  case 4:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    break;
  case 5:
    FUN_00f2b1bc(param_1 + 0x60);
    FUN_00f2b248(param_1 + 0xdc);
    break;
  case 6:
    FUN_00f2b1bc(param_1 + 0x60);
    FUN_00f2b248(param_1 + 0xdc);
    return;
  default:
    goto switchD_00f2b124_default;
  }
  *(undefined1 *)(param_1 + 0x59) = 0;
switchD_00f2b124_default:
  return;
}

