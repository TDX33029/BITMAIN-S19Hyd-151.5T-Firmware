// FUN_01af72b0 @ 01af72b0 size=140 calls_out=1 calls_in=2
// strings: 

void FUN_01af72b0(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 != 0) {
    local_14 = 0;
    local_1c = param_2;
    local_18 = param_3;
    FUN_01af09a0(&local_40,&local_1c);
    if (local_40 == -0x7fffffd3) {
      piVar1 = (int *)((uint)&local_40 | 4);
      iVar2 = piVar1[1];
      iVar3 = piVar1[2];
      param_1[2] = *piVar1;
      param_1[3] = iVar2;
      param_1[4] = iVar3;
      iVar2 = 1;
      goto LAB_01af731c;
    }
    if (local_40 != -0x7fffffd2) {
      *param_1 = local_40;
      param_1[1] = iStack_3c;
      param_1[2] = iStack_38;
      param_1[3] = iStack_34;
      param_1[4] = local_30;
      param_1[5] = iStack_2c;
      param_1[6] = iStack_28;
      param_1[7] = iStack_24;
      return;
    }
  }
  iVar2 = 0;
LAB_01af731c:
  *param_1 = -0x7fffffd3;
  param_1[1] = iVar2;
  return;
}

