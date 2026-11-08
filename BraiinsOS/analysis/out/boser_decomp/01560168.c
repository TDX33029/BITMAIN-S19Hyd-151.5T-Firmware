// FUN_01560168 @ 01560168 size=80 calls_out=1 calls_in=0
// strings: 

int FUN_01560168(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(int *)(param_1 + 0xc) - iVar1;
  uVar4 = param_2;
  if (uVar2 >> 2 <= param_2) {
    uVar4 = uVar2 >> 2;
  }
  iVar3 = uVar4 + 1;
  *(uint *)(param_1 + 4) = iVar1 + uVar4 * 4;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    FUN_01560278(iVar1);
    iVar1 = iVar1 + 4;
  }
  return param_2 - uVar4;
}

