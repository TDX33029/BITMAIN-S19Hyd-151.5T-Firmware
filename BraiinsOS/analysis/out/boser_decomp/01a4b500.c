// FUN_01a4b500 @ 01a4b500 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_01a4b500(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_01a4b454(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18) + 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01a49f38(iVar1);
    iVar1 = iVar1 + 0xc0;
  }
  return;
}

