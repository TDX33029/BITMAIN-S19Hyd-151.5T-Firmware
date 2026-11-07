// FUN_010e7958 @ 010e7958 size=124 calls_out=2 calls_in=0
// strings: 

void FUN_010e7958(int *param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 1;
  local_1c = param_2;
  FUN_010e1aa0(&local_14,&local_1c);
  if (local_14 == -0x7ffffff6) {
    if (local_10 == 0) {
      FUN_01613578(param_1,0,&DAT_01885c60,&DAT_018ab990);
      return;
    }
    local_14 = -0x7ffffff6;
  }
  *param_1 = local_14;
  param_1[1] = local_10;
  param_1[2] = local_c;
  return;
}

