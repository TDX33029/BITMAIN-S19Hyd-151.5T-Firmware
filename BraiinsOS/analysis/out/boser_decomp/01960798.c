// FUN_01960798 @ 01960798 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_01960798(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = ((uint)(param_3 - param_2) >> 4) * -0x3b13b13b;
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < uVar3) {
    FUN_0132b898(param_1,iVar2,uVar3,4,4);
    iVar2 = param_1[2];
  }
  if (param_2 != param_3) {
    iVar1 = param_1[1];
    do {
      *(int *)(iVar1 + iVar2 * 4) = param_2;
      param_2 = param_2 + 0xd0;
      iVar2 = iVar2 + 1;
    } while (param_2 != param_3);
  }
  param_1[2] = iVar2;
  return;
}

