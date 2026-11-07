// FUN_00f68c94 @ 00f68c94 size=1872 calls_out=6 calls_in=1
// strings: 

void FUN_00f68c94(undefined1 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  uint local_34;
  char local_2c;
  undefined1 local_2b;
  uint local_28;
  
  iVar10 = *(int *)(param_2 + 0x10);
  uVar13 = *(uint *)(param_2 + 0x14);
  uVar6 = *(uint *)(param_2 + 0x1c);
  uVar8 = *(uint *)(param_2 + 0x20);
  uVar4 = *(uint *)(param_2 + 0x24);
  if (*(uint *)(param_2 + 0x18) == 1) {
    if (iVar10 == 0) {
      iVar10 = 2;
      if ((uVar8 == 0) || (iVar10 = 0, 99 < uVar4)) goto LAB_00f68ed4;
      if (-1 < (int)uVar6) {
        lVar2 = (longlong)(int)uVar6 * 100;
        if (((int)((ulonglong)lVar2 >> 0x20) != (int)lVar2 >> 0x1f) || (SCARRY4((int)lVar2,uVar4)))
        goto LAB_00f68ed4;
        goto LAB_00f68da0;
      }
    }
    else {
LAB_00f68d14:
      bVar18 = uVar8 == 0;
      if (!bVar18) {
        iVar10 = 0;
      }
      if ((bVar18 || 0x62 < uVar4) && (!bVar18 && uVar4 != 99)) goto LAB_00f68ed4;
      if (-1 < (int)uVar13) {
        iVar10 = 1;
        if (((*(uint *)(param_2 + 0x18) ^ 1 | (uint)(uVar6 == uVar13 / 100)) != 1) ||
           (uVar4 = uVar8 ^ 1 | (uint)(uVar4 + ((uVar13 / 100) * 100 - uVar13) == 0), uVar4 == 0))
        goto LAB_00f68ed4;
        goto LAB_00f68da4;
      }
    }
    iVar10 = 1;
LAB_00f68ed4:
    param_1[1] = (char)iVar10;
    *param_1 = 1;
    return;
  }
  if (uVar8 != 0) {
    uVar8 = 1;
    if (iVar10 != 0) goto LAB_00f68d14;
    iVar10 = 0;
    if (99 < uVar4) goto LAB_00f68ed4;
    uVar3 = 0x76c;
    if (uVar4 < 0x46) {
      uVar3 = 2000;
    }
    lVar2 = CONCAT44(1,uVar3);
LAB_00f68da0:
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar13 = (int)lVar2 + uVar4;
    iVar10 = 1;
  }
LAB_00f68da4:
  uVar12 = *(uint *)(param_2 + 0x38);
  uVar17 = *(uint *)(param_2 + 0x3c);
  uVar6 = *(uint *)(param_2 + 0x28);
  uVar14 = *(uint *)(param_2 + 0x2c);
  uVar15 = *(uint *)(param_2 + 0x30);
  uVar16 = *(uint *)(param_2 + 0x34);
  if (uVar15 == 1) {
    uVar4 = uVar12;
    if (uVar6 == 0) {
      uVar8 = 2;
      if ((uVar12 == 0) || (uVar8 = 0, 99 < uVar17)) goto LAB_00f68fbc;
      if (-1 < (int)uVar16) {
        uVar4 = (uint)((longlong)(int)uVar16 * 100);
        if (((int)((ulonglong)((longlong)(int)uVar16 * 100) >> 0x20) != (int)uVar4 >> 0x1f) ||
           (SCARRY4(uVar4,uVar17))) goto LAB_00f68fbc;
        goto LAB_00f68f04;
      }
    }
    else {
LAB_00f68e20:
      bVar18 = uVar4 == 0;
      if (!bVar18) {
        uVar8 = 0;
      }
      if ((bVar18 || 0x62 < uVar17) && (!bVar18 && uVar17 != 99)) goto LAB_00f68fbc;
      if (-1 < (int)uVar14) {
        uVar8 = 1;
        if ((uVar15 ^ 1 | (uint)(uVar16 == uVar14 / 100)) != 1) goto LAB_00f68fbc;
        uVar4 = uVar4 ^ 1 | (uint)(uVar17 + ((uVar14 / 100) * 100 - uVar14) == 0);
        if (uVar4 == 0) goto LAB_00f68fbc;
        goto LAB_00f68e90;
      }
    }
    uVar8 = 1;
LAB_00f68fbc:
    param_1[1] = (char)uVar8;
    *param_1 = 1;
    return;
  }
  uVar8 = uVar6;
  if (uVar12 == 0) {
LAB_00f68e90:
    uVar7 = uVar14;
    if (iVar10 == 0) goto LAB_00f68ff8;
LAB_00f68e98:
    if ((*(int *)(param_2 + 0x48) != 1) || (*(int *)(param_2 + 0x70) == 0)) {
      if (*(int *)(param_2 + 0x68) != 0) {
        if ((0xfff80001 < uVar13 - 0x3ffff) && (0xfffffe91 < *(int *)(param_2 + 0x6c) - 0x16fU)) {
          puVar11 = &DAT_0035d4d3;
          if ((int)uVar13 % 400 < 0) {
            puVar11 = &DAT_0035d663;
          }
          uVar8 = *(int *)(param_2 + 0x6c) << 4 | uVar13 << 0xd |
                  (uint)(byte)puVar11[(int)uVar13 % 400];
          if ((uVar8 & 0x1ff8) < 0x16e1) {
            goto LAB_00f691c0;
          }
        }
        goto LAB_00f68ec8;
      }
      bVar18 = *(int *)(param_2 + 0x50) != 0;
      if (bVar18) {
        uVar6 = (uint)*(byte *)(param_2 + 0xa8);
      }
      if (bVar18 && uVar6 != 7) {
        uVar5 = *(undefined4 *)(param_2 + 0x54);
        uVar3 = 6;
      }
      else {
        uVar4 = *(uint *)(param_2 + 0x58);
        if (uVar4 != 0) {
          uVar6 = (uint)*(byte *)(param_2 + 0xa8);
        }
        if (uVar4 == 0 || uVar6 == 7) goto LAB_00f68ff8;
        uVar3 = 0;
        uVar5 = *(undefined4 *)(param_2 + 0x5c);
      }
      FUN_00f699c8(&local_2c,uVar13,uVar5,uVar6,uVar3);
      if (local_2c == '\x01') goto LAB_00f69014;
      uVar8 = local_28;
LAB_00f691c0:
      iVar10 = FUN_00f696b0(param_2,uVar8);
      if (iVar10 == 0) goto LAB_00f693b0;
      iVar10 = FUN_00f697d4(param_2,uVar8);
      goto LAB_00f691dc;
    }
    uVar8 = *(uint *)(param_2 + 0x4c);
    bVar19 = 0xb < uVar8;
    bVar18 = uVar8 == 0xc;
    if (uVar8 < 0xd) {
      local_34 = *(uint *)(param_2 + 0x74);
      bVar19 = 0x1e < local_34;
      bVar18 = local_34 == 0x1f;
    }
    if (bVar19 && !bVar18) {
LAB_00f68ec8:
      local_2b = 0;
      goto LAB_00f69014;
    }
    puVar11 = &DAT_0035d4d3;
    if ((int)uVar13 % 400 < 0) {
      puVar11 = &DAT_0035d663;
    }
    if (uVar13 - 0x3ffff < 0xfff80002) goto LAB_00f68ec8;
    uVar4 = local_34 << 4 | uVar8 << 9 | (uint)(byte)puVar11[(int)uVar13 % 400];
    if (""[uVar4 >> 3] == 0) goto LAB_00f68ec8;
    uVar7 = (byte)puVar11[(int)uVar13 % 400] & 7;
    uVar4 = uVar4 + ""[uVar4 >> 3] * -8;
    uVar8 = uVar4 | uVar13 << 0xd;
    uVar9 = (uVar4 & 0x1fff) >> 4;
    uVar13 = uVar7;
    if (uVar7 < 3) {
      uVar13 = uVar7 + 7;
    }
    uVar13 = uVar13 + uVar9;
    iVar10 = (int)uVar8 >> 0xd;
    if (uVar13 < 7) {
      iVar10 = iVar10 + -1;
      uVar4 = iVar10 % 400;
      puVar11 = &DAT_0035d663;
      if (-1 < (int)uVar4) {
        puVar11 = &DAT_0035d4d3;
      }
      uVar13 = 0x406U >> (puVar11[uVar4] & 0x1f) & 1 | 0x34;
    }
    else {
      uVar13 = uVar13 / 7;
      if ((0x406U >> (uVar4 & 0xf) & 1 | 0x34) < uVar13) {
        iVar10 = iVar10 + 1;
        uVar13 = 1;
      }
      uVar4 = iVar10 % 400;
    }
    if ((int)uVar4 < 0) {
      uVar4 = uVar4 + 400;
    }
    if (399 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,400,&DAT_01880254);
    }
    uVar1 = (int)(uVar13 << 4 | iVar10 << 10) >> 10;
    if (uVar6 != 0 && uVar14 != uVar1) goto LAB_00f693b0;
    if ((uVar1 < 0x80000000) || (uVar15 != 0)) {
      if (((int)uVar1 < 0) || (uVar15 == 1 && uVar16 != uVar1 / 100)) goto LAB_00f693b0;
      uVar12 = uVar12 & uVar17 != uVar1 % 100;
    }
    if (((uVar12 != 0) ||
        ((*(int *)(param_2 + 0x60) == 1 &&
         (*(uint *)(param_2 + 100) != (uVar13 & 0x3f | (uint)((byte)(&DAT_0035d4d3)[uVar4] >> 4)))))
        ) || ((*(byte *)(param_2 + 0xa8) != 7 &&
              (iVar10 = uVar9 + uVar7,
              (uint)*(byte *)(param_2 + 0xa8) !=
              (iVar10 + ((uint)((short)iVar10 * 0x2493) >> 0x10) * -7 & 0xffff)))))
    goto LAB_00f693b0;
  }
  else {
    uVar4 = 1;
    if (uVar6 != 0) goto LAB_00f68e20;
    uVar8 = 0;
    if (99 < uVar17) goto LAB_00f68fbc;
    uVar4 = 0x76c;
    if (uVar17 < 0x46) {
      uVar4 = 2000;
    }
LAB_00f68f04:
    uVar7 = uVar4 + uVar17;
    uVar8 = 1;
    if (iVar10 != 0) goto LAB_00f68e98;
LAB_00f68ff8:
    bVar18 = uVar8 != 0;
    if (bVar18) {
      uVar4 = *(uint *)(param_2 + 0x60);
    }
    bVar19 = uVar4 != 0;
    if (bVar18 && bVar19) {
      uVar4 = (uint)*(byte *)(param_2 + 0xa8);
    }
    if ((!bVar18 || !bVar19) || uVar4 == 7) {
      local_2b = 2;
LAB_00f69014:
      param_1[1] = local_2b;
      *param_1 = 1;
      return;
    }
    uVar8 = FUN_00f6b1e0(uVar7,*(undefined4 *)(param_2 + 100));
    if (uVar8 == 0) {
      local_2b = 0;
      goto LAB_00f69014;
    }
    iVar10 = FUN_00f696b0(param_2,uVar8);
LAB_00f691dc:
    if (iVar10 == 0) goto LAB_00f693b0;
  }
  iVar10 = FUN_00f69544(param_2,uVar8);
  if (iVar10 == 0) {
LAB_00f693b0:
    param_1[1] = 1;
    *param_1 = 1;
    return;
  }
  if (*(int *)(param_2 + 0x40) == 1) {
    uVar4 = (uVar8 & 0x1fff) >> 3;
    if (0x2dc < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,0x2dd,&DAT_01880224);
    }
    if (*(int *)(param_2 + 0x44) != ((uVar4 + (byte)""[uVar4] >> 6) - 1) / 3 + 1) goto LAB_00f693b0;
  }
  *(uint *)(param_1 + 4) = uVar8;
  *param_1 = 0;
  return;
}

