// FUN_0136061c @ 0136061c size=548 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0136061c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
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
  
  iVar6 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 8);
  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar8 != 0) {
    bVar9 = uVar2 == 0;
    uVar2 = 1;
    if (bVar9) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        uVar2 = FUN_0110eb30(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8),param_2);
      }
      else {
        iVar5 = param_2[1];
        uVar4 = *param_2;
        uVar2 = 1;
        iVar3 = (**(code **)(iVar5 + 0xc))(uVar4,&DAT_0041950e,1);
        if (iVar3 == 0) {
          local_3c = &local_35;
          uVar2 = 1;
          local_2c = param_2[2];
          uStack_28 = param_2[3];
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_35 = 1;
          local_44 = uVar4;
          local_40 = iVar5;
          iVar3 = FUN_0110eb30(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8),&local_34);
          if (iVar3 == 0) {
            uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar8 != 1) {
      puVar7 = (undefined4 *)(iVar6 + 0x10);
      iVar6 = iVar8 * 0xc + -0xc;
      do {
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            iVar8 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar8 == 0) {
              uVar2 = FUN_0110eb30(*puVar7,puVar7[1],param_2);
            }
          }
          else {
            local_44 = *param_2;
            local_40 = param_2[1];
            local_35 = 1;
            local_3c = &local_35;
            local_2c = param_2[2];
            uStack_28 = param_2[3];
            local_30 = &DAT_01880dc4;
            local_34 = &local_44;
            iVar8 = FUN_0110eb30(*puVar7,puVar7[1],&local_34);
            if (iVar8 == 0) {
              uVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        puVar7 = puVar7 + 3;
        iVar6 = iVar6 + -0xc;
      } while (iVar6 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar4;
}

