// FUN_017bdb4c @ 017bdb4c size=428 calls_out=3 calls_in=0
// strings: 

void FUN_017bdb4c(int param_1,undefined4 *param_2)

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
  iVar2 = (*pcVar3)(uVar4,1,0);
  local_33 = 1;
  local_38 = param_2;
  uVar1 = 1;
  if (iVar2 != 0) goto LAB_017bdb88;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(uVar4,"(",1);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_017bdb88;
    iVar2 = FUN_01410fc0(param_1,*param_2,param_2[1]);
  }
  else {
    iVar2 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar2 != 0) goto LAB_017bdb88;
    local_30 = *param_2;
    uStack_2c = param_2[1];
    puStack_28 = &local_21;
    local_21 = 1;
    iVar2 = FUN_01410fc0(param_1,&local_30,&DAT_01ce45f8);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_017bdb88;
    iVar2 = FUN_01302620(&local_30,&DAT_005312e2,2);
    local_34 = (undefined1)iVar2;
    local_3c = 1;
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_017bdb88;
      uVar1 = (**(code **)(param_2[1] + 0xc))
                        (*param_2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    }
    else {
      local_30 = *param_2;
      uStack_2c = param_2[1];
      puStack_28 = &local_21;
      local_21 = 1;
      iVar2 = FUN_01302620(&local_30,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10))
      ;
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_017bdb88;
      uVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
    }
  }
LAB_017bdb88:
  local_34 = uVar1;
  local_3c = 2;
  FUN_01302aa0(&local_3c);
  return;
}

