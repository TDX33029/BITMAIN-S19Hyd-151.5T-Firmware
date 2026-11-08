// FUN_00786984 @ 00786984 size=540 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00786984(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar6 = *param_1;
  iVar7 = param_1[1];
  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar7 != 0) {
    bVar8 = uVar2 == 0;
    uVar2 = 1;
    if (bVar8) {
      iVar5 = iVar6 + 8;
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        uVar2 = FUN_007639a4(iVar5,param_2);
      }
      else {
        uVar2 = 1;
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
        if (iVar3 == 0) {
          uStack_44 = *param_2;
          uStack_40 = param_2[1];
          uVar2 = 1;
          local_2c = param_2[2];
          local_28 = param_2[3];
          puStack_3c = &local_35;
          local_34 = &uStack_44;
          local_35 = 1;
          local_30 = &DAT_01880dc4;
          iVar5 = FUN_007639a4(iVar5,&local_34);
          if (iVar5 == 0) {
            uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar7 != 1) {
      iVar6 = iVar6 + 0xf8;
      iVar7 = iVar7 * 0xf0 + -0xf0;
      do {
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar5 == 0) {
              uVar2 = FUN_007639a4(iVar6,param_2);
            }
          }
          else {
            uStack_44 = *param_2;
            uStack_40 = param_2[1];
            local_35 = 1;
            local_2c = param_2[2];
            local_28 = param_2[3];
            puStack_3c = &local_35;
            local_30 = &DAT_01880dc4;
            local_34 = &uStack_44;
            iVar5 = FUN_007639a4(iVar6,&local_34);
            if (iVar5 == 0) {
              uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar6 = iVar6 + 0xf0;
        iVar7 = iVar7 + -0xf0;
      } while (iVar7 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar4;
}

