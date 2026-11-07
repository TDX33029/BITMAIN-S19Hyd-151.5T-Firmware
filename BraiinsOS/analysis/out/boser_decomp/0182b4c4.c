// FUN_0182b4c4 @ 0182b4c4 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_0182b4c4(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 != 0) {
    FUN_01443048(param_1[1],param_1[2]);
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

