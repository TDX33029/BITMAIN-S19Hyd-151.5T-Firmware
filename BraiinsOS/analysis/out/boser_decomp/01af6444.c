// FUN_01af6444 @ 01af6444 size=344 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01af6444(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 ***local_2c;
  code *local_28;
  undefined4 ***local_20;
  undefined1 *local_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    FUN_006643f0(&local_2c,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    local_1c = &LAB_012b97d8;
    local_20 = &local_2c;
    uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_005b68a3,&local_20);
    break;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x01af65ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00533b24,0xd);
    return uVar1;
  case 2:
    local_20 = *(undefined4 ****)(param_1 + 4);
    local_1c = *(undefined1 **)(param_1 + 8);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_28 = FUN_01af65f4;
    puVar2 = &DAT_005b9b7f;
    goto LAB_01af6520;
  case 3:
    FUN_006643f0(&local_2c,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    local_1c = &LAB_012b97d8;
    local_20 = &local_2c;
    uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_005b7658,&local_20);
    break;
  case 4:
    local_20 = (undefined4 ***)(param_1 + 1);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_28 = (code *)&LAB_0161d65c;
    puVar2 = &DAT_00533b31;
LAB_01af6520:
    local_2c = &local_20;
    uVar1 = FUN_012fa178(uVar1,uVar3,puVar2,&local_2c);
    return uVar1;
  }
  if (local_2c != (undefined4 ***)0x80000000) {
    FUN_0134bd64(local_2c,local_28);
  }
  return uVar1;
}

