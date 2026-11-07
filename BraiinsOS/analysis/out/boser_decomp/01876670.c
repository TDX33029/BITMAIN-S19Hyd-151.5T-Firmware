// FUN_01876670 @ 01876670 size=100 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_01876670(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [16];
  
  if ((*(char *)(param_1 + 0x24) != '\x01') || (uVar1 = 0, *(uint *)(param_1 + 0x1c) < 0x10)) {
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    FUN_0170f924(auStack_28,param_1 + 0x10);
    iVar2 = FUN_01857c8c(auStack_28);
    uVar1 = 0;
    if ((uint)((iVar3 - iVar4) + iVar2) < *(uint *)(param_1 + 0x20)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

