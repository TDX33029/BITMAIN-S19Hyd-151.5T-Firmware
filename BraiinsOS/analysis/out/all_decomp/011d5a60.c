// FUN_011d5a60 @ 011d5a60 size=1012 calls_out=10 calls_in=2
// strings: 

int FUN_011d5a60(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  int local_f8;
  int local_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int local_e0;
  int local_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 *local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  int local_2c;
  
  iVar3 = 0;
  if (*param_2 == '\x03') {
    iVar3 = *param_1;
    FUN_00ff71dc(&local_f8,iVar3 + 8,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    local_4c = param_2;
    if (local_f8 == 0x12) {
      if ((char)local_f4 != '\0') {
        return 0;
      }
      piVar10 = (int *)param_1[1];
      do {
        iVar4 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_011d5e34;
      iVar4 = param_1[2];
      if (param_4 == 0) {
        local_c8 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar5 = *(int **)(param_4 + 0xc);
        do {
          iVar7 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_011d5e34;
        uVar8 = *(undefined4 *)(param_4 + 0x10);
        uVar13 = *(undefined4 *)(param_4 + 0xc);
        uVar14 = param_1[2];
        uVar11 = (*(int **)(param_4 + 4))[1];
        uVar9 = 0;
        if (uVar11 <= uVar14) {
          iVar7 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar10 + 2,uVar11);
          uVar9 = uVar11;
          if (iVar7 != 0) {
            uVar9 = 0;
          }
        }
        local_b0 = FUN_011e1508((int)(piVar10 + 2) + uVar9,uVar14 - uVar9);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar13;
        local_b4 = uVar8;
      }
      uVar15 = FUN_01238114(param_3);
      iVar7 = *(int *)(iVar3 + 0x1c);
      if (*(int *)(iVar3 + 8) == 2) {
        iVar12 = *(int *)(iVar3 + 0x24);
        iVar7 = *(int *)(iVar3 + 0x20);
      }
      else {
        iVar12 = *(int *)(iVar3 + 0x20);
      }
      if (iVar12 < 0) {
        uVar8 = 0;
LAB_011d5d58:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar8,iVar12);
      }
      if (iVar12 == 0) {
        iVar6 = 1;
        iVar3 = 0;
      }
      else {
        iVar6 = thunk_FUN_016d4a50(iVar12);
        if (iVar6 == 0) {
          uVar8 = 1;
          goto LAB_011d5d58;
        }
        iVar3 = iVar12;
      }
      FUN_016dd1aa(iVar6,iVar7,iVar12);
      local_50 = 6;
      local_88 = (undefined1 *)0x80000025;
      local_a8 = local_c8;
      uStack_a4 = uStack_c4;
      uStack_a0 = uStack_c0;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_84 = iVar3;
      local_80 = iVar6;
      local_7c = iVar12;
      local_30 = piVar10;
      local_2c = iVar4;
      local_38 = uVar15;
      uStack_90 = local_b0;
      iVar3 = thunk_FUN_016d4a50(0x80);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
    }
    else {
      local_e0 = local_f8;
      local_dc = local_f4;
      iStack_d8 = iStack_f0;
      uStack_d4 = uStack_ec;
      local_d0 = uStack_e8;
      piVar10 = (int *)param_1[1];
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_011d5e34:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11d5e34);
        (*pcVar1)();
      }
      iVar3 = param_1[2];
      if (param_4 == 0) {
        local_c8 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar5 = *(int **)(param_4 + 0xc);
        do {
          iVar4 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_011d5e34;
        uVar11 = param_1[2];
        uVar9 = 0;
        uVar8 = *(undefined4 *)(param_4 + 0xc);
        uVar13 = *(undefined4 *)(param_4 + 0x10);
        uVar14 = (*(int **)(param_4 + 4))[1];
        if (uVar14 <= uVar11) {
          iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar10 + 2,uVar14);
          uVar9 = uVar14;
          if (iVar4 != 0) {
            uVar9 = 0;
          }
        }
        local_b0 = FUN_011e1508((int)(piVar10 + 2) + uVar9,uVar11 - uVar9);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar8;
        local_b4 = uVar13;
      }
      local_38 = FUN_01238114(param_3);
      if (local_e0 == 0x12) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0038bdc0,0x28,&DAT_0188a1d0);
      }
      local_84 = local_e0;
      local_80 = local_dc;
      local_7c = iStack_d8;
      uStack_78 = uStack_d4;
      local_50 = 6;
      local_88 = &DAT_8000000d;
      local_74 = local_d0;
      local_a8 = local_c8;
      uStack_a4 = uStack_c4;
      uStack_a0 = uStack_c0;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_30 = piVar10;
      local_2c = iVar3;
      uStack_90 = local_b0;
      iVar3 = thunk_FUN_016d4a50(0x80);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
    }
    FUN_016dd1aa(iVar3,&local_a8,0x80);
  }
  return iVar3;
}

