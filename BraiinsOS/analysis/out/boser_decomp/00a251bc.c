// FUN_00a251bc @ 00a251bc size=188 calls_out=7 calls_in=0
// strings: 

void FUN_00a251bc(int param_1)

{
  if (*(int *)(param_1 + 0x10) != -0x80000000) {
    FUN_00a25320();
  }
  if (*(int *)(param_1 + 0xc0) != -0x80000000) {
    FUN_01aa45e4();
  }
  if (*(int *)(param_1 + 0xb4) != -0x80000000) {
    FUN_01aa4630(param_1 + 0x88);
  }
  if (*(int *)(param_1 + 0xcc) != -0x80000000) {
    FUN_01aa480c();
  }
  if (*(int *)(param_1 + 0xd8) != -0x80000000) {
    FUN_00b17058();
  }
  if (*(int *)(param_1 + 0x28) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x40) != -0x80000000) {
    FUN_01aa4850();
  }
  if (*(int *)(param_1 + 0xe4) != -0x80000000) {
    FUN_01aa45e4();
  }
  if (*(int *)(param_1 + 0x70) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  return;
}

