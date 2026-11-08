// FUN_0126a460 @ 0126a460 size=1484 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0126a650) */

undefined8 FUN_0126a460(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  byte *pbVar20;
  uint uVar21;
  uint local_8c;
  ushort local_88 [16];
  uint auStack_68 [17];
  
  local_8c = (uint)*(byte *)(param_1 + 0x28eb);
  puVar8 = (ushort *)(param_1 + 0x200);
  if (local_8c == 0) goto LAB_0126a53c;
LAB_0126a4cc:
  if (local_8c == 2) {
    iVar15 = 0;
    local_88[0xe] = 0;
    local_88[0xf] = 0;
    local_88[0xc] = 0;
    local_88[0xd] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_016dd606(auStack_68,0,0x44);
    do {
      puVar5 = (undefined2 *)(param_1 + 0x1b00 + iVar15);
      iVar15 = iVar15 + 2;
      *puVar5 = 0x31e;
    } while (iVar15 != 0x800);
    uVar17 = 0x13;
    puVar19 = (ushort *)(param_1 + 0x1b00);
    pbVar20 = (byte *)(param_1 + 0x28ed);
    goto LAB_0126a5a8;
  }
  if (local_8c != 1) {
    uVar6 = 3;
LAB_0126aa14:
    return CONCAT44(puVar8,uVar6);
  }
  uVar17 = 0x20;
  pbVar20 = (byte *)(param_1 + 0x28a0);
  do {
    iVar15 = 0;
    local_88[0xe] = 0;
    local_88[0xf] = 0;
    local_88[0xc] = 0;
    local_88[0xd] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_016dd606(auStack_68,0,0x44);
    puVar19 = (ushort *)(param_1 + 0x200) + (short)local_8c * 0x640;
    do {
      puVar5 = (undefined2 *)((int)puVar19 + iVar15);
      iVar15 = iVar15 + 2;
      *puVar5 = 0x31e;
    } while (iVar15 != 0x800);
    FUN_016dd606(puVar19 + 0x400,0,0x480);
LAB_0126a5a8:
    puVar8 = (ushort *)&DAT_0000001c;
    uVar21 = (uint)*(ushort *)(param_1 + 0x28e4 + local_8c * 2);
    uVar12 = uVar21;
    pbVar4 = pbVar20;
    if (uVar17 < uVar21) {
LAB_0126a9bc:
      return CONCAT44(puVar8,3);
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      if (0xf < *pbVar4) goto LAB_0126a9bc;
      local_88[*pbVar4] = local_88[*pbVar4] + 1;
      pbVar4 = pbVar4 + 1;
    }
    uVar12 = 0;
    iVar15 = 0;
    uVar17 = 1;
    iVar18 = 0;
    while (iVar18 != 0) {
      uVar17 = uVar17 + 1;
      iVar18 = iVar18 + 1;
      if (uVar17 == 0x10) goto LAB_0126a694;
    }
    do {
      uVar7 = uVar17 + 1;
      uVar12 = local_88[uVar17] + uVar12;
      iVar15 = (iVar15 + (uint)local_88[uVar17]) * 2;
      *(int *)(((uint)auStack_68 | 4) + uVar17 * 4) = iVar15;
      uVar17 = uVar7;
    } while (uVar7 < 0x10);
LAB_0126a694:
    if ((iVar15 != 0x10000) && ((uVar6 = 1, local_8c == 2 || (1 < (uVar12 & 0xffff)))))
    goto LAB_0126aa14;
    uVar17 = 0xffff;
    uVar12 = 0;
    if (uVar21 != 0) {
LAB_0126a7a8:
      do {
        uVar16 = pbVar20[uVar12] & 0xf;
        uVar7 = uVar12 + 1;
        if ((pbVar20[uVar12] & 0xf) != 0) {
          uVar9 = auStack_68[uVar16];
          auStack_68[uVar16] = uVar9 + 1;
          uVar9 = uVar9 & 0xffffffffU >> (0x20 - uVar16 & 0xff);
          if (uVar9 < 0x200) {
            uVar9 = (uint)(*(ushort *)(&DAT_003b52fc + uVar9 * 2) >> (0x10 - uVar16 & 0xff));
          }
          else {
            bVar2 = (byte)uVar9;
            bVar3 = (byte)(uVar9 >> 8);
            uVar9 = (((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                    bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10) >> 0x10) >>
                    (0x10 - uVar16 & 0xff);
          }
          if (10 < uVar16) {
            uVar11 = (uint)puVar19[uVar9 & 0x3ff];
            if (uVar11 == 0x31e) {
              puVar19[uVar9 & 0x3ff] = (ushort)uVar17;
              uVar14 = uVar17 - 2;
              uVar11 = uVar17;
              uVar17 = uVar14;
              if (uVar16 != 0xb) goto LAB_0126a87c;
LAB_0126a930:
              uVar9 = uVar9 >> 9;
            }
            else {
              if (uVar16 == 0xb) goto LAB_0126a930;
LAB_0126a87c:
              iVar15 = (int)(uVar9 << 0x15) >> 0x1f;
              if (8 < (~(uVar11 + iVar15) & 0xffff) >> 6) {
                return 0xa00000003;
              }
              puVar8 = (ushort *)&DAT_0000000a;
              uVar14 = (uint)puVar19[(~uVar11 - iVar15 & 0xffff) + 0x400];
              if (uVar14 == 0) {
                puVar19[(~uVar11 - iVar15 & 0xffff) + 0x400] = (ushort)uVar17;
                uVar17 = uVar17 - 2;
                uVar14 = uVar17;
              }
              if (uVar16 < 0xd) {
                uVar9 = uVar9 >> 10;
              }
              else {
                iVar15 = (int)(uVar9 << 0x14) >> 0x1f;
                if (8 < (~(uVar14 + iVar15) & 0xffff) >> 6) goto LAB_0126a9bc;
                uVar11 = (uint)puVar19[(~uVar14 - iVar15 & 0xffff) + 0x400];
                uVar10 = uVar17;
                if (uVar11 == 0) {
                  puVar19[(~uVar14 - iVar15 & 0xffff) + 0x400] = (ushort)uVar17;
                  uVar10 = uVar17 - 2;
                  uVar11 = uVar17;
                }
                uVar17 = uVar10;
                if (uVar16 == 0xd) {
                  uVar9 = uVar9 >> 0xb;
                  goto LAB_0126a940;
                }
                iVar15 = (int)(uVar9 << 0x13) >> 0x1f;
                if (8 < (~(uVar11 + iVar15) & 0xffff) >> 6) goto LAB_0126a9bc;
                uVar14 = ~uVar11;
                uVar10 = (uint)puVar19[(uVar14 - iVar15 & 0xffff) + 0x400];
                uVar11 = uVar17;
                if (uVar10 == 0) {
                  puVar19[(uVar14 - iVar15 & 0xffff) + 0x400] = (ushort)uVar17;
                  uVar11 = uVar17 - 2;
                  uVar10 = uVar17;
                }
                uVar17 = uVar11;
                if (uVar16 == 0xf) {
                  iVar15 = (int)(uVar9 << 0x12) >> 0x1f;
                  if (8 < (~(uVar10 + iVar15) & 0xffff) >> 6) goto LAB_0126a9bc;
                  uVar9 = uVar9 >> 0xd;
                  uVar14 = (uint)puVar19[(~uVar10 - iVar15 & 0xffff) + 0x400];
                  if (uVar14 == 0) {
                    puVar19[(~uVar10 - iVar15 & 0xffff) + 0x400] = (ushort)uVar11;
                    uVar17 = uVar11 - 2;
                    goto LAB_0126a940;
                  }
                }
                else {
                  uVar9 = uVar9 >> 0xc;
                  uVar14 = uVar10;
                }
              }
              uVar11 = uVar14;
            }
LAB_0126a940:
            iVar15 = (int)(uVar9 << 0x1e) >> 0x1f;
            if (8 < (~(uVar11 + iVar15) & 0xffff) >> 6) {
              return 0xa00000003;
            }
            puVar8 = puVar19 + (~uVar11 - iVar15 & 0xffff) + 0x400;
            *puVar8 = (ushort)uVar12;
            uVar12 = uVar7;
            if (uVar21 <= uVar7) break;
            goto LAB_0126a7a8;
          }
          puVar8 = (ushort *)(uVar9 >> 10);
          if (puVar8 == (ushort *)0x0) {
            iVar15 = 1 << uVar16;
            puVar8 = (ushort *)(iVar15 * 2);
            puVar13 = puVar19 + uVar9;
            do {
              uVar9 = uVar9 + iVar15;
              *puVar13 = (ushort)uVar12 | (ushort)(uVar16 << 9);
              puVar13 = puVar13 + iVar15;
            } while (uVar9 < 0x400);
          }
        }
        uVar12 = uVar7;
      } while (uVar7 != uVar21);
    }
    cVar1 = *(char *)(param_1 + 0x28eb);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_2 + 0xc) = 0;
      return 0xc00000001;
    }
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_2 + 0xc) = 0;
      return 0xa00000001;
    }
    *(byte *)(param_1 + 0x28eb) = cVar1 - 1U;
    local_8c = (uint)(byte)(cVar1 - 1U);
    if (local_8c != 0) goto LAB_0126a4cc;
LAB_0126a53c:
    uVar17 = 0x120;
    pbVar20 = (byte *)(param_1 + 0x2780);
  } while( true );
}

