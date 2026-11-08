// FUN_0181bda4 @ 0181bda4 size=1856 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0181bda4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  uVar13 = (uint)*(ushort *)(param_2 + 2);
  if (uVar13 == 0) {
    iVar14 = 3;
    iVar10 = 0x8a;
  }
  else {
    iVar14 = 4;
    iVar10 = 7;
  }
  if (param_3 < 0) {
    return 0;
  }
  iVar6 = param_2 + param_3 * 4;
  iVar7 = iVar6 + 4;
  puVar8 = (ushort *)(param_1 + 0x16b8);
  uVar15 = 0xffffffff;
  iVar9 = 0;
LAB_0181be24:
  iVar3 = iVar9 + 1;
  uVar5 = (uint)*(ushort *)(param_2 + 6);
  uVar12 = uVar15;
  if (iVar3 < iVar10) goto LAB_0181c0f4;
  do {
    uVar15 = uVar13;
    uVar11 = *(uint *)(param_1 + 0x16bc);
    uVar13 = (uint)*puVar8;
    if (uVar15 == 0) {
      if (iVar3 < 0xb) {
        uVar2 = *(ushort *)(param_1 + 0xac0);
        uVar1 = *(ushort *)(param_1 + 0xac2);
        uVar12 = (uint)uVar2 << (uVar11 & 0xff);
        if ((int)(0x10 - (uint)uVar1) < (int)uVar11) {
          uVar12 = uVar12 | uVar13;
          *puVar8 = (ushort)uVar12;
          iVar14 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar14 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)uVar12;
          iVar14 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar14 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)(*puVar8 >> 8);
          uVar11 = *(int *)(param_1 + 0x16bc) - 0x10;
          uVar12 = (int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
        }
        else {
          uVar12 = uVar12 | uVar13;
        }
        uVar11 = uVar1 + uVar11;
        *(uint *)(param_1 + 0x16bc) = uVar11;
        if ((int)uVar11 < 0xe) {
          uVar2 = (ushort)uVar12 | (ushort)(iVar3 + -3 << (uVar11 & 0xff));
          iVar14 = uVar11 + 3;
          goto LAB_0181c250;
        }
        iVar14 = *(int *)(param_1 + 0x14);
        uVar12 = uVar12 | iVar9 + -2 << (uVar11 & 0xff);
        *(short *)(param_1 + 0x16b8) = (short)uVar12;
        *(int *)(param_1 + 0x14) = iVar14 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)uVar12;
        iVar14 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar14 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar14) =
             (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
        *(short *)(param_1 + 0x16b8) =
             (short)(iVar9 + -2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
        *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0xac6);
        uVar1 = *(ushort *)(param_1 + 0xac4);
        uVar13 = uVar13 | (uint)uVar1 << (uVar11 & 0xff);
        if ((int)(0x10 - (uint)uVar2) < (int)uVar11) {
          *puVar8 = (ushort)uVar13;
          iVar14 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar14 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)uVar13;
          iVar14 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar14 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)(*puVar8 >> 8);
          uVar11 = *(int *)(param_1 + 0x16bc) - 0x10;
          uVar13 = (int)(uint)uVar1 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
        }
        uVar11 = uVar2 + uVar11;
        *(uint *)(param_1 + 0x16bc) = uVar11;
        if ((int)uVar11 < 10) {
          uVar2 = (ushort)uVar13 | (ushort)(iVar3 + -0xb << (uVar11 & 0xff));
          iVar14 = uVar11 + 7;
LAB_0181c250:
          *(int *)(param_1 + 0x16bc) = iVar14;
          *(ushort *)(param_1 + 0x16b8) = uVar2;
        }
        else {
          iVar14 = *(int *)(param_1 + 0x14);
          uVar13 = uVar13 | iVar9 + -10 << (uVar11 & 0xff);
          *(short *)(param_1 + 0x16b8) = (short)uVar13;
          *(int *)(param_1 + 0x14) = iVar14 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)uVar13;
          iVar14 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar14 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar14) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(short *)(param_1 + 0x16b8) =
               (short)(iVar9 + -10 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
          *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -9;
        }
      }
      if (uVar5 != 0) {
        if (iVar6 == param_2) {
          return 0;
        }
        uVar13 = (uint)*(ushort *)(param_2 + 10);
        if (uVar5 == uVar13) {
          if (param_2 + 8 == iVar7) {
            return 0;
          }
          uVar5 = (uint)*(ushort *)(param_2 + 0xe);
          iVar14 = 4;
          iVar10 = 7;
          iVar9 = 1;
          iVar3 = 2;
          param_2 = param_2 + 8;
          goto LAB_0181c0f4;
        }
        goto LAB_0181bfe0;
      }
      if (iVar6 == param_2) {
        return 0;
      }
      uVar13 = (uint)*(ushort *)(param_2 + 10);
      if (uVar13 == 0) {
        if (param_2 + 8 == iVar7) {
          return 0;
        }
        uVar5 = (uint)*(ushort *)(param_2 + 0xe);
        iVar14 = 3;
        iVar10 = 0x8a;
        iVar9 = 1;
        iVar3 = 2;
        param_2 = param_2 + 8;
        uVar15 = uVar13;
        goto LAB_0181c0f4;
      }
      uVar15 = 0;
      iVar3 = 1;
      iVar14 = param_2 + 4;
    }
    else {
      if (uVar15 != uVar12) {
        iVar14 = param_1 + uVar15 * 4;
        uVar12 = (uint)*(ushort *)(iVar14 + 0xa7c);
        uVar16 = (uint)*(ushort *)(iVar14 + 0xa7e);
        uVar13 = uVar13 | uVar12 << (uVar11 & 0xff) & 0xffff;
        iVar3 = iVar9;
        if ((int)(0x10 - uVar16) < (int)uVar11) {
          iVar14 = *(int *)(param_1 + 0x14);
          *puVar8 = (ushort)uVar13;
          *(int *)(param_1 + 0x14) = iVar14 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)uVar13;
          iVar14 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar14 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)(*puVar8 >> 8);
          iVar14 = *(int *)(param_1 + 0x16bc);
          uVar11 = iVar14 + -0x10 + uVar16;
          *(uint *)(param_1 + 0x16bc) = uVar11;
          uVar13 = (int)uVar12 >> (0x10U - iVar14 & 0xff) & 0xffff;
        }
        else {
          uVar11 = uVar11 + uVar16;
          *(uint *)(param_1 + 0x16bc) = uVar11;
        }
      }
      uVar2 = *(ushort *)(param_1 + 0xabe);
      uVar1 = *(ushort *)(param_1 + 0xabc);
      uVar13 = uVar13 | (uint)uVar1 << (uVar11 & 0xff);
      if ((int)(0x10 - (uint)uVar2) < (int)uVar11) {
        *puVar8 = (ushort)uVar13;
        iVar14 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar14 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)uVar13;
        iVar14 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar14 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)(*puVar8 >> 8);
        uVar11 = *(int *)(param_1 + 0x16bc) - 0x10;
        uVar13 = (int)(uint)uVar1 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
      }
      uVar11 = uVar2 + uVar11;
      *(uint *)(param_1 + 0x16bc) = uVar11;
      if ((int)uVar11 < 0xf) {
        uVar2 = (ushort)uVar13 | (ushort)(iVar3 + -3 << (uVar11 & 0xff));
        iVar14 = uVar11 + 2;
      }
      else {
        uVar12 = iVar3 - 3U & 0xffff;
        uVar13 = uVar13 | uVar12 << (uVar11 & 0xff);
        iVar14 = *(int *)(param_1 + 0x14);
        *puVar8 = (ushort)uVar13;
        *(int *)(param_1 + 0x14) = iVar14 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)uVar13;
        iVar14 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar14 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar14) = (char)(*puVar8 >> 8);
        iVar14 = *(int *)(param_1 + 0x16bc) + -0xe;
        uVar2 = (ushort)((int)uVar12 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
      }
      *puVar8 = uVar2;
      *(int *)(param_1 + 0x16bc) = iVar14;
      uVar12 = uVar15;
      if (uVar5 == 0) goto LAB_0181c0ac;
      if (uVar15 != uVar5) {
        uVar13 = uVar5;
        goto LAB_0181c3cc;
      }
      if (iVar6 == param_2) {
        return 0;
      }
      uVar13 = (uint)*(ushort *)(param_2 + 10);
      if (uVar15 == uVar13) {
        if (param_2 + 8 == iVar7) {
          return 0;
        }
        uVar5 = (uint)*(ushort *)(param_2 + 0xe);
        iVar14 = 3;
        iVar10 = 6;
        iVar9 = 1;
        iVar3 = 2;
        param_2 = param_2 + 8;
        goto LAB_0181c0f4;
      }
