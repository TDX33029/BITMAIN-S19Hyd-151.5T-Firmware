// FUN_0002da34 @ 0002da34  size=76  callers=0
// program: cgminer


int FUN_0002da34(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0002d974();
  FUN_0002a654(iVar1,param_1,0);
  *(undefined1 *)(iVar1 + 0x111) = 1;
  FUN_000206d8(iVar1 + 0x1a0);
  *(undefined1 *)(iVar1 + 0x118) = 0;
  *(undefined1 *)(iVar1 + 0x11a) = 0;
  *(int *)(iVar1 + 0x108) = *(int *)(iVar1 + 0x108) + -1;
  return iVar1;
}

