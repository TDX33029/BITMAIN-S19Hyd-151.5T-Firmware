// FUN_007534c8 @ 007534c8 size=420 calls_out=1 calls_in=2
// strings: 

void FUN_007534c8(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  int local_2c;
  
  uVar4 = FUN_009bd354(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar6 = uVar4 >> 0x19;
  iVar10 = *param_2;
  uVar12 = param_2[1];
  local_2c = 0;
  while( true ) {
    uVar4 = uVar12 & uVar4;
    uVar5 = *(uint *)(iVar10 + uVar4);
    uVar7 = uVar5 ^ uVar6 * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar22 = uVar7 >> 8;
      uVar1 = uVar7 >> 0x10;
      uVar2 = uVar7 >> 0x18;
      uVar3 = uVar7 << 0x18;
      uVar7 = uVar7 - 1 & uVar7;
      uVar22 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar22 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar12;
      if (param_3 == *(int *)(iVar10 + -0x28 + uVar22 * -0x28)) {
        iVar15 = iVar10 + uVar22 * -0x28;
        iVar8 = ((int)(uVar22 * 0x28) >> 3) * -0x33333333;
        puVar13 = (uint *)(iVar10 + (iVar8 - 4U & uVar12));
        uVar6 = *puVar13;
        uVar4 = *(uint *)(iVar10 + iVar8) & 0x80808080 & *(uint *)(iVar10 + iVar8) << 1;
        uVar19 = 0x80;
        if (((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                           | uVar4 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar6 & 0x80808080 & uVar6 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar19 = 0xff;
        }
        *(undefined1 *)(iVar10 + iVar8) = uVar19;
        iVar10 = param_2[3];
        *(undefined1 *)(puVar13 + 1) = uVar19;
        puVar9 = *(undefined1 **)(iVar15 + -0x18);
        param_2[3] = iVar10 + -1;
        puVar11 = &DAT_3b9aca00;
        if (puVar9 != &DAT_3b9aca00) {
          uVar20 = *(undefined4 *)(iVar15 + -0x20);
          uVar21 = *(undefined4 *)(iVar15 + -0x1c);
          uVar14 = *(undefined4 *)(iVar15 + -0x10);
          uVar16 = *(undefined4 *)(iVar15 + -0xc);
          uVar17 = *(undefined4 *)(iVar15 + -8);
          uVar18 = *(undefined4 *)(iVar15 + -4);
          param_1[3] = *(undefined4 *)(iVar15 + -0x14);
          param_1[4] = uVar14;
          param_1[5] = uVar16;
          param_1[6] = uVar17;
          param_1[7] = uVar18;
          *param_1 = uVar20;
          param_1[1] = uVar21;
          puVar11 = puVar9;
        }
        param_1[2] = puVar11;
        return;
      }
    }
    if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
    local_2c = local_2c + 4;
    uVar4 = uVar4 + local_2c;
  }
  param_1[2] = &DAT_3b9aca00;
  return;
}

