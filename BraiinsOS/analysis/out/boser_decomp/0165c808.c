// FUN_0165c808 @ 0165c808 size=408 calls_out=3 calls_in=0
// strings: 

void FUN_0165c808(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 local_21;
  
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  param_1 = (undefined4 *)*param_1;
  iVar2 = (*pcVar3)(uVar4,1,0);
  local_33 = 1;
  local_38 = param_2;
  uVar1 = 1;
  if (iVar2 != 0) goto LAB_0165c844;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(uVar4,"(",1);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_0165c844;
    iVar2 = FUN_012fb170(*param_1,param_1[1],*param_2,param_2[1]);
  }
  else {
    iVar2 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar2 != 0) goto LAB_0165c844;
    local_30 = *param_2;
    uStack_2c = param_2[1];
    puStack_28 = &local_21;
    local_21 = 1;
    iVar2 = FUN_012fb170(*param_1,param_1[1],&local_30,&DAT_01ce45f8);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_0165c844;
    iVar2 = FUN_01302620(&local_30,&DAT_005312e2,2);
    local_34 = (undefined1)iVar2;
    local_3c = 1;
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_0165c844;
      uVar1 = FUN_012fb170(param_1[2],param_1[3],*param_2,param_2[1]);
    }
    else {
      local_30 = *param_2;
      uStack_2c = param_2[1];
      puStack_28 = &local_21;
      local_21 = 1;
      iVar2 = FUN_012fb170(param_1[2],param_1[3],&local_30,&DAT_01ce45f8);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_0165c844;
      uVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
    }
  }
LAB_0165c844:
  local_34 = uVar1;
  local_3c = 2;
  FUN_01302aa0(&local_3c);
  return;
}

