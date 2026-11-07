// FUN_006bc488 @ 006bc488 size=148 calls_out=1 calls_in=1
// strings: 

void FUN_006bc488(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  
  piVar1 = (int *)(param_2 + 0xc);
  iVar2 = -0x7fffffff;
  if (*piVar1 != 0) {
    FUN_01348450(&local_50,piVar1);
    if (local_50 == -0x7fffffff) {
      *piVar1 = 0;
    }
    else {
      param_1[1] = iStack_4c;
      param_1[2] = iStack_48;
      param_1[3] = local_44;
      param_1[4] = iStack_40;
      param_1[5] = iStack_3c;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      iVar2 = local_50;
    }
  }
  *param_1 = iVar2;
  return;
}

