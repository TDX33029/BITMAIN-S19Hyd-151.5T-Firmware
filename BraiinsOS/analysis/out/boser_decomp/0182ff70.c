// FUN_0182ff70 @ 0182ff70 size=108 calls_out=3 calls_in=4
// strings: 

void FUN_0182ff70(int *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  FUN_01435814(param_1 + 0x1c);
  FUN_01440d48(param_1 + 0x16);
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))
              (param_1 + 0x13,param_1[0x11],param_1[0x12],*(code **)(param_1[0x10] + 0x10),unaff_r4,
               unaff_r5);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_017793c0(param_1);
  return;
}

