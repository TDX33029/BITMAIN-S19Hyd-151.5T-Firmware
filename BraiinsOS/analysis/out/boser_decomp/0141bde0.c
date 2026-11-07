// FUN_0141bde0 @ 0141bde0 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_0141bde0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)param_1[1];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
  }
  thunk_FUN_01be4678(param_1);
  return;
}

