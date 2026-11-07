// FUN_012b7474 @ 012b7474 size=1148 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_012b7474(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 local_69;
  undefined4 *local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  int local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined *local_28;
  
  piVar6 = *(int **)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar5 != 0) {
    bVar7 = uVar2 == 0;
    uVar2 = 1;
    if (bVar7) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        local_34 = *piVar6;
        local_28 = &DAT_0188d2ec;
        local_2c = &local_68;
        local_3c = local_34 + 0x34;
        local_44 = local_34 + 0x28;
        local_4c = local_34 + 0x1c;
        local_54 = local_34 + 0x10;
        local_68 = (undefined4 *)(local_34 + 8);
        local_30 = &DAT_0188d2dc;
        local_38 = &DAT_0188d2cc;
        local_40 = &DAT_0188d2bc;
        local_48 = &DAT_0188d2ac;
        local_50 = &DAT_0188d2ac;
        uVar2 = FUN_00fb36b8(param_2,&DAT_00568b04,4,&DAT_0188d2fc,6,&local_54,6);
      }
      else {
        uVar2 = 1;
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
        if (iVar3 == 0) {
          local_78 = *param_2;
          uStack_74 = param_2[1];
          uVar2 = 1;
          local_60 = param_2[2];
          local_5c = param_2[3];
          puStack_70 = &local_69;
          local_68 = &local_78;
          local_64 = &DAT_01880dc4;
          local_2c = &local_58;
          local_69 = 1;
          local_34 = *piVar6;
          local_3c = local_34 + 0x34;
          local_44 = local_34 + 0x28;
          local_4c = local_34 + 0x1c;
          local_48 = &DAT_0188d2ac;
          local_50 = &DAT_0188d2ac;
          local_54 = local_34 + 0x10;
          local_58 = (undefined4 *)(local_34 + 8);
          local_28 = &DAT_0188d2ec;
          local_30 = &DAT_0188d2dc;
          local_38 = &DAT_0188d2cc;
          local_40 = &DAT_0188d2bc;
          iVar3 = FUN_00fb36b8(&local_68,&DAT_00568b04,4,&DAT_0188d2fc,6,&local_54,6);
          if (iVar3 == 0) {
            uVar2 = (**(code **)(local_64 + 0xc))(local_68,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar5 != 1) {
      iVar5 = iVar5 * 4 + -4;
      do {
        piVar6 = piVar6 + 1;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              local_34 = *piVar6;
              local_28 = &DAT_0188d2ec;
              local_30 = &DAT_0188d2dc;
              local_38 = &DAT_0188d2cc;
              local_3c = local_34 + 0x34;
              local_48 = &DAT_0188d2ac;
              local_40 = &DAT_0188d2bc;
              local_44 = local_34 + 0x28;
              local_4c = local_34 + 0x1c;
              local_54 = local_34 + 0x10;
              local_68 = (undefined4 *)(local_34 + 8);
              local_50 = &DAT_0188d2ac;
              local_2c = &local_68;
              uVar2 = FUN_00fb36b8(param_2,&DAT_00568b04,4,&DAT_0188d2fc,6,&local_54,6);
            }
          }
          else {
            local_78 = *param_2;
            uStack_74 = param_2[1];
            local_69 = 1;
            local_60 = param_2[2];
            local_5c = param_2[3];
            puStack_70 = &local_69;
            local_64 = &DAT_01880dc4;
            local_68 = &local_78;
            local_34 = *piVar6;
            local_28 = &DAT_0188d2ec;
            local_2c = &local_58;
            local_30 = &DAT_0188d2dc;
            local_38 = &DAT_0188d2cc;
            local_3c = local_34 + 0x34;
            local_48 = &DAT_0188d2ac;
            local_40 = &DAT_0188d2bc;
            local_44 = local_34 + 0x28;
            local_4c = local_34 + 0x1c;
            local_54 = local_34 + 0x10;
            local_58 = (undefined4 *)(local_34 + 8);
            local_50 = &DAT_0188d2ac;
            iVar3 = FUN_00fb36b8(&local_68,&DAT_00568b04,4,&DAT_0188d2fc,6,&local_54,6);
            if (iVar3 == 0) {
              uVar2 = (**(code **)(local_64 + 0xc))(local_68,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar5 = iVar5 + -4;
      } while (iVar5 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar4;
}

