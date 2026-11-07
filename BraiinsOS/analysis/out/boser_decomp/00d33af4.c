// FUN_00d33af4 @ 00d33af4 size=160 calls_out=5 calls_in=3
// strings: 

void FUN_00d33af4(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_01a636dc(*(int *)(param_1 + 800) + 8,*(int *)(param_1 + 0x324) + 8,1);
  FUN_005f61bc(param_1);
  if (*(int *)(param_1 + 0x328) != 0) {
    (**(code **)(*(int *)(param_1 + 0x328) + 0x10))
              (param_1 + 0x334,*(undefined4 *)(param_1 + 0x32c),*(undefined4 *)(param_1 + 0x330),
               *(undefined4 *)(param_1 + 0x330),unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  }
  if (*(int *)(param_1 + 0x244) != 0) {
    (**(code **)(*(int *)(param_1 + 0x244) + 0x10))
              (param_1 + 0x250,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c));
  }
  FUN_0172f388(param_1 + 0x300);
  FUN_00d33c20(param_1 + 800);
  FUN_01822488(param_1 + 0x2e0);
  return;
}

