// FUN_0195b804 @ 0195b804 size=68 calls_out=1 calls_in=3
// strings: 

void FUN_0195b804(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_2 + 0xb8);
  if (*piVar3 != -0x7fffffff) {
    FUN_0195b7b0(piVar3);
  }
  iVar1 = param_3[1];
  iVar2 = param_3[2];
  *piVar3 = *param_3;
  *(int *)(param_2 + 0xbc) = iVar1;
  *(int *)(param_2 + 0xc0) = iVar2;
  FUN_01bed4e2(param_1,param_2,0xd8);
  return;
}

