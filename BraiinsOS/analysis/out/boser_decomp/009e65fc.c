// FUN_009e65fc @ 009e65fc size=136 calls_out=2 calls_in=0
// strings: 

void FUN_009e65fc(int param_1,int *param_2)

{
  if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
      (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
    if (*(int *)(param_1 + 4) == 2) {
      FUN_006676f8(param_1 + 8);
    }
  }
  else if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

