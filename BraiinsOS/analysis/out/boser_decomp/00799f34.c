// FUN_00799f34 @ 00799f34 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_00799f34(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_14;
  
  local_14 = *(int *)(*param_1 + 4);
  if (local_14 == *param_2) {
    iVar3 = param_2[2];
    *(int *)(*param_1 + 8) = param_2[1];
    param_1[1] = iVar3;
    return;
  }
  piVar1 = (int *)FUN_00798198(&local_14);
  piVar2 = (int *)*piVar1;
  iVar3 = piVar2[2];
  if ((uint)(*piVar2 - iVar3) < 0x20) {
    piVar1[1] = iVar3;
    FUN_016092cc(piVar2,iVar3,0x20,1);
    return;
  }
  return;
}

