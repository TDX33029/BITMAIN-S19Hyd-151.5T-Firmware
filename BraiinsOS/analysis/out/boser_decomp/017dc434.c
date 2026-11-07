// FUN_017dc434 @ 017dc434 size=1452 calls_out=8 calls_in=1
// strings: 

void FUN_017dc434(int param_1,undefined4 *param_2,uint *param_3,int param_4,undefined4 *param_5,
                 byte *param_6,undefined1 param_7,undefined1 param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_r4;
  undefined4 uVar6;
  uint *puVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  uint local_100;
  uint local_f8;
  uint local_e8;
  uint *local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  uint *local_c4;
  undefined4 local_c0;
  int *local_bc;
  uint local_b8;
  undefined1 local_b4;
  int *local_b0;
  uint local_ac;
  int *local_a8;
  uint local_a4;
  int *local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined1 local_90;
  undefined1 local_8f;
  uint local_88;
  uint *local_84;
  uint auStack_80 [23];
  
  uVar11 = 0;
  uVar8 = 0;
  if (*param_6 == 2) {
LAB_017dc484:
    uVar11 = uVar8;
    uVar8 = 0;
  }
  else {
    unaff_r4 = *(undefined4 *)(param_6 + 1);
    if ((*param_6 & 1) != 0) {
      FUN_01bed4e2(&local_88,param_6 + 5,0xc);
      uVar8 = 1;
      goto LAB_017dc484;
    }
    uVar8 = 1;
  }
  iVar2 = FUN_0180af5c(param_2);
  *(undefined4 *)(iVar2 + 0x47) = unaff_r4;
  *(undefined4 *)(iVar2 + 0x42) = unaff_r4;
  *(undefined1 *)(iVar2 + 0x46) = uVar11;
  *(undefined1 *)(iVar2 + 0x41) = uVar8;
  FUN_01bed4e2(iVar2 + 0x4b,&local_88,0xc);
  iVar2 = FUN_0180af5c(param_2);
  *(undefined1 *)(iVar2 + 0x57) = param_7;
  iVar2 = FUN_0180af5c(param_2);
  uVar15 = 0;
  *(undefined1 *)(iVar2 + 0x40) = 0;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_01bed4e2(auStack_80,param_3,0x5c);
    local_84 = (uint *)&DAT_00000001;
    local_88 = 1;
    piVar4 = (int *)thunk_FUN_01be5118(100);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,100);
    }
    FUN_01bed4e2(piVar4,&local_88,100);
    do {
      iVar2 = *piVar4;
      bVar19 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar19);
    *piVar4 = iVar2 + 1;
    piVar5 = piVar4;
    if (-1 < iVar2) {
LAB_017dc580:
      uVar15 = param_2[1];
      uVar17 = param_2[2];
      *(undefined4 *)(param_1 + 0x24) = *param_2;
      *(undefined4 *)(param_1 + 0x28) = uVar15;
      *(undefined4 *)(param_1 + 0x2c) = uVar17;
      uVar15 = param_5[1];
      uVar17 = param_5[2];
      uVar6 = param_5[3];
      uVar10 = param_5[4];
      *(undefined4 *)(param_1 + 0x10) = *param_5;
      *(undefined4 *)(param_1 + 0x14) = uVar15;
      *(undefined4 *)(param_1 + 0x18) = uVar17;
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      *(undefined4 *)(param_1 + 0x20) = uVar10;
      *(undefined1 *)(param_1 + 0x3c) = 0;
      *(int **)(param_1 + 0x30) = piVar4;
      *(int **)(param_1 + 0x34) = piVar5;
      *(int *)(param_1 + 0x38) = param_4;
      *(undefined1 *)(param_1 + 0x3e) = param_8;
      *(undefined1 *)(param_1 + 0x3d) = param_7;
      *(undefined1 **)(param_1 + 8) = &DAT_3b9aca00;
      return;
    }
  }
  else {
    uVar9 = param_3[4];
    bVar20 = 0x1ffffffe < uVar9;
    bVar19 = uVar9 == 0x1fffffff;
    uVar14 = uVar9 * 8;
    if (uVar9 < 0x20000000) {
      bVar20 = 0x7ffffffb < uVar14;
      bVar19 = uVar14 == 0x7ffffffc;
    }
    if (bVar20 && !bVar19) {
LAB_017dc50c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar15,uVar14);
    }
    uVar17 = 0;
    uVar12 = param_3[3];
    if (uVar14 == 0) {
      iVar2 = 4;
      local_f8 = 0;
    }
    else {
      uVar15 = 4;
      iVar2 = FUN_01298504(uVar14,4);
      local_f8 = uVar9;
      if (iVar2 == 0) goto LAB_017dc50c;
    }
    FUN_01bed4e2(iVar2,uVar12,uVar14);
    uVar12 = param_3[7];
    bVar20 = 0x3ffffffe < uVar12;
    bVar19 = uVar12 == 0x3fffffff;
    uVar14 = uVar12 * 4;
    if (uVar12 < 0x40000000) {
      bVar20 = 0x7ffffffb < uVar14;
      bVar19 = uVar14 == 0x7ffffffc;
    }
    if (bVar20 && !bVar19) {
LAB_017dc63c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,uVar14);
    }
    uVar15 = 0;
    uVar13 = param_3[6];
    if (uVar14 == 0) {
      iVar3 = 4;
      local_100 = 0;
    }
    else {
      uVar17 = 4;
      iVar3 = FUN_01298504(uVar14,4);
      local_100 = uVar12;
      if (iVar3 == 0) goto LAB_017dc63c;
    }
    FUN_01bed4e2(iVar3,uVar13,uVar14);
    uVar14 = param_3[10];
    iVar18 = uVar14 * 0xc;
    if (0xaaaaaaa < uVar14) {
LAB_017dc6c0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar15,iVar18);
    }
    if (iVar18 == 0) {
      local_e4 = (uint *)&SUB_00000004;
      local_e8 = 0;
    }
    else {
      uVar15 = 4;
      uVar13 = param_3[9];
      local_e4 = (uint *)FUN_01298504(iVar18,4);
      if (local_e4 == (uint *)0x0) goto LAB_017dc6c0;
      local_e8 = uVar14;
      if (uVar14 != 0) {
        uVar16 = 0;
        puVar7 = local_e4;
        do {
          if (iVar18 == 0) break;
          FUN_015e8ad4(&local_88,*(undefined4 *)(uVar13 + 4),*(undefined4 *)(uVar13 + 8));
          uVar16 = uVar16 + 1;
          iVar18 = iVar18 + -0xc;
          uVar13 = uVar13 + 0xc;
          *puVar7 = local_88;
          puVar7[1] = (uint)local_84;
          puVar7[2] = auStack_80[0];
          puVar7 = puVar7 + 3;
        } while (uVar14 != uVar16);
      }
    }
    local_88 = local_e8;
    local_84 = local_e4;
    local_bc = (int *)param_3[0xb];
    do {
      iVar18 = *local_bc;
      bVar19 = (bool)hasExclusiveAccess(local_bc);
    } while (!bVar19);
    *local_bc = iVar18 + 1;
    local_e0 = uVar14;
    auStack_80[0] = uVar14;
    if (-1 < iVar18) {
      local_b8 = param_3[0xc];
      local_b0 = (int *)param_3[0xe];
      uVar13 = *param_3;
      uVar16 = param_3[1];
      local_b4 = (undefined1)param_3[0xd];
      do {
        iVar18 = *local_b0;
        bVar19 = (bool)hasExclusiveAccess(local_b0);
      } while (!bVar19);
      *local_b0 = iVar18 + 1;
      if (-1 < iVar18) {
        local_a8 = (int *)param_3[0x10];
        local_ac = param_3[0xf];
        local_98 = param_3[0x14];
        local_94 = param_3[0x15];
        local_90 = (undefined1)param_3[0x16];
        do {
          iVar18 = *local_a8;
          bVar19 = (bool)hasExclusiveAccess(local_a8);
        } while (!bVar19);
        *local_a8 = iVar18 + 1;
        if (-1 < iVar18) {
          local_a4 = param_3[0x11];
          local_a0 = (int *)param_3[0x12];
          do {
            iVar18 = *local_a0;
            bVar19 = (bool)hasExclusiveAccess(local_a0);
          } while (!bVar19);
          *local_a0 = iVar18 + 1;
          if (-1 < iVar18) {
            local_d4 = local_100;
            local_e0 = local_f8;
            local_9c = param_3[0x13];
            local_8f = *(undefined1 *)((int)param_3 + 0x59);
            local_c8 = local_e8;
            local_c4 = local_e4;
            puVar7 = local_e4 + 1;
            local_c0 = 0;
            local_e8 = uVar13;
            local_e4 = (uint *)uVar16;
            local_dc = iVar2;
            local_d8 = uVar9;
            local_d0 = iVar3;
            local_cc = uVar12;
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              FUN_019bb7e0(puVar7[-1],*puVar7);
              puVar7 = puVar7 + 3;
            }
            FUN_01bed4e2(auStack_80,param_3,0x5c);
            local_84 = (uint *)0x1;
            local_88 = 1;
            piVar4 = (int *)thunk_FUN_01be5118(100);
            if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,100);
            }
            FUN_01bed4e2(piVar4,&local_88,100);
            FUN_01bed4e2(auStack_80,&local_e8,0x5c);
            local_84 = (uint *)0x1;
            local_88 = 1;
            piVar5 = (int *)thunk_FUN_01be5118(100);
            if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,100);
            }
            FUN_01bed4e2(piVar5,&local_88,100);
            goto LAB_017dc580;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x17dc9f0);
  (*pcVar1)();
}

