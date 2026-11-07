// FUN_00633fd0 @ 00633fd0 size=144 calls_out=3 calls_in=0
// strings: 

void FUN_00633fd0(int param_1,int *param_2)

{
  if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
      (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
    if (*(int *)(param_1 + 4) == 2) {
      FUN_006676f8(param_1 + 8);
    }
    FUN_005f664c(param_1 + 0x24);
  }
  else if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

