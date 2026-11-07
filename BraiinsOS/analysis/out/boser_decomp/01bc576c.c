// FUN_01bc576c @ 01bc576c size=268 calls_out=1 calls_in=2
// strings: 

int * FUN_01bc576c(int *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20 [4];
  
  iVar1 = DAT_01d53560;
  iVar2 = *param_2;
  local_20[3] = DAT_01d53560;
  iVar3 = param_2[1];
  local_20[0] = iVar2;
  local_20[1] = iVar3;
  local_20[2] = param_2[2];
  if (3 < param_3) {
    local_20[0] = param_3 - 3;
    local_20[1] = iVar2;
    local_20[2] = iVar3;
    goto LAB_01bc57e4;
  }
  iVar4 = param_4 + -1 + param_3;
  if (iVar4 == 0) goto LAB_01bc57e4;
  if (iVar4 == 3) {
    local_20[0] = iVar2 + -1;
LAB_01bc5848:
    local_20[2] = iVar3;
  }
  else {
    local_20[2] = iVar4;
    if (iVar4 == 1) {
      local_20[2] = param_2[2];
    }
    local_20[0] = local_20[iVar4];
    if (iVar4 != 1) goto LAB_01bc5848;
  }
  local_20[1] = iVar2;
LAB_01bc57e4:
  *param_1 = local_20[0];
  param_1[1] = local_20[1];
  param_1[2] = local_20[2];
  if (iVar1 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return param_1;
}

