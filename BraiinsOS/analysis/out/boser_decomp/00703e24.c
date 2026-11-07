// FUN_00703e24 @ 00703e24 size=152 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_00703e24(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  int local_1c;
  
  piVar4 = &local_20;
  iVar3 = *param_1;
  if (iVar3 == 0) {
    iVar3 = 0;
    piVar4 = &local_1c;
    piVar1 = param_1;
  }
  else {
    local_1c = 1;
    piVar1 = (int *)param_1[1];
  }
  *piVar4 = iVar3;
  iVar3 = local_1c;
  if (local_1c != 0) {
    if (param_2 == 0) {
      iVar2 = 1;
      if (local_20 != 0) {
        thunk_FUN_01be4678(piVar1);
      }
    }
    else {
      iVar2 = FUN_01298554(piVar1,local_20,local_1c,param_2);
      if (iVar2 == 0) goto LAB_00703eac;
    }
    *param_1 = param_2;
    param_1[1] = iVar2;
  }
  iVar3 = -0x7fffffff;
LAB_00703eac:
  return CONCAT44(param_2,iVar3);
}

