// FUN_018f84d8 @ 018f84d8 size=152 calls_out=1 calls_in=0
// strings: 

void FUN_018f84d8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *in_stack_00000000;
  int local_38 [5];
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  if (*in_stack_00000000 != 4) {
    FUN_018f8338(param_1);
    return;
  }
  FUN_018f8338(local_38);
  piVar2 = (int *)((uint)local_38 | 4);
  iVar1 = *piVar2;
  iVar3 = piVar2[1];
  iVar4 = piVar2[2];
  iVar5 = piVar2[3];
  if (local_38[0] == -0x7fffffd7) {
    param_1[1] = iVar1;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1[4] = iVar5;
    *param_1 = -0x7fffffd7;
  }
  else {
    param_1[5] = local_24;
    param_1[6] = iStack_20;
    param_1[7] = iStack_1c;
    param_1[1] = iVar1;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1[4] = iVar5;
    *param_1 = local_38[0];
  }
  return;
}

