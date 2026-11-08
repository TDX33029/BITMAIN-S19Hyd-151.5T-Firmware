// FUN_0118bb3c @ 0118bb3c size=1412 calls_out=10 calls_in=0
// strings: 

int FUN_0118bb3c(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  int local_f4;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined4 local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  iVar3 = 0;
  if (*param_2 == '\x05') {
    local_e8 = *(int *)(param_2 + 4);
    local_e4 = *(undefined4 *)(param_2 + 8);
    local_d0 = *(undefined4 *)(param_2 + 0xc);
    iVar3 = *(int *)(param_1 + 4);
    if (local_e8 == 0) {
      local_d0 = 0;
    }
    iVar7 = *(int *)(param_1 + 8);
    uVar13 = *(undefined4 *)(param_1 + 0x10);
    iVar15 = *(int *)(param_1 + 0x14);
    local_f0 = (uint)(local_e8 != 0);
    local_dc = 0;
    local_ec = 0;
    local_e0 = local_f0;
    local_d8._0_4_ = local_e8;
    local_d8._4_4_ = local_e4;
    local_4c = param_2;
    if (iVar7 != 0) {
      bVar2 = false;
LAB_0118bbdc:
      uVar19 = FUN_00f45584(&local_f0);
      local_f4 = (int)uVar19;
      if (local_f4 != 0) {
        uVar9 = *(undefined4 *)(local_f4 + 4);
        iVar11 = *(int *)(local_f4 + 8);
        iVar5 = iVar7 << 5;
        iVar18 = iVar3;
        do {
          if (*(int *)(iVar18 + 8) == iVar11) {
            uVar16 = *(undefined4 *)(iVar18 + 4);
            iVar4 = thunk_FUN_016dd50a(uVar16,uVar9,iVar11);
            if (iVar4 == 0) goto code_r0x0118bc34;
          }
          iVar18 = iVar18 + 0x20;
          iVar5 = iVar5 + -0x20;
          if (iVar5 == 0) goto LAB_0118bcec;
        } while( true );
      }
      if (bVar2) {
        return 0;
      }
      goto LAB_0118bec0;
    }
    local_f4 = FUN_00f45584(&local_f0);
    if (local_f4 == 0) {
LAB_0118bec0:
      piVar14 = *(int **)(param_1 + 0x20);
      do {
        iVar3 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_0118c0cc;
      uVar13 = *(undefined4 *)(param_1 + 0x24);
      if (param_4 == 0) {
        local_f0 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar6 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0118c0cc;
        uVar17 = *(uint *)(param_4 + 0xc);
        uVar12 = *(uint *)(param_1 + 0x24);
        uVar10 = (*(int **)(param_4 + 4))[1];
        uVar8 = 0;
        uVar9 = *(undefined4 *)(param_4 + 0x10);
        if (uVar10 <= uVar12) {
          iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar14 + 2,uVar10);
          uVar8 = uVar10;
          if (iVar3 != 0) {
            uVar8 = 0;
          }
        }
        local_d8 = FUN_011e1508((int)(piVar14 + 2) + uVar8,uVar12 - uVar8);
        local_e4 = 3;
        local_f0 = 2;
        local_e0 = uVar17;
        local_dc = uVar9;
      }
      uVar19 = FUN_01238114(param_3);
      local_7c = *(int *)(param_1 + 0x14);
      uVar9 = *(undefined4 *)(param_1 + 0x10);
      if (local_7c == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(local_7c);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_7c);
        }
      }
      FUN_016dd1aa(iVar3,uVar9,local_7c);
      local_50 = 6;
      local_80 = (int *)CONCAT31(local_80._1_3_,3);
      local_88 = (undefined1 *)0x80000027;
      local_a8 = local_f0;
      local_a4 = local_ec;
      local_a0 = local_e8;
      local_9c = local_e4;
      local_98 = local_e0;
      uStack_94 = local_dc;
      local_78 = iVar3;
      local_74 = local_7c;
      local_30 = piVar14;
      local_2c = uVar13;
      local_38 = uVar19;
      uStack_90 = local_d8;
      iVar3 = thunk_FUN_016d4a50(0x80);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
    }
    else {
LAB_0118bcec:
      piVar14 = *(int **)(param_1 + 0x18);
      do {
        iVar3 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_0118c0cc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x118c0cc);
        (*pcVar1)();
      }
      uVar13 = *(undefined4 *)(param_1 + 0x1c);
      if (param_4 == 0) {
        local_c8 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar6 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0118c0cc;
        uVar8 = 0;
        uVar9 = *(undefined4 *)(param_4 + 0x10);
        uVar10 = *(uint *)(param_1 + 0x1c);
        uVar12 = (*(int **)(param_4 + 4))[1];
        uVar17 = *(uint *)(param_4 + 0xc);
        if (uVar12 <= uVar10) {
          iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar14 + 2,uVar12);
          uVar8 = uVar12;
          if (iVar3 != 0) {
            uVar8 = 0;
          }
        }
        local_b0 = FUN_011e1508((int)(piVar14 + 2) + uVar8,uVar10 - uVar8);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar17;
        local_b4 = uVar9;
      }
      uVar19 = FUN_01238114(param_3);
      piVar6 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      iVar3 = 1;
      iVar7 = *(int *)(local_f4 + 8);
      uVar9 = *(undefined4 *)(local_f4 + 4);
      if (iVar7 != 0) {
        iVar3 = thunk_FUN_016d4a50(iVar7);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar7);
        }
      }
      FUN_016dd1aa(iVar3,uVar9,iVar7);
      local_50 = 6;
      local_88 = &DAT_8000000b;
      *piVar6 = iVar7;
      piVar6[1] = iVar3;
      piVar6[2] = iVar7;
      local_7c = 1;
      local_84 = 1;
      local_a8 = local_c8;
      local_a4 = uStack_c4;
      local_a0 = iStack_c0;
      local_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_80 = piVar6;
      local_30 = piVar14;
      local_2c = uVar13;
      local_38 = uVar19;
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
code_r0x0118bc34:
  local_a8 = 0x80000000;
  local_a4 = uVar16;
  local_a0 = iVar11;
  local_9c = param_3;
  iVar5 = FUN_011d018c(iVar18 + 0xc,(int)((ulonglong)uVar19 >> 0x20),&local_a8,param_4,param_5);
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(int *)(local_f4 + 8) == iVar15) {
    iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(local_f4 + 4),uVar13,iVar15);
    bVar2 = (bool)(iVar5 == 0 | bVar2);
  }
  goto LAB_0118bbdc;
}

