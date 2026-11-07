// FUN_00cdf6b4 @ 00cdf6b4 size=912 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00cdf6b4(int param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *local_44;
  undefined1 local_3d;
  undefined4 *local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 **local_2c;
  char local_28;
  undefined1 local_27;
  
  iVar7 = *(int *)(param_1 + 4);
  uVar10 = 1;
  iVar9 = *(int *)(param_1 + 8);
  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar9 == 0) goto LAB_00cdf86c;
  if (uVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      uVar10 = 1;
      iVar8 = *(int *)(iVar7 + 4);
      iVar11 = *(int *)(iVar7 + 8);
      bVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
      local_38._0_2_ = (ushort)bVar1;
      local_3c = param_2;
      FUN_008cf9ec(&local_3c,iVar8,iVar8 + iVar11);
      if ((char)local_38 == '\0') {
        uVar5 = 1;
        pcVar6 = *(code **)(local_3c[1] + 0xc);
        puVar4 = &DAT_00418ec5;
        puVar3 = (undefined4 *)*local_3c;
LAB_00cdf780:
        uVar10 = (*pcVar6)(puVar3,puVar4,uVar5);
      }
    }
    else {
      uVar10 = 1;
      iVar8 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
      if (iVar8 == 0) {
        uStack_4c = *param_2;
        uStack_48 = param_2[1];
        local_3d = 1;
        local_34 = param_2[2];
        local_30 = param_2[3];
        local_44 = &local_3d;
        iVar11 = *(int *)(iVar7 + 8);
        local_3c = &uStack_4c;
        local_38 = &DAT_01880dc4;
        iVar8 = *(int *)(iVar7 + 4);
        local_28 = FUN_00fb1f64(local_3c,&DAT_00418df9,1);
        local_2c = &local_3c;
        local_27 = 0;
        FUN_008cf9ec(&local_2c,iVar8,iVar8 + iVar11);
        if ((local_28 == '\0') &&
           (iVar8 = (*(code *)local_2c[1][3])(*local_2c,&DAT_00418ec5,1), iVar8 == 0)) {
          uVar5 = 2;
          pcVar6 = *(code **)(local_38 + 0xc);
          puVar4 = &DAT_00414a81;
          puVar3 = local_3c;
          goto LAB_00cdf780;
        }
        uVar10 = 1;
      }
    }
  }
  if (iVar9 == 1) {
    uVar2 = uVar10;
  }
  else {
    piVar12 = (int *)(iVar7 + 0x10);
    iVar7 = iVar9 * 0xc + -0xc;
    uVar2 = uVar10;
    do {
      uVar10 = uVar2 & 1;
      uVar2 = 1;
      if (uVar10 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar9 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          uVar2 = 1;
          if (iVar9 == 0) {
            iVar8 = *piVar12;
            iVar9 = piVar12[1];
            bVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
            local_38._0_2_ = (ushort)bVar1;
            local_3c = param_2;
            FUN_008cf9ec(&local_3c,iVar8,iVar8 + iVar9);
            if ((char)local_38 == '\0') {
              uVar5 = 1;
              pcVar6 = *(code **)(local_3c[1] + 0xc);
              puVar4 = &DAT_00418ec5;
              puVar3 = (undefined4 *)*local_3c;
              goto LAB_00cdfa1c;
            }
          }
        }
        else {
          uStack_4c = *param_2;
          uStack_48 = param_2[1];
          local_3d = 1;
          local_34 = param_2[2];
          local_30 = param_2[3];
          local_44 = &local_3d;
          local_38 = &DAT_01880dc4;
          local_3c = &uStack_4c;
          iVar9 = *piVar12;
          iVar8 = piVar12[1];
          local_28 = FUN_00fb1f64(local_3c,&DAT_00418df9,1);
          local_27 = 0;
          local_2c = &local_3c;
          FUN_008cf9ec(&local_2c,iVar9,iVar9 + iVar8);
          if ((local_28 == '\0') &&
             (iVar9 = (*(code *)local_2c[1][3])(*local_2c,&DAT_00418ec5,1), iVar9 == 0)) {
            uVar5 = 2;
            pcVar6 = *(code **)(local_38 + 0xc);
            puVar4 = &DAT_00414a81;
            puVar3 = local_3c;
LAB_00cdfa1c:
            uVar2 = (*pcVar6)(puVar3,puVar4,uVar5);
          }
          else {
            uVar2 = 1;
          }
        }
      }
      piVar12 = piVar12 + 3;
      iVar7 = iVar7 + -0xc;
    } while (iVar7 != 0);
  }
LAB_00cdf86c:
  uVar5 = 1;
  if (uVar2 == 0) {
    uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar5;
}

