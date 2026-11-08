// FUN_006b0400 @ 006b0400 size=1444 calls_out=10 calls_in=0
// strings: 

void FUN_006b0400(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined4 *local_88;
  int local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  undefined4 *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar20 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar12 = (uint *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20));
  if ((char)puVar12[4] == '\0') {
    FUN_019ae6ac(&local_48);
    *puVar12 = local_48;
    puVar12[1] = local_44;
    puVar12[2] = uStack_40;
    puVar12[3] = uStack_3c;
    *(undefined1 *)(puVar12 + 4) = 1;
  }
  local_78 = *puVar12;
  uStack_74 = puVar12[1];
  local_6c = puVar12[3];
  puVar5 = puVar12 + 2;
  uStack_70 = *puVar5;
  *puVar12 = local_78 + 1;
  puVar12[1] = uStack_74 + (0xfffffffe < local_78);
  local_88 = &DAT_0056d238;
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_40 = *(int *)(param_2 + 0x4c);
  uStack_3c = *(undefined4 *)(param_2 + 0x50);
  local_28 = *(undefined4 *)(param_2 + 0x54);
  iVar15 = param_2 + 0x40;
  if (uStack_40 == 0) {
    local_28 = 0;
  }
  local_44 = 0;
  local_48 = (uint)(uStack_40 != 0);
  local_34 = 0;
  local_38 = local_48;
  local_30 = uStack_40;
  local_2c = uStack_3c;
  while (iVar2 = FUN_006bf7fc(&local_48), iVar2 != 0) {
    if ((*(code **)(iVar2 + 0x30) == (code *)0x0) ||
       (iVar3 = (**(code **)(iVar2 + 0x30))(param_3), iVar3 != 0)) {
      iVar3 = *(int *)(iVar2 + 0x18) * 0x6c;
      iVar2 = *(int *)(iVar2 + 0x14);
      for (; iVar3 != 0; iVar3 = iVar3 + -0x6c) {
        FUN_006b0c14(param_3,iVar15,&local_88,iVar2 + 0xc);
        iVar2 = iVar2 + 0x6c;
      }
    }
  }
  uVar17 = 1;
  piVar13 = (int *)0x0;
  if (*(int *)(param_2 + 0x58) != -0x80000000) {
    piVar13 = (int *)(param_2 + 0x58);
  }
  piVar19 = (int *)(*(int *)(param_2 + 100) + -0x80000000);
  piVar6 = (int *)(param_2 + 0x70);
  if (piVar19 != (int *)0x0) {
    piVar19 = (int *)(param_2 + 100);
  }
  do {
    piVar10 = piVar6;
    piVar8 = piVar13;
    if (uVar17 == 2) {
LAB_006b05c0:
      if (piVar19 == (int *)0x0) break;
      uVar17 = 2;
      piVar6 = piVar19;
      piVar19 = (int *)0x0;
    }
    else if ((uVar17 & 1) == 0) {
LAB_006b05a0:
      piVar8 = (int *)0x0;
      if (piVar13 == (int *)0x0) goto LAB_006b05c0;
      piVar8 = (int *)0x0;
      uVar17 = 0;
      piVar6 = piVar13;
    }
    else {
      uVar17 = 1;
      piVar10 = (int *)0x0;
      if (piVar6 == (int *)0x0) goto LAB_006b05a0;
      piVar10 = (int *)0x0;
    }
    FUN_006b0a2c(param_3,iVar15,&local_88,piVar6[1],piVar6[2]);
    piVar6 = piVar10;
    piVar13 = piVar8;
  } while( true );
  uVar17 = *(uint *)(param_2 + 0x40);
  uVar18 = *(uint *)(param_2 + 0x44);
  uVar14 = *(undefined4 *)(param_2 + 0x48);
  local_34 = 0;
  local_44 = 0;
  if (uVar17 == 0) {
    uVar14 = 0;
  }
  uVar1 = (uint)(uVar17 != 0);
  local_48 = uVar1;
  uStack_40 = uVar17;
  uStack_3c = uVar18;
  local_38 = uVar1;
  local_30 = uVar17;
  local_2c = uVar18;
  local_28 = uVar14;
