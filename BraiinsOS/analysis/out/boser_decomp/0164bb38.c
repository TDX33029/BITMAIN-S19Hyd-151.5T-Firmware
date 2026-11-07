// FUN_0164bb38 @ 0164bb38 size=160 calls_out=2 calls_in=13
// strings: 

undefined8 FUN_0164bb38(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_r6;
  int local_20;
  int local_1c;
  
  piVar3 = &local_20;
  if (*param_1 == 0) {
    iVar4 = 0;
    piVar3 = &local_1c;
    piVar1 = param_1;
  }
  else {
    iVar4 = *param_1 << 2;
    local_1c = 4;
    piVar1 = (int *)param_1[1];
  }
  *piVar3 = iVar4;
  iVar4 = local_1c;
  if (local_1c != 0) {
    if (param_2 == 0) {
      iVar2 = 4;
      if (local_20 != 0) {
        thunk_FUN_01be4678(piVar1);
      }
    }
    else {
      unaff_r6 = param_2 << 2;
      iVar2 = FUN_01298554(piVar1,local_20,local_1c,unaff_r6);
      if (iVar2 == 0) goto LAB_0164bbc8;
    }
    *param_1 = param_2;
    param_1[1] = iVar2;
  }
  iVar4 = -0x7fffffff;
LAB_0164bbc8:
  return CONCAT44(unaff_r6,iVar4);
}

