// FUN_015a6e40 @ 015a6e40 size=112 calls_out=2 calls_in=3
// strings: 

void FUN_015a6e40(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar1 = iVar4 + iVar2;
  if ((uint)(*piVar3 - iVar1) < param_2) {
    FUN_006520b4(piVar3,iVar1,param_2,1,1);
  }
  FUN_01bed864(piVar3[1] + iVar2 + param_2,piVar3[1] + iVar2,iVar4);
  *(uint *)(param_1 + 0xc) = iVar2 + param_2;
  return;
}

