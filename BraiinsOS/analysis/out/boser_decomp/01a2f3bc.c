// FUN_01a2f3bc @ 01a2f3bc size=504 calls_out=5 calls_in=0
// strings: 

void FUN_01a2f3bc(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_68;
  undefined4 *local_64;
  undefined1 local_60;
  undefined1 local_5f;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 local_49;
  undefined4 *local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar5 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar3 = *param_1;
  iVar2 = (*pcVar4)(uVar5,1,0);
  local_5c = iVar3 + 0x14;
  local_5f = 1;
  local_64 = param_2;
  uVar1 = 1;
  if (iVar2 != 0) goto LAB_01a2f400;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(uVar5,"(",1);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_01a2f400;
    uVar5 = *param_2;
    iVar2 = param_2[1];
    FUN_01ae1bfc(&local_48,iVar3 + 1);
    iVar2 = (**(code **)(iVar2 + 0xc))(uVar5,&local_48,0x24);
  }
  else {
    iVar2 = (*pcVar4)(uVar5,"(\n",2);
    if (iVar2 != 0) goto LAB_01a2f400;
    local_58 = *param_2;
    uStack_54 = param_2[1];
    puStack_50 = &local_49;
    local_49 = 1;
    FUN_01ae1bfc(&local_48,iVar3 + 1);
    iVar2 = FUN_01302620(&local_58,&local_48,0x24);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_01a2f400;
    iVar2 = FUN_01302620(&local_58,&DAT_005312e2,2);
    local_60 = (undefined1)iVar2;
    local_68 = 1;
  }
  uVar1 = 1;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_01a2f400;
      uVar1 = FUN_012fbb44(iVar3,param_2);
    }
    else {
      local_40 = param_2[2];
      local_3c = param_2[3];
      local_58 = *param_2;
      uStack_54 = param_2[1];
      puStack_50 = &local_49;
      local_48 = &local_58;
      local_49 = 1;
      local_44 = &DAT_01ce45f8;
      iVar2 = FUN_012fbb44(iVar3,&local_48);
      uVar1 = 1;
      if (iVar2 != 0) goto LAB_01a2f400;
      uVar1 = FUN_01302620(&local_58,&DAT_005312e2,2);
    }
  }
LAB_01a2f400:
  local_60 = uVar1;
  local_68 = 2;
  FUN_01302888(&local_68,&local_5c,&LAB_01a2cba0);
  FUN_01302aa0();
  return;
}

