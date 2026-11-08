// FUN_01503be4 @ 01503be4 size=524 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01503be4(int param_1,undefined4 *param_2)

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
  int iStack_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar7 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar5 != 0) {
    bVar8 = uVar2 == 0;
    uVar2 = 1;
    if (bVar8) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        uVar2 = FUN_01402444(iVar7,param_2);
      }
      else {
        uVar4 = *param_2;
        iVar6 = param_2[1];
        uVar2 = 1;
        iVar3 = (**(code **)(iVar6 + 0xc))(uVar4,&DAT_0041950e,1);
        if (iVar3 == 0) {
          local_3c = &local_35;
          local_30 = &DAT_01880dc4;
          local_34 = &uStack_44;
          local_2c = param_2[2];
          uStack_28 = param_2[3];
          uVar2 = 1;
          local_35 = 1;
          uStack_44 = uVar4;
          iStack_40 = iVar6;
          iVar3 = FUN_01402444(iVar7,&local_34);
          if (iVar3 == 0) {
            uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
        }
      }
    }
    iVar5 = iVar5 + -1;
    if (iVar5 != 0) {
      do {
        iVar7 = iVar7 + 1;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              uVar2 = FUN_01402444(iVar7,param_2);
            }
          }
          else {
            uStack_44 = *param_2;
            iStack_40 = param_2[1];
            local_35 = 1;
            local_2c = param_2[2];
            uStack_28 = param_2[3];
            local_3c = &local_35;
            local_30 = &DAT_01880dc4;
            local_34 = &uStack_44;
            iVar3 = FUN_01402444(iVar7,&local_34);
            if (iVar3 == 0) {
              uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar4;
}

