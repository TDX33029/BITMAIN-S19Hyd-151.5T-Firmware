// FUN_0172e2f0 @ 0172e2f0 size=160 calls_out=5 calls_in=0
// strings: 

void FUN_0172e2f0(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_017332c8(*(int *)(param_1 + 0x310) + 8,*(int *)(param_1 + 0x314) + 8,1);
  FUN_0172e398(param_1);
  if (*(int *)(param_1 + 0x318) != 0) {
    (**(code **)(*(int *)(param_1 + 0x318) + 0x10))
              (param_1 + 0x324,*(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800),
               *(undefined4 *)(param_1 + 800),unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  }
  if (*(int *)(param_1 + 0x234) != 0) {
    (**(code **)(*(int *)(param_1 + 0x234) + 0x10))
              (param_1 + 0x240,*(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c));
  }
  FUN_0172f388(param_1 + 0x2f0);
  FUN_0172f1d0(param_1 + 0x310);
  FUN_01822488(param_1 + 0x2d0);
  return;
}

