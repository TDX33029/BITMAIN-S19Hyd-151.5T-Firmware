// FUN_008677d4 @ 008677d4 size=332 calls_out=1 calls_in=0
// strings: 

void FUN_008677d4(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 *local_20;
  undefined1 **local_1c;
  code *local_18;
  undefined1 **local_14;
  code *local_10;
  undefined1 *local_c;
  
  local_1c = &local_20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_20 = param_1 + 4;
    local_c = param_1 + 8;
    local_18 = FUN_00933120;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_0058e1f3;
    break;
  case 1:
    local_20 = param_1 + 1;
    local_c = param_1 + 2;
    local_18 = FUN_01576770;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_00343f65;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00867874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00343fa5,0x6e);
    return;
  case 3:
    local_20 = param_1 + 4;
    local_c = param_1 + 8;
    local_18 = FUN_00933120;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_00591305;
    break;
  case 4:
    local_20 = param_1 + 1;
    local_c = param_1 + 2;
    local_18 = FUN_01576770;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_00344013;
    break;
  case 5:
    local_20 = param_1 + 2;
    local_c = param_1 + 4;
    local_18 = FUN_01009dc0;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_00344060;
    break;
  case 6:
    local_c = param_1 + 4;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_18 = (code *)&LAB_008b9b38;
    local_1c = &local_c;
    puVar3 = &DAT_00586ef7;
    goto LAB_00867900;
  }
  local_14 = &local_c;
  local_10 = local_18;
LAB_00867900:
  FUN_00fa948c(uVar1,uVar2,puVar3,&local_1c);
  return;
}

