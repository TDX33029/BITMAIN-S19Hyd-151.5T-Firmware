// FUN_013d0780 @ 013d0780 size=308 calls_out=4 calls_in=0
// strings: 

void FUN_013d0780(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
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
  
  uVar5 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar3 = *param_1;
  iVar2 = (*pcVar4)(uVar5,1,0);
  uVar1 = 1;
  local_44 = iVar3 + 4;
  local_47 = 1;
  local_4c = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar5,"(",1);
      if (iVar2 == 0) {
        uVar1 = FUN_013d03dc(iVar3,param_2);
      }
    }
    else {
      iVar2 = (*pcVar4)(uVar5,"(\n",2);
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
        iVar2 = FUN_013d03dc(iVar3,&local_30);
        if (iVar2 == 0) {
          uVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
        }
      }
    }
  }
  local_50 = 1;
  local_48 = uVar1;
  FUN_01302888(&local_50,&local_44,FUN_013d08c8);
  FUN_01302aa0();
  return;
}

