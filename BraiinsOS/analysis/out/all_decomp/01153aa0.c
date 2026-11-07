// FUN_01153aa0 @ 01153aa0 size=2460 calls_out=8 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x01154358) */
/* WARNING: Removing unreachable block (ram,0x01153e1c) */
/* WARNING: Removing unreachable block (ram,0x011542f8) */

void FUN_01153aa0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined4 local_54;
  undefined1 auStack_50 [16];
  undefined2 local_40 [14];
  
  local_54 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    param_2 = (int *)*param_2;
    iVar13 = param_2[2];
    if ((uint)(*param_2 - iVar13) < 4) {
      FUN_01150aa8(param_2,iVar13,4);
      iVar13 = param_2[2];
    }
    iVar5 = param_2[1];
    uVar7 = 0x6c6c756e;
    break;
  case 1:
    param_2 = (int *)*param_2;
    if (param_1[1] == '\0') {
      iVar13 = param_2[2];
      if ((uint)(*param_2 - iVar13) < 5) {
        FUN_01150aa8(param_2,iVar13,5);
        iVar13 = param_2[2];
      }
      iVar5 = param_2[1];
      param_2[2] = iVar13 + 5;
      *(undefined4 *)(iVar5 + iVar13) = 0x736c6166;
      *(undefined1 *)((undefined4 *)(iVar5 + iVar13) + 1) = 0x65;
      return;
    }
    iVar13 = param_2[2];
    if ((uint)(*param_2 - iVar13) < 4) {
      FUN_01150aa8(param_2,iVar13,4);
      iVar13 = param_2[2];
    }
    iVar5 = param_2[1];
    uVar7 = 0x65757274;
    break;
  case 2:
    puVar4 = (ulonglong *)(param_1 + 0x10);
    piVar2 = (int *)*param_2;
    if (*(int *)(param_1 + 8) == 2) {
      uVar20 = *puVar4;
      uVar18 = (uint)(uVar20 >> 0x20);
      if ((int)uVar20 == 0 && (uVar20 & 0xfffff00000000) == 0) {
        if ((int)uVar20 == 0 && (uVar18 & 0x7fffffff) == 0x7ff00000) goto LAB_01153fec;
      }
      else if ((~uVar18 & 0x7ff00000) == 0) {
LAB_01153fec:
        iVar13 = piVar2[2];
        if ((uint)(*piVar2 - iVar13) < 4) {
          FUN_01150aa8(piVar2,iVar13,4);
          iVar13 = piVar2[2];
        }
        *(undefined4 *)(piVar2[1] + iVar13) = 0x6c6c756e;
        piVar2[2] = iVar13 + 4;
        return;
      }
      iVar13 = FUN_016d1b20(auStack_50);
      uVar18 = iVar13 - (int)auStack_50;
      iVar13 = piVar2[2];
      if ((uint)(*piVar2 - iVar13) < uVar18) {
        FUN_01150aa8(piVar2,iVar13,uVar18);
        iVar13 = piVar2[2];
      }
      iVar5 = piVar2[1];
      puVar8 = auStack_50;
      goto LAB_01154298;
    }
    local_54 = piVar2;
    if (*(int *)(param_1 + 8) == 1) {
      uVar12 = *(uint *)(param_1 + 0x14);
      uVar18 = (int)uVar12 >> 0x1f;
      iVar13 = 0x14;
      uVar6 = (uint)*puVar4 ^ uVar18;
      uVar14 = uVar6 - uVar18;
      uVar18 = (uVar12 ^ uVar18) - (uVar18 + (uVar6 < uVar18));
      uVar19 = CONCAT44(uVar18,uVar14);
      if (uVar18 == 0 && (9999 < uVar14) <= uVar18) {
        local_54 = param_2;
        if (-uVar18 < (uint)(uVar14 < 100)) goto LAB_01153c54;
LAB_0115418c:
        iVar5 = iVar13 + -2;
        uVar18 = (uint)((short)((uVar14 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(auStack_50 + iVar13 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar14 + uVar18 * -100 & 0xffff) * 2);
        if (9 < uVar18) goto LAB_01153c64;
LAB_011541dc:
        iVar13 = iVar5 + -1;
        auStack_50[iVar5 + -1] = (byte)uVar18 | 0x30;
      }
      else {
        iVar5 = 0;
        do {
          iVar13 = iVar5;
          iVar11 = (int)((ulonglong)uVar19 >> 0x20);
          uVar15 = (uint)uVar19;
          uVar19 = FUN_01846088(uVar15,iVar11,10000,0);
          uVar14 = (uint)uVar19;
          uVar6 = uVar15 + uVar14 * -10000;
          uVar18 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_40 + iVar13) = *(undefined2 *)(&DAT_0040f4ca + uVar18 * 2);
          *(undefined2 *)((int)local_40 + iVar13 + 2) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar6 + uVar18 * -100 & 0xffff) * 2);
          iVar5 = iVar13 + -4;
        } while ((uint)(uVar15 < 100000000) <= (uint)-iVar11);
        iVar13 = iVar13 + 0x10;
        piVar2 = local_54;
        if ((uint)(uVar14 < 100) <= (uint)-(int)((ulonglong)uVar19 >> 0x20)) goto LAB_0115418c;
LAB_01153c54:
        uVar6 = (uint)((ulonglong)uVar19 >> 0x20);
        uVar18 = (uint)uVar19;
        iVar5 = iVar13;
        if (uVar6 == 0 && (9 < uVar18) <= uVar6) goto LAB_011541dc;
LAB_01153c64:
        iVar13 = iVar5 + -2;
        *(undefined2 *)(auStack_50 + iVar5 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar18 * 2);
      }
      iVar11 = iVar13;
      if (0x7fffffff < uVar12) {
        iVar11 = iVar13 + -1;
        auStack_50[iVar13 + -1] = 0x2d;
      }
    }
    else {
      uVar18 = (uint)*puVar4;
      uVar6 = *(uint *)(param_1 + 0x14);
      uVar20 = *puVar4;
      iVar13 = 0x14;
      if (uVar6 == 0 && (9999 < uVar18) <= uVar6) {
        local_54 = param_2;
        if (-uVar6 < (uint)(uVar18 < 100)) goto LAB_011540d8;
LAB_0115421c:
        iVar5 = iVar13 + -2;
        uVar6 = (uint)((short)((uVar18 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(auStack_50 + iVar13 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar18 + uVar6 * -100 & 0xffff) * 2);
        if (9 < uVar6) goto LAB_011540e8;
LAB_01154264:
        iVar11 = iVar5 + -1;
        auStack_50[iVar5 + -1] = (byte)uVar6 | 0x30;
      }
      else {
        iVar5 = 0;
        uVar20 = *puVar4;
        do {
          iVar13 = iVar5;
          iVar11 = (int)(uVar20 >> 0x20);
          uVar12 = (uint)uVar20;
          uVar20 = FUN_01846088(uVar12,iVar11,10000,0);
          uVar18 = (uint)uVar20;
          uVar14 = uVar12 + uVar18 * -10000;
          uVar6 = (uint)((short)((uVar14 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_40 + iVar13) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
          *(undefined2 *)((int)local_40 + iVar13 + 2) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar14 + uVar6 * -100 & 0xffff) * 2);
          iVar5 = iVar13 + -4;
        } while ((uint)(uVar12 < 100000000) <= (uint)-iVar11);
        iVar13 = iVar13 + 0x10;
        piVar2 = local_54;
        if ((uint)(uVar18 < 100) <= (uint)-(int)(uVar20 >> 0x20)) goto LAB_0115421c;
LAB_011540d8:
        uVar18 = (uint)(uVar20 >> 0x20);
        uVar6 = (uint)uVar20;
        iVar5 = iVar13;
        if (uVar18 == 0 && (9 < uVar6) <= uVar18) goto LAB_01154264;
LAB_011540e8:
        iVar11 = iVar5 + -2;
        *(undefined2 *)(auStack_50 + iVar5 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
      }
    }
    iVar13 = piVar2[2];
    puVar8 = auStack_50 + iVar11;
    uVar18 = 0x14 - iVar11;
    if ((uint)(*piVar2 - iVar13) < uVar18) {
      FUN_01150aa8(piVar2,iVar13,uVar18);
      iVar13 = piVar2[2];
    }
    iVar5 = piVar2[1];
LAB_01154298:
    FUN_016dd1aa(iVar5 + iVar13,puVar8,uVar18);
    piVar2[2] = iVar13 + uVar18;
    return;
  case 3:
    FUN_01153820(*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  case 4:
    param_2 = (int *)*param_2;
    iVar13 = *(int *)(param_1 + 8);
    iVar11 = *(int *)(param_1 + 0xc);
    iVar5 = param_2[2];
    if (*param_2 == iVar5) {
      FUN_01150aa8(param_2,iVar5,1);
      iVar5 = param_2[2];
    }
    piVar2 = local_54;
    *(undefined1 *)(param_2[1] + iVar5) = 0x5b;
    iVar5 = iVar5 + 1;
    param_2[2] = iVar5;
    if (iVar11 == 0) {
      if (*param_2 == iVar5) {
        FUN_01150aa8(param_2,iVar5,1);
        iVar5 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar5) = 0x5d;
      param_2[2] = iVar5 + 1;
      return;
    }
    FUN_01153aa0(iVar13,local_54);
    if (iVar11 != 1) {
      iVar5 = iVar11 * 0x18 + -0x18;
      do {
        iVar13 = iVar13 + 0x18;
        piVar16 = (int *)*piVar2;
        iVar11 = piVar16[2];
        if (*piVar16 == iVar11) {
          FUN_01150aa8(piVar16,iVar11,1);
          iVar11 = piVar16[2];
          piVar2 = local_54;
        }
        *(undefined1 *)(piVar16[1] + iVar11) = 0x2c;
        piVar16[2] = iVar11 + 1;
        FUN_01153aa0(iVar13,piVar2);
        iVar5 = iVar5 + -0x18;
      } while (iVar5 != 0);
    }
    piVar2 = (int *)*piVar2;
    iVar13 = piVar2[2];
    if (*piVar2 == iVar13) {
      FUN_01150aa8(piVar2,iVar13,1);
      iVar13 = piVar2[2];
    }
    iVar5 = piVar2[1];
    uVar9 = 0x5d;
    goto LAB_01153f48;
  case 5:
    param_2 = (int *)*param_2;
    iVar13 = *(int *)(param_1 + 0xc);
    iVar5 = param_2[2];
    if (*param_2 == iVar5) {
      FUN_01150aa8(param_2,iVar5,1);
      iVar5 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar5) = 0x7b;
    iVar5 = iVar5 + 1;
    iVar11 = 0x100;
    param_2[2] = iVar5;
    if (iVar13 == 0) {
      if (*param_2 == iVar5) {
        FUN_01150aa8(param_2,iVar5,1);
        iVar5 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar5) = 0x7d;
      iVar11 = 0;
      param_2[2] = iVar5 + 1;
    }
    uVar18 = *(uint *)(param_1 + 8);
    iVar5 = 0;
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      iVar13 = 0;
    }
    bVar3 = iVar1 != 0;
    for (; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (!bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a9ff4);
      }
      if (iVar5 == 0) {
        uVar6 = 0;
        iVar5 = iVar1;
        for (; uVar18 != 0; uVar18 = uVar18 - 1) {
          iVar5 = *(int *)(iVar5 + 0x198);
        }
        iVar1 = 0;
        if (*(short *)(iVar5 + 0x192) != 0) goto LAB_01153d9c;
LAB_01153dcc:
        do {
          iVar17 = *(int *)(iVar5 + 0x108);
          if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018aa004);
          }
          uVar6 = (uint)*(ushort *)(iVar5 + 400);
          iVar1 = iVar1 + 1;
          iVar5 = iVar17;
        } while (*(ushort *)(iVar17 + 0x192) <= uVar6);
      }
      else {
        uVar6 = uVar18;
        if (*(ushort *)(iVar5 + 0x192) <= uVar18) goto LAB_01153dcc;
LAB_01153d9c:
        iVar17 = iVar5;
      }
      if (iVar1 == 0) {
        uVar18 = uVar6 + 1;
        iVar5 = iVar17;
      }
      else {
        piVar2 = (int *)(iVar17 + uVar6 * 4 + 0x19c);
        do {
          iVar5 = *piVar2;
          iVar1 = iVar1 + -1;
          piVar2 = (int *)(iVar5 + 0x198);
        } while (iVar1 != 0);
        uVar18 = 0;
      }
      iVar1 = iVar17 + uVar6 * 0xc;
      uVar7 = *(undefined4 *)(iVar1 + 0x110);
      uVar10 = *(undefined4 *)(iVar1 + 0x114);
      if (iVar11 != 0x100) {
        piVar2 = (int *)*local_54;
        iVar11 = piVar2[2];
        if (*piVar2 == iVar11) {
          FUN_01150aa8(piVar2,iVar11,1);
          iVar11 = piVar2[2];
        }
        *(undefined1 *)(piVar2[1] + iVar11) = 0x2c;
        piVar2[2] = iVar11 + 1;
      }
      FUN_01153820(*local_54,uVar7,uVar10);
      piVar2 = (int *)*local_54;
      iVar11 = piVar2[2];
      if (*piVar2 == iVar11) {
        FUN_01150aa8(piVar2,iVar11,1);
        iVar11 = piVar2[2];
      }
      *(undefined1 *)(piVar2[1] + iVar11) = 0x3a;
      piVar2[2] = iVar11 + 1;
      FUN_01153aa0(iVar17 + uVar6 * 0x18,local_54);
      iVar11 = 0x200;
      bVar3 = true;
      iVar1 = 0;
    }
    if (iVar11 == 0) {
      return;
    }
    piVar2 = (int *)*local_54;
    iVar13 = piVar2[2];
    if (*piVar2 == iVar13) {
      FUN_01150aa8(piVar2,iVar13,1);
      iVar13 = piVar2[2];
    }
    iVar5 = piVar2[1];
    uVar9 = 0x7d;
LAB_01153f48:
    *(undefined1 *)(iVar5 + iVar13) = uVar9;
    piVar2[2] = iVar13 + 1;
    return;
  }
  *(undefined4 *)(iVar5 + iVar13) = uVar7;
  param_2[2] = iVar13 + 4;
  return;
}

