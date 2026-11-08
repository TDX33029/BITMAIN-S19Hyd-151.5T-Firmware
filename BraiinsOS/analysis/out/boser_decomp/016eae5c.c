// FUN_016eae5c @ 016eae5c size=184 calls_out=2 calls_in=0
// strings: 

void FUN_016eae5c(int *param_1,int param_2,int param_3)

{
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_016e93a0(&local_40);
  if (local_40 == -0x80000000) {
    if ((local_3c & 1) == 0) {
      if (local_38 < 0x80) {
        *(char *)(param_1 + 1) = (char)local_38;
        *param_1 = -0x80000000;
      }
      else {
        FUN_016e9480(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),param_3 + 4,0
                    );
      }
    }
    else {
      *param_1 = -0x80000000;
      *(char *)(param_1 + 1) = (char)(local_3c >> 8);
    }
  }
  else {
    param_1[3] = local_34;
    param_1[4] = iStack_30;
    param_1[5] = iStack_2c;
    param_1[6] = local_28;
    param_1[7] = iStack_24;
    param_1[8] = iStack_20;
    param_1[9] = iStack_1c;
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
  }
  return;
}

