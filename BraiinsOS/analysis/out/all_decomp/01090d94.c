// FUN_01090d94 @ 01090d94 size=540 calls_out=2 calls_in=6
// strings: 

undefined4 FUN_01090d94(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar2 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418df9,1);
  if (param_2 != 0) {
    bVar6 = uVar2 == 0;
    uVar2 = 1;
    local_48 = param_1;
    if (bVar6) {
      if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
        uVar2 = FUN_01135a50(&local_48,param_3);
      }
      else {
        iVar5 = param_3[1];
        uVar4 = *param_3;
        uVar2 = 1;
        iVar3 = (**(code **)(iVar5 + 0xc))(uVar4,&DAT_0041950e,1);
        if (iVar3 == 0) {
          local_3c = &local_35;
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_2c = param_3[2];
          uStack_28 = param_3[3];
          uVar2 = 1;
          local_35 = 1;
          local_44 = uVar4;
          local_40 = iVar5;
          iVar3 = FUN_01135a50(&local_48,&local_34);
          if (iVar3 == 0) {
            uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
        }
      }
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      do {
        param_1 = param_1 + 1;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        local_48 = param_1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
            iVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              uVar2 = FUN_01135a50(&local_48,param_3);
            }
          }
          else {
            local_44 = *param_3;
            local_40 = param_3[1];
            local_35 = 1;
            local_2c = param_3[2];
            uStack_28 = param_3[3];
            local_3c = &local_35;
            local_30 = &DAT_01880dc4;
            local_34 = &local_44;
            iVar3 = FUN_01135a50(&local_48,&local_34);
            if (iVar3 == 0) {
              uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418ec5,1);
  }
  return uVar4;
}

