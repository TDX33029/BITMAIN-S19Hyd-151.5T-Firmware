// FUN_011cc004 @ 011cc004 size=740 calls_out=9 calls_in=2
// strings: 

int FUN_011cc004(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_d0;
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
  
  uVar16 = CONCAT44(local_ac,local_b0);
  iVar4 = 0;
  if (*param_2 == '\x05') {
    if (*(int *)(param_2 + 0xc) != 0) {
      unaff_r4 = *(int *)(param_2 + 4);
    }
    if (*(int *)(param_2 + 0xc) != 0 && unaff_r4 != 0) {
      uVar14 = *(undefined4 *)(param_1 + 4);
      uVar8 = *(uint *)(param_1 + 8);
      local_d0 = *(int *)(param_2 + 8);
      do {
        iVar12 = unaff_r4 + 0x10c;
        uVar2 = *(ushort *)(unaff_r4 + 0x192);
        uVar10 = 0xffffffff;
        iVar4 = (uint)uVar2 * 0xc;
        do {
          if (iVar4 == 0) {
            uVar10 = (uint)uVar2;
            goto LAB_011cc1b4;
          }
          uVar11 = *(uint *)(iVar12 + 8);
          uVar13 = uVar11;
          if (uVar8 < uVar11) {
            uVar13 = uVar8;
          }
          iVar7 = FUN_016dd50a(uVar14,*(undefined4 *)(iVar12 + 4),uVar13);
          if (iVar7 == 0) {
            iVar7 = uVar8 - uVar11;
          }
          iVar4 = iVar4 + -0xc;
          uVar10 = uVar10 + 1;
          iVar12 = iVar12 + 0xc;
        } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
        if (0 < iVar7 == iVar7 < 0) {
          return 0;
        }
LAB_011cc1b4:
        if (local_d0 == 0) break;
        local_d0 = local_d0 + -1;
        unaff_r4 = *(int *)(unaff_r4 + uVar10 * 4 + 0x198);
      } while( true );
    }
    piVar9 = *(int **)(param_1 + 0xc);
    do {
      iVar4 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_011cc2e8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11cc2e8);
      (*pcVar1)();
    }
    uVar14 = *(undefined4 *)(param_1 + 0x10);
    if (param_4 == 0) {
      uVar6 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar5 = *(int **)(param_4 + 0xc);
      do {
        iVar4 = *piVar5;
        bVar3 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar3);
      *piVar5 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_011cc2e8;
      local_b8 = *(undefined4 *)(param_4 + 0xc);
      uVar8 = 0;
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      uVar10 = *(uint *)(param_1 + 0x10);
      uVar13 = (*(int **)(param_4 + 4))[1];
      if (uVar13 <= uVar10) {
        iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar13);
        uVar8 = uVar13;
        if (iVar4 != 0) {
          uVar8 = 0;
        }
      }
      uVar16 = FUN_011e1508((int)(piVar9 + 2) + uVar8,uVar10 - uVar8);
      local_bc = 3;
      uVar6 = 2;
    }
    uVar17 = FUN_01238114(param_3);
    uVar15 = *(undefined4 *)(param_1 + 4);
    local_7c = *(int *)(param_1 + 8);
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
    FUN_016dd1aa(iVar4,uVar15,local_7c);
    local_50 = 6;
    local_80 = 3;
    local_88 = 0x80000027;
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_a8[0] = uVar6;
    local_78 = iVar4;
    local_74 = local_7c;
    local_4c = param_2;
    local_30 = piVar9;
    local_2c = uVar14;
    uStack_90 = uVar16;
    local_38 = uVar17;
    iVar4 = thunk_FUN_016d4a50(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar4,local_a8,0x80);
  }
  return iVar4;
}

