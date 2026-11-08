// FUN_009435a8 @ 009435a8 size=132 calls_out=4 calls_in=2
// strings: 

void FUN_009435a8(int param_1)

{
  if (*(int *)(param_1 + 4) == 3) {
    FUN_017ce5f0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  }
  FUN_00a28374();
  FUN_00a28374(param_1 + 0x10);
  FUN_00a28374(param_1 + 0x1c);
  FUN_00a28374(param_1 + 0x28);
  FUN_00a28374(param_1 + 0x34);
  FUN_00a28374(param_1 + 0x40);
  FUN_00a28374(param_1 + 0x4c);
  FUN_00a28374(param_1 + 0x58);
  FUN_00a28374(param_1 + 100);
  FUN_009436dc(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x7c) < 2) {
    return;
  }
  FUN_012840cc(param_1 + 0x80);
  return;
}

