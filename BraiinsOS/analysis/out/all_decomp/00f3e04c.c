// FUN_00f3e04c @ 00f3e04c size=3384 calls_out=9 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x00f3ec2c) */
/* WARNING: Removing unreachable block (ram,0x00f3eb5c) */

int FUN_00f3e04c(undefined1 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    piVar13 = (int *)*param_2;
    iVar9 = piVar13[2];
    if ((uint)(*piVar13 - iVar9) < 4) {
      FUN_00f411dc(piVar13,iVar9,4,1,1);
      iVar9 = piVar13[2];
    }
    iVar4 = piVar13[1];
    uVar7 = 0x6c6c756e;
    goto LAB_00f3e3b0;
  case 1:
    piVar13 = (int *)*param_2;
    if (param_1[1] == '\0') {
      iVar9 = piVar13[2];
      if ((uint)(*piVar13 - iVar9) < 5) {
        FUN_00f411dc(piVar13,iVar9,5,1,1);
        iVar9 = piVar13[2];
      }
      iVar4 = piVar13[1];
      piVar13[2] = iVar9 + 5;
      *(undefined4 *)(iVar4 + iVar9) = 0x736c6166;
      *(undefined1 *)((undefined4 *)(iVar4 + iVar9) + 1) = 0x65;
      return 0;
    }
    iVar9 = piVar13[2];
    if ((uint)(*piVar13 - iVar9) < 4) {
      FUN_00f411dc(piVar13,iVar9,4,1,1);
      iVar9 = piVar13[2];
    }
    iVar4 = piVar13[1];
    uVar7 = 0x65757274;
LAB_00f3e3b0:
    *(undefined4 *)(iVar4 + iVar9) = uVar7;
    piVar13[2] = iVar9 + 4;
    return 0;
  case 2:
    puVar3 = (ulonglong *)(param_1 + 0x10);
    piVar13 = (int *)*param_2;
    if (*(int *)(param_1 + 8) == 2) {
      uVar18 = *puVar3;
      uVar10 = (uint)(uVar18 >> 0x20);
      if ((int)uVar18 == 0 && (uVar18 & 0xfffff00000000) == 0) {
        if ((int)uVar18 == 0 && (uVar10 & 0x7fffffff) == 0x7ff00000) goto LAB_00f3e7b0;
      }
      else if ((~uVar10 & 0x7ff00000) == 0) {
LAB_00f3e7b0:
        iVar9 = piVar13[2];
        if ((uint)(*piVar13 - iVar9) < 4) {
          FUN_00f411dc(piVar13,iVar9,4,1,1);
          iVar9 = piVar13[2];
        }
        *(undefined4 *)(piVar13[1] + iVar9) = 0x6c6c756e;
        piVar13[2] = iVar9 + 4;
        return 0;
      }
      iVar9 = FUN_016d1b20(local_50);
      uVar10 = iVar9 - (int)local_50;
      iVar9 = piVar13[2];
      if ((uint)(*piVar13 - iVar9) < uVar10) {
        FUN_00f411dc(piVar13,iVar9,uVar10,1,1);
        iVar9 = piVar13[2];
      }
      iVar4 = piVar13[1];
      puVar5 = local_50;
      goto LAB_00f3eac8;
    }
    if (*(int *)(param_1 + 8) == 1) {
      uVar8 = *(uint *)(param_1 + 0x14);
      uVar10 = (int)uVar8 >> 0x1f;
      iVar9 = 0x14;
      uVar2 = (uint)*puVar3 ^ uVar10;
      uVar11 = uVar2 - uVar10;
      uVar10 = (uVar8 ^ uVar10) - (uVar10 + (uVar2 < uVar10));
      uVar17 = CONCAT44(uVar10,uVar11);
      if (uVar10 == 0 && (9999 < uVar11) <= uVar10) {
        if ((uint)(uVar11 < 100) <= -uVar10) goto LAB_00f3e9b4;
LAB_00f3e324:
        uVar2 = (uint)((ulonglong)uVar17 >> 0x20);
        uVar10 = (uint)uVar17;
        iVar4 = iVar9;
        if (uVar2 != 0 || uVar2 < (9 < uVar10)) goto LAB_00f3e334;
LAB_00f3ea04:
        iVar9 = iVar4 + -1;
        *(byte *)((int)local_50 + iVar4 + -1) = (byte)uVar10 | 0x30;
      }
      else {
        iVar4 = 0;
        do {
          iVar9 = iVar4;
          iVar6 = (int)((ulonglong)uVar17 >> 0x20);
          uVar12 = (uint)uVar17;
          uVar17 = FUN_01846088(uVar12,iVar6,10000,0);
          uVar11 = (uint)uVar17;
          uVar2 = uVar12 + uVar11 * -10000;
          uVar10 = (uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_50 + iVar9 + 0x10) =
               *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
          *(undefined2 *)((int)local_50 + iVar9 + 0x12) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar2 + uVar10 * -100 & 0xffff) * 2);
          iVar4 = iVar9 + -4;
        } while ((uint)(uVar12 < 100000000) <= (uint)-iVar6);
        iVar9 = iVar9 + 0x10;
        if ((uint)-(int)((ulonglong)uVar17 >> 0x20) < (uint)(uVar11 < 100)) goto LAB_00f3e324;
LAB_00f3e9b4:
        iVar4 = iVar9 + -2;
        uVar10 = (uint)((short)((uVar11 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_50 + iVar9 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar11 + uVar10 * -100 & 0xffff) * 2);
        if (uVar10 < 10) goto LAB_00f3ea04;
LAB_00f3e334:
        iVar9 = iVar4 + -2;
        *(undefined2 *)((int)local_50 + iVar4 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
      }
      iVar6 = iVar9;
      if (0x7fffffff < uVar8) {
        iVar6 = iVar9 + -1;
        *(undefined1 *)((int)local_50 + iVar9 + -1) = 0x2d;
      }
    }
    else {
      uVar10 = (uint)*puVar3;
      uVar2 = *(uint *)(param_1 + 0x14);
      uVar18 = *puVar3;
      iVar9 = 0x14;
      if (uVar2 == 0 && (9999 < uVar10) <= uVar2) {
        if ((uint)(uVar10 < 100) <= -uVar2) goto LAB_00f3ea44;
LAB_00f3e8a4:
        uVar10 = (uint)(uVar18 >> 0x20);
        uVar2 = (uint)uVar18;
        iVar4 = iVar9;
        if (uVar10 != 0 || uVar10 < (9 < uVar2)) goto LAB_00f3e8b4;
LAB_00f3ea94:
        iVar6 = iVar4 + -1;
        *(byte *)((int)local_50 + iVar4 + -1) = (byte)uVar2 | 0x30;
      }
      else {
        iVar4 = 0;
        uVar18 = *puVar3;
        do {
          iVar9 = iVar4;
          iVar6 = (int)(uVar18 >> 0x20);
          uVar8 = (uint)uVar18;
          uVar18 = FUN_01846088(uVar8,iVar6,10000,0);
          uVar10 = (uint)uVar18;
          uVar11 = uVar8 + uVar10 * -10000;
          uVar2 = (uint)((short)((uVar11 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_50 + iVar9 + 0x10) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2)
          ;
          *(undefined2 *)((int)local_50 + iVar9 + 0x12) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar11 + uVar2 * -100 & 0xffff) * 2);
          iVar4 = iVar9 + -4;
        } while ((uint)(uVar8 < 100000000) <= (uint)-iVar6);
        iVar9 = iVar9 + 0x10;
        if ((uint)-(int)(uVar18 >> 0x20) < (uint)(uVar10 < 100)) goto LAB_00f3e8a4;
LAB_00f3ea44:
        iVar4 = iVar9 + -2;
        uVar2 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_50 + iVar9 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar10 + uVar2 * -100 & 0xffff) * 2);
        if (uVar2 < 10) goto LAB_00f3ea94;
