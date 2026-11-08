// FUN_0124f414 @ 0124f414 size=1000 calls_out=3 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0124f414(uint *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  int local_f8;
  uint local_c8;
  uint local_c4;
  int local_94;
  uint local_84;
  int local_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  uint local_2c;
  int local_28;
  
  uVar10 = 0;
  iVar11 = param_3 * 0x30;
  if (0x2aaaaaa < param_3) {
LAB_0124f43c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar10,iVar11);
  }
  if (iVar11 == 0) {
    local_c4 = 8;
    local_c8 = 0;
  }
  else {
    uVar10 = 8;
    local_c4 = FUN_01298504(iVar11,8);
    if (local_c4 == 0) goto LAB_0124f43c;
    local_c8 = param_3;
    if (param_3 != 0) {
      piVar8 = param_2 + param_3 * 0xc;
      iVar11 = 0;
      uVar17 = param_3;
      do {
        if (param_2 == piVar8) break;
        FUN_006666fc(&local_30,param_2[5],param_2[6]);
        iVar7 = local_28;
        uVar6 = local_2c;
        iVar5 = local_30;
        iVar13 = *param_2;
        if (iVar13 != 2) {
          local_78 = param_2[1];
          iStack_74 = param_2[2];
          iStack_70 = param_2[3];
        }
        iVar4 = iStack_70;
        iVar3 = iStack_74;
        iVar2 = local_78;
        local_84 = 0x80000000;
        if (param_2[8] == -0x80000000) {
        }
        else {
          uVar14 = param_2[10];
          uVar10 = 0;
          if (0x3333333 < uVar14) {
LAB_0124f7d4:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar10,local_f8);
          }
          local_f8 = uVar14 * 0x28;
          if (local_f8 == 0) {
            local_80 = 4;
            local_84 = 0;
          }
          else {
            uVar10 = 4;
            iVar18 = param_2[9];
            local_80 = FUN_01298504(local_f8,4);
            if (local_80 == 0) goto LAB_0124f7d4;
            local_84 = uVar14;
            if (uVar14 != 0) {
              puVar16 = (undefined4 *)(iVar18 + 0x20);
              uVar15 = 0;
              puVar12 = (undefined1 *)(local_80 + 0x24);
              do {
                if (local_f8 == 0) break;
                uVar1 = *(undefined1 *)(iVar18 + 0x24);
                FUN_006666fc(&local_50,*(undefined4 *)(iVar18 + 4),*(undefined4 *)(iVar18 + 8));
                FUN_006666fc(&local_40,*(undefined4 *)(iVar18 + 0x10),*(undefined4 *)(iVar18 + 0x14)
                            );
                if (*(int *)(iVar18 + 0x18) == -0x80000000) {
                  local_30 = -0x80000000;
                }
                else {
                  FUN_006666fc(&local_30,puVar16[-1],*puVar16);
                }
                uVar15 = uVar15 + 1;
                iVar18 = iVar18 + 0x28;
                local_f8 = local_f8 + -0x28;
                puVar16 = puVar16 + 10;
                local_78 = local_50;
                iStack_74 = iStack_4c;
                iStack_70 = iStack_48;
                *(int *)(puVar12 + -0x24) = local_50;
                *(int *)(puVar12 + -0x20) = iStack_4c;
                *(int *)(puVar12 + -0x1c) = iStack_48;
                *(undefined4 *)(puVar12 + -0x18) = local_40;
                *(undefined4 *)(puVar12 + -0x14) = uStack_3c;
                *(undefined4 *)(puVar12 + -0x10) = uStack_38;
                *(int *)(puVar12 + -0xc) = local_30;
                *(uint *)(puVar12 + -8) = local_2c;
                *(int *)(puVar12 + -4) = local_28;
                *puVar12 = uVar1;
                puVar12 = puVar12 + 0x28;
              } while (uVar14 != uVar15);
            }
          }
          local_30 = local_80;
          local_f8 = local_80;
          local_2c = uVar14;
        }
        uVar17 = uVar17 - 1;
        param_2 = param_2 + 0xc;
        piVar9 = (int *)(local_c4 + iVar11 * 0x30);
        *piVar9 = iVar13;
        piVar9[1] = iVar2;
        piVar9[2] = iVar3;
        piVar9[3] = iVar4;
        piVar9[10] = local_2c;
        piVar9[4] = iVar5;
        piVar9[5] = uVar6;
        piVar9[6] = iVar7;
        piVar9[7] = local_94;
        piVar9[8] = local_84;
        piVar9[9] = local_30;
        iVar11 = iVar11 + 1;
      } while (uVar17 != 0);
    }
  }
  *param_1 = local_c8;
  param_1[1] = local_c4;
  param_1[2] = param_3;
  return;
}

