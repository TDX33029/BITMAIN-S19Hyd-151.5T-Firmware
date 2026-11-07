// FUN_00068aac @ 00068aac  size=552  callers=1
// program: bmminer


void FUN_00068aac(int *param_1,int param_2)

{
  int iVar1;
  int local_18;
  
  local_18 = param_2;
  while ((local_18 != *param_1 && (*(int *)(*(int *)(local_18 + 8) + 0xc) == 1))) {
    if (*(int *)(local_18 + 8) == **(int **)(*(int *)(local_18 + 8) + 8)) {
      iVar1 = *(int *)(*(int *)(*(int *)(local_18 + 8) + 8) + 4);
      if (*(int *)(iVar1 + 0xc) == 1) {
        *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(*(int *)(*(int *)(local_18 + 8) + 8) + 0xc) = 1;
        local_18 = *(int *)(*(int *)(local_18 + 8) + 8);
      }
      else {
        if (local_18 == *(int *)(*(int *)(local_18 + 8) + 4)) {
          local_18 = *(int *)(local_18 + 8);
          FUN_000687bc(param_1,local_18);
        }
        *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
        *(undefined4 *)(*(int *)(*(int *)(local_18 + 8) + 8) + 0xc) = 1;
        FUN_000688d0(param_1,*(undefined4 *)(*(int *)(local_18 + 8) + 8));
      }
    }
    else {
      iVar1 = **(int **)(*(int *)(local_18 + 8) + 8);
      if (*(int *)(iVar1 + 0xc) == 1) {
        *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(*(int *)(*(int *)(local_18 + 8) + 8) + 0xc) = 1;
        local_18 = *(int *)(*(int *)(local_18 + 8) + 8);
      }
      else {
        if (local_18 == **(int **)(local_18 + 8)) {
          local_18 = *(int *)(local_18 + 8);
          FUN_000688d0(param_1,local_18);
        }
        *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
        *(undefined4 *)(*(int *)(*(int *)(local_18 + 8) + 8) + 0xc) = 1;
        FUN_000687bc(param_1,*(undefined4 *)(*(int *)(local_18 + 8) + 8));
      }
    }
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  return;
}

