// FUN_013d2168 @ 013d2168 size=836 calls_out=5 calls_in=11
// strings: 

void FUN_013d2168(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  piVar11 = (int *)*param_1;
  if ((char)piVar11[0x19] == '\x01') {
    iVar15 = param_1[2];
    piVar14 = piVar11 + 0x14;
    if (*piVar14 != iVar15) {
      do {
        while ((uVar4 = FUN_013d2518(param_1), 4 < uVar4 - 9 && (uVar4 != 0x20))) {
          if (0x7f < uVar4) {
            uVar13 = uVar4 >> 8;
            if (uVar13 < 0x20) {
              if (uVar13 == 0) {
                bVar1 = (&DAT_0041951b)[uVar4 & 0xff] & 1;
joined_r0x013d2248:
                if (bVar1 != 0) break;
              }
              else if ((uVar13 == 0x16) && (uVar4 == 0x1680)) break;
            }
            else {
              if (uVar13 == 0x20) {
                bVar1 = (&DAT_0041951b)[uVar4 & 0xff] & 2;
                goto joined_r0x013d2248;
              }
              if (uVar13 == 0x30 && uVar4 == 0x3000) break;
            }
          }
          iVar5 = FUN_013d2518(param_1);
          if (iVar5 != 0x23) {
            return;
          }
          iVar6 = *piVar14;
          iVar9 = piVar11[0x15];
          iVar10 = piVar11[0x16];
          iVar12 = 0;
          local_5c = 0;
          local_60 = 1;
          local_64 = 0;
          FUN_013d2d20(param_1);
          iVar5 = 1;
          iVar16 = 0;
          if (*piVar14 != iVar15) {
            iVar12 = 0;
            iVar5 = 1;
            do {
              uVar4 = FUN_013d2518(param_1);
              FUN_013d2d20(param_1);
              if (uVar4 == 10) break;
              uVar13 = 1;
              if (0x7f < uVar4) {
                uVar13 = 2;
              }
              if ((0x7ff < uVar4) && (uVar13 = 4, uVar4 < 0x10000)) {
                uVar13 = 3;
              }
              if ((uint)(local_64 - iVar12) < uVar13) {
                FUN_01401968(&local_64,iVar12,uVar13,1,1);
                pbVar7 = (byte *)(local_60 + local_5c);
                iVar5 = local_60;
                if (uVar4 < 0x80) goto LAB_013d22c0;
LAB_013d2328:
                bVar1 = (byte)uVar4 & 0x3f | 0x80;
                bVar2 = (byte)(uVar4 >> 6);
                if (uVar4 < 0x800) {
                  pbVar7[1] = bVar1;
                  *pbVar7 = bVar2 | 0xc0;
                }
                else {
                  bVar2 = bVar2 & 0x3f | 0x80;
                  bVar3 = (byte)(uVar4 >> 0xc);
                  if (uVar4 >> 0x10 == 0) {
                    pbVar7[1] = bVar2;
                    pbVar7[2] = bVar1;
                    *pbVar7 = bVar3 | 0xe0;
                  }
                  else {
                    pbVar7[3] = bVar1;
                    pbVar7[2] = bVar2;
                    pbVar7[1] = bVar3 & 0x3f | 0x80;
                    *pbVar7 = (byte)(uVar4 >> 0x12) | 0xf0;
                  }
                }
              }
              else {
                pbVar7 = (byte *)(iVar5 + iVar12);
                if (0x7f < uVar4) goto LAB_013d2328;
LAB_013d22c0:
                *pbVar7 = (byte)uVar4;
              }
              iVar12 = uVar13 + iVar12;
              local_5c = iVar12;
            } while (*piVar14 != iVar15);
            iVar5 = local_60;
            iVar16 = local_64;
          }
          iStack_4c = *piVar14;
          iStack_48 = piVar11[0x15];
          iStack_44 = piVar11[0x16];
          local_58 = iVar6;
          iStack_54 = iVar9;
          iStack_50 = iVar10;
          local_40 = iVar6;
          iStack_3c = iVar9;
          iStack_38 = iVar10;
          if (*piVar11 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb715c(&DAT_01894ad8);
          }
          iVar6 = piVar11[3];
          *piVar11 = -1;
          if (iVar6 == piVar11[1]) {
            FUN_014015d4(piVar11 + 1);
          }
          piVar8 = (int *)(piVar11[2] + iVar6 * 0x24);
          *piVar8 = iVar16;
          piVar8[1] = iVar5;
          piVar8[2] = iVar12;
          piVar8[3] = local_58;
          piVar8[4] = iStack_54;
          piVar8[5] = iStack_50;
          piVar8[6] = iStack_4c;
          piVar8[7] = iStack_48;
          piVar8[8] = iStack_44;
          piVar11[3] = iVar6 + 1;
          *piVar11 = *piVar11 + 1;
          if (*piVar14 == iVar15) {
            return;
          }
        }
        FUN_013d2d20(param_1);
      } while (*piVar14 != iVar15);
    }
  }
  return;
}

