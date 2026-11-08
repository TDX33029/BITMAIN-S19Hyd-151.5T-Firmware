// FUN_01925984 @ 01925984 size=696 calls_out=7 calls_in=1
// strings: 

void FUN_01925984(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r10;
  int iVar10;
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
  
  if (*param_2 == -0x80000000) {
    *param_1 = 0x80000000;
    return;
  }
  uVar9 = param_2[2];
  if (0x2222222 < uVar9) {
    uVar5 = 0;
LAB_019259c4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,unaff_r10);
  }
  unaff_r10 = uVar9 * 0x3c;
  if (unaff_r10 == 0) {
    local_e4 = 4;
    local_e8 = 0;
  }
  else {
    iVar4 = param_2[1];
    uVar5 = 4;
    local_e4 = FUN_01298504(unaff_r10,4);
    if (local_e4 == 0) goto LAB_019259c4;
    local_e8 = uVar9;
    if (uVar9 != 0) {
      iVar10 = 0;
      uVar8 = 0;
      do {
        if (unaff_r10 == iVar10) break;
        iVar7 = iVar4 + iVar10;
        if (*(int *)(iVar4 + iVar10) == -0x80000000) {
          uVar5 = *(undefined4 *)(iVar7 + 0x10);
          FUN_015e8ad4((uint)&local_d8 | 4,*(undefined4 *)(iVar7 + 8),*(undefined4 *)(iVar7 + 0xc));
          local_d8 = 0x80000000;
          local_c8 = uVar5;
        }
        else {
          uVar5 = *(undefined4 *)(iVar7 + 0x18);
          uVar1 = *(undefined1 *)(iVar7 + 0x1c);
          FUN_015e8ad4(&local_48,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
          FUN_018e34d4(&local_38,*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar7 + 0x14));
          local_4c = CONCAT31(local_4c._1_3_,uVar1);
          local_68 = local_48;
          uStack_64 = uStack_44;
          uStack_60 = uStack_40;
          local_5c = local_38;
          local_58 = local_34;
          uStack_54 = local_30;
          uVar1 = *(undefined1 *)(iVar7 + 0x38);
          local_50 = uVar5;
          if (*(int *)(iVar7 + 0x2c) == -0x80000000) {
            local_38 = *(int *)(iVar7 + 0x2c);
            local_34 = *(undefined4 *)(iVar7 + 0x30);
            local_30 = *(undefined4 *)(iVar7 + 0x34);
          }
          else {
            FUN_006666fc(&local_38,*(undefined4 *)(iVar7 + 0x30),*(undefined4 *)(iVar7 + 0x34));
          }
          uVar3 = local_30;
          uVar5 = local_34;
          iVar2 = local_38;
          FUN_018e333c(&local_38,*(undefined4 *)(iVar7 + 0x24),*(undefined4 *)(iVar7 + 0x28));
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
          local_a0 = CONCAT31(local_a0._1_3_,uVar1);
          local_a4 = uVar3;
          local_a8 = uVar5;
          local_ac = iVar2;
        }
        puVar6 = (undefined4 *)(local_e4 + iVar10);
        uVar8 = uVar8 + 1;
        iVar10 = iVar10 + 0x3c;
        *puVar6 = local_d8;
        puVar6[1] = uStack_d4;
        puVar6[2] = uStack_d0;
        puVar6[3] = iStack_cc;
        puVar6[4] = local_c8;
        puVar6[5] = local_c4;
        puVar6[6] = uStack_c0;
        puVar6[7] = uStack_bc;
        puVar6[8] = iStack_b8;
        puVar6[9] = uStack_b4;
        puVar6[10] = local_b0;
        puVar6[0xb] = local_ac;
        puVar6[0xc] = local_a8;
        puVar6[0xd] = local_a4;
        puVar6[0xe] = local_a0;
      } while (uVar9 != uVar8);
    }
  }
  *param_1 = local_e8;
  param_1[1] = local_e4;
  param_1[2] = uVar9;
  FUN_018e3a84(param_2);
  return;
}

