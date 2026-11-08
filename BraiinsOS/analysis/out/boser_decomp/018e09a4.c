// FUN_018e09a4 @ 018e09a4 size=136 calls_out=4 calls_in=2
// strings: 

int FUN_018e09a4(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [20];
  undefined1 auStack_1c [12];
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (uVar1 == 0xffff0000 && iVar3 == -1) {
    FUN_018e0ad8(param_1);
    uVar1 = *(uint *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x1c);
  }
  iVar2 = -1 - (iVar3 + (uint)(uVar1 >= 0xfffffffe));
  if (iVar3 != -1 || -iVar3 - 1U < (uint)(uVar1 < 0xfffffffe)) {
    FUN_018bf724(auStack_30,param_1,param_2);
    FUN_018e0a2c(auStack_1c,auStack_30);
    iVar2 = FUN_018dff10(param_1 + 0x60,auStack_1c);
  }
  return iVar2;
}

