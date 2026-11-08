// FUN_016207e4 @ 016207e4 size=544 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_016207e4(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418df9,1);
  if (param_2 != 0) {
    bVar6 = uVar2 == 0;
    uVar2 = 1;
    local_48 = param_1;
    if (bVar6) {
      if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
        uVar2 = FUN_016205c0(&local_48,param_3);
      }
      else {
        uVar2 = 1;
        iVar5 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0041950e,1);
        if (iVar5 == 0) {
          uStack_44 = *param_3;
          uStack_40 = param_3[1];
          uVar2 = 1;
          local_2c = param_3[2];
          local_28 = param_3[3];
          puStack_3c = &local_35;
          local_34 = &uStack_44;
          local_35 = 1;
          local_30 = &DAT_01880dc4;
          iVar5 = FUN_016205c0(&local_48,&local_34);
          if (iVar5 == 0) {
            uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
        }
      }
    }
    if (param_2 != 1) {
      iVar5 = param_2 * 0x20 + -0x20;
      do {
        param_1 = param_1 + 0x20;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        local_48 = param_1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
            iVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              uVar2 = FUN_016205c0(&local_48,param_3);
            }
          }
          else {
            uStack_44 = *param_3;
            uStack_40 = param_3[1];
            local_35 = 1;
            local_2c = param_3[2];
            local_28 = param_3[3];
            puStack_3c = &local_35;
            local_30 = &DAT_01880dc4;
            local_34 = &uStack_44;
            iVar3 = FUN_016205c0(&local_48,&local_34);
            if (iVar3 == 0) {
              uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar5 = iVar5 + -0x20;
      } while (iVar5 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418ec5,1);
  }
  return uVar4;
}

