// FUN_00b210c4 @ 00b210c4 size=1048 calls_out=11 calls_in=2
// strings: 

void FUN_00b210c4(uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  uint local_138;
  int local_124;
  int local_11c;
  uint local_118;
  uint local_114;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint local_c8;
  int local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  int local_b4;
  int local_b0;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  
  uVar8 = param_3 * 0x40;
  bVar14 = 0x3fffffe < param_3;
  bVar13 = param_3 == 0x3ffffff;
  uVar5 = 0;
  if (param_3 < 0x4000000) {
    bVar14 = 0x7ffffff7 < uVar8;
    bVar13 = uVar8 == 0x7ffffff8;
  }
  if (!bVar14 || bVar13) {
    if (uVar8 == 0) {
      local_114 = 8;
      local_118 = 0;
    }
    else {
      uVar5 = 8;
      local_114 = FUN_01298504(uVar8,8);
      if (local_114 == 0) goto LAB_00b210e0;
      local_118 = param_3;
      if (param_3 != 0) {
        iVar10 = 0;
        puVar12 = param_2;
        local_138 = param_3;
        do {
          if (puVar12 == param_2 + param_3 * 0x10) break;
          FUN_006666fc(&local_d8,puVar12[0xd],puVar12[0xe]);
          local_c0 = 0;
          local_c4 = 8;
          local_c8 = 0;
          FUN_006dffd8(&local_58,puVar12 + 7);
          local_bc = local_58;
          uStack_b8 = uStack_54;
          local_b4 = iStack_50;
          local_b0 = iStack_4c;
          uVar8 = puVar12[6];
          if (uVar8 == 0) {
            local_c0 = 0;
            local_124 = puVar12[5];
LAB_00b2125c:
            local_11c = local_c4;
            iVar1 = uVar8 << 6;
            iVar4 = (local_c0 - uVar8) + 1;
            local_c0 = uVar8;
            while (iVar4 = iVar4 + -1, iVar4 != 0) {
              iVar7 = local_11c + iVar1;
              FUN_019bb7e0(*(undefined4 *)(iVar7 + 0x34),*(undefined4 *)(iVar7 + 0x38));
              iVar1 = iVar1 + 0x40;
              FUN_00fe40e4(iVar7);
            }
            uVar3 = uVar8;
          }
          else {
            uVar3 = iStack_50 + iStack_4c;
            if (0x1fffffe < uVar3) {
              uVar3 = 0x1ffffff;
            }
            uVar6 = 0;
            if ((uVar3 <= uVar8) ||
               (iVar1 = FUN_01a54c4c(&local_c8,0,uVar3,0x40), uVar6 = local_c0, iVar1 != -0x7fffffff
               )) {
              FUN_01a54c38(&local_c8,uVar6,uVar8,0x40);
            }
            local_11c = local_c4;
            local_124 = puVar12[5];
            uVar3 = local_c0;
            if (uVar8 <= local_c0) goto LAB_00b2125c;
          }
          if (uVar3 != 0) {
            iVar10 = 0;
            uVar8 = *(uint *)(local_124 + 0x3c);
            uVar9 = *(undefined4 *)(local_124 + 0x38);
            uVar5 = *(undefined4 *)(local_124 + 0x30);
            *(undefined4 *)(local_11c + 0x3c) = 0;
            *(undefined4 *)(local_11c + 0x30) = uVar5;
            if (*(uint *)(local_11c + 0x34) < uVar8) {
              FUN_00664634((uint *)(local_11c + 0x34),0,uVar8);
              iVar10 = *(int *)(local_11c + 0x3c);
            }
            FUN_01bed4e2(*(int *)(local_11c + 0x38) + iVar10,uVar9,uVar8);
            *(uint *)(local_11c + 0x3c) = iVar10 + uVar8;
            iVar10 = 7;
            if (*(int *)(local_124 + 0x10) < 0) {
              iVar10 = *(int *)(local_124 + 0x10);
            }
                    /* WARNING: Could not recover jumptable at 0x00b21324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00b21328 + *(int *)(&DAT_00b21328 + iVar10 * 4)))();
            return;
          }
          uVar3 = 0;
          if (local_c8 < uVar8) {
            FUN_0132b898(&local_c8,0,uVar8,8,0x40);
            uVar3 = local_c0;
          }
          if (uVar8 != 0) {
            FUN_006666fc(auStack_68,*(undefined4 *)(local_124 + 0x38),
                         *(undefined4 *)(local_124 + 0x3c));
            iVar10 = 7;
            if (*(int *)(local_124 + 0x10) < 0) {
              iVar10 = *(int *)(local_124 + 0x10);
            }
                    /* WARNING: Could not recover jumptable at 0x00b214e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00b214ec + *(int *)(&DAT_00b214ec + iVar10 * 4)))();
            return;
          }
          local_138 = local_138 - 1;
          uVar5 = puVar12[2];
          uVar11 = puVar12[3];
          uVar9 = puVar12[1];
          puVar2 = (undefined4 *)(local_114 + iVar10 * 0x40);
          *puVar2 = *puVar12;
          puVar2[2] = uVar5;
          puVar2[1] = uVar9;
          puVar2[3] = uVar11;
          puVar2[4] = local_c8;
          puVar2[5] = local_c4;
          puVar2[6] = uVar3;
          puVar2[7] = local_bc;
          puVar2[8] = uStack_b8;
          puVar2[9] = local_b4;
          puVar2[10] = local_b0;
          puVar2[0xc] = local_d8;
          puVar2[0xd] = uStack_d4;
          puVar2[0xe] = uStack_d0;
          iVar10 = iVar10 + 1;
          puVar12 = puVar12 + 0x10;
          local_c0 = uVar3;
        } while (local_138 != 0);
      }
    }
    *param_1 = local_118;
    param_1[1] = local_114;
    param_1[2] = param_3;
    return;
  }
LAB_00b210e0:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar8);
}

