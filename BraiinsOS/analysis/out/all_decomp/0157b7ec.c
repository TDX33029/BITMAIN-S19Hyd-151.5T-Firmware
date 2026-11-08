// FUN_0157b7ec @ 0157b7ec size=96 calls_out=1 calls_in=15
// strings: 

void FUN_0157b7ec(int *param_1)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  if (*param_1 == 0) {
    local_10 = *(undefined8 *)(param_1 + 2);
    local_18[0] = 3;
    FUN_0157cc00(local_18);
    return;
  }
  local_10 = *(undefined8 *)(param_1 + 2);
  if (*param_1 == 1) {
    local_18[0] = 1;
  }
  else {
    local_18[0] = 2;
  }
  FUN_0157cc00(local_18);
  return;
}