LAB_0181bfe0:
      iVar3 = 1;
      uVar15 = uVar5;
      iVar14 = param_2 + 4;
    }
LAB_0181bfe4:
    param_2 = iVar14;
    iVar14 = param_1 + uVar15 * 4;
    uVar5 = (uint)*(ushort *)(param_1 + 0x16b8);
    puVar4 = (undefined2 *)(param_1 + 0x16b8);
    uVar12 = *(uint *)(param_1 + 0x16bc);
    do {
      while( true ) {
        uVar11 = (uint)*(ushort *)(iVar14 + 0xa7c);
        uVar16 = (uint)*(ushort *)(iVar14 + 0xa7e);
        uVar5 = uVar5 | uVar11 << (uVar12 & 0xff) & 0xffff;
        if ((int)uVar12 <= (int)(0x10 - uVar16)) break;
        iVar10 = *(int *)(param_1 + 0x14);
        iVar3 = iVar3 + -1;
        *puVar4 = (short)uVar5;
        *(int *)(param_1 + 0x14) = iVar10 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar10) = (char)uVar5;
        iVar10 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar10 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar10) = (char)((ushort)*puVar4 >> 8);
        uVar12 = *(int *)(param_1 + 0x16bc) + -0x10 + uVar16;
        uVar11 = (int)uVar11 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
        uVar5 = uVar11 & 0xffff;
        *puVar4 = (short)uVar11;
        *(uint *)(param_1 + 0x16bc) = uVar12;
        if (iVar3 == 0) goto LAB_0181c090;
      }
      *puVar4 = (short)uVar5;
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x16bc) = uVar12 + uVar16;
      uVar12 = uVar12 + uVar16;
    } while (iVar3 != 0);
