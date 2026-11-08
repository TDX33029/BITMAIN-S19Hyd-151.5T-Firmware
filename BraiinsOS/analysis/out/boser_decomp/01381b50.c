// FUN_01381b50 @ 01381b50 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_01381b50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x6c) + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_013b5798(iVar1);
    iVar1 = iVar1 + 0x90;
  }
  FUN_0134c054(*(undefined4 *)(param_1 + 100),iVar3,8,0x90);
  return;
}

