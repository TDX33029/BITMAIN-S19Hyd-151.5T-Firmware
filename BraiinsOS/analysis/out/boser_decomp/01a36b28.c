// FUN_01a36b28 @ 01a36b28 size=104 calls_out=0 calls_in=2
// strings: 

void FUN_01a36b28(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) == 0) {
    if (param_2 != *param_1) {
      return;
    }
    iVar1 = *(int *)(param_2 + 0xc);
    *param_1 = iVar1;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xc);
    *(int *)(*(int *)(param_2 + 8) + 0xc) = iVar1;
  }
  if (iVar1 == 0) {
    if (param_2 != param_1[1]) {
      return;
    }
    param_1[1] = *(int *)(param_2 + 8);
  }
  else {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

