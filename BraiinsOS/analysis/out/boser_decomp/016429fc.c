// FUN_016429fc @ 016429fc size=580 calls_out=4 calls_in=0
// strings: 

void FUN_016429fc(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_54;
  undefined4 *local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  code *local_34;
  int local_30;
  code *local_2c;
  int local_28;
  code *local_24;
  
  uVar5 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar3 = *param_1;
  iVar2 = (*pcVar4)(uVar5,1,0);
  local_4b = 1;
  local_50 = param_2;
  uVar1 = 1;
  if (iVar2 != 0) goto LAB_01642a38;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(uVar5,"(",1);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_01642a38;
    iVar2 = FUN_018a670c(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),param_2);
  }
  else {
    iVar2 = (*pcVar4)(uVar5,"(\n",2);
    if (iVar2 != 0) goto LAB_01642a38;
    local_48 = *param_2;
    local_44 = param_2[1];
    local_40 = &local_39;
    local_30 = param_2[2];
    local_2c = (code *)param_2[3];
    local_34 = (code *)&DAT_01ce45f8;
    local_38 = &local_48;
    local_39 = 1;
    iVar2 = FUN_018a670c(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),&local_38);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_01642a38;
    iVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
    local_4c = (undefined1)iVar2;
    local_54 = 1;
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_01642a38;
      local_28 = iVar3 + 0x14;
      local_30 = iVar3 + 0x10;
      local_34 = FUN_012fcf18;
      local_24 = FUN_012fd02c;
      local_2c = FUN_012fd02c;
      local_38 = (undefined4 *)(iVar3 + 0xc);
      uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_0057ad07,&local_38);
    }
    else {
      local_48 = *param_2;
      local_44 = param_2[1];
      local_40 = &local_39;
      local_28 = iVar3 + 0x14;
      local_30 = iVar3 + 0x10;
      local_24 = FUN_012fd02c;
      local_39 = 1;
      local_2c = FUN_012fd02c;
      local_34 = FUN_012fcf18;
      local_38 = (undefined4 *)(iVar3 + 0xc);
      iVar2 = FUN_012fa178(&local_48,&DAT_01ce45f8,&DAT_0057ad07,&local_38);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_01642a38;
      uVar1 = FUN_01302620(&local_48,&DAT_005312e2,2);
    }
  }
LAB_01642a38:
  local_4c = uVar1;
  local_54 = 2;
  FUN_01302aa0(&local_54);
  return;
}

