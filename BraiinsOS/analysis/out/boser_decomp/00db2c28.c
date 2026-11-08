// FUN_00db2c28 @ 00db2c28 size=136 calls_out=2 calls_in=1
// strings: 

void FUN_00db2c28(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_200;
  int local_1fc;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (*(int *)(param_2 + 4) != iVar1) {
    iVar3 = *(int *)(param_2 + 4);
    do {
      FUN_01bed4e2(&local_200,iVar3,0x1d8);
      iVar2 = iVar3 + 0x1d8;
      *(int *)(param_2 + 4) = iVar2;
      if (local_200 != 0 || local_1fc != 0) {
        FUN_01bed4e2(param_1 + 2,iVar3 + 8,0x1d0);
        goto LAB_00db2ca4;
      }
      FUN_0094a4d0(&local_200);
      iVar3 = iVar2;
    } while (iVar2 != iVar1);
  }
  local_200 = 2;
  local_1fc = 0;
LAB_00db2ca4:
  *param_1 = local_200;
  param_1[1] = local_1fc;
  return;
}

