// FUN_013d5a8c @ 013d5a8c size=80 calls_out=1 calls_in=4
// strings: 

int * FUN_013d5a8c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_c;
  
  iVar3 = *param_1;
  local_c = param_2 + 8;
  if (local_c != iVar3) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(int *)(param_2 + 0x10) = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = local_c;
    }
    *param_1 = local_c;
    if (param_1[1] == 0) {
      param_1[1] = local_c;
    }
    return param_1;
  }
  uVar4 = FUN_013e22cc(param_1,&local_c);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  piVar1 = (int *)uVar4;
  if (*(int *)(iVar3 + 4) == 0) {
    if (iVar3 != *piVar1) {
      return (int *)0x0;
    }
    iVar2 = *(int *)(iVar3 + 8);
    *piVar1 = iVar2;
  }
  else {
    iVar2 = *(int *)(iVar3 + 8);
    *(int *)(*(int *)(iVar3 + 4) + 8) = iVar2;
  }
  if (iVar2 == 0) {
    if (iVar3 != piVar1[1]) {
      return (int *)0x0;
    }
    piVar1[1] = *(int *)(iVar3 + 4);
  }
  else {
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar3 + 4);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  return (int *)(iVar3 + -8);
}

