// FUN_012e8d5c @ 012e8d5c size=300 calls_out=4 calls_in=1
// strings: 

void FUN_012e8d5c(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined1 local_48;
  undefined1 local_47;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 local_31;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar4,1,0);
  uVar1 = 1;
  local_44 = param_1 + 4;
  local_47 = 1;
  local_4c = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,"(",1);
      if (iVar2 == 0) {
        uVar1 = FUN_013095bc(param_1,param_2);
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,"(\n",2);
      uVar1 = 1;
      if (iVar2 == 0) {
        local_40 = *param_2;
        uStack_3c = param_2[1];
        local_28 = param_2[2];
        local_24 = param_2[3];
        puStack_38 = &local_31;
        local_2c = &DAT_01ce45f8;
        local_30 = &local_40;
        local_31 = 1;
        iVar2 = FUN_013095bc(param_1,&local_30);
        if (iVar2 == 0) {
          uVar1 = FUN_01302620(&local_40,&DAT_005312e2,2);
        }
      }
    }
  }
  local_50 = 1;
  local_48 = uVar1;
  FUN_01302888(&local_50,&local_44,FUN_015fc038);
  FUN_01302aa0();
  return;
}

