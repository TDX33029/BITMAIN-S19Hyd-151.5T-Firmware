// FUN_01681720 @ 01681720 size=876 calls_out=10 calls_in=2
// strings: 

void FUN_01681720(int *param_1,int *param_2,undefined1 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int unaff_r9;
  int iVar15;
  int *piVar16;
  int iVar17;
  undefined1 auStack_100 [72];
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int *local_ac;
  int local_a8;
  int local_a4;
  undefined1 auStack_70 [76];
  
  if (*(char *)((int)param_1 + 0x5d) == '\0') {
    iVar1 = *param_1;
    piVar11 = (int *)*param_4;
    piVar16 = (int *)param_4[1];
    if (iVar1 != 0) {
      unaff_r9 = param_1[1];
      *piVar11 = unaff_r9;
    }
    if (iVar1 == 0) {
      unaff_r9 = *piVar11;
    }
    FUN_0168e8d8(&local_b8,param_2[1],param_2[2]);
    iVar1 = piVar16[2];
    local_a4 = CONCAT31(local_a4._1_3_,param_3);
    local_ac = param_1;
    local_a8 = unaff_r9;
    if (iVar1 == *piVar16) {
      FUN_0166e570(piVar16);
    }
    piVar11 = (int *)(piVar16[1] + iVar1 * 0x18);
    *piVar11 = local_b8;
    piVar11[1] = iStack_b4;
    piVar11[2] = iStack_b0;
    piVar11[3] = (int)local_ac;
    piVar11[4] = local_a8;
    piVar11[5] = local_a4;
    piVar16[2] = iVar1 + 1;
  }
  if (param_1[8] != 0) {
    piVar16 = (int *)param_1[7];
    piVar11 = piVar16 + param_1[8] * 0x30;
    do {
      if (*piVar16 == 2) {
        FUN_01676758(auStack_100,piVar16 + 0x1c);
        iVar1 = param_2[2];
        if (iVar1 == *param_2) {
          FUN_0166e3e8(param_2);
        }
        FUN_016dd1aa(param_2[1] + iVar1 * 0x48,auStack_100,0x48);
        param_2[2] = iVar1 + 1;
        FUN_01681720(piVar16 + 2,param_2,0,param_4);
        if (param_2[2] != 0) {
          iVar1 = param_2[2] + -1;
          param_2[2] = iVar1;
          FUN_016dd1aa(&local_b8,param_2[1] + iVar1 * 0x48,0x48);
          if (local_b8 != -0x80000000) {
            FUN_00919614(&local_b8);
          }
        }
      }
      else if (*piVar16 == 3) {
        piVar13 = (int *)piVar16[5];
        iVar1 = piVar16[6];
        puVar2 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        *puVar2 = piVar13;
        puVar2[1] = piVar13 + iVar1 * 0x1c;
        piVar14 = piVar13;
        while (piVar4 = piVar14, piVar4 != piVar13 + iVar1 * 0x1c) {
          piVar14 = piVar4 + 0x1c;
          iVar3 = *piVar4;
          *puVar2 = piVar14;
          if (iVar3 == 2) {
            FUN_01676758(auStack_70,piVar16 + 0x1c);
            iVar3 = param_2[2];
            if (iVar3 == *param_2) {
              FUN_0166e3e8(param_2);
            }
            FUN_016dd1aa(param_2[1] + iVar3 * 0x48,auStack_70,0x48);
            param_2[2] = iVar3 + 1;
            FUN_01681720(piVar4 + 2,param_2,1,param_4);
            if (param_2[2] != 0) {
              iVar3 = param_2[2] + -1;
              param_2[2] = iVar3;
              piVar4 = (int *)(param_2[1] + iVar3 * 0x48);
              if (*piVar4 != -0x80000000) {
                iVar8 = piVar4[0xf];
                iVar3 = piVar4[0x10];
                iVar9 = piVar4[0xc];
                iVar5 = piVar4[0xd];
                iVar15 = piVar4[3];
                iVar10 = piVar4[4];
                iVar17 = piVar4[6];
                iVar12 = piVar4[9];
                iVar6 = piVar4[7];
                iVar7 = piVar4[10];
                if (*piVar4 != 0) {
                  thunk_FUN_016d3fb4(piVar4[1]);
                }
                if ((iVar15 != -0x7ffffffd) && (0 < iVar15)) {
                  thunk_FUN_016d3fb4(iVar10);
                }
                if ((iVar17 != -0x7ffffffd) && (0 < iVar17)) {
                  thunk_FUN_016d3fb4(iVar6);
                }
                if ((iVar12 != -0x7ffffffd) && (0 < iVar12)) {
                  thunk_FUN_016d3fb4(iVar7);
                }
                if ((iVar9 != -0x7ffffffd) && (0 < iVar9)) {
                  thunk_FUN_016d3fb4(iVar5);
                }
                if ((iVar8 != -0x7ffffffd) && (0 < iVar8)) {
                  thunk_FUN_016d3fb4(iVar3);
                }
              }
            }
          }
        }
        thunk_FUN_016d3fb4(puVar2);
      }
      piVar16 = piVar16 + 0x30;
    } while (piVar16 != piVar11);
  }
  return;
}

