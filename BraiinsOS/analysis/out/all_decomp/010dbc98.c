// FUN_010dbc98 @ 010dbc98 size=924 calls_out=5 calls_in=2
// strings: capacity overflow

undefined8 FUN_010dbc98(int param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  int iVar16;
  uint local_30;
  
  uVar12 = (param_2 & 0xffff) >> 0xd;
  uVar4 = uVar12 + 2;
  if ((CARRY4(param_3,uVar4)) || (param_5 < param_3 + uVar4)) {
    puVar7 = (ushort *)&DAT_00000001;
    uVar12 = 0;
    uVar10 = 0xfffd;
    if ((param_2 & 0x1000) == 0) goto LAB_010dc000;
  }
  else {
    puVar7 = (ushort *)(param_4 + param_3 * 2);
    uVar10 = (uint)*puVar7;
    puVar7 = puVar7 + 1;
    uVar12 = uVar12 + 1;
    if ((uVar10 ^ 0xffefd800) < 0xffef0800) {
      uVar10 = 0xfffd;
    }
    if ((param_2 & 0x1000) == 0) {
      iVar16 = uVar12 * 2;
      uVar12 = 0;
      puVar1 = (uint *)(param_1 + 4);
      uVar4 = 1;
      do {
        puVar11 = *(uint **)(param_1 + 0x60);
        uVar13 = (uint)*puVar7;
        if ((uVar13 ^ 0xffefd800) < 0xffef0800) {
          uVar13 = 0xfffd;
        }
        if (((char)puVar11[0xb] == '\x01') && (uVar13 >> 0xc != 0)) {
          if (uVar13 < puVar11[7]) {
            uVar2 = FUN_010dcf74(puVar11,uVar13);
          }
          else {
            uVar2 = puVar11[5] - 2;
          }
        }
        else if (uVar13 >> 6 < puVar11[2]) {
          uVar2 = (uVar13 & 0x3f) + (uint)*(ushort *)(puVar11[1] + (uVar13 >> 6) * 2);
        }
        else {
          uVar2 = puVar11[5] - 1;
        }
        uVar8 = *(uint *)(param_1 + 0x48);
        if (uVar2 < puVar11[5]) {
          puVar11 = (uint *)(puVar11[4] + uVar2 * 4);
        }
        uVar2 = *puVar11;
        if ((uVar2 & 0xffffff00) == 0xd800) {
          uVar13 = uVar13 | uVar2 << 0x18;
        }
        if (uVar8 < 0x12) {
          uVar9 = 0x11;
          uVar3 = uVar8;
          puVar11 = puVar1;
          puVar5 = (uint *)(param_1 + 0x48);
        }
        else {
          uVar3 = *(uint *)(param_1 + 4);
          puVar11 = *(uint **)(param_1 + 8);
          puVar5 = puVar1;
          uVar9 = uVar8;
        }
        if (uVar3 == uVar9) {
          FUN_010d9b58(param_1);
          uVar3 = *(uint *)(param_1 + 4);
          puVar11 = *(uint **)(param_1 + 8);
          puVar5 = puVar1;
        }
        puVar11[uVar3] = uVar13;
        *puVar5 = *puVar5 + 1;
        uVar13 = uVar4;
        if ((uVar2 & 0xffffff00) == 0xd800) {
          uVar13 = uVar12;
        }
        if (uVar2 != 2) {
          uVar12 = uVar13;
        }
        iVar16 = iVar16 + -2;
        uVar4 = uVar4 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar16 != 0);
      goto LAB_010dc000;
    }
  }
  puVar1 = (uint *)(param_1 + 0x48);
  uVar2 = *puVar1;
  uVar13 = uVar2;
  uVar4 = 0x11;
  if (0x11 < uVar2) {
    uVar13 = *(uint *)(param_1 + 4);
    uVar4 = uVar2;
  }
  if (uVar4 - uVar13 < uVar12) {
    if (CARRY4(uVar13,uVar12)) {
LAB_010dc01c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("capacity overflow",0x11,&DAT_0188b950);
    }
    uVar4 = 0xffffffff >> LZCOUNT((uVar13 + uVar12) - 1);
    if (uVar13 + uVar12 < 2) {
      uVar4 = 0;
    }
    if (0xfffffffe < uVar4) goto LAB_010dc01c;
    iVar16 = FUN_010d9998(param_1,uVar4 + 1);
    if (iVar16 != -0x7fffffff) {
      if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874();
      }
      goto LAB_010dc01c;
    }
    uVar2 = *puVar1;
  }
  puVar11 = (uint *)(param_1 + 4);
  if (uVar2 < 0x12) {
    uVar4 = 0x11;
    puVar5 = puVar1;
    puVar6 = puVar11;
  }
  else {
    uVar4 = uVar2;
    uVar2 = *(uint *)(param_1 + 4);
    puVar5 = puVar11;
    puVar6 = *(uint **)(param_1 + 8);
  }
  if (uVar2 < uVar4) {
    iVar16 = uVar12 << 1;
    puVar14 = puVar7;
    do {
      if (iVar16 == 0) {
        *puVar5 = uVar2;
        goto LAB_010dbff8;
      }
      puVar15 = puVar14 + 1;
      iVar16 = iVar16 + -2;
      uVar13 = 0xff00fffd;
      if (0xffef07ff < (*puVar14 ^ 0xffefd800)) {
        uVar13 = *puVar14 | 0xff000000;
      }
      puVar6[uVar2] = uVar13;
      uVar2 = uVar2 + 1;
      puVar14 = puVar15;
    } while (uVar4 != uVar2);
    uVar2 = uVar4;
  }
  else {
    puVar15 = puVar7;
  }
  *puVar5 = uVar2;
  for (; puVar15 != puVar7 + uVar12; puVar15 = puVar15 + 1) {
    uVar4 = *puVar1;
    uVar13 = 0xff00fffd;
    if (0xffef07ff < (*puVar15 ^ 0xffefd800)) {
      uVar13 = *puVar15 | 0xff000000;
    }
    if (uVar4 < 0x12) {
      uVar2 = 0x11;
      puVar5 = puVar11;
      puVar6 = puVar1;
    }
    else {
      puVar5 = *(uint **)(param_1 + 8);
      puVar6 = puVar11;
      uVar2 = uVar4;
      uVar4 = *(uint *)(param_1 + 4);
    }
    if (uVar4 == uVar2) {
      FUN_010d9b58();
      uVar4 = *(uint *)(param_1 + 4);
      puVar5 = *(uint **)(param_1 + 8);
      puVar6 = puVar11;
    }
    puVar5[uVar4] = uVar13;
    *puVar6 = *puVar6 + 1;
  }
LAB_010dbff8:
  uVar12 = 0;
LAB_010dc000:
  return CONCAT44(uVar12,uVar10);
}

