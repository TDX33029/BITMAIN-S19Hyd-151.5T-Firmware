// FUN_01086be0 @ 01086be0 size=84 calls_out=2 calls_in=3
// strings: 

void FUN_01086be0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
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

