// FUN_01778c1c @ 01778c1c size=52 calls_out=2 calls_in=1
// strings: 

int FUN_01778c1c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [16];
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  FUN_0170f924(auStack_28,param_1 + 0x10);
  iVar1 = FUN_017c4408(auStack_28);
  return (iVar2 - iVar3) + iVar1;
}

