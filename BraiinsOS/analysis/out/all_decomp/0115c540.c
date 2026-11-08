// FUN_0115c540 @ 0115c540 size=1188 calls_out=4 calls_in=2
// strings: 

void FUN_0115c540(uint *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  undefined8 uVar20;
  uint local_b8;
  uint local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  uint local_60;
  uint local_5c;
  int local_40;
  int local_3c;
  int local_38;
  
  uVar20 = CONCAT44(local_a4,local_a0);
  iVar6 = param_3 * 100;
  if (0x147ae14 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (iVar6 == 0) {
    local_5c = 4;
    local_60 = 0;
  }
  else {
    local_5c = thunk_FUN_016d4a50(iVar6);
    if (local_5c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar6);
    }
    local_60 = param_3;
    if (param_3 != 0) {
      iVar6 = 0;
      uVar11 = param_3;
      piVar12 = param_2;
      do {
        if (piVar12 == param_2 + param_3 * 0x19) break;
        iVar14 = *piVar12;
        if (iVar14 == 2) {
          piVar16 = (int *)piVar12[0xe];
          do {
            iVar4 = *piVar16;
            bVar3 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar3);
          *piVar16 = iVar4 + 1;
          if (iVar4 < 0) goto LAB_0115c9dc;
          iVar15 = piVar12[7];
          iVar9 = piVar12[6];
          local_6c = piVar12[0xf];
          if (iVar15 == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = thunk_FUN_016d4a50(iVar15);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar15);
            }
          }
          FUN_016dd1aa(iVar4,iVar9,iVar15);
          uVar17 = piVar12[0xc];
          local_40 = piVar12[8];
          local_3c = piVar12[9];
          local_38 = piVar12[10];
          local_74 = piVar12[0xb];
          local_80 = piVar12[1];
          local_78 = piVar12[2];
          local_7c = piVar12[3];
          local_84 = (uint)*(byte *)(piVar12 + 0xd);
          local_88 = piVar12[4];
          local_70 = iVar15;
        }
        else {
          uVar20 = FUN_013c45cc(piVar12[0x10]);
          iVar4 = piVar12[6];
          piVar16 = (int *)&DAT_00000001;
          iVar15 = piVar12[5];
          local_70 = 1;
          if ((iVar4 != 0) && (local_70 = thunk_FUN_016d4a50(iVar4), local_70 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar4);
          }
          FUN_016dd1aa(local_70,iVar15,iVar4);
          iVar15 = piVar12[7];
          local_40 = piVar12[8];
          local_3c = piVar12[9];
          local_38 = piVar12[10];
          local_74 = piVar12[0xb];
          local_84 = piVar12[0xf];
          local_80 = piVar12[1];
          iVar9 = piVar12[0xe];
          bVar2 = *(byte *)(piVar12 + 0xc);
          local_78 = piVar12[2];
          local_7c = piVar12[3];
          local_a8 = (undefined1)piVar12[0x12];
          if ((local_84 != 0) && (piVar16 = (int *)thunk_FUN_016d4a50(), piVar16 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,local_84);
          }
          FUN_016dd1aa(piVar16,iVar9,local_84);
          local_ac = local_84 >> 8;
          uVar17 = local_b8 & 0xffffff00 | (uint)bVar2;
          local_b8 = uVar17;
          local_88 = iVar4;
          local_6c = local_84;
        }
        piVar5 = (int *)piVar12[0x13];
        uVar11 = uVar11 - 1;
        do {
          iVar9 = *piVar5;
          bVar3 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar3);
        *piVar5 = iVar9 + 1;
        if (iVar9 < 0) {
LAB_0115c9dc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x115c9dc);
          (*pcVar1)();
        }
        piVar7 = (int *)piVar12[0x14];
        do {
          iVar9 = *piVar7;
          bVar3 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar3);
        *piVar7 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_0115c9dc;
        piVar18 = (int *)piVar12[0x15];
        do {
          iVar9 = *piVar18;
          bVar3 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar3);
        *piVar18 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_0115c9dc;
        piVar19 = (int *)piVar12[0x18];
        iVar9 = piVar12[0x16];
        if (piVar19 != (int *)0x0) {
          do {
            iVar8 = *piVar19;
            bVar3 = (bool)hasExclusiveAccess(piVar19);
          } while (!bVar3);
          *piVar19 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_0115c9dc;
        }
        piVar13 = (int *)piVar12[0x17];
        do {
          iVar8 = *piVar13;
          bVar3 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar3);
        *piVar13 = iVar8 + 1;
        if (iVar8 < 0) goto LAB_0115c9dc;
        piVar10 = (int *)(local_5c + iVar6 * 100);
        *piVar10 = iVar14;
        piVar10[0x17] = (int)piVar13;
        piVar10[0xf] = local_6c;
        *(short *)((int)piVar10 + 0x35) = (short)local_ac;
        *(char *)((int)piVar10 + 0x37) = (char)(local_ac >> 0x10);
        piVar10[1] = local_80;
        piVar10[2] = local_78;
        piVar10[3] = local_7c;
        piVar10[4] = local_88;
        piVar10[5] = local_70;
        piVar10[7] = iVar15;
        piVar10[0x13] = (int)piVar5;
        piVar10[0x14] = (int)piVar7;
        piVar10[0x15] = (int)piVar18;
        *(undefined1 *)(piVar10 + 0x12) = local_a8;
        *(undefined8 *)(piVar10 + 0x10) = uVar20;
        *(char *)(piVar10 + 0xd) = (char)local_84;
        piVar10[9] = local_3c;
        piVar10[10] = local_38;
        piVar10[0xb] = local_74;
        piVar10[6] = iVar4;
        piVar10[8] = local_40;
        piVar10[0x16] = iVar9;
        piVar10[0x18] = (int)piVar19;
        piVar10[0xe] = (int)piVar16;
        piVar10[0xc] = uVar17;
        iVar6 = iVar6 + 1;
        piVar12 = piVar12 + 0x19;
      } while (uVar11 != 0);
    }
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = param_3;
  return;
}

