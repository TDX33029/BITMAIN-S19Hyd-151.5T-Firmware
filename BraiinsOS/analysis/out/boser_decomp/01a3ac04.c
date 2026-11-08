// FUN_01a3ac04 @ 01a3ac04 size=88 calls_out=1 calls_in=4
// strings: 

void FUN_01a3ac04(int *param_1)

{
  int extraout_r1;
  int extraout_r2;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_019dba74(&local_14);
  if (local_14 == 4) {
    *param_1 = 4;
  }
  else {
    if (local_14 == 2) {
      local_14 = 3;
      local_10 = extraout_r1;
      local_c = extraout_r2;
    }
    else if (local_14 == 3) {
      local_14 = 2;
    }
    *param_1 = local_14;
    param_1[1] = local_10;
    param_1[2] = local_c;
  }
  return;
}

