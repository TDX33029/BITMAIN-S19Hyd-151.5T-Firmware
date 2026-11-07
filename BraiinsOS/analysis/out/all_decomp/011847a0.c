// FUN_011847a0 @ 011847a0 size=852 calls_out=10 calls_in=0
// strings: 

int FUN_011847a0(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  uint local_ec [3];
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
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
  
  iVar8 = 0;
  if (*param_2 == '\x05') {
    local_ec[2] = *(uint *)(param_2 + 4);
    local_e0 = *(undefined4 *)(param_2 + 8);
    local_cc = *(undefined4 *)(param_2 + 0xc);
    if (local_ec[2] == 0) {
      local_cc = 0;
    }
    iVar15 = *(int *)(param_1 + 4);
    iVar6 = *(int *)(param_1 + 8);
    local_ec[0] = (uint)(local_ec[2] != 0);
    local_d8 = 0;
    local_ec[1] = 0;
    local_dc = local_ec[0];
    local_d4 = local_ec[2];
    local_d0 = local_e0;
    if (iVar6 != 0) {
LAB_01184828:
      uVar18 = FUN_00f45584(local_ec);
      iVar4 = (int)uVar18;
      if (iVar4 == 0) {
        return 0;
      }
      uVar9 = *(undefined4 *)(iVar4 + 4);
      iVar11 = *(int *)(iVar4 + 8);
      iVar8 = iVar6 << 5;
      iVar16 = iVar15;
      do {
        if (*(int *)(iVar16 + 8) == iVar11) {
          uVar14 = *(undefined4 *)(iVar16 + 4);
          iVar3 = thunk_FUN_016dd50a(uVar14,uVar9,iVar11);
          if (iVar3 == 0) goto code_r0x0118487c;
        }
        iVar16 = iVar16 + 0x20;
        iVar8 = iVar8 + -0x20;
        if (iVar8 == 0) goto LAB_011848e4;
      } while( true );
    }
    iVar4 = FUN_00f45584(local_ec);
    if (iVar4 != 0) {
LAB_011848e4:
      piVar10 = *(int **)(param_1 + 0xc);
      do {
        iVar8 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar8 + 1;
      if (iVar8 < 0) {
LAB_01184af8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1184af8);
        (*pcVar1)();
      }
      uVar9 = *(undefined4 *)(param_1 + 0x10);
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
          iVar8 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar8 + 1;
        if (iVar8 < 0) goto LAB_01184af8;
        uVar7 = 0;
        uVar14 = *(undefined4 *)(param_4 + 0xc);
        uVar17 = *(undefined4 *)(param_4 + 0x10);
        uVar12 = *(uint *)(param_1 + 0x10);
        uVar13 = (*(int **)(param_4 + 4))[1];
        if (uVar13 <= uVar12) {
          iVar8 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar10 + 2,uVar13);
          uVar7 = uVar13;
          if (iVar8 != 0) {
            uVar7 = 0;
          }
        }
        local_b0 = FUN_011e1508((int)(piVar10 + 2) + uVar7,uVar12 - uVar7);
        local_bc = 3;
        local_c8 = 2;
        local_b8 = uVar14;
        local_b4 = uVar17;
      }
      uVar18 = FUN_01238114(param_3);
      piVar5 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      iVar6 = *(int *)(iVar4 + 8);
      uVar14 = *(undefined4 *)(iVar4 + 4);
      iVar8 = 1;
      if (iVar6 != 0) {
        iVar8 = thunk_FUN_016d4a50(iVar6);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar6);
        }
      }
      FUN_016dd1aa(iVar8,uVar14,iVar6);
      local_50 = 6;
      local_88 = &DAT_8000000b;
      *piVar5 = iVar6;
      piVar5[1] = iVar8;
      piVar5[2] = iVar6;
      local_7c = 1;
      local_84 = 1;
      local_a8 = local_c8;
      local_a4 = uStack_c4;
      local_a0 = uStack_c0;
      local_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_80 = piVar5;
      local_4c = param_2;
      local_30 = piVar10;
      local_2c = uVar9;
      local_38 = uVar18;
      uStack_90 = local_b0;
      iVar8 = thunk_FUN_016d4a50(0x80);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar8,&local_a8,0x80);
    }
  }
  return iVar8;
code_r0x0118487c:
  local_a8 = 0x80000000;
  local_a4 = uVar14;
  local_a0 = iVar11;
  local_9c = param_3;
  iVar8 = FUN_011d018c(iVar16 + 0xc,(int)((ulonglong)uVar18 >> 0x20),&local_a8,param_4,param_5);
  if (iVar8 != 0) {
    return iVar8;
  }
  goto LAB_01184828;
}

