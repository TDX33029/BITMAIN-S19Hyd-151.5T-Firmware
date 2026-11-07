// FUN_00777ad8 @ 00777ad8 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_00777ad8(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(undefined1 **)(param_1 + 8) == (undefined1 *)0x3b9aca01 ||
      *(undefined1 **)(param_1 + 8) == &DAT_3b9aca00) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xf0);
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0xf4);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
  }
  FUN_00795540(param_1);
  return;
}

