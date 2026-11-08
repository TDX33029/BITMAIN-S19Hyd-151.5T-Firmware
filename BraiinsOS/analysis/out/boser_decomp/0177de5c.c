// FUN_0177de5c @ 0177de5c size=108 calls_out=3 calls_in=1
// strings: 

void FUN_0177de5c(int *param_1)

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
  if (*(char *)((int)param_1 + 0x15) != '\x02') {
    FUN_014323b0(param_1 + 2);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

