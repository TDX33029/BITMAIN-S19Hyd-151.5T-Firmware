// FUN_0152f154 @ 0152f154 size=1440 calls_out=6 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0152f154(uint *param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *extraout_r3;
  int *extraout_r3_00;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *unaff_r8;
  int iVar18;
  int *piVar19;
  bool bVar20;
  uint local_64;
  uint local_50;
  int *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar10 = 4;
  if ((int)*param_2 < 0) {
    uVar10 = *param_2 ^ 0x80000000;
  }
  if (0x2c < uVar10) {
switchD_0152f188_caseD_2:
    local_4c = (int *)0x1;
    local_50 = 1;
    local_48 = *param_2;
    local_44 = param_2[1];
    local_40 = param_2[2];
    local_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    puVar3 = (uint *)thunk_FUN_016d4a50(0x28);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x28);
    }
    *puVar3 = local_50;
    puVar3[1] = (uint)local_4c;
    puVar3[2] = local_48;
    puVar3[3] = local_44;
    puVar3[4] = local_40;
    puVar3[5] = local_3c;
    puVar3[6] = local_38;
    puVar3[7] = uStack_34;
    puVar3[8] = uStack_30;
    puVar3[9] = uStack_2c;
    *param_1 = 0x80000012;
    param_1[1] = (uint)puVar3;
    param_1[2] = (uint)&DAT_018a7988;
    return;
  }
  piVar11 = (int *)(&switchD_0152f188::switchdataD_0152f18c)[uVar10];
  switch(uVar10) {
  case 0:
  case 1:
  case 0x1d:
    *param_1 = 0x80000000;
    return;
  default:
    goto switchD_0152f188_caseD_2;
  case 3:
    puVar7 = (undefined1 *)0x80000002;
    break;
  case 4:
    uVar10 = param_2[3];
    uVar14 = param_2[4];
    uVar15 = param_2[5];
    uVar17 = param_2[6];
    uVar2 = param_2[7];
    uVar12 = param_2[1];
    uVar6 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar12;
    param_1[2] = uVar6;
    param_1[3] = uVar10;
    param_1[4] = uVar14;
    param_1[5] = uVar15;
    param_1[6] = uVar17;
    param_1[7] = uVar2;
    return;
  case 5:
    puVar7 = &DAT_80000004;
    break;
  case 6:
    *param_1 = 0x80000005;
    return;
  case 7:
    puVar7 = (undefined1 *)0x8000000a;
    break;
  case 10:
    *param_1 = 0x80000001;
    return;
  case 0xe:
    *param_1 = 0x8000001f;
    param_1[1] = 0;
    return;
  case 0xf:
    *param_1 = (uint)&DAT_8000000b;
    return;
  case 0x10:
    *param_1 = 0x8000001f;
    param_1[1] = 4;
    return;
  case 0x1a:
    *param_1 = 0x8000000f;
    return;
  case 0x1b:
    uVar12 = param_2[2];
    uVar15 = 0;
    uVar14 = param_2[3];
    uVar17 = 0;
    uVar10 = param_2[4];
    piVar9 = (int *)param_2[5];
    uVar6 = param_2[6];
    while (uVar14 != uVar15) {
      pcVar1 = (char *)(uVar12 + uVar15);
      uVar15 = uVar15 + 1;
      uVar2 = (uint)*pcVar1;
      uVar17 = uVar2 & 0x7f | uVar17 << 8;
      if (-1 < (int)uVar2) {
        iVar18 = 0;
        if (0x27 < uVar17) {
          if (uVar17 < 0x50) {
            uVar17 = uVar17 - 0x28;
            iVar18 = 1;
          }
          else {
            uVar17 = uVar17 - 0x50;
            iVar18 = 2;
          }
        }
        if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar15,uVar14,uVar14,&DAT_018af328);
        }
        piVar4 = (int *)thunk_FUN_016d4a50(0x10);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,0x10);
        }
        *piVar4 = iVar18;
        unaff_r8 = (undefined4 *)(uVar14 - uVar15);
        iVar18 = uVar12 + uVar15;
        uVar12 = 1;
        bVar20 = true;
        local_50 = 4;
        local_4c = piVar4;
        do {
          uVar14 = uVar17;
          local_48 = uVar12;
          if (!bVar20) {
            puVar5 = (undefined4 *)0x0;
            uVar14 = 0;
            do {
              if (unaff_r8 == puVar5) {
                piVar11 = piVar4;
                if (uVar12 == 9) {
                  local_64 = local_50;
                  if (((((*piVar4 == 1) && (piVar4[1] == 3)) && (piVar4[2] == 6)) &&
                      ((piVar4[3] == 1 && (piVar4[4] == 5)))) &&
                     ((piVar4[5] == 5 && ((piVar4[6] == 7 && (piVar4[7] == 3)))))) {
                    if (piVar4[8] == 2) {
                      local_64 = 0x80000000;
                    }
                    else {
                      if (piVar4[8] != 1) goto LAB_0152f5d4;
                      local_64 = 0x80000001;
                    }
                    if (local_50 != 0) {
                      thunk_FUN_016d3fb4(piVar4);
                      piVar11 = extraout_r3_00;
                    }
                  }
                }
                else {
LAB_0152f5d4:
                  local_64 = local_50;
                }
                goto LAB_0152f5dc;
              }
              pcVar1 = (char *)(iVar18 + (int)puVar5);
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              uVar14 = (int)*pcVar1 & 0x7fU | uVar14 << 8;
            } while (*pcVar1 < 0);
            if (unaff_r8 < puVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(puVar5,unaff_r8,unaff_r8,&DAT_018af318);
            }
            iVar18 = iVar18 + (int)puVar5;
            unaff_r8 = (undefined4 *)((int)unaff_r8 - (int)puVar5);
          }
          if (uVar12 == local_50) {
            FUN_0154e5f8(&local_50,uVar12,1,4,4);
            piVar4 = local_4c;
          }
          piVar4[uVar12] = uVar14;
          uVar12 = uVar12 + 1;
          bVar20 = false;
        } while( true );
      }
    }
    local_64 = 0;
    uVar12 = 0;
    piVar4 = (int *)&DAT_00000004;
