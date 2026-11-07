// FUN_01881d80 @ 01881d80 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_01881d80(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
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

