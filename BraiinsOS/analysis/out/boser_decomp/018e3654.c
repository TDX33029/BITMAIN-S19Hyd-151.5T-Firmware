// FUN_018e3654 @ 018e3654 size=656 calls_out=6 calls_in=2
// strings: 

void FUN_018e3654(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint local_e8;
  uint local_e4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar5 = 0;
  iVar1 = param_3 * 0x3c;
  if (0x2222222 < param_3) {
LAB_018e3680:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar1);
  }
  if (iVar1 == 0) {
    local_e4 = 4;
    local_e8 = 0;
  }
  else {
    uVar5 = 4;
    local_e4 = FUN_01298504(iVar1,4);
    if (local_e4 == 0) goto LAB_018e3680;
    local_e8 = param_3;
    if (param_3 != 0) {
      iVar9 = 0;
      uVar8 = 0;
      do {
        if (iVar1 == iVar9) break;
        iVar6 = param_2 + iVar9;
        if (*(int *)(param_2 + iVar9) == -0x80000000) {
          uVar5 = *(undefined4 *)(iVar6 + 0x10);
          FUN_015e8ad4((uint)&local_d8 | 4,*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc));
          local_d8 = 0x80000000;
          local_c8 = uVar5;
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + 0x18);
          uVar2 = *(undefined1 *)(iVar6 + 0x1c);
          FUN_015e8ad4(&local_48,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
          FUN_018e34d4(&local_38,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
          local_4c = CONCAT31(local_4c._1_3_,uVar2);
          local_68 = local_48;
          uStack_64 = uStack_44;
          uStack_60 = uStack_40;
          local_5c = local_38;
          local_58 = local_34;
          uStack_54 = local_30;
          uVar2 = *(undefined1 *)(iVar6 + 0x38);
          local_50 = uVar5;
          if (*(int *)(iVar6 + 0x2c) == -0x80000000) {
            local_38 = *(int *)(iVar6 + 0x2c);
            local_34 = *(undefined4 *)(iVar6 + 0x30);
            local_30 = *(undefined4 *)(iVar6 + 0x34);
          }
          else {
            FUN_006666fc(&local_38,*(undefined4 *)(iVar6 + 0x30),*(undefined4 *)(iVar6 + 0x34));
          }
          uVar4 = local_30;
          uVar5 = local_34;
          iVar3 = local_38;
          FUN_018e333c(&local_38,*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar6 + 0x28));
          local_98 = local_68;
          uStack_94 = uStack_64;
          uStack_90 = uStack_60;
          iStack_8c = local_5c;
          local_88 = local_58;
          local_84 = uStack_54;
          uStack_80 = local_50;
          uStack_7c = local_4c;
          local_d8 = local_68;
          uStack_d4 = uStack_64;
          uStack_d0 = uStack_60;
          iStack_cc = local_5c;
          local_c8 = local_58;
          local_c4 = uStack_54;
          uStack_c0 = local_50;
          uStack_bc = local_4c;
          iStack_b8 = local_38;
          uStack_b4 = local_34;
          local_b0 = local_30;
          local_a0 = CONCAT31(local_a0._1_3_,uVar2);
          local_a4 = uVar4;
          local_a8 = uVar5;
          local_ac = iVar3;
        }
        puVar7 = (undefined4 *)(local_e4 + iVar9);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0x3c;
        *puVar7 = local_d8;
        puVar7[1] = uStack_d4;
        puVar7[2] = uStack_d0;
        puVar7[3] = iStack_cc;
        puVar7[4] = local_c8;
        puVar7[5] = local_c4;
        puVar7[6] = uStack_c0;
        puVar7[7] = uStack_bc;
        puVar7[8] = iStack_b8;
        puVar7[9] = uStack_b4;
        puVar7[10] = local_b0;
        puVar7[0xb] = local_ac;
        puVar7[0xc] = local_a8;
        puVar7[0xd] = local_a4;
        puVar7[0xe] = local_a0;
      } while (param_3 != uVar8);
    }
  }
  *param_1 = local_e8;
  param_1[1] = local_e4;
  param_1[2] = param_3;
  return;
}

