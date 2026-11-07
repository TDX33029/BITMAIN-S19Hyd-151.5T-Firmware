// FUN_0124e744 @ 0124e744 size=948 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0124e744(int param_1,char *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_28;
  
  uVar2 = 1;
  if (((*param_2 != '\x05') || (uVar2 = 0, *(uint *)(param_2 + 0xc) < 2)) ||
     (iVar8 = *(int *)(param_2 + 4), iVar8 == 0)) {
    return uVar2;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar13 = *(uint *)(param_1 + 0x14);
  iVar3 = *(int *)(param_2 + 8);
  iVar15 = iVar8;
  local_28 = iVar3;
  while( true ) {
    uVar1 = *(ushort *)(iVar15 + 0x192);
    iVar17 = iVar15 + 0x10c;
    uVar9 = 0xffffffff;
    iVar18 = (uint)uVar1 * 0xc;
    do {
      if (iVar18 == 0) {
        uVar9 = (uint)uVar1;
        goto LAB_0124e820;
      }
      uVar11 = *(uint *)(iVar17 + 8);
      uVar7 = uVar11;
      if (uVar13 < uVar11) {
        uVar7 = uVar13;
      }
      iVar4 = FUN_016dd50a(uVar2,*(undefined4 *)(iVar17 + 4),uVar7);
      if (iVar4 == 0) {
        iVar4 = uVar13 - uVar11;
      }
      iVar18 = iVar18 + -0xc;
      uVar9 = uVar9 + 1;
      iVar17 = iVar17 + 0xc;
    } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
    if (0 < iVar4 == iVar4 < 0) break;
LAB_0124e820:
    if (local_28 == 0) {
      return 0;
    }
    local_28 = local_28 + -1;
    iVar15 = *(int *)(iVar15 + uVar9 * 4 + 0x198);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar13 = *(uint *)(param_1 + 0x20);
  iVar15 = iVar8;
  local_28 = iVar3;
  while( true ) {
    uVar1 = *(ushort *)(iVar15 + 0x192);
    iVar17 = iVar15 + 0x10c;
    uVar9 = 0xffffffff;
    iVar18 = (uint)uVar1 * 0xc;
    do {
      if (iVar18 == 0) {
        uVar9 = (uint)uVar1;
        goto LAB_0124e8e0;
      }
      uVar11 = *(uint *)(iVar17 + 8);
      uVar7 = uVar11;
      if (uVar13 < uVar11) {
        uVar7 = uVar13;
      }
      iVar4 = FUN_016dd50a(uVar2,*(undefined4 *)(iVar17 + 4),uVar7);
      if (iVar4 == 0) {
        iVar4 = uVar13 - uVar11;
      }
      iVar18 = iVar18 + -0xc;
      uVar9 = uVar9 + 1;
      iVar17 = iVar17 + 0xc;
    } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
    if (0 < iVar4 == iVar4 < 0) break;
LAB_0124e8e0:
    if (local_28 == 0) {
      return 0;
    }
    local_28 = local_28 + -1;
    iVar15 = *(int *)(iVar15 + uVar9 * 4 + 0x198);
  }
  iVar15 = *(int *)(param_1 + 8);
  if (iVar15 == 0) {
    return 1;
  }
  iVar17 = *(int *)(param_1 + 4);
  iVar18 = iVar17;
  do {
    uVar2 = *(undefined4 *)(iVar18 + 4);
    iVar5 = iVar18 + 0x20;
    uVar13 = *(uint *)(iVar18 + 8);
    iVar4 = iVar8;
    local_28 = iVar3;
    while( true ) {
      iVar14 = iVar4 + 0x10c;
      uVar1 = *(ushort *)(iVar4 + 0x192);
      uVar9 = 0xffffffff;
      iVar16 = (uint)uVar1 * 0xc;
      do {
        if (iVar16 == 0) {
          uVar9 = (uint)uVar1;
          goto LAB_0124e9ec;
        }
        uVar11 = *(uint *)(iVar14 + 8);
        uVar7 = uVar11;
        if (uVar13 < uVar11) {
          uVar7 = uVar13;
        }
        iVar6 = FUN_016dd50a(uVar2,*(undefined4 *)(iVar14 + 4),uVar7);
        if (iVar6 == 0) {
          iVar6 = uVar13 - uVar11;
        }
        iVar16 = iVar16 + -0xc;
        uVar9 = uVar9 + 1;
        iVar14 = iVar14 + 0xc;
      } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
      if (0 < iVar6 == iVar6 < 0) break;
LAB_0124e9ec:
      if (local_28 == 0) goto LAB_0124e934;
      local_28 = local_28 + -1;
      iVar4 = *(int *)(iVar4 + uVar9 * 4 + 0x198);
    }
    uVar13 = 1;
    iVar18 = *(int *)(iVar18 + 0xc);
    if ((int)*(uint *)(iVar18 + 8) < 0) {
      uVar13 = *(uint *)(iVar18 + 8) ^ 0x80000000;
    }
    if (uVar13 == 0) {
      if (*(int *)(iVar18 + 0xc) != 0) {
        return 0;
      }
    }
    else {
      iVar4 = iVar4 + uVar9 * 0x18;
      if (uVar13 == 1) {
        iVar16 = *(int *)(iVar18 + 0x10);
        puVar10 = *(undefined4 **)(iVar18 + 0xc);
        if (iVar16 == 1) {
          iVar18 = (**(code **)(puVar10[1] + 0x10))(*puVar10,iVar4,param_3);
          if (iVar18 == 0) {
            return 0;
          }
        }
        else if (iVar16 != 0) {
          puVar12 = puVar10 + iVar16 * 8;
          do {
            iVar18 = (**(code **)(puVar10[1] + 0x10))(*puVar10,iVar4,param_3);
            if (iVar18 == 0) {
              return 0;
            }
            puVar10 = puVar10 + 8;
          } while (puVar10 != puVar12);
        }
      }
      else {
        puVar10 = *(undefined4 **)(iVar18 + 0x10);
        iVar18 = *(int *)(iVar18 + 0x14) << 5;
        while (iVar18 != 0) {
          iVar16 = (**(code **)(puVar10[1] + 0x10))(*puVar10,iVar4,param_3);
          iVar18 = iVar18 + -0x20;
          puVar10 = puVar10 + 8;
          if (iVar16 == 0) {
            return 0;
          }
        }
      }
    }
LAB_0124e934:
    iVar18 = iVar5;
    if (iVar5 == iVar17 + iVar15 * 0x20) {
      return 1;
    }
  } while( true );
}

