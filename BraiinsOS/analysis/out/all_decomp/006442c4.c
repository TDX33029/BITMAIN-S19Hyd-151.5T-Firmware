// FUN_006442c4 @ 006442c4 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_006442c4(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 100);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  FUN_00a07b4c(param_1);
  return;
}

