// FUN_013c828c @ 013c828c size=300 calls_out=1 calls_in=0
// strings: 

void FUN_013c828c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 local_1d;
  undefined4 *local_1c;
  code *local_18;
  undefined4 *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  puVar1 = (undefined1 *)*param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar1) {
  case 0:
    local_1d = puVar1[1];
    local_c = *(undefined4 *)(puVar1 + 4);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    local_10 = &LAB_00fac484;
    local_14 = &local_c;
    puVar4 = &DAT_0059967e;
    local_18 = FUN_0138c348;
    local_1c = (undefined4 *)&local_1d;
    goto LAB_013c83b4;
  case 1:
    local_c = *(undefined4 *)(puVar1 + 4);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_00573845;
    break;
  case 2:
    local_c = *(undefined4 *)(puVar1 + 4);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_00588eb4;
    break;
  case 3:
    if (*(int *)(puVar1 + 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x013c838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_003cea53,0x30);
      return;
    }
    if (*(int *)(puVar1 + 4) == 1) {
                    /* WARNING: Could not recover jumptable at 0x013c834c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_003cea83,0x2e);
      return;
    }
    local_c = *(undefined4 *)(puVar1 + 8);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_00573240;
  }
  local_18 = (code *)&LAB_00fac484;
  local_1c = &local_c;
LAB_013c83b4:
  FUN_00fa948c(uVar2,uVar3,puVar4,&local_1c);
  return;
}

