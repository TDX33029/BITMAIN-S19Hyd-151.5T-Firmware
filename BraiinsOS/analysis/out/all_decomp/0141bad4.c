// FUN_0141bad4 @ 0141bad4 size=1228 calls_out=8 calls_in=0
// strings: 

void FUN_0141bad4(int param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  int *local_3f8;
  undefined4 local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  uint local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  int *local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  int *local_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  uint local_3b0;
  int *local_3ac;
  undefined4 *local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  
  piVar17 = *(int **)(param_1 + 0x74);
  if (piVar17 != (int *)0x0) {
    do {
      iVar6 = *piVar17;
      bVar1 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar1);
    *piVar17 = iVar6 + 1;
    piVar5 = local_3ac;
    puVar15 = local_3a8;
    if (iVar6 < 0) goto LAB_0141bfa8;
  }
  if (*(char *)(param_2 + 0xf) == '\0') {
    if (*(char *)((int)param_2 + 0x3d) == '\0') {
      local_400 = param_2[9];
      local_408 = param_2[7];
      local_3f4 = param_2[0xc];
      uStack_3f0 = param_2[0xd];
      uStack_3ec = param_2[0xe];
      local_404 = param_2[8];
      local_3fc = param_2[10];
      piVar16 = (int *)param_2[0xb];
      local_3e8 = local_3e8 & 0xffffff00;
      local_3f8 = piVar16;
      uVar21 = FUN_01433704(&local_408,param_3);
      piVar9 = (int *)(uVar21 >> 0x20);
      if ((uVar21 & 1) == 0) {
        FUN_0141cd28(&local_408);
      }
      else {
        piVar5 = local_3ac;
        puVar15 = local_3a8;
        if (*(char *)(param_1 + 0x48) != '\x02') {
          piVar16 = *(int **)(param_1 + 0x40);
          puVar7 = (uint *)(piVar16 + 8);
          uVar12 = piVar16[8];
          DataMemoryBarrier(0xb);
          while( true ) {
            if (uVar12 == (piVar16[6] ^ 0x7fffffffU)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00408941,0x35,&DAT_018a4cd8);
            }
            uVar4 = *puVar7;
            if (*puVar7 == uVar12) break;
LAB_0141bc0c:
            uVar12 = uVar4;
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
          }
          DataMemoryBarrier(0xb);
LAB_0141bc48:
          bVar1 = (bool)hasExclusiveAccess(puVar7);
          if (!bVar1) goto code_r0x0141bc54;
          *puVar7 = uVar12 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar16;
            bVar1 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar1);
          *piVar16 = iVar6 + 1;
          if (iVar6 < 0) goto LAB_0141bfa8;
          puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
          if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x1c);
          }
          uVar19 = 0;
          uVar18 = 0;
          *(undefined1 *)(puVar8 + 6) = 0;
          puVar8[4] = 0;
          *(undefined1 *)(puVar8 + 3) = 0;
          *puVar8 = 1;
          puVar8[1] = 1;
          puVar8[2] = 0;
          piVar5 = local_3ac;
          puVar15 = local_3a8;
          goto joined_r0x0141bcc8;
        }
        uVar19 = 2;
        uVar18 = 2;
        puVar8 = (undefined4 *)&SUB_00000002;
