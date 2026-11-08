// FUN_018e1734 @ 018e1734 size=96 calls_out=2 calls_in=2
// strings: 

void FUN_018e1734(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x98) = 0x80000000;
  if (iVar1 != -0x80000000) {
    iStack_1c = iVar1;
    uStack_18 = *(undefined4 *)(param_1 + 0x9c);
    local_14 = *(undefined4 *)(param_1 + 0xa0);
    FUN_018dff10(param_1 + 0x60,&iStack_1c);
  }
  FUN_018e1548(param_1,param_2,param_3,0);
  return;
}

