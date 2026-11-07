// FUN_016402b0 @ 016402b0 size=100 calls_out=1 calls_in=0
// strings: 802.1ad | 802.1q

void FUN_016402b0(short *param_1,undefined4 *param_2)

{
  char *local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  local_10 = (undefined1 *)&local_18;
  local_18 = "802.1ad";
  local_14 = 7;
  if (*param_1 == -0x7f00) {
    local_14 = 6;
    local_18 = "802.1q";
  }
  local_c = &LAB_018a13b8;
  FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_10);
  return;
}

