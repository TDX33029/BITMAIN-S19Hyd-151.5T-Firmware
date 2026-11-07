// FUN_01222874 @ 01222874 size=148 calls_out=1 calls_in=2
// strings: 

void FUN_01222874(int *param_1,int *param_2)

{
  int iVar1;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = *param_2;
  if (iVar1 == param_2[1]) {
    param_1[2] = 2;
    param_1[3] = 0;
    *param_1 = 2;
  }
  else {
    *param_2 = iVar1 + 0x10;
    param_2[2] = param_2[2] + 1;
    FUN_0123e3fc(&local_48,iVar1);
    if (local_48 == 2) {
      param_1[2] = local_40;
      param_1[3] = local_3c;
      *param_1 = 2;
      *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_34,local_38);
    }
    else {
      *param_1 = local_48;
      param_1[1] = iStack_44;
      param_1[2] = local_40;
      param_1[3] = local_3c;
      param_1[4] = local_38;
      param_1[5] = iStack_34;
      param_1[6] = local_30;
      param_1[7] = iStack_2c;
      param_1[8] = iStack_28;
      param_1[9] = iStack_24;
      param_1[10] = iStack_20;
      param_1[0xb] = iStack_1c;
    }
  }
  return;
}

