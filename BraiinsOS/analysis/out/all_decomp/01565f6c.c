// FUN_01565f6c @ 01565f6c size=156 calls_out=3 calls_in=3
// strings: 

void FUN_01565f6c(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_01564684();
  if (*(int *)(param_1 + 0x118) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
  }
  iVar2 = *(int *)(param_1 + 0x1c0);
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x1c4);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  iVar2 = *(int *)(param_1 + 0x1b8);
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x1bc);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  FUN_0156447c(param_1 + 0x128);
  return;
}

