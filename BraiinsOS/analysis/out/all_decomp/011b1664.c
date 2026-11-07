// FUN_011b1664 @ 011b1664 size=1156 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_011b1664(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  code *pcVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  undefined8 uVar22;
  uint local_80;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int *local_44;
  int *local_40;
  uint local_3c;
  int local_34;
  int local_30 [3];
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  iVar13 = *(int *)(param_1 + 8);
  uVar16 = 0;
  piVar19 = *(int **)(param_1 + 4);
  local_4c = 0;
  local_50 = 4;
  local_54 = 0;
  if (iVar13 == 0) {
LAB_011b1a80:
    local_3c = local_50 + uVar16 * 4;
    local_48 = local_50;
    local_44 = (int *)local_50;
    local_40 = (int *)local_54;
    puVar6 = (uint *)thunk_FUN_016d4a50(0x10);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *puVar6 = local_48;
    puVar6[1] = (uint)local_44;
    puVar6[2] = (uint)local_40;
    puVar6[3] = local_3c;
    return puVar6;
  }
  iVar1 = *(int *)(param_2 + 4);
  uVar11 = *(uint *)(param_2 + 8);
  iVar8 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  local_80 = 4;
  piVar20 = piVar19;
  do {
    piVar2 = piVar20 + 6;
    iVar18 = 0;
    iVar12 = iVar1;
    uVar17 = uVar11;
    iVar21 = iVar8;
    bVar7 = iVar1 != 0;
joined_r0x011b1724:
    if (iVar21 != 0) {
      do {
        if (!bVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a9ff4);
        }
        if (iVar18 == 0) {
          uVar14 = 0;
          iVar18 = iVar12;
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            iVar18 = *(int *)(iVar18 + 0x198);
          }
          iVar12 = 0;
          if (*(short *)(iVar18 + 0x192) == 0) goto LAB_011b17ac;
LAB_011b177c:
          iVar9 = iVar18;
        }
        else {
          uVar14 = uVar17;
          if (uVar17 < *(ushort *)(iVar18 + 0x192)) goto LAB_011b177c;
LAB_011b17ac:
          do {
            iVar9 = *(int *)(iVar18 + 0x108);
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018aa004);
            }
            uVar14 = (uint)*(ushort *)(iVar18 + 400);
            iVar12 = iVar12 + 1;
            iVar18 = iVar9;
          } while (*(ushort *)(iVar9 + 0x192) <= uVar14);
        }
        if (iVar12 == 0) {
          uVar17 = uVar14 + 1;
          iVar18 = iVar9;
        }
        else {
          piVar3 = (int *)(iVar9 + uVar14 * 4 + 0x19c);
          do {
            iVar18 = *piVar3;
            iVar12 = iVar12 + -1;
            piVar3 = (int *)(iVar18 + 0x198);
          } while (iVar12 != 0);
          uVar17 = 0;
        }
        iVar12 = iVar9 + uVar14 * 0xc;
        FUN_00ff71dc(&local_48,*piVar20 + 8,*(undefined4 *)(iVar12 + 0x110),
                     *(undefined4 *)(iVar12 + 0x114));
        piVar3 = local_44;
        iVar21 = iVar21 + -1;
        if (local_48 == 0x12) {
          if ((char)local_44 != '\0') goto LAB_011b18fc;
        }
        else {
          iVar12 = local_48 - 0xf;
          if (local_48 < 0xf) {
            iVar12 = 0;
          }
          if (iVar12 == 1) {
            iVar12 = *local_44;
            uVar14 = iVar12 - 1;
            if (iVar12 == 0) {
              uVar14 = 0;
            }
            iVar9 = 4;
            if (7 < uVar14) goto LAB_011b1a24;
            if ((1 << (uVar14 & 0xff) & 0xd6U) != 0) goto LAB_011b18bc;
            if (uVar14 == 0) {
              if (iVar12 == 0) {
                uVar14 = local_44[2];
LAB_011b1a18:
                iVar9 = 0x24;
                if (uVar14 == 0x22) {
                  iVar9 = 0xc;
                }
                goto LAB_011b1a24;
              }
              uVar14 = local_44[2];
              iVar12 = uVar14 - 0x22;
              if (uVar14 < 0x22) {
                iVar12 = 0;
              }
              if (iVar12 == 1) {
                iVar12 = local_44[4];
                iVar9 = 0x10;
                if (iVar12 < -0x7ffffffc) goto LAB_011b18bc;
                goto LAB_011b1a28;
              }
              if (iVar12 == 0) goto LAB_011b1a18;
            }
            else {
LAB_011b1a24:
              iVar12 = *(int *)((int)local_44 + iVar9);
LAB_011b1a28:
              if (iVar12 != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)((int)local_44 + iVar9 + 4));
              }
            }
LAB_011b18bc:
            thunk_FUN_016d3fb4(piVar3);
          }
          else if (((iVar12 == 0) && ((1 << (local_48 & 0xff) & 0x7bdeU) == 0)) &&
                  (local_44 != (int *)0x0)) {
            piVar3 = local_40;
            goto LAB_011b18bc;
          }
        }
        bVar7 = true;
        iVar12 = 0;
        if (iVar21 == 0) break;
      } while( true );
    }
    piVar20 = piVar2;
    if (piVar2 == piVar19 + iVar13 * 6) goto LAB_011b1a80;
  } while( true );
LAB_011b18fc:
  local_44 = *(int **)(iVar12 + 0x110);
  local_40 = *(int **)(iVar12 + 0x114);
  local_48 = 0x80000000;
  local_3c = param_3;
  uVar22 = FUN_011cf8a8(piVar20 + 1,iVar9 + uVar14 * 0x18,&local_48,param_4,param_5);
  puVar10 = (undefined4 *)((ulonglong)uVar22 >> 0x20);
  uVar4 = (undefined4)uVar22;
  pcVar15 = (code *)puVar10[3];
  pcVar5 = (code *)puVar10[4];
  while (iVar12 = (*pcVar15)(uVar4), iVar12 != 0) {
    local_34 = iVar12;
    if (uVar16 == local_54) {
      (*pcVar5)(local_30,uVar4);
      iVar9 = local_30[0] + 1;
      if (local_30[0] == -1) {
        iVar9 = -1;
      }
      FUN_011cf828(&local_54,uVar16,iVar9,4,4);
      local_80 = local_50;
    }
    *(int *)(local_80 + uVar16 * 4) = iVar12;
    uVar16 = uVar16 + 1;
    local_4c = uVar16;
  }
  if ((code *)*puVar10 != (code *)0x0) {
    (*(code *)*puVar10)(uVar4);
  }
  if (puVar10[1] != 0) {
    thunk_FUN_016d3fb4(uVar4);
  }
  bVar7 = true;
  iVar12 = 0;
  goto joined_r0x011b1724;
}

