// FUN_017fb0c4 @ 017fb0c4 size=764 calls_out=10 calls_in=0
// strings: 

void FUN_017fb0c4(undefined1 *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 **local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined1 *local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 **local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint *local_68;
  undefined4 uStack_64;
  int local_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined3 uStack_43;
  uint **local_40;
  undefined1 *local_3c;
  undefined4 **local_38;
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar5 = *(uint **)(param_2 + 0x24);
  if (puVar5 == (uint *)0x0) {
    uVar8 = *param_3;
    puVar5 = (uint *)((uint)&local_80 | 4);
    while( true ) {
      FUN_013b8e80(&local_80,param_2 + 0x10,uVar8);
      if ((char)local_80 == '\a') break;
      local_98 = local_80;
      uStack_94 = uStack_7c;
      iStack_90 = iStack_78;
      local_8c = puStack_74;
      uStack_88 = uStack_70;
      uStack_84 = uStack_6c;
      if (((uint)local_80 & 0xff) != 5) {
        if (((uint)local_80 & 0xff) != 6) {
          uStack_64 = uStack_7c;
          local_60 = iStack_78;
          puStack_5c = puStack_74;
          uStack_58 = uStack_70;
          uStack_54 = uStack_6c;
          piVar3 = (int *)((uint)&local_68 | 4);
          if ((((uint)local_80 & 0xff) - 1 < 2) ||
             (piVar3 = &local_60, ((uint)local_80 & 0xff) == 0)) {
            iVar2 = *piVar3;
            if (iVar2 == 0) {
LAB_017fb294:
              *param_1 = 4;
              FUN_017fae18(&local_68);
              return;
            }
            if (iVar2 == 5) {
              local_40 = local_80;
              local_3c = (undefined1 *)uStack_7c;
              local_38 = (undefined4 **)iStack_78;
              local_34 = puStack_74;
              uStack_30 = uStack_70;
              uStack_2c = uStack_6c;
              FUN_0143ad1c(&local_48,0xb);
              local_3c = (undefined1 *)CONCAT31(uStack_43,local_47._3_1_);
              local_40._0_1_ = local_48;
              goto LAB_017fb350;
            }
            if (iVar2 == 8) goto LAB_017fb294;
          }
          FUN_0143a6a0(&local_40,&local_80);
          local_47 = (uint)local_40 >> 8;
LAB_017fb350:
          local_50._0_3_ = (undefined3)local_47;
          local_50._3_1_ = SUB41(local_3c,0);
          *(undefined4 *)(param_1 + 1) = local_50;
          *param_1 = local_40._0_1_;
          *(undefined1 **)(param_1 + 4) = local_3c;
          return;
        }
        goto LAB_017fb174;
      }
      if ((puStack_74 != (undefined1 *)0x0) || (iVar2 = FUN_013b8c94(param_2 + 0x10), iVar2 != 0)) {
        local_40 = (uint **)*puVar5;
        local_3c = (undefined1 *)puVar5[1];
        local_38 = (undefined4 **)puVar5[2];
        local_34 = (undefined1 *)puVar5[3];
        FUN_01431bc0(*(undefined4 *)(param_2 + 0x2c),local_38);
        (**(code **)(*(uint *)(param_2 + 0x1c) + 0x10))
                  (param_2 + 0x28,*(undefined4 *)(param_2 + 0x20),0);
        uVar4 = puVar5[1];
        uVar7 = puVar5[2];
        uVar6 = puVar5[3];
        *(uint *)(param_2 + 0x1c) = *puVar5;
        *(uint *)(param_2 + 0x20) = uVar4;
        *(uint *)(param_2 + 0x24) = uVar7;
        *(uint *)(param_2 + 0x28) = uVar6;
        puVar5 = *(uint **)(param_2 + 0x24);
        goto LAB_017fb0e4;
      }
      local_40 = (uint **)*puVar5;
      local_3c = (undefined1 *)puVar5[1];
      local_38 = (undefined4 **)puVar5[2];
      local_34 = (undefined1 *)puVar5[3];
      (*(code *)local_40[4])(&local_34,local_3c,local_38);
    }
    uVar1 = 5;
  }
  else {
LAB_017fb0e4:
    uVar4 = param_4[1];
    uVar7 = param_4[2];
    if ((uint *)(uVar4 - uVar7) < puVar5) {
      puVar5 = (uint *)(uVar4 - uVar7);
    }
    uVar6 = (int)puVar5 + uVar7;
    if ((CARRY4((uint)puVar5,uVar7)) || (uVar4 < uVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar7,uVar6,uVar4,&DAT_01d1d464);
    }
    FUN_01bed4e2(*param_4 + uVar7,*(undefined4 *)(param_2 + 0x20),puVar5);
    param_4[2] = uVar6;
    if ((uint)param_4[3] < uVar6) {
      param_4[3] = uVar6;
    }
    local_68 = *(uint **)(param_2 + 0x24);
    local_98 = (undefined4 **)puVar5;
    if (local_68 < puVar5) {
      local_40 = (uint **)&local_98;
      local_34 = &LAB_01a6a304;
      local_3c = &LAB_01a6a304;
      local_38 = &local_68;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_40,&DAT_01d2e534);
    }
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + (int)puVar5;
    *(int *)(param_2 + 0x24) = (int)local_68 - (int)puVar5;
    FUN_013b9174(&local_40,param_2 + 0x10,puVar5);
    if (((uint)local_40 & 0xff) != 5) {
      FUN_017fae18(&local_40);
    }
LAB_017fb174:
    uVar1 = 4;
  }
  *param_1 = uVar1;
  return;
}

