// FUN_014cf58c @ 014cf58c size=160 calls_out=2 calls_in=1
// strings: 

void FUN_014cf58c(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_2e8;
  undefined4 local_2e4;
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
      FUN_014e9f5c(&local_2e8,local_28);
      if (local_2e8 == 4) {
        *param_1 = 5;
        param_1[1] = local_2e4;
        return;
      }
      FUN_01bed4e2(param_1,&local_2e8,700);
      return;
    }
  }
  *param_1 = 4;
  return;
}

