// FUN_01a36ae0 @ 01a36ae0 size=72 calls_out=1 calls_in=6
// strings: 

void FUN_01a36ae0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_c;
  
  iVar3 = *param_1;
  if (param_2 != iVar3) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_2 + 0xc) = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 8) = param_2;
    }
    *param_1 = param_2;
    if (param_1[1] == 0) {
      param_1[1] = param_2;
    }
    return;
  }
  local_c = param_2;
  uVar4 = FUN_01a30c1c(param_1,&local_c);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  piVar1 = (int *)uVar4;
  if (*(int *)(iVar3 + 8) == 0) {
    if (iVar3 != *piVar1) {
      return;
    }
    iVar2 = *(int *)(iVar3 + 0xc);
    *piVar1 = iVar2;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0xc);
    *(int *)(*(int *)(iVar3 + 8) + 0xc) = iVar2;
  }
  if (iVar2 == 0) {
    if (iVar3 != piVar1[1]) {
      return;
    }
    piVar1[1] = *(int *)(iVar3 + 8);
  }
  else {
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  return;
}

