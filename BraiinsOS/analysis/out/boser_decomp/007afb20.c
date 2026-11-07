// FUN_007afb20 @ 007afb20 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_007afb20(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_1;
  if (iVar2 == -0x7fffffff) {
    return;
  }
  if (iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,param_1[1]);
    return;
  }
  iVar2 = param_1[1];
  puVar3 = (undefined4 *)param_1[2];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

