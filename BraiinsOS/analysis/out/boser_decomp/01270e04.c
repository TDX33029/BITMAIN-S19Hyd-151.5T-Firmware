// FUN_01270e04 @ 01270e04 size=176 calls_out=3 calls_in=1
// strings: 

void FUN_01270e04(char *param_1)

{
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
  FUN_00e0febc(param_1 + 0x30);
  if (*param_1 != '\x06') {
    FUN_00e0febc(param_1);
  }
  if (param_1[0x18] != '\x06') {
    FUN_00e0febc();
  }
  FUN_006a41c0(param_1 + 0xb8);
  if (*(int *)(param_1 + 0x70) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x7c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  }
  if (*(int *)(param_1 + 0x88) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0x94) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  }
  if (*(int *)(param_1 + 0x60) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  FUN_00e0febc(param_1 + 0x48);
  return;
}

