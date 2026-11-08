// FUN_014cf3e4 @ 014cf3e4 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_014cf3e4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_110;
  undefined4 local_10c;
  int local_28 [4];
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 != *(int **)(param_2 + 0xc)) {
    local_28[0] = *piVar1;
    *(int **)(param_2 + 4) = piVar1 + 4;
    if (local_28[0] != -0x7fffffeb) {
      piVar2 = (int *)((uint)local_28 | 4);
      iVar3 = piVar1[2];
      iVar4 = piVar1[3];
      *piVar2 = piVar1[1];
      piVar2[1] = iVar3;
      piVar2[2] = iVar4;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      FUN_014f55c8(&local_110,local_28);
      if (local_110 == 5) {
        *param_1 = 6;
        param_1[1] = local_10c;
        return;
      }
      FUN_01bed4e2(param_1,&local_110,0xe4);
      return;
    }
  }
  *param_1 = 5;
  return;
}