LAB_006b0648:
  iVar2 = FUN_006bf6e0(&local_48);
  if (iVar2 == 0) {
    local_44 = 0;
    local_34 = 0;
    local_48 = uVar1;
    uStack_40 = uVar17;
    uStack_3c = uVar18;
    local_38 = uVar1;
    local_30 = uVar17;
    local_2c = uVar18;
    local_28 = uVar14;
LAB_006b0714:
    do {
      do {
        while( true ) {
          do {
            iVar2 = FUN_006bf6e0(&local_48);
            if (iVar2 == 0) {
              if ((char)puVar12[4] == '\0') {
                FUN_019ae6ac(&local_48);
                *puVar12 = local_48;
                puVar12[1] = local_44;
                *puVar5 = uStack_40;
                puVar12[3] = uStack_3c;
                *(undefined1 *)(puVar12 + 4) = 1;
              }
              local_58 = *puVar12;
              uStack_54 = puVar12[1];
              uStack_50 = *puVar5;
              uStack_4c = puVar12[3];
              *puVar12 = local_58 + 1;
              puVar12[1] = uStack_54 + (0xfffffffe < local_58);
              local_68 = &DAT_0056d238;
              uStack_64 = 0;
              uStack_60 = 0;
              uStack_5c = 0;
              local_34 = 0;
              local_44 = 0;
              local_48 = uVar1;
              uStack_40 = uVar17;
              uStack_3c = uVar18;
              local_38 = uVar1;
              local_30 = uVar17;
              local_2c = uVar18;
              local_28 = uVar14;
              while (iVar15 = FUN_006bf6e0(&local_48), iVar15 != 0) {
                iVar2 = *(int *)(iVar15 + 0x10);
                if (-1 < iVar2) {
                  iVar2 = 2;
                }
                uVar16 = *(undefined4 *)(iVar15 + *(int *)(iVar2 * 4 + 0x534c50));
                uVar14 = *(undefined4 *)(iVar15 + *(int *)(iVar2 * 4 + 0x534c68));
                iVar15 = FUN_006a4b84(uVar16,uVar14);
                if ((iVar15 != 0) || (iVar15 = FUN_006e59bc(&local_88,uVar16,uVar14), iVar15 != 0))
                {
                  FUN_006e6200(&local_68,uVar16,uVar14);
                }
              }
              *param_1 = local_68;
              param_1[1] = uStack_64;
              param_1[2] = uStack_60;
              param_1[3] = uStack_5c;
              param_1[4] = local_58;
              param_1[5] = uStack_54;
              param_1[6] = uStack_50;
              param_1[7] = uStack_4c;
              if ((local_84 != 0) && (iVar15 = local_84 * 8 + 8, local_84 + iVar15 != -5)) {
                thunk_FUN_01be4678((int)local_88 - iVar15);
              }
              return;
            }
            iVar3 = *(int *)(iVar2 + 0x10);
          } while (iVar3 < 0);
          if (*(code **)(iVar2 + 0xa4) == (code *)0x0) break;
          iVar3 = (**(code **)(iVar2 + 0xa4))(param_3);
          if (iVar3 != 0) {
            iVar15 = 2;
            if (*(int *)(iVar2 + 0x10) < 0) {
              iVar15 = *(int *)(iVar2 + 0x10);
            }
                    /* WARNING: Could not recover jumptable at 0x006b0778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_006b077c + *(int *)(&DAT_006b077c + iVar15 * 4)))(0x1c,0x18);
            return;
          }
        }
        iVar9 = FUN_006e59bc(&local_88,*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x70));
      } while (iVar9 != 0);
      iVar11 = *(int *)(iVar2 + 0x44);
      iVar9 = *(int *)(iVar2 + 0x48) << 4;
      do {
        if (iVar9 == 0) goto LAB_006b0714;
        iVar4 = FUN_006e59bc(&local_88,*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar11 + 8));
        iVar9 = iVar9 + -0x10;
        iVar11 = iVar11 + 0x10;
      } while (iVar4 == 0);
      if (-1 < iVar3) {
        iVar3 = 2;
      }
      FUN_006b0a2c(param_3,iVar15,&local_88,*(undefined4 *)(iVar2 + *(int *)(iVar3 * 4 + 0x534c80)),
                   *(undefined4 *)(iVar2 + *(int *)(iVar3 * 4 + 0x534c98)));
    } while( true );
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar2 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
  }
  if (uVar7 != 2) goto code_r0x006b0670;
  iVar9 = *(int *)(iVar2 + 0x98);
  iVar3 = 0x98;
  goto LAB_006b068c;
code_r0x006b0670:
  if (uVar7 == 1) {
    iVar9 = *(int *)(iVar2 + 0x88);
    iVar3 = 0x88;
LAB_006b068c:
    if ((iVar9 != -0x80000000) && (*(int *)(iVar2 + iVar3 + 8) != 0)) {
      iVar3 = 0x5c;
      if (uVar7 == 2) {
        iVar3 = 0x6c;
      }
      iVar9 = 0x60;
      if (uVar7 == 2) {
        iVar9 = 0x70;
      }
      FUN_006b0a2c(param_3,iVar15,&local_88,*(undefined4 *)(iVar2 + iVar3),
                   *(undefined4 *)(iVar2 + iVar9));
    }
  }
  goto LAB_006b0648;
}

