// FUN_015ffc68 @ 015ffc68 size=528 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_015ffc68(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar6 = 1;
  iVar5 = *(int *)*param_1;
  iVar7 = ((int *)*param_1)[1];
  uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar7 == 0) goto LAB_015ffe24;
  bVar9 = uVar1 == 0;
  uVar1 = uVar6;
  if (bVar9) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      uVar1 = FUN_015eaea4(iVar5,param_2);
LAB_015ffcd4:
    }
    else {
      uVar3 = *param_2;
      iVar8 = param_2[1];
      pcVar4 = *(code **)(iVar8 + 0xc);
      iVar2 = (*pcVar4)(uVar3,&DAT_0041950e,1,pcVar4,uVar3);
      if (iVar2 == 0) {
        local_3c = &local_35;
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        local_2c = param_2[2];
        uStack_28 = param_2[3];
        local_35 = 1;
        local_44 = uVar3;
        local_40 = iVar8;
        iVar2 = FUN_015eaea4(iVar5,&local_34);
        if (iVar2 == 0) {
          uVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          goto LAB_015ffcd4;
        }
      }
    }
  }
  iVar7 = iVar7 + -1;
  if (iVar7 != 0) {
    do {
      iVar5 = iVar5 + 1;
      uVar6 = uVar1 & 1;
      uVar1 = 1;
      if (uVar6 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          uVar1 = 1;
          if (iVar2 == 0) {
            uVar1 = FUN_015eaea4(iVar5,param_2);
          }
        }
        else {
          local_44 = *param_2;
          local_40 = param_2[1];
          local_35 = 1;
          local_2c = param_2[2];
          uStack_28 = param_2[3];
          local_3c = &local_35;
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          iVar2 = FUN_015eaea4(iVar5,&local_34);
          if (iVar2 == 0) {
            uVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
          else {
            uVar1 = 1;
          }
        }
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
LAB_015ffe24:
  uVar3 = 1;
  if (uVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar3;
}