LAB_0181c090:
    if (uVar13 != 0) {
LAB_0181c3cc:
      if (iVar6 == param_2) {
        return 0;
      }
      iVar3 = 1;
      if (uVar13 == *(ushort *)(param_2 + 10)) {
        if (iVar7 == param_2 + 8) {
          return 0;
        }
        iVar9 = 1;
        uVar5 = (uint)*(ushort *)(param_2 + 0xe);
        iVar14 = 4;
        iVar10 = 7;
        iVar3 = 2;
        param_2 = param_2 + 8;
        goto LAB_0181c0f4;
      }
      uVar15 = uVar13;
      uVar13 = (uint)*(ushort *)(param_2 + 10);
      iVar14 = param_2 + 4;
      goto LAB_0181bfe4;
    }
    uVar12 = uVar15;
LAB_0181c0ac:
    if (iVar6 == param_2) {
      return 0;
    }
    uVar13 = (uint)*(ushort *)(param_2 + 10);
    iVar3 = 1;
    uVar15 = 0;
    iVar14 = param_2 + 4;
    if (uVar13 != 0) goto LAB_0181bfe4;
    if (iVar7 == param_2 + 8) {
      return 0;
    }
    uVar5 = (uint)*(ushort *)(param_2 + 0xe);
    iVar9 = 1;
    iVar14 = 3;
    iVar10 = 0x8a;
    iVar3 = 2;
    param_2 = param_2 + 8;
    uVar15 = uVar12;
LAB_0181c0f4:
    if (uVar13 == uVar5) {
      if (iVar6 == param_2) {
        return 0;
      }
      iVar9 = iVar3;
      param_2 = param_2 + 4;
      goto LAB_0181be24;
    }
    if (iVar3 < iVar14) {
      uVar15 = uVar13;
      uVar13 = uVar5;
      iVar14 = param_2;
      goto LAB_0181bfe4;
    }
    uVar12 = uVar15;
  } while( true );
}

