// FUN_007177f8 @ 007177f8 size=196 calls_out=1 calls_in=1
// strings: 

void FUN_007177f8(char *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint extraout_r2;
  undefined4 extraout_r3;
  int iVar3;
  int extraout_r12;
  undefined2 local_24;
  char local_22;
  char local_20;
  undefined2 local_1f;
  char local_1d;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  
  FUN_00719bb8(&local_20);
  if (local_20 == 'O') {
    if (local_14 == 0) {
      iVar1 = *param_2;
      if ((uint)param_2[1] < local_18) {
        *(int *)(param_1 + 8) = iVar1;
        cVar2 = '\x13';
        local_18 = 0;
        iVar3 = 0xc;
      }
      else {
        *param_2 = iVar1 + local_18;
        param_2[1] = param_2[1] - local_18;
        cVar2 = 'O';
        iVar3 = 8;
      }
      *(uint *)(param_1 + iVar3) = local_18;
      *(int *)(param_1 + 4) = iVar1;
      *param_1 = cVar2;
      return;
    }
    local_20 = '8';
    local_18 = extraout_r2;
    local_1c = extraout_r3;
    local_14 = extraout_r12;
  }
  else {
    local_22 = local_1d;
    local_24 = local_1f;
  }
  *param_1 = local_20;
  *(undefined2 *)(param_1 + 1) = local_24;
  param_1[3] = local_22;
  *(undefined4 *)(param_1 + 4) = local_1c;
  *(uint *)(param_1 + 8) = local_18;
  *(int *)(param_1 + 0xc) = local_14;
  return;
}

