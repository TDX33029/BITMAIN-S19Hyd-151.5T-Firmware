// FUN_00d8fd60 @ 00d8fd60 size=92 calls_out=5 calls_in=2
// strings: 

void FUN_00d8fd60(int param_1)

{
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
  FUN_00d8fdbc(param_1 + 0xa0);
  FUN_00d8fde4(param_1 + 0x108);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100));
  FUN_00d8fe0c(param_1 + 0x10);
  if (*(int *)(param_1 + 0x124) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x128));
  }
  FUN_00d4fd6c(param_1 + 0x58);
  return;
}

