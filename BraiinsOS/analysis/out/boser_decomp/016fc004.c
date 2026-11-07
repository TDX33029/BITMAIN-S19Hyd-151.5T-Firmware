// FUN_016fc004 @ 016fc004 size=28 calls_out=1 calls_in=2
// strings: 

void FUN_016fc004(int *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_016fc038(param_1 + 0x16);
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))
              (param_1 + 0x13,param_1[0x11],param_1[0x12],*(code **)(param_1[0x10] + 0x10),unaff_r4,
               unaff_r5,unaff_r11,unaff_lr);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_017793c0(param_1);
  return;
}

