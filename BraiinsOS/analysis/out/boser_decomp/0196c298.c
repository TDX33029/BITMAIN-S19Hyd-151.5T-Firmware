// FUN_0196c298 @ 0196c298 size=152 calls_out=1 calls_in=0
// strings: 

void FUN_0196c298(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  int *local_1c;
  int **local_18;
  undefined1 *local_14;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 - 1U < 2) {
    local_14 = &LAB_0193a90c;
    puVar2 = &DAT_00590e5f;
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0196c32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005258a1,1);
      return;
    }
    local_14 = &LAB_016cd65c;
    puVar2 = &DAT_005bd5dc;
  }
  local_1c = (int *)*param_1 + 1;
  local_18 = &local_1c;
  FUN_012fa178(*param_2,param_2[1],puVar2,&local_18);
  return;
}

