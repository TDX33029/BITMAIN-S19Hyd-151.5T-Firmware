// FUN_016d12b0 @ 016d12b0 size=204 calls_out=3 calls_in=1
// strings: 

void FUN_016d12b0(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  
  do {
    piVar2 = param_2;
    if (piVar2 == param_3) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    param_2 = piVar2 + 3;
  } while (*piVar2 == 3);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x10);
  }
  iVar4 = 1;
  *puVar1 = piVar2;
  local_28 = 1;
  local_30 = 4;
  piVar2 = piVar2 + 3;
  local_2c = puVar1;
  while (piVar3 = piVar2, piVar3 != param_3) {
    piVar2 = piVar3 + 3;
    if (*piVar3 != 3) {
      if (iVar4 == local_30) {
        FUN_016d139c(&local_30,iVar4);
        puVar1 = local_2c;
      }
      puVar1[iVar4] = piVar3;
      iVar4 = iVar4 + 1;
      local_28 = iVar4;
    }
  }
  *param_1 = local_30;
  param_1[1] = (int)local_2c;
  param_1[2] = local_28;
  return;
}

