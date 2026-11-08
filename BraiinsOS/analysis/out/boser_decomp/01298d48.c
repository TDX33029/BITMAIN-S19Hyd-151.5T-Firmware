// FUN_01298d48 @ 01298d48 size=152 calls_out=3 calls_in=1
// strings: 

void FUN_01298d48(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = param_1[2];
  uVar3 = *(int *)(param_2 + 0xc) - iVar1;
  uVar4 = (uVar3 >> 2) * -0x55555555;
  if ((uint)(*param_1 - iVar2) < uVar4) {
    FUN_006520b4(param_1,iVar2,uVar4,4,0xc);
    iVar2 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar2 * 0xc,iVar1,uVar3);
  param_1[2] = iVar2 + uVar4;
  *(int *)(param_2 + 0xc) = iVar1;
  FUN_012bb240(param_2);
  return;
}

