// FUN_011d6030 @ 011d6030 size=900 calls_out=11 calls_in=2
// strings: 

int FUN_011d6030(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint local_d4;
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
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  int local_2c;
  
  iVar3 = 0;
  if (*param_2 == '\x03') {
    iVar12 = *param_1;
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    FUN_01265b90(&local_d4,*(undefined4 *)(iVar12 + 8),*(undefined4 *)(iVar12 + 0xc),
                 *(undefined4 *)(param_2 + 8),uVar6);
    if (local_d4 != 0x80000001) {
      piVar9 = (int *)param_1[1];
      do {
        iVar3 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_011d62a8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11d62a8);
        (*pcVar1)();
      }
      iVar3 = param_1[2];
      local_a8 = 0;
      if (param_4 != 0) {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar4 = *(int **)(param_4 + 0xc);
        do {
          iVar12 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar12 + 1;
        if (iVar12 < 0) goto LAB_011d62a8;
        uVar10 = *(undefined4 *)(param_4 + 0x10);
        uVar13 = *(undefined4 *)(param_4 + 0xc);
        uVar11 = param_1[2];
        uVar14 = (*(int **)(param_4 + 4))[1];
        uVar8 = 0;
        if (uVar14 <= uVar11) {
          iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar14,0,uVar6,uVar10,
                                     iVar3);
          uVar8 = uVar14;
          if (iVar3 != 0) {
            uVar8 = 0;
          }
        }
        local_90 = FUN_011e1508((int)(piVar9 + 2) + uVar8,uVar11 - uVar8);
        local_9c = 3;
        local_a8 = 2;
        local_98 = uVar13;
        local_94 = uVar10;
      }
      FUN_01238114(param_3);
      if ((local_d4 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_d0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0038bdc0,0x28,&DAT_0188a1d0);
    }
    iVar3 = 0;
    if ((char)local_d0 == '\0') {
      piVar9 = (int *)param_1[1];
      do {
        iVar3 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_011d62a8;
      iVar3 = param_1[2];
      if (param_4 == 0) {
        local_c8 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar4 = *(int **)(param_4 + 0xc);
        do {
          iVar7 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_011d62a8;
        uVar8 = 0;
        uVar14 = param_1[2];
        uVar10 = *(undefined4 *)(param_4 + 0xc);
        uVar13 = *(undefined4 *)(param_4 + 0x10);
        uVar11 = (*(int **)(param_4 + 4))[1];
        if (uVar11 <= uVar14) {
          iVar7 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar11,0,uVar6,iVar3);
          uVar8 = uVar11;
          if (iVar7 != 0) {
            uVar8 = 0;
          }
        }
        local_b0 = FUN_011e1508((int)(piVar9 + 2) + uVar8,uVar14 - uVar8);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar10;
        local_b4 = uVar13;
      }
      uVar15 = FUN_01238114(param_3);
      local_7c = *(int *)(iVar12 + 0x14);
      if (local_7c < 0) {
        uVar6 = 0;
LAB_011d619c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar6,local_7c);
      }
      iVar12 = *(int *)(iVar12 + 0x10);
      if (local_7c == 0) {
        iVar5 = 1;
        iVar7 = 0;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(local_7c);
        if (iVar5 == 0) {
          uVar6 = 1;
          goto LAB_011d619c;
        }
        iVar7 = local_7c;
      }
      FUN_016dd1aa(iVar5,iVar12 + 8,local_7c);
      local_50 = 6;
      local_88 = 0x80000025;
      local_a8 = local_c8;
      uStack_a4 = uStack_c4;
      uStack_a0 = uStack_c0;
      local_9c = local_bc;
      local_98 = local_b8;
      local_94 = local_b4;
      local_84 = iVar7;
      local_80 = iVar5;
      local_4c = param_2;
      local_30 = piVar9;
      local_2c = iVar3;
      local_38 = uVar15;
      local_90 = local_b0;
      iVar3 = thunk_FUN_016d4a50(0x80);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar3,&local_a8,0x80);
    }
  }
  return iVar3;
}

