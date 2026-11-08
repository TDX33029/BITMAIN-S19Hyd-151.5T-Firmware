// FUN_00b220b4 @ 00b220b4 size=628 calls_out=5 calls_in=1
// strings: 

void FUN_00b220b4(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  int local_a8;
  uint local_a4;
  int *local_a0;
  int iStack_9c;
  int *piStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int local_84;
  int *local_80;
  int local_7c;
  int *local_78;
  int local_74;
  int *local_70;
  int iStack_6c;
  int *local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *local_48;
  int iStack_44;
  int *piStack_40;
  int local_3c;
  int *local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  uVar2 = FUN_019ec670(param_3);
  if ((uVar2 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar2 & 1) != 0) {
      *param_1 = 4;
      return;
    }
    local_a4 = (uVar2 & 0xffffff) >> 0x10;
    uVar2 = (uVar2 & 0xffffff) >> 8;
  }
  piVar4 = &local_88;
  FUN_009cde58(piVar4,*param_2,param_2 + 1,param_3);
  piVar1 = local_80;
  if (local_88 == 3 && local_84 == 0) {
    iVar5 = local_80[2];
    if (iVar5 == 3) {
      iVar5 = 3;
      piVar7 = (int *)0x0;
      iVar8 = 0;
    }
    else {
      if (iVar5 == 0) {
        FUN_006666fc(&local_58,local_80[4],local_80[5]);
        uVar6 = (undefined1)piVar1[0xd];
        local_3c = piVar1[9];
        local_38 = (int *)piVar1[10];
        iStack_34 = piVar1[0xb];
        iStack_30 = piVar1[0xc];
        FUN_006666fc(&local_48,piVar1[7],piVar1[8]);
LAB_00b22240:
        local_2c = CONCAT31(local_2c._1_3_,uVar6);
        puVar3 = (undefined4 *)((uint)&local_88 | 4);
        *puVar3 = local_58;
        puVar3[1] = uStack_54;
        puVar3[2] = uStack_50;
        local_78 = local_48;
        local_74 = iStack_44;
        local_70 = piStack_40;
        iStack_6c = local_3c;
        local_68 = local_38;
        iStack_64 = iStack_34;
        iStack_60 = iStack_30;
        iStack_5c = local_2c;
      }
      else {
        if (iVar5 == 1) {
          FUN_006666fc(&local_58,local_80[4],local_80[5]);
          uVar6 = (undefined1)piVar1[0xd];
          local_3c = piVar1[9];
          local_38 = (int *)piVar1[10];
          iStack_34 = piVar1[0xb];
          iStack_30 = piVar1[0xc];
          FUN_006666fc(&local_48,piVar1[7],piVar1[8]);
          goto LAB_00b22240;
        }
        FUN_006666fc((uint)piVar4 | 4,local_80[4],local_80[5]);
      }
      local_a8 = local_84;
      local_48 = local_70;
      iStack_44 = iStack_6c;
      piStack_40 = local_68;
      local_3c = iStack_64;
      local_38 = (int *)iStack_60;
      iStack_34 = iStack_5c;
      local_a0 = local_70;
      iStack_9c = iStack_6c;
      piStack_98 = local_68;
      iStack_94 = iStack_64;
      iStack_90 = iStack_60;
      iStack_8c = iStack_5c;
      piVar4 = local_78;
      param_3 = local_74;
      piVar7 = local_80;
      iVar8 = local_7c;
    }
    FUN_009ce3cc(piVar1);
  }
  else {
    if (local_88 == 0) {
      iVar5 = 4;
      goto LAB_00b22314;
    }
    iVar8 = 0;
    if (local_88 != 1) {
      piVar4 = local_80;
      param_3 = local_7c;
    }
    piVar7 = (int *)(uint)(local_88 != 1);
    iVar5 = 3;
  }
  param_1[1] = local_a8;
  param_1[2] = (int)piVar7;
  param_1[3] = iVar8;
  param_1[4] = (int)piVar4;
  param_1[5] = param_3;
  param_1[6] = (int)local_a0;
  param_1[7] = iStack_9c;
  param_1[8] = (int)piStack_98;
  param_1[9] = iStack_94;
  param_1[10] = iStack_90;
  param_1[0xb] = iStack_8c;
  uVar2 = 0;
LAB_00b22314:
  *param_1 = iVar5;
  FUN_019edbc4(uVar2,local_a4);
  return;
}

