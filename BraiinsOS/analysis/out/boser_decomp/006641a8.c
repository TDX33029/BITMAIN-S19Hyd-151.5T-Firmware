// FUN_006641a8 @ 006641a8 size=156 calls_out=2 calls_in=13
// strings: 

undefined8 FUN_006641a8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  int local_20;
  int local_1c;
  
  piVar3 = &local_20;
  if (*param_1 == 0) {
    iVar2 = 0;
    piVar3 = &local_1c;
    iVar1 = 0;
  }
  else {
    iVar2 = *param_1 * param_4;
    iVar1 = param_1[1];
    local_1c = param_3;
  }
  *piVar3 = iVar2;
  iVar2 = local_1c;
  if (local_1c != 0) {
    if (param_2 == 0) {
      if (local_20 != 0) {
        thunk_FUN_01be4678(iVar1);
      }
    }
    else {
      unaff_r6 = param_4 * param_2;
      param_3 = FUN_01298554(iVar1,local_20,local_1c,unaff_r6);
      if (param_3 == 0) goto LAB_00664234;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  iVar2 = -0x7fffffff;
LAB_00664234:
  return CONCAT44(unaff_r6,iVar2);
}

