// FUN_01426880 @ 01426880 size=888 calls_out=10 calls_in=0
// strings: 

void FUN_01426880(undefined1 *param_1,uint *param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 **local_98;
  uint local_94;
  int local_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint *local_80;
  uint uStack_7c;
  int local_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_60;
  int iStack_5c;
  undefined1 local_58;
  undefined4 local_57;
  undefined3 uStack_53;
  uint **local_40;
  undefined1 *local_3c;
  undefined4 **local_38;
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar5 = (uint *)param_2[2];
  if (puVar5 == (uint *)0x0) {
    uVar9 = *param_3;
    puVar5 = (uint *)((uint)&local_98 | 4);
    while( true ) {
      FUN_0137ca40(&local_98,param_2 + 5,uVar9);
      if ((char)local_98 == '\a') break;
      if (((uint)local_98 & 0xff) != 5) {
        if (((uint)local_98 & 0xff) != 6) {
          uStack_7c = local_94;
          local_78 = local_90;
          puStack_74 = puStack_8c;
          uStack_70 = uStack_88;
          uStack_6c = uStack_84;
          uVar4 = (uint)local_98 & 0xff;
          piVar3 = (int *)((uint)&local_80 | 4);
          if ((uVar4 - 1 < 2) || (piVar3 = &local_78, uVar4 == 0)) {
            iVar2 = *piVar3;
            if (iVar2 == 0) {
LAB_01426a54:
              *param_1 = 4;
              FUN_01431954(&local_80);
              return;
            }
            if (iVar2 == 5) {
              local_40 = local_98;
              local_3c = (undefined1 *)local_94;
              local_38 = (undefined4 **)local_90;
              local_34 = puStack_8c;
              uStack_30 = uStack_88;
              uStack_2c = uStack_84;
              FUN_01427264(&local_58,0xb);
              iStack_5c = CONCAT31(uStack_53,local_57._3_1_);
              goto LAB_01426b7c;
            }
            if (iVar2 == 8) goto LAB_01426a54;
            FUN_01bed4e2(&local_58,(uint)&local_98 | 1,0x17);
LAB_01426b48:
            local_40 = (uint **)CONCAT31(local_40._1_3_,(char)local_98);
            FUN_01bed4e2((uint)&local_40 | 1,&local_58,0x17);
            FUN_01427264(&local_60,0x28,&local_40);
            local_94 = local_60 & 0xff;
          }
          else {
            FUN_01bed4e2(&local_58,(uint)&local_98 | 1,0x17);
            if (uVar4 != 4) goto LAB_01426b48;
            if ((local_94 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01cf4af4);
            }
            local_60 = local_94;
            iStack_5c = local_90;
          }
          local_58 = (undefined1)local_94;
          local_57 = local_60 >> 8;
LAB_01426b7c:
          local_68._0_3_ = (undefined3)local_57;
          local_68._3_1_ = (undefined1)iStack_5c;
          *(undefined4 *)(param_1 + 1) = local_68;
          *param_1 = local_58;
          *(int *)(param_1 + 4) = iStack_5c;
          return;
        }
        goto LAB_01426930;
      }
      if ((puStack_8c != (undefined1 *)0x0) || (iVar2 = FUN_0137c924(param_2 + 5), iVar2 != 0)) {
        local_40 = (uint **)*puVar5;
        local_3c = (undefined1 *)puVar5[1];
        local_38 = (undefined4 **)puVar5[2];
        local_34 = (undefined1 *)puVar5[3];
        FUN_014259a8(param_2[4],local_38);
        uVar4 = *puVar5;
        uVar7 = puVar5[1];
        uVar6 = puVar5[2];
        uVar8 = puVar5[3];
        (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],0);
        *param_2 = uVar4;
        param_2[1] = uVar7;
        param_2[2] = uVar6;
        param_2[3] = uVar8;
        puVar5 = (uint *)param_2[2];
        goto LAB_014268a0;
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
LAB_014268a0:
    uVar4 = param_4[1];
    uVar7 = param_4[2];
    if ((uint *)(uVar4 - uVar7) < puVar5) {
      puVar5 = (uint *)(uVar4 - uVar7);
    }
    uVar6 = (int)puVar5 + uVar7;
    if ((CARRY4((uint)puVar5,uVar7)) || (uVar4 < uVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar7,uVar6,uVar4,&DAT_01cf4ae4);
    }
    FUN_01bed4e2(*param_4 + uVar7,param_2[1],puVar5);
    param_4[2] = uVar6;
    if ((uint)param_4[3] < uVar6) {
      param_4[3] = uVar6;
    }
    local_80 = (uint *)param_2[2];
    local_98 = (undefined4 **)puVar5;
    if (local_80 < puVar5) {
      local_40 = (uint **)&local_98;
      local_34 = &LAB_01a6a304;
      local_3c = &LAB_01a6a304;
      local_38 = &local_80;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_40,&DAT_01d2e534);
    }
    param_2[1] = param_2[1] + (int)puVar5;
    param_2[2] = (int)local_80 - (int)puVar5;
    FUN_0137cc98(&local_40,param_2 + 5,puVar5);
    if (((uint)local_40 & 0xff) != 5) {
      FUN_01431954(&local_40);
    }
LAB_01426930:
    uVar1 = 4;
  }
  *param_1 = uVar1;
  return;
}

