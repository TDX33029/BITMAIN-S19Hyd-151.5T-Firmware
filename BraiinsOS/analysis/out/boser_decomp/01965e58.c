// FUN_01965e58 @ 01965e58 size=84 calls_out=1 calls_in=7
// strings: 

void FUN_01965e58(int *param_1)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  if (*param_1 == 0) {
    local_10 = *(undefined8 *)(param_1 + 2);
    local_18[0] = 3;
  }
  else {
    local_10 = *(undefined8 *)(param_1 + 2);
    if (*param_1 == 1) {
      local_18[0] = 1;
    }
    else {
      local_18[0] = 2;
    }
  }
  FUN_01967538(local_18);
  return;
}

