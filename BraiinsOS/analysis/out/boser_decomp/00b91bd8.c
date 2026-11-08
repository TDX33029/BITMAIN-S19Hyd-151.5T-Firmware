// FUN_00b91bd8 @ 00b91bd8 size=68 calls_out=1 calls_in=13
// strings: 

void FUN_00b91bd8(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0xc);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  return;
}

