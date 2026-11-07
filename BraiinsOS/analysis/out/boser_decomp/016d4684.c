// FUN_016d4684 @ 016d4684 size=832 calls_out=5 calls_in=5
// strings: 

void FUN_016d4684(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar8;
  byte *pbVar7;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
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
    iVar17 = param_1[2];
    piVar16 = piVar11 + 0x14;
    if (*piVar16 != iVar17) {
      do {
        uVar5 = FUN_016d4a28(param_1);
        if ((uVar5 - 9 < 5) || (uVar5 == 0x20)) {
LAB_016d46e8:
          FUN_016d4fe8(param_1);
        }
        else {
          if (0x7f < uVar5) {
            uVar14 = uVar5 >> 8;
            if (uVar14 < 0x20) {
              if (uVar14 == 0) {
                bVar2 = (&DAT_00533bcd)[uVar5 & 0xff] & 1;
                goto joined_r0x016d4764;
              }
              if ((uVar14 == 0x16) && (uVar5 == 0x1680)) goto LAB_016d46e8;
            }
            else if (uVar14 == 0x20) {
              bVar2 = (&DAT_00533bcd)[uVar5 & 0xff] & 2;
joined_r0x016d4764:
              if (bVar2 != 0) goto LAB_016d46e8;
            }
            else if (uVar14 == 0x30 && uVar5 == 0x3000) goto LAB_016d46e8;
          }
          iVar6 = FUN_016d4a28(param_1);
          if (iVar6 != 0x23) {
            return;
          }
          iVar6 = *piVar16;
          iVar10 = piVar11[0x15];
          iVar13 = piVar11[0x16];
          local_5c = 0;
          local_60 = 1;
          local_64 = 0;
          FUN_016d4fe8(param_1);
          if (*piVar16 == iVar17) {
            iVar12 = 0;
            iVar15 = 0;
            iVar8 = 1;
          }
          else {
            iVar12 = 0;
            iVar15 = 1;
            do {
              uVar5 = FUN_016d4a28(param_1);
              FUN_016d4fe8(param_1);
              if (uVar5 == 10) break;
              uVar14 = 1;
              if (0x7f < uVar5) {
                uVar14 = 2;
              }
              if ((0x7ff < uVar5) && (uVar14 = 4, uVar5 < 0x10000)) {
                uVar14 = 3;
              }
              iVar8 = iVar12;
              if ((uint)(local_64 - iVar12) < uVar14) {
                FUN_006520b4(&local_64,iVar12,uVar14,1,1);
                iVar8 = local_5c;
                iVar15 = local_60;
              }
              pbVar7 = (byte *)(iVar15 + iVar8);
              if (uVar5 < 0x80) {
                *pbVar7 = (byte)uVar5;
              }
              else {
                bVar2 = (byte)uVar5 & 0x3f | 0x80;
                bVar3 = (byte)(uVar5 >> 6);
                if (uVar5 < 0x800) {
                  pbVar7[1] = bVar2;
                  *pbVar7 = bVar3 | 0xc0;
                }
                else {
                  bVar3 = bVar3 & 0x3f | 0x80;
                  bVar4 = (byte)(uVar5 >> 0xc);
                  if (uVar5 >> 0x10 == 0) {
                    pbVar7[1] = bVar3;
                    pbVar7[2] = bVar2;
                    *pbVar7 = bVar4 | 0xe0;
                  }
                  else {
                    pbVar7[3] = bVar2;
                    pbVar7[2] = bVar3;
                    pbVar7[1] = bVar4 & 0x3f | 0x80;
                    *pbVar7 = (byte)(uVar5 >> 0x12) | 0xf0;
                  }
                }
              }
              iVar12 = uVar14 + iVar12;
              local_5c = iVar12;
            } while (*piVar16 != iVar17);
            iVar15 = local_64;
            iVar8 = local_60;
          }
          iStack_4c = *piVar16;
          iStack_48 = piVar11[0x15];
          iStack_44 = piVar11[0x16];
          local_58 = iVar6;
          iStack_54 = iVar10;
          iStack_50 = iVar13;
          local_40 = iVar6;
          iStack_3c = iVar10;
          iStack_38 = iVar13;
          if (*piVar11 != 0) {
            FUN_01306fc8(&DAT_01d09cd8);
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x16d49c0);
            (*pcVar1)();
          }
          iVar6 = piVar11[3];
          *piVar11 = -1;
          if (iVar6 == piVar11[1]) {
            FUN_01ac589c(piVar11 + 1);
          }
          piVar9 = (int *)(piVar11[2] + iVar6 * 0x24);
          *piVar9 = iVar15;
          piVar9[1] = iVar8;
          piVar9[2] = iVar12;
          piVar9[3] = local_58;
          piVar9[4] = iStack_54;
          piVar9[5] = iStack_50;
          piVar9[6] = iStack_4c;
          piVar9[7] = iStack_48;
          piVar9[8] = iStack_44;
          piVar11[3] = iVar6 + 1;
          *piVar11 = *piVar11 + 1;
        }
      } while (*piVar16 != iVar17);
    }
  }
  return;
}

