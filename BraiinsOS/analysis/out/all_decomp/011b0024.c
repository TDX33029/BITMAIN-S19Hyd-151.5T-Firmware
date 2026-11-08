// FUN_011b0024 @ 011b0024 size=748 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_011b0024(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 != '\x05') {
    return (int *)&DAT_00000001;
  }
  iVar10 = *(int *)(param_1 + 8);
  piVar12 = *(int **)(param_1 + 4);
  local_3c = 0;
  local_40 = 4;
  local_44 = 0;
  if (iVar10 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    uVar7 = *(uint *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0xc);
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    piVar13 = piVar12;
    do {
      piVar2 = piVar13 + 6;
      iVar14 = 0;
      iVar8 = iVar1;
      uVar9 = uVar7;
      iVar15 = iVar5;
      bVar4 = iVar1 != 0;
      while (iVar15 != 0) {
LAB_011b0104:
        if (!bVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a9ff4);
        }
        if (iVar14 == 0) {
          uVar6 = 0;
          iVar14 = iVar8;
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            iVar14 = *(int *)(iVar14 + 0x198);
          }
          iVar8 = 0;
          if (*(short *)(iVar14 + 0x192) != 0) goto LAB_011b012c;
LAB_011b015c:
          do {
            iVar11 = *(int *)(iVar14 + 0x108);
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018aa004);
            }
            uVar6 = (uint)*(ushort *)(iVar14 + 400);
            iVar8 = iVar8 + 1;
            iVar14 = iVar11;
          } while (*(ushort *)(iVar11 + 0x192) <= uVar6);
        }
        else {
          uVar6 = uVar9;
          if (*(ushort *)(iVar14 + 0x192) <= uVar9) goto LAB_011b015c;
LAB_011b012c:
          iVar11 = iVar14;
        }
        if (iVar8 == 0) {
          uVar9 = uVar6 + 1;
          iVar14 = iVar11;
        }
        else {
          piVar3 = (int *)(iVar11 + uVar6 * 4 + 0x19c);
          do {
            iVar14 = *piVar3;
            iVar8 = iVar8 + -1;
            piVar3 = (int *)(iVar14 + 0x198);
          } while (iVar8 != 0);
          uVar9 = 0;
        }
        iVar8 = iVar11 + uVar6 * 0xc;
        FUN_01265b90(&local_38,*(undefined4 *)(*piVar13 + 8),*(undefined4 *)(*piVar13 + 0xc),
                     *(undefined4 *)(iVar8 + 0x110),*(undefined4 *)(iVar8 + 0x114));
        iVar15 = iVar15 + -1;
        if (local_38 == -0x80000000 || local_38 == 0) goto LAB_011b00ec;
        if (local_38 == -0x7fffffff) {
          if ((char)local_34 == '\0') goto LAB_011b00ec;
          local_30 = *(undefined4 *)(iVar8 + 0x114);
          local_34 = *(undefined4 *)(iVar8 + 0x110);
          local_38 = -0x80000000;
          local_2c = param_3;
          uVar16 = FUN_011cf8a8(piVar13 + 1,iVar11 + uVar6 * 0x18,&local_38,param_4,param_5);
          FUN_011590bc(&local_44,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          bVar4 = true;
          iVar8 = 0;
          if (iVar15 == 0) break;
          goto LAB_011b0104;
        }
        thunk_FUN_016d3fb4(local_34);
LAB_011b00ec:
        bVar4 = true;
        iVar8 = 0;
      }
      piVar13 = piVar2;
    } while (piVar2 != piVar12 + iVar10 * 6);
  }
  local_2c = local_40 + local_3c * 4;
  local_38 = local_40;
  local_34 = local_40;
  local_30 = local_44;
  piVar12 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar12 = local_38;
  piVar12[1] = local_34;
  piVar12[2] = local_30;
  piVar12[3] = local_2c;
  return piVar12;
}

