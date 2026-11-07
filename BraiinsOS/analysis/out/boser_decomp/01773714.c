// FUN_01773714 @ 01773714 size=160 calls_out=5 calls_in=2
// strings: 

void FUN_01773714(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_017f85f4(*(int *)(param_1 + 0x290) + 8,*(int *)(param_1 + 0x294) + 8,1);
  FUN_01773770(param_1);
  if (*(int *)(param_1 + 0x298) != 0) {
    (**(code **)(*(int *)(param_1 + 0x298) + 0x10))
              (param_1 + 0x2a4,*(undefined4 *)(param_1 + 0x29c),*(undefined4 *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x2a0),unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  }
  if (*(int *)(param_1 + 0x234) != 0) {
    (**(code **)(*(int *)(param_1 + 0x234) + 0x10))
              (param_1 + 0x240,*(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c));
  }
  FUN_0172f388(param_1 + 0x270);
  FUN_01772fe4(param_1 + 0x290);
  FUN_01822488(param_1 + 0x250);
  return;
}

