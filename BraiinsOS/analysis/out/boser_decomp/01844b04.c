// FUN_01844b04 @ 01844b04 size=116 calls_out=7 calls_in=1
// strings: 

void FUN_01844b04(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_01139b38(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
  FUN_0134c054(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),4,0xc,unaff_r4,
               unaff_r5,unaff_r11,unaff_lr);
  FUN_01710aa4(param_1 + 0x18);
  FUN_01af7af8(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),4,0x30);
  FUN_012840cc(param_1 + 0xa8);
  FUN_01844b38(param_1 + 0x70);
  if (*(int *)(param_1 + 0x38) == 3) {
    return;
  }
  FUN_01a6322c((int *)(param_1 + 0x38));
  return;
}

