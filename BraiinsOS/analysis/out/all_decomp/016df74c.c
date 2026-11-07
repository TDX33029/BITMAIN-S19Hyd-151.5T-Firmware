// FUN_016df74c @ 016df74c size=72 calls_out=4 calls_in=0
// strings: 

int FUN_016df74c(int param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_98 [128];
  
  FUN_016da498(auStack_98);
  FUN_016ddcc0(param_1 + 0x5c);
  iVar2 = 3;
  uVar1 = extraout_r1;
  if (*(int *)(param_1 + 0x10) != 0) {
    software_interrupt(0);
    iVar2 = -*(int *)(param_1 + 0x10);
    uVar1 = param_2;
  }
  FUN_016dddc0(param_1 + 0x5c,uVar1);
  FUN_016da4b4(auStack_98);
  return iVar2;
}

