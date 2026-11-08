// FUN_007a8c6c @ 007a8c6c size=1076 calls_out=8 calls_in=3
// strings: ZipWriter was already closed | Should have switched to stored and unencrypted beforehand | seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest

void FUN_007a8c6c(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  int local_1cc;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  undefined1 auStack_194 [76];
  uint local_148;
  uint uStack_144;
  uint local_138;
  uint uStack_134;
  int local_130;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 auStack_cc [156];
  undefined1 *local_30;
  uint *local_2c;
  int iStack_28;
  
  if (param_2[0x41a] == 0) {
LAB_007a8cc0:
    *param_1 = (int)&DAT_80000004;
    param_1[1] = (int)local_2c;
    param_1[2] = iStack_28;
    return;
  }
  uVar17 = param_2[0x41a] - 1;
  puVar5 = (uint *)(param_2[0x419] + uVar17 * 0xc0);
  uVar16 = *puVar5;
  uVar18 = puVar5[1];
  uVar11 = puVar5[0x2c];
  uVar14 = puVar5[0x2d];
  param_2[0x41a] = uVar17;
  if ((uVar16 ^ 2) == 0 && uVar18 == 0) goto LAB_007a8cc0;
  piVar8 = (int *)((uint)&local_d8 | 4);
  uVar15 = puVar5[0x2e];
  FUN_01bed4e2(&local_1a8,puVar5 + 2,0xa8);
  uVar13 = uVar15 >> 0x19;
  uVar12 = param_2[0x41c];
  uVar6 = param_2[0x41b];
  local_1cc = 0;
  while( true ) {
    uVar15 = uVar12 & uVar15;
    uVar20 = *(uint *)(uVar6 + uVar15);
    uVar9 = uVar20 ^ uVar13 * 0x1010101;
    uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
    while (uVar9 != 0) {
      uVar19 = uVar9 >> 8;
      uVar2 = uVar9 >> 0x10;
      uVar3 = uVar9 >> 0x18;
      uVar4 = uVar9 << 0x18;
      uVar9 = uVar9 - 1 & uVar9;
      uVar19 = uVar15 + ((uint)LZCOUNT(uVar4 | (uVar19 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3
                                      ) >> 3) & uVar12;
      if (*(uint *)((uVar6 - 4) + uVar19 * -4) == uVar17) {
        puVar5 = (uint *)(uVar6 + (uVar19 - 4 & uVar12));
        uVar17 = *puVar5;
        uVar13 = *(uint *)(uVar6 + uVar19) & 0x80808080 & *(uint *)(uVar6 + uVar19) << 1;
        uVar7 = 0x80;
        if (((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar17 & 0x80808080 & uVar17 << 1) >> 3) < 4) {
          param_2[0x41d] = param_2[0x41d] + 1;
          uVar7 = 0xff;
        }
        *(undefined1 *)(uVar6 + uVar19) = uVar7;
        uVar17 = param_2[0x41e];
        *(undefined1 *)(puVar5 + 1) = uVar7;
        param_2[0x41e] = uVar17 - 1;
        goto LAB_007a8e34;
      }
    }
    if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
    local_1cc = local_1cc + 4;
    uVar15 = local_1cc + uVar15;
  }
LAB_007a8e34:
  FUN_01bed4e2(&local_d8,&local_1a8,0xa8);
  local_30 = &DAT_80000004;
  if ((uVar16 ^ 2) == 0 && uVar18 == 0) goto LAB_007a8cc0;
  local_e8 = local_d8;
  iStack_e4 = local_d4;
  iStack_e0 = local_d0;
  FUN_01bed4e2(auStack_194,auStack_cc,0x9c);
  FUN_007a90c8(&local_30);
  local_f8 = local_e8;
  iStack_f4 = iStack_e4;
  iStack_f0 = iStack_e0;
  local_1a0 = local_e8;
  iStack_19c = iStack_e4;
  iStack_198 = iStack_e0;
  local_1a8 = uVar16;
  local_1a4 = uVar18;
  if (uVar14 != 0) {
    thunk_FUN_01be4678(uVar11);
  }
  if (*param_2 == 2 && param_2[1] == 0) {
    FUN_019a18a8(&local_d4,0xb,"ZipWriter was already closed",0x1c);
LAB_007a8f00:
    param_1[1] = local_d4;
    *param_1 = -0x7fffffff;
    param_1[2] = local_d0;
  }
  else {
    FUN_007b08b8(&local_d8,param_2,1,&DAT_01c09d24);
    if (local_d8 == -0x7ffffff9) {
      FUN_007a922c(&local_d8,param_2);
      if (local_d8 == -0x7ffffff9) {
        DataMemoryBarrier(0xb);
        if (local_130 == 0) {
          uVar11 = param_2[0x419];
          iVar10 = param_2[0x41a] * 0xc0;
          do {
            if (iVar10 == 0) goto LAB_007a8f70;
            DataMemoryBarrier(0xb);
            if (*(int *)(uVar11 + 0x78) != 0) break;
            puVar5 = (uint *)(uVar11 + 0x70);
            puVar1 = (uint *)(uVar11 + 0x74);
            iVar10 = iVar10 + -0xc0;
            uVar11 = uVar11 + 0xc0;
          } while (*puVar1 <= uStack_134 && (uint)(local_138 <= *puVar5) <= *puVar1 - uStack_134);
        }
        else if (param_2[0x41e] == 0) {
LAB_007a8f70:
          uVar11 = *param_2 ^ 3 | param_2[1];
          bVar21 = uVar11 == 0;
          if (bVar21) {
            uVar11 = param_2[2];
          }
          if (bVar21 && uVar11 == 0) {
            local_2c = param_2 + 4;
          }
          else {
            FUN_01af9864(&local_30,"Should have switched to stored and unencrypted beforehand",0x39)
            ;
            if (((char)local_30 != '\x04') && (((uint)local_30 & 0xff) != 4)) {
              param_1[1] = (int)local_30;
              *param_1 = -0x7fffffff;
              param_1[2] = (int)local_2c;
              goto LAB_007a9048;
            }
          }
          if (local_148 != local_2c[2] || uStack_144 != local_2c[3]) {
            FUN_019a18a8((uint)&local_d8 | 4,0x24,
                         "seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest"
                         ,0x15);
            local_d4 = *piVar8;
            local_d0 = piVar8[1];
            goto LAB_007a8f00;
          }
          piVar8[1] = local_148;
          piVar8[2] = uStack_144;
        }
        *param_1 = -0x7ffffff9;
        *(undefined1 *)(param_2 + 0x42c) = 0;
        goto LAB_007a9048;
      }
    }
    param_1[1] = local_d4;
    *param_1 = local_d8;
    param_1[2] = local_d0;
  }
LAB_007a9048:
  FUN_007a910c(&local_1a8);
  return;
}

