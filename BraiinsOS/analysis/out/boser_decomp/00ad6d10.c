// FUN_00ad6d10 @ 00ad6d10 size=1216 calls_out=17 calls_in=3
// strings: pools | user-- | enabled | load_balance_strategy | fixedshareratio | quota

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ad6d10(undefined1 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  int local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  char local_e8 [28];
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [4];
  int local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_98;
  int local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char local_40 [4];
  int local_3c;
  
  local_f8 = -0x80000000;
  local_fc = 0;
  local_104 = 0;
  local_108 = 0;
  iVar1 = FUN_01272340(&local_108,"uid",3,param_2 + 10);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_01271f48(&local_108,&DAT_0056ee18,4,param_2[5],param_2[6]), iVar1 == 0)) {
    if (local_108 == 1) {
      local_60 = 10;
      iVar1 = FUN_01966fbc(&local_60,0,0);
    }
    else {
      uVar5 = param_2[8];
      uVar6 = param_2[9];
      iVar1 = FUN_007025b0(&local_108,"pools",5);
      iVar4 = local_f4;
      iVar3 = local_f8;
      if (iVar1 == 0) {
        if (local_108 != 0) {
LAB_00ad71a0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
        }
        bVar9 = local_f8 == -0x80000000;
        local_f8 = -0x80000000;
        if (bVar9) {
LAB_00ad71bc:
          local_f8 = 0x80000000;
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
        }
        local_c4 = local_f0;
        local_c8 = local_f4;
        local_cc = iVar3;
        FUN_0196aa8c(&local_60,uVar6);
        if (local_60 == -0x80000000) {
          iVar1 = local_5c;
LAB_00ad6fec:
        }
        else {
          uVar2 = (uint)&local_108 | 4;
          local_a8 = local_60;
          local_a4 = local_5c;
          local_a0 = iStack_58;
          for (iVar7 = uVar6 * 0x34; iVar7 != 0; iVar7 = iVar7 + -0x34) {
            local_70 = 0x80000000;
            local_74 = 0;
            local_7c = 0;
            local_80 = 0;
            iVar1 = FUN_01272340(&local_80,"uid",3,uVar5 + 0x18);
            if ((((iVar1 != 0) ||
                 (iVar1 = FUN_01271f48(&local_80,"url",3,*(undefined4 *)(uVar5 + 4),
                                       *(undefined4 *)(uVar5 + 8)), iVar1 != 0)) ||
                (iVar1 = FUN_01271f48(&local_80,"user--",4,*(undefined4 *)(uVar5 + 0x10),
                                      *(undefined4 *)(uVar5 + 0x14)), iVar1 != 0)) ||
               ((iVar1 = FUN_01272340(&local_80,&DAT_00571120,8,uVar5 + 0x24), iVar1 != 0 ||
                (iVar1 = FUN_00a46668(&local_80,"enabled",7,*(undefined1 *)(uVar5 + 0x30)),
                iVar1 != 0)))) {
              FUN_0127464c(&local_80);
LAB_00ad6fe4:
              FUN_00949b70(&local_a8);
              goto LAB_00ad6fec;
            }
            local_60 = local_80;
            local_5c = local_7c;
            iStack_58 = local_78;
            uStack_54 = local_74;
            iStack_50 = local_70;
            iStack_4c = uStack_6c;
            uStack_48 = uStack_68;
            uStack_44 = uStack_64;
            FUN_0196ac88(&local_98);
            iVar1 = local_a0;
            if ((char)local_98 == '\x06') {
              iVar1 = local_94;
              goto LAB_00ad6fe4;
            }
            if (local_a0 == local_a8) {
              FUN_01969b6c(&local_a8);
            }
            uVar5 = uVar5 + 0x34;
            puVar8 = (undefined4 *)(local_a4 + iVar1 * 0x18);
            *puVar8 = local_98;
            puVar8[1] = local_94;
            puVar8[2] = uStack_90;
            puVar8[3] = uStack_8c;
            puVar8[4] = uStack_88;
            puVar8[5] = uStack_84;
            local_a0 = iVar1 + 1;
          }
          uStack_b8 = *(undefined4 *)((uint)&local_a8 | 4);
          uStack_b4 = ((undefined4 *)((uint)&local_a8 | 4))[1];
          local_bc = local_a8;
          local_c0[0] = 4;
          FUN_0196b484(local_e8,uVar2,&local_cc,local_c0);
          if (local_e8[0] != '\x06') {
            FUN_00db4764(local_e8);
          }
          if (local_108 == 1) {
            local_60 = 10;
            iVar1 = FUN_01966fbc(&local_60,0,0);
            goto LAB_00ad6ff8;
          }
          iVar1 = FUN_007025b0(&local_108,"load_balance_strategy",0x15);
          iVar4 = local_f4;
          iVar3 = local_f8;
          if (iVar1 != 0) goto LAB_00ad6ff8;
          if (local_108 == 1) goto LAB_00ad71a0;
          local_f8 = -0x80000000;
          if (iVar3 == -0x80000000) goto LAB_00ad71bc;
          local_80 = iVar3;
          if (*param_2 == 2) {
            local_40[0] = '\0';
LAB_00ad7150:
            FUN_0196b484(&local_60,uVar2,&local_80,local_40);
            if ((char)local_60 != '\x06') {
              FUN_00db4764(&local_60);
            }
            local_60 = local_108;
            local_5c = local_104;
            iStack_58 = uStack_100;
            uStack_54 = local_fc;
            iStack_50 = local_f8;
            iStack_4c = local_f4;
            uStack_48 = local_f0;
            uStack_44 = uStack_ec;
            FUN_0196ac88(param_1,&local_60);
            return;
          }
          local_7c = local_f4;
          if ((*param_2 & 1) == 0) {
            FUN_00a451c4(local_40,"quota",param_2[1]);
          }
          else {
            FUN_00a43c70((int)*(undefined8 *)(param_2 + 2),local_40,"fixedshareratio");
          }
          if (local_40[0] != '\x06') goto LAB_00ad7150;
          iVar1 = local_3c;
        }
        FUN_019bb7e0(iVar3,iVar4);
      }
    }
  }
LAB_00ad6ff8:
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 6;
  FUN_0127464c(&local_108);
  return;
}

