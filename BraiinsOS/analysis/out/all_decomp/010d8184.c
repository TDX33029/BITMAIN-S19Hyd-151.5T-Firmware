// FUN_010d8184 @ 010d8184 size=1396 calls_out=2 calls_in=1
// strings: 

undefined1 *
FUN_010d8184(undefined1 *param_1,undefined1 *param_2,uint *param_3,uint param_4,int param_5,
            undefined1 *param_6,undefined1 *param_7,int param_8)

{
  sbyte sVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  uint *puVar17;
  
  puVar4 = param_1;
  if (((uint)param_2 & 0xff) != 0) {
    if (param_4 == 0) {
      return (undefined1 *)0x0;
    }
    if (*param_3 == 0x2d) {
      if (param_5 != 0) {
        return &DAT_00000001;
      }
      *param_3 = 0xfffd;
      puVar9 = param_3 + (param_4 - 1);
      uVar3 = *puVar9;
      *param_6 = 1;
      if (uVar3 == 0x2d) {
LAB_010d820c:
        *puVar9 = 0xfffd;
        *param_6 = 1;
      }
    }
    else {
      puVar9 = param_3 + (param_4 - 1);
      if (*puVar9 == 0x2d) {
        if (param_5 != 0) {
          return &DAT_00000001;
        }
        goto LAB_010d820c;
      }
    }
    puVar4 = (undefined1 *)((uint)param_2 & 0xff);
    if (((puVar4 != &DAT_00000001) && (3 < param_4)) &&
       (puVar4 = (undefined1 *)param_3[2], puVar4 == &DAT_0000002d)) {
      param_2 = (undefined1 *)param_3[3];
      if (param_5 == 0 && param_2 == &DAT_0000002d) {
        param_3[2] = 0xfffd;
        param_3[3] = 0xfffd;
        puVar4 = &DAT_00000001;
        *param_6 = 1;
        param_2 = param_6;
      }
      else {
        puVar4 = &DAT_00000001;
        if (param_2 == &DAT_0000002d) {
          return puVar4;
        }
      }
    }
  }
  if (param_4 != 0) {
    puVar4 = param_7;
  }
  if (param_4 != 0 && puVar4 != (undefined1 *)0x0) {
    piVar5 = *(int **)(param_1 + 0xc0);
    uVar3 = *param_3;
    uVar11 = 0xffff;
    if ((char)piVar5[10] != '\0') {
      uVar11 = 0xfff;
    }
    if (uVar11 < uVar3) {
      if ((uint)piVar5[6] <= uVar3) {
        uVar11 = piVar5[4] - 2;
        if ((uint)piVar5[4] <= uVar11) goto LAB_010d8488;
        goto LAB_010d83fc;
      }
      iVar7 = 0x40;
      if ((char)piVar5[10] == '\0') {
        iVar7 = 0x3fc;
      }
      uVar6 = piVar5[1];
      uVar11 = iVar7 + (uVar3 >> 0xe);
      if (uVar11 < uVar6) {
        iVar7 = *piVar5;
        uVar11 = ((uVar3 & 0x3fff) >> 9) + (uint)*(ushort *)(iVar7 + uVar11 * 2);
        if (uVar6 <= uVar11) goto LAB_010d83a8;
        uVar2 = *(ushort *)(iVar7 + uVar11 * 2);
        if (-1 < (short)uVar2) {
          uVar11 = ((uVar3 & 0x1ff) >> 4) + (uint)uVar2;
          if (uVar6 <= uVar11) goto LAB_010d83a8;
          uVar11 = (uint)*(ushort *)(iVar7 + uVar11 * 2);
LAB_010d8470:
          uVar11 = uVar11 + (uVar3 & 0xf);
          if ((uint)piVar5[4] <= uVar11) goto LAB_010d8488;
          goto LAB_010d83fc;
        }
        uVar11 = (uVar3 >> 4 & 0x18 | (uVar3 & 0x1ff) >> 7) + (uVar2 & 0x7fff);
        if (uVar11 < uVar6) {
          uVar8 = uVar3 >> 4 & 7;
          uVar10 = uVar8 + uVar11 + 1;
          if (uVar10 < uVar6) {
            uVar11 = (uint)*(ushort *)(iVar7 + uVar11 * 2) << uVar8 * 2 + 2 & 0x30000 |
                     (uint)*(ushort *)(iVar7 + uVar10 * 2);
            goto LAB_010d8470;
          }
        }
        uVar11 = piVar5[4] - 1;
        if (uVar11 < (uint)piVar5[4]) goto LAB_010d83fc;
      }
      else {
LAB_010d83a8:
        uVar11 = piVar5[4] - 1;
        if (uVar11 < (uint)piVar5[4]) goto LAB_010d83fc;
      }
LAB_010d8488:
      sVar1 = (sbyte)piVar5[0xb];
    }
    else {
      if ((uint)piVar5[1] <= uVar3 >> 6) goto LAB_010d83a8;
      uVar11 = (uVar3 & 0x3f) + (uint)*(ushort *)(*piVar5 + (uVar3 >> 6) * 2);
      if ((uint)piVar5[4] <= uVar11) goto LAB_010d8488;
LAB_010d83fc:
      sVar1 = *(sbyte *)(piVar5[3] + uVar11);
    }
    param_2 = param_1;
    if ((1 << sVar1 & 0x1c0U) != 0) {
      if (param_5 != 0) {
        return &DAT_00000001;
      }
      *param_3 = 0xfffd;
      *param_6 = 1;
      if (param_8 == 0) {
        if (param_4 < 0x3e9) {
          return (undefined1 *)0x0;
        }
LAB_010d86b8:
        param_3[1000] = 0xfffd;
        *param_6 = 1;
        return (undefined1 *)0x0;
      }
      goto LAB_010d84c4;
    }
  }
  if (param_8 != 0) {
    param_2 = param_1;
  }
  param_1 = param_2;
  if (param_8 == 0 || param_4 == 0) {
LAB_010d82a8:
    if (param_4 != 0) {
      iVar7 = param_4 << 2;
      puVar9 = param_3;
      do {
        if (0x7f < *puVar9) {
          if (param_4 < 0x3e9) {
            return (undefined1 *)(uint)(1000 < param_4);
          }
          if (param_5 != 0) {
            return (undefined1 *)(uint)(1000 < param_4);
          }
          goto LAB_010d86b8;
        }
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + -4;
      } while (iVar7 != 0);
    }
    return (undefined1 *)0x0;
  }
LAB_010d84c4:
  iVar7 = param_4 * 4;
  iVar15 = 0;
  uVar16 = *(undefined4 *)(param_1 + 200);
  piVar5 = (int *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0xcc) == 0) {
    piVar5 = *(int **)(param_1 + 0xd0);
  }
  uVar3 = 0;
  puVar9 = param_3;
