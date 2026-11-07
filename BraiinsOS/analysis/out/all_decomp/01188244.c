// FUN_01188244 @ 01188244 size=796 calls_out=9 calls_in=0
// strings: 

int FUN_01188244(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  undefined8 uVar14;
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
  undefined4 uStack_a4;
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
  
  if (*param_2 == '\x05') {
    local_fc[2] = *(uint *)(param_2 + 4);
    local_f0 = *(undefined4 *)(param_2 + 8);
    local_dc = *(undefined4 *)(param_2 + 0xc);
    piVar12 = *(int **)(param_1 + 4);
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
                    /* WARNING: Could not recover jumptable at 0x01188330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (*(code *)(&DAT_01188334 + *(int *)(&DAT_01188334 + *piVar12 * 4)))();
      return iVar3;
    }
    iVar3 = FUN_00f45584(local_fc);
    if (iVar3 != 0) {
      local_d4 = *(undefined4 *)(iVar3 + 4);
      uStack_d0 = *(undefined4 *)(iVar3 + 8);
      local_d8 = 0x80000000;
      piVar12 = *(int **)(param_1 + 0xc);
      do {
        iVar4 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar4 + 1;
      if (iVar4 < 0) {
LAB_011886d8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11886d8);
        (*pcVar1)();
      }
      uVar5 = *(undefined4 *)(param_1 + 0x10);
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
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_011886d8;
        uVar8 = 0;
        uVar13 = *(uint *)(param_1 + 0x10);
        uVar10 = *(undefined4 *)(param_4 + 0xc);
        uVar11 = *(undefined4 *)(param_4 + 0x10);
        uVar9 = (*(int **)(param_4 + 4))[1];
        iVar4 = *(int *)(param_1 + 0xc) + 8;
        if (uVar9 <= uVar13) {
          iVar7 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,iVar4,uVar9);
          uVar8 = uVar9;
          if (iVar7 != 0) {
            uVar8 = 0;
          }
        }
        local_b0 = FUN_011e1508(iVar4 + uVar8,uVar13 - uVar8);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar10;
        local_b4 = uVar11;
      }
      uVar14 = FUN_01238114(param_3);
      piVar6 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      uVar10 = *(undefined4 *)(iVar3 + 4);
      iVar4 = *(int *)(iVar3 + 8);
      iVar3 = 1;
      if (iVar4 != 0) {
        iVar3 = thunk_FUN_016d4a50(iVar4);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar4);
        }
      }
      FUN_016dd1aa(iVar3,uVar10,iVar4);
      local_50 = 6;
      local_88 = &DAT_8000000b;
      *piVar6 = iVar4;
      piVar6[1] = iVar3;
      piVar6[2] = iVar4;
      local_7c = 1;
      local_84 = 1;
      local_a8 = local_c8;
      uStack_a4 = uStack_c4;
      uStack_a0 = uStack_c0;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_80 = piVar6;
      local_4c = param_2;
      local_30 = piVar12;
      local_2c = uVar5;
      local_38 = uVar14;
      uStack_90 = local_b0;
      iVar3 = thunk_FUN_016d4a50(0x80);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar3,&local_a8,0x80);
      return iVar3;
    }
  }
  return 0;
}

