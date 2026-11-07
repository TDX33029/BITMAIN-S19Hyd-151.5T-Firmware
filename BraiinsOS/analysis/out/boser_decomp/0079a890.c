// FUN_0079a890 @ 0079a890 size=64 calls_out=1 calls_in=3
// strings: 

void FUN_0079a890(int *param_1)

{
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
  }
  if (param_1[3] != -0x80000000) {
    FUN_019bb7e0(param_1[3],param_1[4]);
  }
  if (param_1[6] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[6],param_1[7]);
  return;
}

