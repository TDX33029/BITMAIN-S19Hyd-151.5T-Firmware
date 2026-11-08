// FUN_011af2c4 @ 011af2c4 size=880 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_011af2c4(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  undefined4 uVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  code *pcVar21;
  int iVar22;
  undefined8 uVar23;
  int local_6c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_34;
  int local_30 [3];
  
  if (*param_2 != '\x05') {
    return (int *)&DAT_00000001;
  }
  iVar13 = *(int *)(param_1 + 8);
  local_58 = 0;
  piVar16 = *(int **)(param_1 + 4);
  local_4c = 0;
  local_50 = 4;
  local_54 = 0;
  if (iVar13 != 0) {
    iVar3 = *(int *)(param_2 + 4);
    uVar10 = *(uint *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0xc);
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    local_58 = 0;
    local_6c = 4;
    piVar17 = piVar16;
    do {
      piVar4 = piVar17 + 6;
      iVar22 = 0;
      iVar5 = iVar3;
      uVar19 = uVar10;
      iVar18 = iVar7;
      bVar1 = iVar3 != 0;
joined_r0x011af38c:
      if (iVar18 != 0) {
        do {
          if (!bVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018a9ff4);
          }
          if (iVar22 == 0) {
            uVar6 = 0;
            if (uVar19 == 0) {
              iVar8 = 0;
              goto LAB_011af408;
            }
            do {
              iVar5 = *(int *)(iVar5 + 0x198);
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
            iVar8 = 0;
            iVar12 = iVar5;
            if (*(short *)(iVar5 + 0x192) == 0) goto LAB_011af454;
          }
          else {
            uVar6 = uVar19;
            iVar8 = iVar5;
            iVar5 = iVar22;
LAB_011af408:
            iVar12 = iVar5;
            if (*(ushort *)(iVar5 + 0x192) <= uVar6) {
LAB_011af454:
              do {
                iVar12 = *(int *)(iVar5 + 0x108);
                if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_018aa004);
                }
                uVar6 = (uint)*(ushort *)(iVar5 + 400);
                iVar8 = iVar8 + 1;
                iVar5 = iVar12;
              } while (*(ushort *)(iVar12 + 0x192) <= uVar6);
            }
          }
          if (iVar8 == 0) {
            uVar19 = uVar6 + 1;
            iVar22 = iVar12;
          }
          else {
            piVar11 = (int *)(iVar12 + uVar6 * 4 + 0x19c);
            do {
              iVar22 = *piVar11;
              iVar8 = iVar8 + -1;
              piVar11 = (int *)(iVar22 + 0x198);
            } while (iVar8 != 0);
            uVar19 = 0;
          }
          iVar18 = iVar18 + -1;
          iVar5 = iVar12 + uVar6 * 0xc;
          uVar20 = *(undefined4 *)(iVar5 + 0x114);
          uVar15 = *(undefined4 *)(iVar5 + 0x110);
          cVar2 = FUN_011af09c(*piVar17 + 8,uVar15,uVar20);
          iVar5 = 0;
          bVar1 = true;
          if (cVar2 == '\0') goto joined_r0x011af38c;
          local_48 = -0x80000000;
          local_44 = uVar15;
          local_40 = uVar20;
          local_3c = param_3;
          uVar23 = FUN_011cf8a8(piVar17 + 1,iVar12 + uVar6 * 0x18,&local_48,param_4,param_5);
          puVar9 = (undefined4 *)((ulonglong)uVar23 >> 0x20);
          uVar15 = (undefined4)uVar23;
          pcVar14 = (code *)puVar9[3];
          pcVar21 = (code *)puVar9[4];
          while (iVar8 = (*pcVar14)(uVar15), iVar8 != 0) {
            local_34 = iVar8;
            if (local_58 == local_54) {
              (*pcVar21)(local_30,uVar15);
              iVar12 = local_30[0] + 1;
              if (local_30[0] == -1) {
                iVar12 = -1;
              }
              FUN_011cf828(&local_54,local_58,iVar12,4,4);
              local_6c = local_50;
            }
            *(int *)(local_6c + local_58 * 4) = iVar8;
            local_58 = local_58 + 1;
            local_4c = local_58;
          }
          if ((code *)*puVar9 != (code *)0x0) {
            (*(code *)*puVar9)(uVar15);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(uVar15);
          }
          if (iVar18 == 0) break;
        } while( true );
      }
      piVar17 = piVar4;
    } while (piVar4 != piVar16 + iVar13 * 6);
  }
  local_3c = local_50 + local_58 * 4;
  local_48 = local_50;
  local_44 = local_50;
  local_40 = local_54;
  piVar16 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar16 = local_48;
  piVar16[1] = local_44;
  piVar16[2] = local_40;
  piVar16[3] = local_3c;
  return piVar16;
}

