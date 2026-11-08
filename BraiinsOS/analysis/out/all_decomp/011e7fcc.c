// FUN_011e7fcc @ 011e7fcc size=1364 calls_out=14 calls_in=1
// strings: a Display implementation returned an error unexpectedly

int FUN_011e7fcc(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 **ppuVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  int local_ec;
  int local_e8;
  int local_e4;
  char *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined4 **local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 **local_a8;
  undefined *local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  iVar6 = 0;
  if (*param_2 == '\x04') {
    iVar6 = *(int *)(param_2 + 0xc);
    if (iVar6 == 0) {
      local_e4 = 0;
      local_e0 = &DAT_00000001;
    }
    else {
      local_e0 = (char *)FUN_016d38c8(iVar6,1);
      local_e4 = iVar6;
      if (local_e0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar6);
      }
    }
    local_dc = iVar6;
    FUN_011e9578(param_1,param_2,&local_e4,param_5,1);
    pcVar4 = local_e0;
    iVar3 = local_e4;
    iVar22 = 0;
    local_d0 = 0;
    local_d4 = 4;
    local_d8 = 0;
    if (iVar6 != 0) {
      iVar14 = *(int *)(param_2 + 8);
      iVar21 = *(int *)(param_1 + 0x34);
      if (iVar21 == 0) {
        iVar6 = iVar6 * 0x18;
        local_e8 = 4;
        iVar21 = local_dc;
        pcVar18 = local_e0;
        iVar10 = iVar22;
        do {
          iVar22 = iVar10;
          if (iVar21 == 0) break;
          if (*pcVar18 == '\0') {
            local_c0 = 0;
            local_c8 = (undefined4 **)0x0;
            local_9c = 0;
            local_c4 = 1;
            local_a0 = &DAT_60000020;
            local_a4 = &DAT_0188a2f0;
            local_a8 = &local_c8;
            iVar22 = FUN_0157ab98(iVar14,&local_a8);
            uVar19 = local_c0;
            uVar20 = local_c4;
            ppuVar5 = local_c8;
            if (iVar22 != 0) goto LAB_011e84d8;
            if (iVar10 == local_d8) {
              FUN_015f37b0(&local_d8);
              local_e8 = local_d4;
            }
            iVar22 = iVar10 + 1;
            puVar16 = (undefined4 *)(local_e8 + iVar10 * 0xc);
            *puVar16 = ppuVar5;
            puVar16[1] = uVar20;
            puVar16[2] = uVar19;
            local_d0 = iVar22;
          }
          iVar14 = iVar14 + 0x18;
          iVar21 = iVar21 + -1;
          iVar6 = iVar6 + -0x18;
          pcVar18 = pcVar18 + 1;
          iVar10 = iVar22;
        } while (iVar6 != 0);
      }
      else {
        iVar6 = iVar14 + iVar6 * 0x18;
        pcVar11 = local_e0 + local_dc;
        local_ec = 4;
        pcVar18 = local_e0;
        do {
          if (pcVar18 == pcVar11) break;
          if (*pcVar18 == '\0') {
            uVar7 = 1;
            if ((int)*(uint *)(iVar21 + 8) < 0) {
              uVar7 = *(uint *)(iVar21 + 8) ^ 0x80000000;
            }
            if (uVar7 == 0) {
              if (*(int *)(iVar21 + 0xc) != 0) goto LAB_011e81b0;
            }
            else if (uVar7 == 1) {
              iVar10 = *(int *)(iVar21 + 0x10);
              puVar16 = *(undefined4 **)(iVar21 + 0xc);
              if (iVar10 == 1) {
                iVar10 = (**(code **)(puVar16[1] + 0x10))(*puVar16,iVar14,param_5);
                if (iVar10 == 0) goto LAB_011e81b0;
              }
              else if (iVar10 != 0) {
                puVar12 = puVar16 + iVar10 * 8;
                do {
                  iVar10 = (**(code **)(puVar16[1] + 0x10))(*puVar16,iVar14,param_5);
                  if (iVar10 == 0) goto LAB_011e81b0;
                  puVar16 = puVar16 + 8;
                } while (puVar16 != puVar12);
              }
            }
            else {
              puVar16 = *(undefined4 **)(iVar21 + 0x10);
              iVar10 = *(int *)(iVar21 + 0x14) << 5;
              do {
                if (iVar10 == 0) goto LAB_011e80f8;
                iVar8 = (**(code **)(puVar16[1] + 0x10))(*puVar16,iVar14,param_5);
                iVar10 = iVar10 + -0x20;
                puVar16 = puVar16 + 8;
              } while (iVar8 != 0);
LAB_011e81b0:
              local_c0 = 0;
              local_c8 = (undefined4 **)0x0;
              local_9c = 0;
              local_c4 = 1;
              local_a0 = &DAT_60000020;
              local_a4 = &DAT_0188a2f0;
              local_a8 = &local_c8;
              iVar10 = FUN_0157ab98(iVar14,&local_a8);
              uVar19 = local_c0;
              uVar20 = local_c4;
              ppuVar5 = local_c8;
              if (iVar10 != 0) {
LAB_011e84d8:
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,
                             &uStack_25,&DAT_0188a308,&DAT_018af130);
              }
              if (iVar22 == local_d8) {
                FUN_015f37b0(&local_d8);
                local_ec = local_d4;
              }
              local_d0 = iVar22 + 1;
              puVar16 = (undefined4 *)(local_ec + iVar22 * 0xc);
              *puVar16 = ppuVar5;
              puVar16[1] = uVar20;
              puVar16[2] = uVar19;
              iVar22 = local_d0;
            }
          }
LAB_011e80f8:
          iVar14 = iVar14 + 0x18;
          pcVar18 = pcVar18 + 1;
        } while (iVar14 != iVar6);
      }
    }
    if (iVar3 != 0) {
      thunk_FUN_016d3fb4(pcVar4);
    }
    if (iVar22 == 0) {
      iVar6 = 0;
      if (local_d8 != 0) {
        thunk_FUN_016d3fb4(local_d4);
        return 0;
      }
    }
    else {
      piVar15 = *(int **)(param_1 + 0x70);
      do {
        iVar6 = *piVar15;
        bVar2 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar2);
      *piVar15 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_011e8510:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11e8510);
        (*pcVar1)();
      }
      uVar20 = *(undefined4 *)(param_1 + 0x74);
      if (param_4 == 0) {
        local_c8 = (undefined4 **)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar9 = *(int **)(param_4 + 0xc);
        do {
          iVar6 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_011e8510;
        uVar19 = *(undefined4 *)(param_4 + 0xc);
        uVar23 = *(undefined4 *)(param_4 + 0x10);
        uVar13 = *(uint *)(param_1 + 0x74);
        uVar7 = 0;
        uVar17 = (*(int **)(param_4 + 4))[1];
        if (uVar17 <= uVar13) {
          iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar15 + 2,uVar17);
          uVar7 = uVar17;
          if (iVar6 != 0) {
            uVar7 = 0;
          }
        }
        local_b0 = FUN_011e1508((int)(piVar15 + 2) + uVar7,uVar13 - uVar7);
        local_bc = 3;
        local_c8 = (undefined4 **)0x2;
        local_b8 = uVar19;
        local_b4 = uVar23;
      }
      local_38 = FUN_01238114(param_3);
      local_88 = 0x80000029;
      local_84 = local_d8;
      iStack_80 = local_d4;
      iStack_7c = local_d0;
      local_50 = 6;
      local_a8 = local_c8;
      local_a4 = (undefined *)local_c4;
      local_a0 = (undefined1 *)local_c0;
      local_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_4c = param_2;
      local_30 = piVar15;
      local_2c = uVar20;
      uStack_90 = local_b0;
      iVar6 = thunk_FUN_016d4a50(0x80);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar6,&local_a8,0x80);
    }
  }
  return iVar6;
}

