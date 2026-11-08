// FUN_007a5afc @ 007a5afc size=64 calls_out=1 calls_in=3
// strings: 

void FUN_007a5afc(int param_1)

{
  if (*(char *)(param_1 + 0x11) != '\x04') {
    return;
  }
  FUN_019e0ae8(param_1 + 0x14);
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

