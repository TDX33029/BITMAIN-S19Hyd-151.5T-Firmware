// FUN_0130b94c @ 0130b94c size=288 calls_out=2 calls_in=1
// strings: 

void FUN_0130b94c(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      pcVar1 = (char *)(param_2 + iVar2);
      if (iVar2 == 0) break;
      iVar2 = iVar2 + 1;
    } while (*pcVar1 == '?');
    if (*pcVar1 == '?') {
      if ((param_3 != 1) && (*(char *)(param_2 + 1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,0,1,&DAT_01d2e668);
      }
      *param_1 = param_2 + 1;
      param_1[1] = param_3 + -1;
      param_1[2] = -0x80000000;
      param_1[3] = local_44;
      param_1[4] = local_40;
      param_1[5] = local_3c;
      param_1[6] = local_38;
      param_1[7] = iStack_34;
      return;
    }
  }
  FUN_0130ba70(&local_30);
  iVar2 = local_28;
  if (local_28 == -0x7ffffffd) {
    iVar2 = local_24;
  }
  if (local_28 == -0x7ffffffd && iVar2 == 1) {
    param_1[4] = local_20;
    param_1[5] = iStack_1c;
    param_1[6] = iStack_18;
    param_1[2] = -0x7ffffffd;
    param_1[3] = 1;
  }
  else {
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = local_28;
    param_1[3] = local_24;
    param_1[4] = local_20;
    param_1[5] = iStack_1c;
    param_1[6] = iStack_18;
    param_1[7] = iStack_14;
  }
  return;
}

