// FUN_0155bd1c @ 0155bd1c size=564 calls_out=4 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x0155bdb0) */
/* WARNING: Removing unreachable block (ram,0x0155be24) */

void FUN_0155bd1c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 *local_38;
  char local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar3 = *(int *)*param_1;
  local_34 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00570fd0,8);
  local_33 = 0;
  local_3c = 0;
  DataMemoryBarrier(0xb);
  local_38 = param_2;
  if (*(int *)(iVar3 + 0x10) == 0) {
    uVar1 = 1;
    if (local_34 != '\0') goto LAB_0155bf34;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
      if (iVar2 == 0) {
        uVar1 = FUN_012fb170(*(int *)(iVar3 + 8) + 8,*(undefined4 *)(iVar3 + 0xc),*param_2,
                             param_2[1]);
      }
      goto LAB_0155bf34;
    }
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
    if (iVar2 != 0) goto LAB_0155bf34;
    local_28 = &local_21;
    local_30 = *param_2;
    local_2c = param_2[1];
    local_21 = 1;
    iVar3 = FUN_012fb170(*(int *)(iVar3 + 8) + 8,*(undefined4 *)(iVar3 + 0xc),&local_30,
                         &DAT_01ce45f8);
  }
  else {
    uVar1 = 1;
    if (local_34 != '\0') goto LAB_0155bf34;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
      if (iVar3 == 0) {
        uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00571170,0x11);
      }
      goto LAB_0155bf34;
    }
    iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
    if (iVar3 != 0) goto LAB_0155bf34;
    local_28 = &local_21;
    local_30 = *param_2;
    local_2c = param_2[1];
    local_21 = 1;
    iVar3 = FUN_012fa178(&local_30,&DAT_01ce45f8,&DAT_00571170,0x11);
  }
  uVar1 = 1;
  if (iVar3 == 0) {
    uVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
  }
LAB_0155bf34:
  local_3c = 1;
  local_34 = uVar1;
  FUN_01302aa0(&local_3c);
  return;
}

