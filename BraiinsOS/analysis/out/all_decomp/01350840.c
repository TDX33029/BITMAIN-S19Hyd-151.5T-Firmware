// FUN_01350840 @ 01350840 size=1712 calls_out=1 calls_in=1
// strings: $anchor | $anchor | $dynamicAnchor

void FUN_01350840(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_30;
  int local_2c;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  pcVar7 = (char *)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    if ((*pcVar7 == '\x05') && (iVar13 = *(int *)(pcVar7 + 4), iVar13 != 0)) {
      iVar9 = *(int *)(pcVar7 + 8);
      while( true ) {
        uVar2 = *(ushort *)(iVar13 + 0x192);
        iVar15 = iVar13 + 0x10c;
        uVar11 = 0xffffffff;
        iVar12 = (uint)uVar2 * 0xc;
        do {
          if (iVar12 == 0) {
            uVar11 = (uint)uVar2;
            goto LAB_01350bc4;
          }
          uVar10 = *(uint *)(iVar15 + 8);
          uVar8 = uVar10;
          if (1 < uVar10) {
            uVar8 = 2;
          }
          iVar4 = FUN_016dd50a("id",*(undefined4 *)(iVar15 + 4),uVar8);
          if (iVar4 == 0) {
            iVar4 = 2 - uVar10;
          }
          iVar12 = iVar12 + -0xc;
          uVar11 = uVar11 + 1;
          iVar15 = iVar15 + 0xc;
        } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
        if (0 < iVar4 == iVar4 < 0) break;
LAB_01350bc4:
        if (iVar9 == 0) goto LAB_01350ef8;
        iVar9 = iVar9 + -1;
        iVar13 = *(int *)(iVar13 + uVar11 * 4 + 0x198);
      }
      pcVar14 = (char *)(iVar13 + uVar11 * 0x18);
      if (*pcVar14 == '\x03') {
        iVar13 = *(int *)(pcVar14 + 0xc);
        if ((iVar13 != 0) && (pcVar14 = *(char **)(pcVar14 + 8), *pcVar14 == '#')) {
          *(undefined1 *)(param_1 + 5) = 0;
          param_1[1] = 0;
          param_1[2] = pcVar14 + 1;
          param_1[3] = iVar13 + -1;
          param_1[4] = pcVar7;
          *param_1 = 3;
          return;
        }
        break;
      }
LAB_01350ef8:
      *param_1 = 2;
      return;
    }
    break;
  default:
    if ((*pcVar7 == '\x05') && (iVar13 = *(int *)(pcVar7 + 4), iVar13 != 0)) {
      iVar9 = *(int *)(pcVar7 + 8);
      while( true ) {
        uVar2 = *(ushort *)(iVar13 + 0x192);
        iVar15 = iVar13 + 0x10c;
        uVar11 = 0xffffffff;
        iVar12 = (uint)uVar2 * 0xc;
        do {
          if (iVar12 == 0) {
            uVar11 = (uint)uVar2;
            goto LAB_01350930;
          }
          uVar10 = *(uint *)(iVar15 + 8);
          uVar8 = uVar10;
          if (2 < uVar10) {
            uVar8 = 3;
          }
          iVar4 = FUN_016dd50a("$id",*(undefined4 *)(iVar15 + 4),uVar8);
          if (iVar4 == 0) {
            iVar4 = 3 - uVar10;
          }
          iVar12 = iVar12 + -0xc;
          uVar11 = uVar11 + 1;
          iVar15 = iVar15 + 0xc;
        } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
        if (0 < iVar4 == iVar4 < 0) break;
LAB_01350930:
        if (iVar9 == 0) goto LAB_01350df8;
        iVar9 = iVar9 + -1;
        iVar13 = *(int *)(iVar13 + uVar11 * 4 + 0x198);
      }
      pcVar14 = (char *)(iVar13 + uVar11 * 0x18);
      if (((*pcVar14 == '\x03') && (iVar13 = *(int *)(pcVar14 + 0xc), iVar13 != 0)) &&
         (pcVar14 = *(char **)(pcVar14 + 8), *pcVar14 == '#')) {
        *(undefined1 *)(param_1 + 5) = uVar1;
        param_1[3] = iVar13 + -1;
        param_1[1] = 0;
        param_1[2] = pcVar14 + 1;
        param_1[4] = pcVar7;
        *param_1 = 3;
        return;
      }
    }
LAB_01350df8:
    *param_1 = 2;
    return;
  case 3:
    uVar5 = 2;
    if ((*pcVar7 == '\x05') && (iVar13 = *(int *)(pcVar7 + 4), iVar13 != 0)) {
      iVar9 = *(int *)(pcVar7 + 8);
      while( true ) {
        uVar2 = *(ushort *)(iVar13 + 0x192);
        iVar15 = iVar13 + 0x10c;
        uVar11 = 0xffffffff;
        iVar12 = (uint)uVar2 * 0xc;
        do {
          if (iVar12 == 0) {
            uVar11 = (uint)uVar2;
            goto LAB_01350af4;
          }
          uVar10 = *(uint *)(iVar15 + 8);
          uVar8 = uVar10;
          if (6 < uVar10) {
            uVar8 = 7;
          }
          iVar4 = FUN_016dd50a("$anchor",*(undefined4 *)(iVar15 + 4),uVar8);
          if (iVar4 == 0) {
            iVar4 = 7 - uVar10;
          }
          iVar12 = iVar12 + -0xc;
          uVar11 = uVar11 + 1;
          iVar15 = iVar15 + 0xc;
        } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
        if (0 < iVar4 == iVar4 < 0) break;
LAB_01350af4:
        if (iVar9 == 0) {
          *param_1 = 2;
          return;
        }
        iVar9 = iVar9 + -1;
        iVar13 = *(int *)(iVar13 + uVar11 * 4 + 0x198);
      }
      uVar5 = 2;
      pcVar14 = (char *)(iVar13 + uVar11 * 0x18);
      if (*pcVar14 == '\x03') {
        uVar6 = *(undefined4 *)(pcVar14 + 0xc);
        uVar5 = 3;
        param_1[2] = *(undefined4 *)(pcVar14 + 8);
        *(undefined1 *)(param_1 + 5) = 3;
        param_1[1] = 0;
        param_1[3] = uVar6;
        param_1[4] = pcVar7;
      }
    }
    *param_1 = uVar5;
    return;
  case 4:
  case 5:
    if (*pcVar7 == '\x05') {
      iVar13 = *(int *)(pcVar7 + 4);
      if (iVar13 != 0) {
        local_2c = *(int *)(pcVar7 + 8);
        iVar9 = iVar13;
        local_30 = local_2c;
        while( true ) {
          uVar2 = *(ushort *)(iVar9 + 0x192);
          iVar15 = iVar9 + 0x10c;
          uVar11 = 0xffffffff;
          iVar12 = (uint)uVar2 * 0xc;
          do {
            if (iVar12 == 0) {
              uVar11 = (uint)uVar2;
              goto LAB_01350a0c;
            }
            uVar10 = *(uint *)(iVar15 + 8);
            uVar8 = uVar10;
            if (6 < uVar10) {
              uVar8 = 7;
            }
            iVar4 = FUN_016dd50a("$anchor",*(undefined4 *)(iVar15 + 4),uVar8);
            if (iVar4 == 0) {
              iVar4 = 7 - uVar10;
            }
            iVar12 = iVar12 + -0xc;
            uVar11 = uVar11 + 1;
            iVar15 = iVar15 + 0xc;
          } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
          if (0 < iVar4 == iVar4 < 0) break;
LAB_01350a0c:
          if (local_30 == 0) goto LAB_01350c7c;
          local_30 = local_30 + -1;
          iVar9 = *(int *)(iVar9 + uVar11 * 4 + 0x198);
        }
        pcVar14 = (char *)(iVar9 + uVar11 * 0x18);
        if (*pcVar14 == '\x03') {
          local_3c = 0;
          local_40 = *(undefined4 *)(pcVar14 + 8);
          local_44 = *(undefined4 *)(pcVar14 + 0xc);
          bVar3 = true;
          goto LAB_01350c98;
        }
LAB_01350c7c:
        local_3c = 2;
        bVar3 = false;
LAB_01350c98:
        uVar2 = *(ushort *)(iVar13 + 0x192);
        iVar12 = iVar13 + 0x10c;
        uVar11 = 0xffffffff;
        iVar9 = (uint)uVar2 * 0xc;
        do {
          if (iVar9 == 0) {
            uVar11 = (uint)uVar2;
            goto LAB_01350d18;
          }
          uVar10 = *(uint *)(iVar12 + 8);
          uVar8 = uVar10;
          if (0xd < uVar10) {
            uVar8 = 0xe;
          }
          iVar15 = FUN_016dd50a("$dynamicAnchor",*(undefined4 *)(iVar12 + 4),uVar8);
          if (iVar15 == 0) {
            iVar15 = 0xe - uVar10;
          }
          iVar9 = iVar9 + -0xc;
          uVar11 = uVar11 + 1;
          iVar12 = iVar12 + 0xc;
        } while ((char)((0 < iVar15) - (iVar15 < 0)) == '\x01');
        if (0 < iVar15 != iVar15 < 0) {
LAB_01350d18:
          if (local_2c == 0) goto LAB_01350d9c;
          local_2c = local_2c + -1;
          iVar13 = *(int *)(iVar13 + uVar11 * 4 + 0x198);
          goto LAB_01350c98;
        }
        pcVar14 = (char *)(iVar13 + uVar11 * 0x18);
        if (*pcVar14 == '\x03') {
          uVar5 = *(undefined4 *)(pcVar14 + 8);
          uVar6 = *(undefined4 *)(pcVar14 + 0xc);
          if (bVar3) {
            param_1[7] = uVar6;
            param_1[6] = uVar5;
            *(undefined1 *)(param_1 + 9) = uVar1;
            param_1[5] = 1;
            param_1[8] = pcVar7;
            *(undefined1 *)(param_1 + 4) = uVar1;
            *param_1 = local_3c;
            param_1[1] = local_40;
            param_1[2] = local_44;
            param_1[3] = pcVar7;
            return;
          }
          param_1[2] = uVar5;
          *(undefined1 *)(param_1 + 5) = uVar1;
          *param_1 = 3;
          param_1[1] = 1;
          param_1[3] = uVar6;
          param_1[4] = pcVar7;
          return;
        }
LAB_01350d9c:
        if (bVar3) {
          *(undefined1 *)(param_1 + 5) = uVar1;
          *param_1 = 3;
          param_1[4] = pcVar7;
          param_1[1] = local_3c;
          param_1[2] = local_40;
          param_1[3] = local_44;
          return;
        }
      }
      *param_1 = 2;
      return;
    }
  }
  *param_1 = 2;
  return;
}

