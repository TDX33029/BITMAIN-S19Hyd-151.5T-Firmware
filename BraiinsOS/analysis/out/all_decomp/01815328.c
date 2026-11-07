// FUN_01815328 @ 01815328 size=1584 calls_out=5 calls_in=0
// strings: 

bool FUN_01815328(int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  do {
    uVar17 = param_1[0x1d];
    do {
      if (uVar17 < 0x106) goto LAB_01815650;
LAB_01815364:
      uVar17 = param_1[0x1b];
      iVar16 = param_1[0x11];
      uVar11 = ((uint)*(byte *)(param_1[0xe] + uVar17 + 2) ^
               param_1[0x12] << (param_1[0x16] & 0xffU)) & param_1[0x15];
      param_1[0x12] = uVar11;
      iVar5 = uVar11 * 2;
      uVar2 = *(ushort *)(iVar16 + iVar5);
      *(ushort *)(param_1[0x10] + (param_1[0xd] & uVar17) * 2) = uVar2;
      *(short *)(iVar16 + iVar5) = (short)uVar17;
      if ((uVar2 == 0) || (param_1[0xb] - 0x106U < uVar17 - uVar2)) {
        uVar11 = param_1[0x18];
      }
      else {
        uVar11 = FUN_01814548(param_1);
        uVar17 = param_1[0x1b];
        param_1[0x18] = uVar11;
      }
      while( true ) {
        iVar5 = param_1[0x5a8];
        if (2 < uVar11) break;
        bVar1 = *(byte *)(param_1[0xe] + uVar17);
        param_1[0x5a8] = iVar5 + 1;
        *(undefined1 *)(param_1[0x5a6] + iVar5) = 0;
        iVar5 = param_1[0x5a8];
        param_1[0x5a8] = iVar5 + 1;
        *(undefined1 *)(param_1[0x5a6] + iVar5) = 0;
        iVar5 = param_1[0x5a8];
        param_1[0x5a8] = iVar5 + 1;
        *(byte *)(param_1[0x5a6] + iVar5) = bVar1;
        *(short *)(param_1 + bVar1 + 0x25) = (short)param_1[bVar1 + 0x25] + 1;
        iVar5 = param_1[0x1d];
        param_1[0x1d] = iVar5 - 1U;
        iVar12 = param_1[0x1b] + 1;
        param_1[0x1b] = iVar12;
        if (param_1[0x5a8] == param_1[0x5a9]) goto LAB_018154f0;
        if (0x105 < iVar5 - 1U) goto LAB_01815364;
LAB_01815650:
        FUN_01814824(param_1);
        uVar17 = param_1[0x1d];
        if (0x105 < uVar17) goto LAB_01815364;
        if (param_2 == 0) {
          return false;
        }
        if (uVar17 == 0) {
          uVar11 = param_1[0x1b];
          uVar17 = uVar11;
          if (1 < uVar11) {
            uVar17 = 2;
          }
          param_1[0x5ad] = uVar17;
          if (param_2 == 4) {
            iVar5 = param_1[0x17];
            if (iVar5 < 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = param_1[0xe] + iVar5;
            }
            FUN_0181dbb8(param_1,iVar16,uVar11 - iVar5,1);
            iVar5 = *param_1;
            param_1[0x17] = param_1[0x1b];
            iVar16 = *(int *)(iVar5 + 0x1c);
            FUN_0181d958(iVar16);
            uVar17 = *(uint *)(iVar16 + 0x14);
            if (*(uint *)(iVar5 + 0x10) <= *(uint *)(iVar16 + 0x14)) {
              uVar17 = *(uint *)(iVar5 + 0x10);
            }
            if (uVar17 != 0) {
              FUN_0181e3d4(*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar16 + 0x10),uVar17);
              iVar12 = *(int *)(iVar16 + 0x14);
              *(uint *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + uVar17;
              iVar12 = iVar12 - uVar17;
              *(uint *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + uVar17;
              *(uint *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + uVar17;
              *(uint *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) - uVar17;
              *(int *)(iVar16 + 0x14) = iVar12;
              if (iVar12 == 0) {
                *(undefined4 *)(iVar16 + 0x10) = *(undefined4 *)(iVar16 + 8);
              }
            }
            if (*(int *)(*param_1 + 0x10) == 0) {
              uVar3 = 2;
            }
            else {
              uVar3 = 3;
            }
          }
          else {
            if (param_1[0x5a8] != 0) {
              iVar5 = param_1[0x17];
              if (iVar5 < 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = param_1[0xe] + iVar5;
              }
              FUN_0181dbb8(param_1,iVar16,uVar11 - iVar5,0);
              iVar16 = *param_1;
              param_1[0x17] = param_1[0x1b];
              iVar5 = *(int *)(iVar16 + 0x1c);
              FUN_0181d958(iVar5);
              uVar17 = *(uint *)(iVar5 + 0x14);
              if (*(uint *)(iVar16 + 0x10) <= *(uint *)(iVar5 + 0x14)) {
                uVar17 = *(uint *)(iVar16 + 0x10);
              }
              if (uVar17 != 0) {
                FUN_0181e3d4(*(undefined4 *)(iVar16 + 0xc),*(undefined4 *)(iVar5 + 0x10),uVar17);
                iVar12 = *(int *)(iVar5 + 0x14);
                *(uint *)(iVar16 + 0xc) = *(int *)(iVar16 + 0xc) + uVar17;
                iVar12 = iVar12 - uVar17;
                *(uint *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + uVar17;
                *(uint *)(iVar16 + 0x14) = *(int *)(iVar16 + 0x14) + uVar17;
                *(uint *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) - uVar17;
                *(int *)(iVar5 + 0x14) = iVar12;
                if (iVar12 == 0) {
                  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 8);
                }
              }
              return *(int *)(*param_1 + 0x10) != 0;
            }
            uVar3 = 1;
          }
          return (bool)uVar3;
        }
        if (2 < uVar17) goto LAB_01815364;
        uVar11 = param_1[0x18];
        uVar17 = param_1[0x1b];
      }
      param_1[0x5a8] = iVar5 + 1;
      iVar16 = uVar17 - param_1[0x1c];
      *(char *)(param_1[0x5a6] + iVar5) = (char)iVar16;
      iVar5 = param_1[0x5a8];
      param_1[0x5a8] = iVar5 + 1;
      *(char *)(param_1[0x5a6] + iVar5) = (char)((uint)iVar16 >> 8);
      uVar17 = iVar16 - 1U & 0xffff;
      iVar5 = param_1[0x5a8];
      param_1[0x5a8] = iVar5 + 1;
      *(char *)(param_1[0x5a6] + iVar5) = (char)(uVar11 - 3);
      *(short *)(param_1 + (byte)(&DAT_004530a0)[uVar11 - 3 & 0xff] + 0x126) =
           (short)param_1[(byte)(&DAT_004530a0)[uVar11 - 3 & 0xff] + 0x126] + 1;
      if (uVar17 < 0x100) {
        bVar1 = (&DAT_004531a0)[uVar17];
      }
      else {
        bVar1 = (&DAT_004532a0)[uVar17 >> 7];
      }
      *(short *)(param_1 + bVar1 + 0x262) = (short)param_1[bVar1 + 0x262] + 1;
      uVar11 = param_1[0x18];
      iVar16 = param_1[0x5a8];
      uVar17 = param_1[0x1d] - uVar11;
      iVar5 = param_1[0x5a9];
      uVar15 = param_1[0x1b];
      uVar13 = param_1[0x15];
      uVar14 = param_1[0x16];
      param_1[0x1d] = uVar17;
      if (uVar17 < 3 || (uint)param_1[0x20] < uVar11) {
        param_1[0x18] = 0;
        param_1[0x1b] = uVar11 + uVar15;
        pbVar8 = (byte *)(param_1[0xe] + uVar11 + uVar15);
        uVar6 = (uint)*pbVar8;
        param_1[0x12] = uVar6;
        param_1[0x12] = ((uint)pbVar8[1] ^ uVar6 << (uVar14 & 0xff)) & uVar13;
      }
      else {
        iVar12 = param_1[0x10];
        pbVar8 = (byte *)(param_1[0xe] + uVar15 + 2);
        iVar7 = param_1[0x11];
        uVar9 = param_1[0xd];
        iVar4 = uVar11 - 1;
        uVar10 = param_1[0x12];
        param_1[0x18] = iVar4;
        uVar6 = uVar15;
        do {
          uVar6 = uVar6 + 1;
          param_1[0x1b] = uVar6;
          iVar4 = iVar4 + -1;
          pbVar8 = pbVar8 + 1;
          uVar10 = ((uint)*pbVar8 ^ uVar10 << (uVar14 & 0xff)) & uVar13;
          param_1[0x12] = uVar10;
          *(undefined2 *)(iVar12 + (uVar9 & uVar6) * 2) = *(undefined2 *)(iVar7 + uVar10 * 2);
          *(short *)(iVar7 + uVar10 * 2) = (short)uVar6;
          param_1[0x18] = iVar4;
        } while (iVar4 != 0);
        param_1[0x1b] = uVar11 + uVar15;
      }
      iVar12 = uVar11 + uVar15;
    } while (iVar16 != iVar5);
LAB_018154f0:
    iVar5 = param_1[0x17];
    if (iVar5 < 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = param_1[0xe] + iVar5;
    }
    FUN_0181dbb8(param_1,iVar16,iVar12 - iVar5,0);
    iVar5 = *param_1;
    param_1[0x17] = param_1[0x1b];
    iVar16 = *(int *)(iVar5 + 0x1c);
    FUN_0181d958(iVar16);
    uVar17 = *(uint *)(iVar16 + 0x14);
    if (*(uint *)(iVar5 + 0x10) <= *(uint *)(iVar16 + 0x14)) {
      uVar17 = *(uint *)(iVar5 + 0x10);
    }
    if (uVar17 != 0) {
      FUN_0181e3d4(*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar16 + 0x10),uVar17);
      iVar12 = *(int *)(iVar16 + 0x14);
      *(uint *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + uVar17;
      iVar12 = iVar12 - uVar17;
      *(uint *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + uVar17;
      *(uint *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + uVar17;
      *(uint *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) - uVar17;
      *(int *)(iVar16 + 0x14) = iVar12;
      if (iVar12 == 0) {
        *(undefined4 *)(iVar16 + 0x10) = *(undefined4 *)(iVar16 + 8);
      }
    }
    if (*(int *)(*param_1 + 0x10) == 0) {
      return false;
    }
  } while( true );
}