joined_r0x0141bcc8:
        local_3a8 = puVar8;
        local_3ac = piVar16;
        if (piVar17 != (int *)0x0) {
          do {
            iVar6 = *piVar17;
            bVar1 = (bool)hasExclusiveAccess(piVar17);
          } while (!bVar1);
          *piVar17 = iVar6 + 1;
          uVar18 = uVar19;
          if (iVar6 < 0) goto LAB_0141bfa8;
        }
        local_3dc = 0;
        local_3e0 = 4;
        local_3d8 = 1;
        iVar10 = *(int *)(param_1 + 0x50);
        iVar13 = *(int *)(param_1 + 0x54);
        uVar12 = (uint)local_3a4 >> 8;
        local_3a4 = CONCAT31((int3)uVar12,uVar18);
        local_3d4 = piVar17;
        local_3d0 = local_408;
        local_3cc = local_404;
        local_3c8 = local_400;
        uStack_3c4 = local_3fc;
        local_3c0 = local_3f8;
        uStack_3bc = local_3f4;
        local_3b8 = uStack_3f0;
        local_3b4 = uStack_3ec;
        local_3b0 = local_3e8;
        iVar6 = thunk_FUN_016d4a50(0x3b8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x3b8);
        }
        iVar14 = *(int *)(iVar13 + 8);
        FUN_016dd1aa(iVar6,&local_3e0,0x3b8);
        (**(code **)(iVar13 + 0xc))(iVar10 + (iVar14 - 1U & 0xfffffff8) + 8,iVar6,&DAT_018a3a08);
      }
      if ((int)uVar21 == 0) {
        bVar1 = false;
        bVar3 = false;
        uVar20 = 0;
        if (piVar9 == (int *)0x0) goto LAB_0141bdf4;
        iVar6 = *piVar9;
        if (iVar6 != 0) {
          puVar15 = (undefined4 *)piVar9[1];
          pcVar11 = (code *)*puVar15;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(iVar6);
          }
          if (puVar15[1] != 0) {
            thunk_FUN_016d3fb4(iVar6);
          }
        }
        thunk_FUN_016d3fb4(piVar9);
      }
      bVar1 = false;
      bVar3 = false;
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      bVar1 = true;
      bVar3 = true;
    }
  }
  else {
    uVar20 = param_2[7];
    local_418 = param_2[8];
    uStack_414 = param_2[9];
    uStack_410 = param_2[10];
    bVar3 = true;
    bVar1 = false;
  }
LAB_0141bdf4:
  piVar16 = *(int **)(param_1 + 0x50);
  iVar6 = *(int *)(param_1 + 0x54);
  do {
    iVar10 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar10 + 1;
  piVar5 = local_3ac;
  puVar15 = local_3a8;
  if (-1 < iVar10) {
    local_3b8 = param_2[4];
    uStack_3bc = param_2[3];
    local_3c8 = local_418;
    uStack_3c4 = uStack_414;
    local_3c0 = (int *)uStack_410;
    local_3d0 = 1;
    local_3d8 = 1;
    local_3e0 = 5;
    local_3a4 = *param_2;
    local_3a0 = param_2[1];
    local_39c = param_2[2];
    local_3b4 = param_2[5];
    local_3b0 = param_2[6];
    local_3dc = 0;
    local_3d4 = piVar17;
    local_3cc = uVar20;
    local_3ac = piVar16;
    local_3a8 = (undefined4 *)iVar6;
    iVar10 = thunk_FUN_016d4a50(0x3b8);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x3b8);
    }
    iVar13 = *(int *)(iVar6 + 8);
    FUN_016dd1aa(iVar10,&local_3e0,0x3b8);
    (**(code **)(iVar6 + 0xc))((int)piVar16 + (iVar13 - 1U & 0xfffffff8) + 8,iVar10,&DAT_018a3a08);
    if (bVar1) {
      FUN_0141b310(param_2 + 7);
    }
    if (bVar3) {
      if (param_2[0xb] == 0) {
        uVar20 = param_2[0xc];
        puVar15 = (undefined4 *)param_2[0xd];
        pcVar11 = (code *)*puVar15;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar20);
        }
        if (puVar15[1] != 0) {
          thunk_FUN_016d3fb4(uVar20);
          return;
        }
      }
      else {
        (**(code **)(param_2[0xb] + 0x10))(param_2 + 0xe,param_2[0xc],param_2[0xd]);
      }
    }
    return;
  }
LAB_0141bfa8:
  local_3a8 = puVar15;
  local_3ac = piVar5;
                    /* WARNING: Does not return */
  pcVar11 = (code *)software_udf(0xfdee,0x141bfa8);
  (*pcVar11)();
code_r0x0141bc54:
  uVar4 = *puVar7;
  if (*puVar7 != uVar12) goto LAB_0141bc0c;
  goto LAB_0141bc48;
}

