// FUN_00abbfbc @ 00abbfbc size=224 calls_out=2 calls_in=1
// strings: 

void FUN_00abbfbc(int *param_1,int param_2)

{
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
    *param_1 = 2;
    param_1[1] = 1;
    FUN_00abbec8(param_2);
    return;
  }
  if (*(int *)(param_2 + 0x10) == -0x7ffffff9) {
    *param_1 = 2;
    param_1[1] = 0;
  }
  else {
    FUN_006ce100(&local_58);
    if ((local_58 == 2) || (local_58 == 2)) {
      *param_1 = 2;
      param_1[1] = 2;
      param_1[2] = local_54;
    }
    else {
      param_1[2] = local_50;
      param_1[3] = local_4c;
      param_1[4] = local_48;
      param_1[5] = iStack_44;
      param_1[6] = iStack_40;
      *param_1 = local_58;
      param_1[1] = local_54;
    }
  }
  return;
}

