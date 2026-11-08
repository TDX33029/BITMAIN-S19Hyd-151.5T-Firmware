// FUN_006646a0 @ 006646a0 size=144 calls_out=2 calls_in=5
// strings: 

void FUN_006646a0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 < 0) {
    uVar1 = 1;
    param_4 = 0;
    iVar2 = 4;
    goto LAB_00664724;
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_01298504(param_4,1);
      if (iVar2 == 0) goto LAB_00664708;
    }
LAB_00664718:
    param_1[1] = iVar2;
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_01298554(param_3,param_2,1,param_4);
    if (iVar2 != 0) goto LAB_00664718;
LAB_00664708:
    uVar1 = 1;
    param_1[1] = 1;
  }
  iVar2 = 8;
LAB_00664724:
  *(int *)((int)param_1 + iVar2) = param_4;
  *param_1 = uVar1;
  return;
}

