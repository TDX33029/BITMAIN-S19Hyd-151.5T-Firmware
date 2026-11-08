// FUN_012b2248 @ 012b2248 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_012b2248(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar1 = iVar4 + iVar3;
  if ((uint)(*piVar2 - iVar1) < param_2) {
    FUN_006520b4(piVar2,iVar1,param_2,4,0xc);
  }
  FUN_01bed864(piVar2[1] + (iVar3 + param_2) * 0xc,piVar2[1] + iVar3 * 0xc,iVar4 * 0xc);
  *(uint *)(param_1 + 0xc) = iVar3 + param_2;
  return;
}