LAB_0152f5dc:
    piVar13 = piVar9 + uVar6 * 3;
    piVar8 = piVar9;
    piVar16 = piVar9;
    if (uVar6 != 0) {
      piVar19 = piVar4;
      do {
        piVar16 = piVar8;
        piVar8 = (int *)piVar16[2];
        puVar5 = (undefined4 *)piVar16[1];
        if (piVar8 == (int *)&DAT_00000009) {
          piVar11 = (int *)*puVar5;
        }
        if ((!(piVar8 == (int *)&DAT_00000009 && piVar11 == (int *)&DAT_00000001)) ||
           (piVar11 = (int *)puVar5[1], piVar11 != (int *)0x3)) {
LAB_0152f62c:
          unaff_r8 = puVar5;
          iVar18 = *piVar16;
          piVar19 = piVar8;
        }
        else {
          piVar11 = (int *)puVar5[2];
          bVar20 = piVar11 != (int *)&DAT_00000006;
          if (!bVar20) {
            piVar11 = (int *)puVar5[3];
          }
          if (bVar20 || piVar11 != (int *)&DAT_00000001) goto LAB_0152f62c;
          piVar11 = (int *)puVar5[4];
          bVar20 = piVar11 != (int *)&DAT_00000005;
          if (!bVar20) {
            piVar11 = (int *)puVar5[5];
          }
          if (bVar20 || piVar11 != (int *)&DAT_00000005) goto LAB_0152f62c;
          piVar11 = (int *)puVar5[6];
          bVar20 = piVar11 != (int *)&DAT_00000007;
          if (!bVar20) {
            piVar11 = (int *)puVar5[7];
          }
          if (bVar20 || piVar11 != (int *)0x3) goto LAB_0152f62c;
          piVar11 = (int *)puVar5[8];
          if (piVar11 == (int *)&SUB_00000002) {
            iVar18 = -0x80000000;
          }
          else {
            if (piVar11 != (int *)&DAT_00000001) goto LAB_0152f62c;
            iVar18 = -0x7fffffff;
          }
          if (*piVar16 != 0) {
            thunk_FUN_016d3fb4();
            piVar11 = extraout_r3;
          }
        }
        *piVar16 = iVar18;
        piVar16[1] = (int)unaff_r8;
        piVar16[2] = (int)piVar19;
        piVar8 = piVar16 + 3;
      } while (piVar16 + 3 != piVar13);
      piVar16 = piVar16 + 3;
      piVar8 = piVar13;
    }
    piVar11 = piVar8 + 1;
    for (iVar18 = ((uint)((int)piVar13 - (int)piVar8) >> 2) * -0x55555555; iVar18 != 0;
        iVar18 = iVar18 + -1) {
      if (piVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar11);
      }
      piVar11 = piVar11 + 3;
    }
    *param_1 = (uint)&DAT_80000010;
    param_1[5] = (uint)piVar4;
    param_1[6] = uVar12;
    param_1[1] = uVar10;
    param_1[2] = (uint)piVar9;
    param_1[3] = ((uint)((int)piVar16 - (int)piVar9) >> 2) * -0x55555555;
    param_1[4] = local_64;
    return;
  case 0x1e:
    *param_1 = 0x80000007;
    return;
  case 0x1f:
    *param_1 = (uint)&DAT_80000008;
    return;
  case 0x29:
  case 0x2b:
    *param_1 = 0x8000001f;
    param_1[1] = 1;
    return;
  case 0x2a:
  case 0x2c:
    *param_1 = (uint)&DAT_8000000c;
    return;
  }
  uVar6 = param_2[2];
  uVar12 = param_2[3];
  uVar10 = param_2[5];
  param_1[4] = param_2[4];
  *param_1 = (uint)puVar7;
  param_1[2] = uVar6;
  param_1[3] = uVar12;
  param_1[5] = uVar10;
  return;
}

