// FUN_00e9a130 @ 00e9a130 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_00e9a130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if ((char)param_1[0x10] != '\x02') {
    FUN_00d3b00c(param_1 + 0xd);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (*param_1 == 0) {
    return;
  }
  if ((char)param_1[0xc] == '\x03') {
    FUN_019bb7e0(param_1[1],param_1[2],param_3,param_4,unaff_r4,unaff_lr);
  }
  else if ((char)param_1[0xc] != '\0') {
    return;
  }
  FUN_00d3b00c(param_1 + 8);
  return;
}

