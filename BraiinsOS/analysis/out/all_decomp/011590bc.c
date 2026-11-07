// FUN_011590bc @ 011590bc size=192 calls_out=2 calls_in=32
// strings: 

void FUN_011590bc(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  int local_30 [3];
  
  pcVar4 = (code *)param_3[3];
  pcVar5 = (code *)param_3[4];
  while (iVar1 = (*pcVar4)(param_2), iVar1 != 0) {
    iVar3 = param_1[2];
    if (iVar3 == *param_1) {
      (*pcVar5)(local_30,param_2);
      iVar2 = local_30[0] + 1;
      if (local_30[0] == -1) {
        iVar2 = -1;
      }
      FUN_011cf828(param_1,iVar3,iVar2,4,4);
    }
    *(int *)(param_1[1] + iVar3 * 4) = iVar1;
    param_1[2] = iVar3 + 1;
  }
  if ((code *)*param_3 != (code *)0x0) {
    (*(code *)*param_3)(param_2);
  }
  if (param_3[1] != 0) {
    thunk_FUN_016d3fb4(param_2);
  }
  return;
}