LAB_010d8538:
  iVar7 = iVar7 + -4;
  puVar9 = puVar9 + 1;
  puVar17 = param_3 + uVar3;
  uVar11 = *puVar17;
  if ((uVar11 & 0xfffffffe) == 0x200c) {
    if (uVar3 != 0) {
      uVar8 = puVar17[-1];
      uVar6 = 0xffff;
      if ((char)piVar5[0xb] != '\0') {
        uVar6 = 0xfff;
      }
      if (uVar6 < uVar8) {
        if (uVar8 < (uint)piVar5[7]) {
          uVar6 = FUN_010d3304(piVar5);
        }
        else {
          uVar6 = piVar5[5] - 2;
        }
      }
      else if (uVar8 >> 6 < (uint)piVar5[2]) {
        uVar6 = (uVar8 & 0x3f) + (uint)*(ushort *)(piVar5[1] + (uVar8 >> 6) * 2);
      }
      else {
        uVar6 = piVar5[5] - 1;
      }
      piVar14 = piVar5;
      if (uVar6 < (uint)piVar5[5]) {
        piVar14 = (int *)(piVar5[4] + uVar6 * 4);
      }
      if (*piVar14 == 0xd809) goto LAB_010d8520;
      iVar12 = iVar15;
      if (uVar11 != 0x200d) {
        do {
          if (iVar12 == 0) break;
          uVar11 = FUN_010dcd04(uVar16,*(undefined4 *)((int)param_3 + (-4 - iVar12)));
          if ((1 << (uVar11 & 0x1f) & 0xcU) != 0) {
            puVar13 = puVar9;
            iVar12 = iVar7;
            goto LAB_010d8648;
          }
          iVar12 = iVar12 + 4;
        } while ((uVar11 & 0xff) == 5);
      }
    }
    goto joined_r0x010d869c;
  }
  goto LAB_010d8520;
  while( true ) {
    uVar11 = FUN_010dcd04(uVar16,*puVar13);
    if ((1 << (uVar11 & 0x1f) & 0x14U) != 0) goto LAB_010d8520;
    puVar13 = puVar13 + 1;
    iVar12 = iVar12 + -4;
    if ((uVar11 & 0xff) != 5) break;
LAB_010d8648:
    if (iVar12 == 0) break;
  }
joined_r0x010d869c:
  if (param_5 != 0) {
    return &DAT_00000001;
  }
  *puVar17 = 0xfffd;
  *param_6 = 1;
LAB_010d8520:
  uVar3 = uVar3 + 1;
  iVar15 = iVar15 + -4;
  if (uVar3 == param_4) goto LAB_010d82a8;
  goto LAB_010d8538;
}

