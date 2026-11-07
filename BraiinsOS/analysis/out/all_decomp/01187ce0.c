// FUN_01187ce0 @ 01187ce0 size=940 calls_out=12 calls_in=0
// strings: 

int FUN_01187ce0(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  uint local_fc [3];
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined4 local_84;
  int *local_80;
  undefined4 local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  iVar3 = 0;
  if (*param_2 == '\x05') {
    local_fc[2] = *(uint *)(param_2 + 4);
    local_f0 = *(undefined4 *)(param_2 + 8);
    local_dc = *(undefined4 *)(param_2 + 0xc);
    puVar11 = *(uint **)(param_1 + 4);
    if (local_fc[2] == 0) {
      local_dc = 0;
    }
    local_fc[0] = (uint)(local_fc[2] != 0);
    local_e8 = 0;
    local_fc[1] = 0;
    local_ec = local_fc[0];
    local_e4 = local_fc[2];
    local_e0 = local_f0;
    uStack_cc = param_3;
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = FUN_00f45584(local_fc);
      if (iVar3 == 0) {
        return 0;
      }
      local_d4 = *(undefined4 *)(iVar3 + 4);
      uStack_d0 = *(undefined4 *)(iVar3 + 8);
      local_d8 = 0x80000000;
      iVar3 = 4;
      if (2 < *puVar11) {
        iVar3 = *puVar11 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01187e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (*(code *)(&DAT_01187e04 + *(int *)(&DAT_01187e04 + iVar3 * 4)))();
      return iVar3;
    }
    iVar4 = FUN_00f45584(local_fc);
    iVar3 = 0;
    if (iVar4 != 0) {
      local_d4 = *(undefined4 *)(iVar4 + 4);
      uStack_d0 = *(undefined4 *)(iVar4 + 8);
      local_d8 = 0x80000000;
      piVar10 = *(int **)(param_1 + 0xc);
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_0118815c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x118815c);
        (*pcVar1)();
      }
      uVar13 = *(undefined4 *)(param_1 + 0x10);
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
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0118815c;
        uVar7 = 0;
        uVar12 = *(undefined4 *)(param_4 + 0xc);
        uVar14 = *(undefined4 *)(param_4 + 0x10);
        uVar8 = *(uint *)(param_1 + 0x10);
        uVar9 = (*(int **)(param_4 + 4))[1];
        iVar3 = *(int *)(param_1 + 0xc) + 8;
        if (uVar9 <= uVar8) {
          iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar3,uVar9);
          uVar7 = uVar9;
          if (iVar6 != 0) {
            uVar7 = 0;
          }
        }
        local_b0 = FUN_011e1508(iVar3 + uVar7,uVar8 - uVar7);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar12;
        local_b4 = uVar14;
      }
      uVar15 = FUN_01238114(param_3);
      piVar5 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      uVar12 = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 8);
      iVar3 = 1;
      if (iVar4 != 0) {
        iVar3 = thunk_FUN_016d4a50(iVar4);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar4);
        }
      }
      FUN_016dd1aa(iVar3,uVar12,iVar4);
      local_50 = 6;
      local_88 = &DAT_8000000b;
      *piVar5 = iVar4;
      piVar5[1] = iVar3;
      piVar5[2] = iVar4;
      local_7c = 1;
      local_84 = 1;
      local_a8 = local_c8;
      local_a4 = uStack_c4;
      uStack_a0 = uStack_c0;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_80 = piVar5;
      local_4c = param_2;
      local_30 = piVar10;
      local_2c = uVar13;
      local_38 = uVar15;
      uStack_90 = local_b0;
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