LAB_00f3e8b4:
        iVar6 = iVar4 + -2;
        *(undefined2 *)((int)local_50 + iVar4 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      }
    }
    iVar9 = piVar13[2];
    puVar5 = (uint *)((int)local_50 + iVar6);
    uVar10 = 0x14 - iVar6;
    if ((uint)(*piVar13 - iVar9) < uVar10) {
      FUN_00f411dc(piVar13,iVar9,uVar10,1,1);
      iVar9 = piVar13[2];
    }
    iVar4 = piVar13[1];
LAB_00f3eac8:
    FUN_016dd1aa(iVar4 + iVar9,puVar5,uVar10);
    piVar13[2] = iVar9 + uVar10;
    return 0;
  case 3:
    FUN_00f3d9b0(local_50,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    iVar9 = 0;
    if ((char)local_50[0] != '\x04') {
      iVar9 = FUN_0157c4a0(local_50[0],local_50[1]);
      return iVar9;
    }
    break;
  case 4:
    piVar13 = (int *)*param_2;
    iVar4 = param_2[3];
    iVar6 = *(int *)(param_1 + 8);
    iVar14 = *(int *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[3] = iVar4 + 1;
    iVar9 = piVar13[2];
    if (*piVar13 == iVar9) {
      FUN_00f411dc(piVar13,iVar9,1,1,1);
      iVar9 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar9) = 0x5b;
    iVar9 = iVar9 + 1;
    piVar13[2] = iVar9;
    if (iVar14 == 0) {
      iVar6 = *piVar13;
      param_2[3] = iVar4;
      if (iVar6 == iVar9) {
        FUN_00f411dc(piVar13,iVar9,1,1,1);
        iVar4 = piVar13[2];
        iVar9 = iVar4;
      }
      else {
        iVar4 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar9) = 0x5d;
      piVar13[2] = iVar4 + 1;
      return 0;
    }
    iVar4 = iVar6 + iVar14 * 0x18;
    bVar1 = true;
    while( true ) {
      piVar13 = (int *)*param_2;
      if (bVar1) {
        iVar9 = piVar13[2];
        if (*piVar13 == iVar9) {
          FUN_00f411dc(piVar13,iVar9,1,1,1);
          iVar9 = piVar13[2];
        }
        iVar14 = iVar9 + 1;
        *(undefined1 *)(piVar13[1] + iVar9) = 10;
      }
      else {
        iVar9 = piVar13[2];
        if ((uint)(*piVar13 - iVar9) < 2) {
          FUN_00f411dc(piVar13,iVar9,2,1,1);
          iVar9 = piVar13[2];
        }
        iVar14 = iVar9 + 2;
        *(undefined2 *)(piVar13[1] + iVar9) = 0xa2c;
      }
      iVar9 = param_2[3];
      uVar7 = param_2[1];
      uVar10 = param_2[2];
      piVar13[2] = iVar14;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        if ((uint)(*piVar13 - iVar14) < uVar10) {
          FUN_00f411dc(piVar13,iVar14,uVar10,1,1);
          iVar14 = piVar13[2];
        }
        FUN_016dd1aa(piVar13[1] + iVar14,uVar7,uVar10);
        iVar14 = iVar14 + uVar10;
        piVar13[2] = iVar14;
      }
      iVar9 = FUN_00f3e04c(iVar6,param_2);
      if (iVar9 != 0) break;
      iVar6 = iVar6 + 0x18;
      *(undefined1 *)(param_2 + 4) = 1;
      bVar1 = false;
      if (iVar6 == iVar4) {
        piVar13 = (int *)*param_2;
        iVar4 = piVar13[2];
        iVar9 = param_2[3] + -1;
        iVar6 = *piVar13;
        param_2[3] = iVar9;
        if (iVar6 == iVar4) {
          FUN_00f411dc(piVar13,iVar4,1,1,1);
          iVar4 = piVar13[2];
        }
        iVar6 = iVar4 + 1;
        uVar7 = param_2[1];
        uVar10 = param_2[2];
        *(undefined1 *)(piVar13[1] + iVar4) = 10;
        piVar13[2] = iVar6;
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if ((uint)(*piVar13 - iVar6) < uVar10) {
            FUN_00f411dc(piVar13,iVar6,uVar10,1,1);
            iVar6 = piVar13[2];
          }
          FUN_016dd1aa(piVar13[1] + iVar6,uVar7,uVar10);
          iVar6 = iVar6 + uVar10;
          piVar13[2] = iVar6;
        }
        if (*piVar13 == iVar6) {
          FUN_00f411dc(piVar13,iVar6,1,1,1);
          iVar6 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar6) = 0x5d;
        piVar13[2] = iVar6 + 1;
        return 0;
      }
    }
    break;
  case 5:
    piVar13 = (int *)*param_2;
    *(undefined1 *)(param_2 + 4) = 0;
    iVar14 = param_2[3];
    iVar4 = piVar13[2];
    iVar9 = *(int *)(param_1 + 0xc);
    iVar6 = *piVar13;
    param_2[3] = iVar14 + 1;
    if (iVar6 == iVar4) {
      FUN_00f411dc(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    iVar6 = 0x100;
    *(undefined1 *)(piVar13[1] + iVar4) = 0x7b;
    iVar4 = iVar4 + 1;
    piVar13[2] = iVar4;
    if (iVar9 == 0) {
      iVar6 = *piVar13;
      param_2[3] = iVar14;
      if (iVar6 == iVar4) {
        FUN_00f411dc(piVar13,iVar4,1,1,1);
        iVar4 = piVar13[2];
        iVar14 = iVar4;
      }
      else {
        iVar14 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar4) = 0x7d;
      iVar6 = 0;
      piVar13[2] = iVar14 + 1;
    }
    local_50[2] = *(uint *)(param_1 + 4);
    local_50[3] = *(uint *)(param_1 + 8);
    if (local_50[2] == 0) {
      iVar9 = 0;
    }
    local_50[0] = (uint)(local_50[2] != 0);
    local_3c = 0;
    local_50[1] = 0;
    local_40 = local_50[0];
    local_38 = local_50[2];
    local_34 = local_50[3];
    local_30 = iVar9;
    uVar17 = FUN_00f45584(local_50);
    iVar9 = (int)uVar17;
    while (iVar9 != 0) {
      uVar16 = *(undefined4 *)((int)uVar17 + 8);
      piVar13 = (int *)*param_2;
      uVar7 = *(undefined4 *)((int)uVar17 + 4);
      if (iVar6 == 0x100) {
        iVar9 = piVar13[2];
        if (*piVar13 == iVar9) {
          FUN_00f411dc(piVar13,iVar9,1,1,1);
          iVar9 = piVar13[2];
        }
        iVar4 = iVar9 + 1;
        *(undefined1 *)(piVar13[1] + iVar9) = 10;
      }
      else {
        iVar9 = piVar13[2];
        if ((uint)(*piVar13 - iVar9) < 2) {
          FUN_00f411dc(piVar13,iVar9,2,1,1);
          iVar9 = piVar13[2];
        }
        iVar4 = iVar9 + 2;
        *(undefined2 *)(piVar13[1] + iVar9) = 0xa2c;
      }
      iVar9 = param_2[3];
      uVar15 = param_2[1];
      uVar10 = param_2[2];
      piVar13[2] = iVar4;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        if ((uint)(*piVar13 - iVar4) < uVar10) {
          FUN_00f411dc(piVar13,iVar4,uVar10,1,1);
          iVar4 = piVar13[2];
        }
        FUN_016dd1aa(piVar13[1] + iVar4,uVar15,uVar10);
        iVar4 = iVar4 + uVar10;
        piVar13[2] = iVar4;
      }
      FUN_00f3d9b0(&local_58,*param_2,uVar7,uVar16);
      if ((char)local_58 != '\x04') {
        iVar9 = FUN_0157c4a0(local_58,local_54);
        return iVar9;
      }
      piVar13 = (int *)*param_2;
      iVar9 = piVar13[2];
      if ((uint)(*piVar13 - iVar9) < 2) {
        FUN_00f411dc(piVar13,iVar9,2,1,1);
        iVar9 = piVar13[2];
      }
      piVar13[2] = iVar9 + 2;
      *(undefined2 *)(piVar13[1] + iVar9) = 0x203a;
      iVar9 = FUN_00f3e04c((int)((ulonglong)uVar17 >> 0x20),param_2);
      if (iVar9 != 0) {
        return iVar9;
      }
      iVar6 = 0x200;
      *(undefined1 *)(param_2 + 4) = 1;
      uVar17 = FUN_00f45584(local_50);
      iVar9 = (int)uVar17;
    }
    iVar9 = 0;
    if (iVar6 != 0) {
      piVar13 = (int *)*param_2;
      iVar9 = param_2[3] + -1;
      param_2[3] = iVar9;
      if (*(char *)(param_2 + 4) == '\0') {
        iVar4 = piVar13[2];
      }
      else {
        iVar6 = piVar13[2];
        if (*piVar13 == iVar6) {
          FUN_00f411dc(piVar13,iVar6,1,1,1);
          iVar6 = piVar13[2];
        }
        iVar4 = iVar6 + 1;
        uVar7 = param_2[1];
        uVar10 = param_2[2];
        *(undefined1 *)(piVar13[1] + iVar6) = 10;
        piVar13[2] = iVar4;
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if ((uint)(*piVar13 - iVar4) < uVar10) {
            FUN_00f411dc(piVar13,iVar4,uVar10,1,1);
            iVar4 = piVar13[2];
          }
          FUN_016dd1aa(piVar13[1] + iVar4,uVar7,uVar10);
          iVar4 = iVar4 + uVar10;
          piVar13[2] = iVar4;
        }
      }
      if (*piVar13 == iVar4) {
        FUN_00f411dc(piVar13,iVar4,1,1,1);
        iVar4 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar4) = 0x7d;
      piVar13[2] = iVar4 + 1;
      return 0;
    }
  }
  return iVar9;
}

