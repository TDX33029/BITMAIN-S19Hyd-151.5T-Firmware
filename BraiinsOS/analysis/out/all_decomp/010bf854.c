// FUN_010bf854 @ 010bf854 size=908 calls_out=10 calls_in=0
// strings: 

void FUN_010bf854(undefined1 *param_1,uint *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 **local_98;
  uint local_94;
  int local_90;
  code *pcStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint *local_80;
  uint uStack_7c;
  int local_78;
  code *pcStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_60;
  int iStack_5c;
  undefined1 local_58;
  undefined4 local_57;
  undefined3 uStack_53;
  uint **local_40;
  code *local_3c;
  undefined4 **local_38;
  code *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar6 = (uint *)param_2[2];
  if (puVar6 != (uint *)0x0) {
LAB_010bf878:
    uVar4 = param_4[1];
    uVar8 = param_4[2];
    if ((uint *)(uVar4 - uVar8) < puVar6) {
      puVar6 = (uint *)(uVar4 - uVar8);
    }
    uVar7 = (int)puVar6 + uVar8;
    if ((uVar7 < uVar8) || (uVar4 < uVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar8,uVar7,uVar4,&DAT_01884c40);
    }
    FUN_016dd1aa(*param_4 + uVar8,param_2[1],puVar6);
    local_80 = (uint *)param_2[2];
    param_4[2] = uVar7;
    if ((uint)param_4[3] < uVar7) {
      param_4[3] = uVar7;
    }
    local_98 = (undefined4 **)puVar6;
    if (local_80 < puVar6) {
      local_40 = (uint **)&local_98;
      local_34 = FUN_007883b8;
      local_3c = FUN_007883b8;
      local_38 = &local_80;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00584155,&local_40,&DAT_018a6700);
    }
    param_2[1] = param_2[1] + (int)puVar6;
    param_2[2] = (int)local_80 - (int)puVar6;
    FUN_01027b5c(&local_40,param_2 + 5,puVar6);
    if (((uint)local_40 & 0xff) != 5) {
      FUN_014ed8bc(&local_40);
    }
    *param_1 = 4;
    return;
  }
  piVar2 = &local_78;
  puVar6 = (uint *)((uint)&local_98 | 4);
  uVar3 = *param_3;
  do {
    FUN_010276e0(&local_98,param_2 + 5,uVar3);
    if ((char)local_98 == '\a') {
      *param_1 = 5;
      return;
    }
    if (((uint)local_98 & 0xff) != 5) {
      if (((uint)local_98 & 0xff) == 6) {
        *param_1 = 4;
        return;
      }
      uStack_7c = local_94;
      local_78 = local_90;
      pcStack_74 = pcStack_8c;
      uStack_70 = uStack_88;
      uStack_6c = uStack_84;
      uVar4 = (uint)local_98 & 0xff;
      if (uVar4 - 1 < 2) {
        piVar2 = (int *)((uint)&local_80 | 4);
LAB_010bfa88:
        iVar1 = *piVar2;
        if (iVar1 == 0) {
LAB_010bfaa4:
          *param_1 = 4;
          FUN_014ed8bc(&local_80);
          return;
        }
        if (iVar1 == 5) {
          local_40 = local_98;
          local_3c = (code *)local_94;
          local_38 = (undefined4 **)local_90;
          local_34 = pcStack_8c;
          uStack_30 = uStack_88;
          uStack_2c = uStack_84;
          FUN_010bdb74(&local_58,0xb);
          iStack_5c = CONCAT31(uStack_53,local_57._3_1_);
          goto LAB_010bfb64;
        }
        if (iVar1 == 8) goto LAB_010bfaa4;
        FUN_016dd1aa(&local_58,(uint)&local_98 | 1,0x17);
LAB_010bfb30:
        local_40 = (uint **)CONCAT31(local_40._1_3_,(char)local_98);
        FUN_016dd1aa((uint)&local_40 | 1,&local_58,0x17);
        FUN_010bdb74(&local_60,0x28,&local_40);
        local_94 = local_60 & 0xff;
      }
      else {
        if (uVar4 == 0) goto LAB_010bfa88;
        FUN_016dd1aa(&local_58,(uint)&local_98 | 1,0x17);
        if (uVar4 != 4) goto LAB_010bfb30;
        if ((local_94 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01884c50);
        }
        local_60 = local_94;
        iStack_5c = local_90;
      }
      local_58 = (undefined1)local_94;
      local_57 = local_60 >> 8;
LAB_010bfb64:
      local_68._0_3_ = (undefined3)local_57;
      local_68._3_1_ = (undefined1)iStack_5c;
      *(undefined4 *)(param_1 + 1) = local_68;
      *param_1 = local_58;
      *(int *)(param_1 + 4) = iStack_5c;
      return;
    }
    if ((pcStack_8c != (code *)0x0) || (iVar1 = FUN_010274ac(param_2 + 5), iVar1 != 0)) {
      local_40 = (uint **)*puVar6;
      local_3c = (code *)puVar6[1];
      local_38 = (undefined4 **)puVar6[2];
      local_34 = (code *)puVar6[3];
      FUN_010c268c(param_2[4],local_38);
      uVar4 = *puVar6;
      uVar8 = puVar6[1];
      uVar7 = puVar6[2];
      uVar5 = puVar6[3];
      (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],0);
      *param_2 = uVar4;
      param_2[1] = uVar8;
      param_2[2] = uVar7;
      param_2[3] = uVar5;
      puVar6 = (uint *)param_2[2];
      goto LAB_010bf878;
    }
    local_40 = (uint **)*puVar6;
    local_3c = (code *)puVar6[1];
    local_38 = (undefined4 **)puVar6[2];
    local_34 = (code *)puVar6[3];
    (*(code *)local_40[4])(&local_34);
  } while( true );
}

