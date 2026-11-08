// FUN_011c3db0 @ 011c3db0 size=1060 calls_out=13 calls_in=1
// strings: 

undefined8 FUN_011c3db0(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined1 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  piVar12 = (int *)&DAT_00000001;
  puVar7 = &DAT_0188a364;
  if (*param_2 == '\x05') {
    uVar3 = 0;
    local_ec = 0;
    local_f0 = 4;
    local_f4 = 0;
    if (param_4 != 0) {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar12 = *(int **)(param_4 + 0xc);
      do {
        iVar8 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar8 + 1;
      if (iVar8 < 0) {
LAB_011c41d8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11c41d8);
        (*pcVar1)();
      }
      uVar9 = 0;
      uVar18 = *(undefined4 *)(param_4 + 0xc);
      uVar19 = *(undefined4 *)(param_4 + 0x10);
      uVar15 = *(uint *)(param_1 + 0x10);
      iVar8 = *(int *)(param_1 + 0xc) + 8;
      uVar14 = (*(int **)(param_4 + 4))[1];
      if (uVar14 <= uVar15) {
        iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar8,uVar14);
        uVar9 = uVar14;
        if (iVar4 != 0) {
          uVar9 = 0;
        }
      }
      local_d0 = FUN_011e1508(iVar8 + uVar9,uVar15 - uVar9);
      local_dc = 3;
      uVar3 = 2;
      local_d8 = uVar18;
      local_d4 = uVar19;
    }
    local_f8 = *(int *)(param_1 + 4);
    local_e8[0] = uVar3;
    if (*(int *)(param_1 + 8) != 0) {
      piVar12 = *(int **)(param_1 + 0xc);
      iVar8 = local_f8 + *(int *)(param_1 + 8) * 0xc;
      iVar4 = *(int *)(param_2 + 4);
      iVar10 = *(int *)(param_2 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      do {
        if (iVar4 != 0) {
          uVar18 = *(undefined4 *)(local_f8 + 4);
          uVar9 = *(uint *)(local_f8 + 8);
          iVar6 = iVar4;
          local_fc = iVar10;
          while( true ) {
            iVar16 = iVar6 + 0x10c;
            uVar14 = (uint)*(ushort *)(iVar6 + 0x192);
            uVar15 = 0xffffffff;
            iVar17 = uVar14 * 0xc;
            do {
              if (iVar17 == 0) {
                if (local_fc == 0) goto LAB_011c3fe4;
                goto LAB_011c3fd0;
              }
              uVar13 = *(uint *)(iVar16 + 8);
              uVar11 = uVar13;
              if (uVar9 < uVar13) {
                uVar11 = uVar9;
              }
              iVar5 = FUN_016dd50a(uVar18,*(undefined4 *)(iVar16 + 4),uVar11);
              if (iVar5 == 0) {
                iVar5 = uVar9 - uVar13;
              }
              iVar17 = iVar17 + -0xc;
              uVar15 = uVar15 + 1;
              iVar16 = iVar16 + 0xc;
            } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
            if (0 < iVar5 == iVar5 < 0) goto LAB_011c3ef4;
            uVar14 = uVar15;
            if (local_fc == 0) break;
LAB_011c3fd0:
            local_fc = local_fc + -1;
            iVar6 = *(int *)(iVar6 + uVar14 * 4 + 0x198);
          }
        }
LAB_011c3fe4:
        do {
          iVar6 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_011c41d8;
        FUN_012406e0(&local_c8,local_e8);
        uVar20 = FUN_01238114(param_3);
        iVar6 = *(int *)(local_f8 + 8);
        uVar18 = *(undefined4 *)(local_f8 + 4);
        if (iVar6 == 0) {
          iVar17 = 1;
        }
        else {
          iVar17 = thunk_FUN_016d4a50(iVar6);
          if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar6);
          }
        }
        FUN_016dd1aa(iVar17,uVar18,iVar6);
        local_50 = 6;
        local_80 = 3;
        local_88 = 0x80000027;
        local_a8 = local_c8;
        local_a4 = uStack_c4;
        local_a0 = uStack_c0;
        local_9c = uStack_bc;
        local_98 = local_b8;
        uStack_94 = uStack_b4;
        uStack_90 = uStack_b0;
        uStack_8c = uStack_ac;
        local_7c = iVar6;
        local_78 = iVar17;
        local_74 = iVar6;
        local_4c = param_2;
        local_30 = piVar12;
        local_2c = uVar3;
        local_38 = uVar20;
        iVar6 = thunk_FUN_016d4a50(0x80);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar6,&local_a8,0x80);
        iVar17 = local_ec;
        if (local_ec == local_f4) {
          FUN_011c4424(&local_f4);
        }
        *(int *)(local_f0 + iVar17 * 4) = iVar6;
        local_ec = iVar17 + 1;
LAB_011c3ef4:
        local_f8 = local_f8 + 0xc;
      } while (local_f8 != iVar8);
    }
    if (local_ec == 0) {
      FUN_0115842c(local_e8);
      piVar12 = (int *)&DAT_00000001;
      puVar7 = &DAT_0188a364;
      if (local_f4 != 0) {
        thunk_FUN_016d3fb4(local_f0);
        return 0x188a36400000001;
      }
    }
    else {
      local_9c = local_f0 + local_ec * 4;
      local_a0 = local_f4;
      local_a8 = local_f0;
      local_a4 = local_f0;
      piVar12 = (int *)thunk_FUN_016d4a50(0x10);
      if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *piVar12 = local_a8;
      piVar12[1] = local_a4;
      piVar12[2] = local_a0;
      piVar12[3] = local_9c;
      FUN_0115842c(local_e8);
      puVar7 = &UNK_01889fe8;
    }
  }
  return CONCAT44(puVar7,piVar12);
}

