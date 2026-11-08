// FUN_0102a618 @ 0102a618 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_0102a618(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  FUN_00fab1e0(&local_2c,iVar2,iVar3);
  if (local_2c == 1) {
    (**(code **)(*param_2 + 0x10))(param_2 + 3,iVar2,iVar3);
    *param_1 = 0;
    param_1[1] = local_28;
    param_1[2] = local_24;
    return;
  }
  iVar1 = *param_2;
  if (iVar1 != 0) {
    param_1[3] = param_2[3];
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  return;
}

