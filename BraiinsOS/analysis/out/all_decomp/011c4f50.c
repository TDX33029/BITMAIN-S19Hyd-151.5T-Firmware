// FUN_011c4f50 @ 011c4f50 size=816 calls_out=9 calls_in=0
// strings: 

int FUN_011c4f50(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_d0;
  int local_cc;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
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
  
  uVar20 = CONCAT44(local_ac,local_b0);
  iVar4 = 0;
  if ((*param_2 == '\x05') && (*(int *)(param_1 + 8) != 0)) {
    local_d0 = *(int *)(param_1 + 4);
    iVar4 = local_d0 + *(int *)(param_1 + 8) * 0xc;
    iVar5 = *(int *)(param_2 + 4);
    iVar9 = *(int *)(param_2 + 8);
    while (iVar5 != 0) {
      uVar10 = *(undefined4 *)(local_d0 + 4);
      uVar14 = *(uint *)(local_d0 + 8);
      iVar16 = iVar5;
      local_cc = iVar9;
      while( true ) {
        iVar18 = iVar16 + 0x10c;
        uVar2 = *(ushort *)(iVar16 + 0x192);
        uVar17 = 0xffffffff;
        iVar13 = (uint)uVar2 * 0xc;
        do {
          uVar15 = (uint)uVar2;
          if (iVar13 == 0) goto joined_r0x011c507c;
          uVar12 = *(uint *)(iVar18 + 8);
          uVar15 = uVar12;
          if (uVar14 < uVar12) {
            uVar15 = uVar14;
          }
          iVar6 = FUN_016dd50a(uVar10,*(undefined4 *)(iVar18 + 4),uVar15);
          if (iVar6 == 0) {
            iVar6 = uVar14 - uVar12;
          }
          iVar13 = iVar13 + -0xc;
          uVar17 = uVar17 + 1;
          iVar18 = iVar18 + 0xc;
        } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
        uVar15 = uVar17;
        if (0 < iVar6 == iVar6 < 0) break;
joined_r0x011c507c:
        if (local_cc == 0) goto LAB_011c5094;
        local_cc = local_cc + -1;
        iVar16 = *(int *)(iVar16 + uVar15 * 4 + 0x198);
      }
      local_d0 = local_d0 + 0xc;
      if (local_d0 == iVar4) {
        return 0;
      }
    }
LAB_011c5094:
    piVar11 = *(int **)(param_1 + 0xc);
    do {
      iVar4 = *piVar11;
      bVar3 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar3);
    *piVar11 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_011c5280:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11c5280);
      (*pcVar1)();
    }
    uVar10 = *(undefined4 *)(param_1 + 0x10);
    if (param_4 == 0) {
      uVar8 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar7 = *(int **)(param_4 + 0xc);
      do {
        iVar4 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_011c5280;
      local_b8 = *(undefined4 *)(param_4 + 0xc);
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      uVar17 = *(uint *)(param_1 + 0x10);
      uVar14 = 0;
      uVar15 = (*(int **)(param_4 + 4))[1];
      if (uVar15 <= uVar17) {
        iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar11 + 2,uVar15);
        uVar14 = uVar15;
        if (iVar4 != 0) {
          uVar14 = 0;
        }
      }
      uVar20 = FUN_011e1508((int)(piVar11 + 2) + uVar14,uVar17 - uVar14);
      local_bc = 3;
      uVar8 = 2;
    }
    uVar21 = FUN_01238114(param_3);
    local_7c = *(int *)(local_d0 + 8);
    uVar19 = *(undefined4 *)(local_d0 + 4);
    if (local_7c == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(local_7c);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_7c);
      }
    }
    FUN_016dd1aa(iVar4,uVar19,local_7c);
    local_50 = 6;
    local_80 = 3;
    local_88 = 0x80000027;
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_a8[0] = uVar8;
    local_78 = iVar4;
    local_74 = local_7c;
    local_4c = param_2;
    local_30 = piVar11;
    local_2c = uVar10;
    uStack_90 = uVar20;
    local_38 = uVar21;
    iVar4 = thunk_FUN_016d4a50(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar4,local_a8,0x80);
  }
  return iVar4;
}

