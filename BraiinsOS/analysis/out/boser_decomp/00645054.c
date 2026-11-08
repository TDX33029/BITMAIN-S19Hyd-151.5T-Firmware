// FUN_00645054 @ 00645054 size=160 calls_out=3 calls_in=3
// strings: shutdown_duration

void FUN_00645054(float param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined4 local_138 [2];
  undefined4 local_130;
  undefined4 local_124;
  double local_118;
  undefined4 local_110;
  undefined4 local_dc;
  int local_c8 [28];
  undefined1 auStack_58 [72];
  
  if (*(int *)(param_3 + 0x10) != -0x80000000 && (param_4 & 1) != 0) {
    local_dc = 4;
    local_110 = 0x80000003;
    local_124 = 0x80000003;
    local_130 = 0x80000003;
    local_138[0] = 1;
    local_118 = (double)param_1;
    if (NAN(param_1)) {
      local_118 = ABS((double)param_1);
    }
    FUN_01a60d04(auStack_58,"shutdown_duration",0x11);
    FUN_01a4b734(local_c8,param_3,auStack_58,local_138);
    if (local_c8[0] != 4) {
      FUN_005f6530(local_c8);
    }
  }
  *param_2 = &DAT_80000005;
  return;
}

