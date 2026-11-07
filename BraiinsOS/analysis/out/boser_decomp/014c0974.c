// FUN_014c0974 @ 014c0974 size=920 calls_out=2 calls_in=1
// strings: 

uint FUN_014c0974(undefined4 *param_1)

{
  uint3 *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint3 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar17;
  int *piVar16;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  int local_50;
  ushort local_2c;
  char local_2a;
  undefined2 local_28;
  undefined1 local_26;
  
  piVar6 = (int *)param_1[1];
  if ((int *)*param_1 == piVar6) {
    return 0;
  }
  piVar16 = (int *)*param_1;
LAB_014c09b0:
  piVar17 = piVar16 + 1;
  iVar7 = *piVar16;
  *param_1 = piVar17;
  puVar1 = (uint3 *)(iVar7 + 0x29);
  local_2c = *(ushort *)puVar1;
  cVar2 = *(char *)(iVar7 + 0x2b);
  uVar5 = *puVar1;
  uVar4 = local_2c >> 8;
  uVar14 = (uint)uVar5;
  uVar23 = param_1[8];
  uVar24 = param_1[9];
  uVar11 = uVar14 & 0xff;
  uVar21 = param_1[6];
  uVar22 = param_1[7];
  local_2a = cVar2;
  if (param_1[5] != 0) {
    uVar8 = FUN_014c0d0c(uVar21,uVar22,uVar23,uVar24,&local_2c);
    uVar9 = uVar8 >> 0x19;
    local_50 = 0;
    while( true ) {
      uVar8 = param_1[3] & uVar8;
      uVar13 = *(uint *)(param_1[2] + uVar8);
      uVar20 = uVar13 ^ uVar9 * 0x1010101;
      for (uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff; uVar20 != 0;
          uVar20 = uVar20 - 1 & uVar20) {
        iVar7 = param_1[2] +
                (uVar8 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                        (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                param_1[3]) * -4;
        uVar18 = (uint)*(byte *)(iVar7 + -4);
        bVar25 = uVar18 == uVar11;
        uVar15 = uVar11;
        if (bVar25) {
          uVar18 = (uint)*(byte *)(iVar7 + -3);
          uVar15 = (uint)uVar4;
        }
        if ((bVar25 && uVar18 == uVar15) && (*(char *)(iVar7 + -2) == cVar2)) {
          if (*(char *)(iVar7 + -1) == '\0') {
            *(undefined1 *)(iVar7 + -1) = 1;
            param_1[10] = param_1[10] + -1;
            return uVar14 << 8 | 1;
          }
          goto LAB_014c0c9c;
        }
      }
      if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
      local_50 = local_50 + 4;
      uVar8 = uVar8 + local_50;
    }
  }
  local_26 = (undefined1)(uVar5 >> 0x10);
  local_28 = (undefined2)uVar5;
  uVar9 = FUN_014c0d0c(uVar21,uVar22,uVar23,uVar24,&local_28);
  if (param_1[4] == 0) {
    FUN_014c0434(param_1 + 2,param_1 + 6);
  }
  uVar20 = param_1[3];
  puVar10 = (uint *)param_1[2];
  bVar25 = false;
  iVar7 = 0;
  uVar8 = uVar9;
  do {
    uVar8 = uVar20 & uVar8;
    uVar18 = *(uint *)((int)puVar10 + uVar8);
    uVar13 = uVar18 ^ (uVar9 >> 0x19) * 0x1010101;
    uVar15 = uVar13 + 0xfefefeff;
    uVar13 = ~uVar13 & 0x80808080;
    while (uVar15 = uVar13 & uVar15, uVar15 != 0) {
      uVar12 = uVar8 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                      (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) & uVar20;
      uVar19 = (uint)(byte)puVar10[-1 - uVar12];
      bVar26 = uVar19 == uVar11;
      uVar13 = uVar11;
      if (bVar26) {
        uVar19 = (uint)*(byte *)((int)puVar10 + uVar12 * -4 + -3);
        uVar13 = (uint)uVar4;
      }
      if ((bVar26 && uVar19 == uVar13) && (*(char *)((int)puVar10 + uVar12 * -4 + -2) == cVar2)) {
        *(undefined1 *)((int)puVar10 + uVar12 * -4 + -1) = 0;
        goto LAB_014c0c90;
      }
      uVar13 = uVar15 - 1;
    }
    uVar13 = uVar18 & 0x80808080;
    if (bVar25) {
LAB_014c0bfc:
      if ((uVar13 & uVar18 << 1) != 0) break;
      bVar25 = true;
    }
    else {
      if (uVar13 != 0) {
        uVar24 = uVar8 + ((uint)LZCOUNT((uVar18 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                        (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                 uVar20;
        goto LAB_014c0bfc;
      }
      bVar25 = false;
    }
    iVar7 = iVar7 + 4;
    uVar8 = iVar7 + uVar8;
  } while( true );
  uVar11 = (uint)*(char *)((int)puVar10 + uVar24);
  if (-1 < (int)uVar11) {
    uVar24 = *puVar10 & 0x80808080;
    uVar24 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                     (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18);
    uVar11 = (uint)*(byte *)((int)puVar10 + (uVar24 >> 3));
    uVar24 = uVar24 >> 3;
  }
  bVar3 = (byte)(uVar9 >> 0x19);
  *(byte *)((int)puVar10 + uVar24) = bVar3;
  param_1[4] = param_1[4] - (uVar11 & 1);
  param_1[5] = param_1[5] + 1;
  *(byte *)((int)puVar10 + (uVar24 - 4 & uVar20) + 4) = bVar3;
  puVar10[-1 - uVar24] = uVar14;
LAB_014c0c90:
  param_1[10] = param_1[10] + 1;
LAB_014c0c9c:
  piVar16 = piVar17;
  if (piVar17 == piVar6) {
    return 0;
  }
  goto LAB_014c09b0;
}

