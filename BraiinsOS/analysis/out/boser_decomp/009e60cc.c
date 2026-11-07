// FUN_009e60cc @ 009e60cc size=92 calls_out=3 calls_in=0
// strings: 

void FUN_009e60cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_01443048(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_3,param_4,unaff_r4,
                 unaff_r5,unaff_r11,unaff_lr);
  }
  if (*(char *)(param_1 + 0x31) == '\x02') {
    return;
  }
  FUN_014323b0(param_1 + 0x24);
  return;
}

