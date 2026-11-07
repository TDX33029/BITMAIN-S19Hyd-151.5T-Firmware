// FUN_00751efc @ 00751efc size=408 calls_out=1 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00751efc(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  int local_28;
  
  uVar4 = FUN_009bd354(param_2[4],param_2[5],param_2[6],param_2[7]);
  uVar10 = uVar4 >> 0x19;
  iVar18 = *param_2;
  uVar9 = param_2[1];
  local_28 = 0;
  while( true ) {
    uVar4 = uVar9 & uVar4;
    uVar13 = *(uint *)(iVar18 + uVar4);
    uVar5 = uVar13 ^ uVar10 * 0x1010101;
    uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
    while (uVar5 != 0) {
      uVar17 = uVar5 >> 8;
      uVar1 = uVar5 >> 0x10;
      uVar2 = uVar5 >> 0x18;
      uVar3 = uVar5 << 0x18;
      uVar5 = uVar5 - 1 & uVar5;
      uVar17 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar17 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar9;
      if (param_3 == *(int *)(iVar18 + -0x38 + uVar17 * -0x38)) {
        iVar6 = ((int)(uVar17 * 0x38) >> 3) * -0x49249249;
        puVar7 = (uint *)(iVar18 + (iVar6 - 4U & uVar9));
        uVar10 = *puVar7;
        uVar4 = *(uint *)(iVar18 + iVar6) & 0x80808080 & *(uint *)(iVar18 + iVar6) << 1;
        uVar10 = ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) +
                 ((uint)LZCOUNT(uVar10 & 0x80808080 & uVar10 << 1) >> 3);
        iVar14 = 0x80;
        if (uVar10 < 4) {
          iVar14 = param_2[2];
        }
        iVar11 = iVar18 + uVar17 * -0x38;
        if (uVar10 < 4) {
          param_2[2] = iVar14 + 1;
          iVar14 = 0xff;
        }
        *(char *)(iVar18 + iVar6) = (char)iVar14;
        iVar18 = param_2[3];
        *(char *)(puVar7 + 1) = (char)iVar14;
        param_2[3] = iVar18 + -1;
        uVar8 = *(undefined4 *)(iVar11 + -0x34);
        uVar12 = *(undefined4 *)(iVar11 + -0x30);
        uVar15 = *(undefined4 *)(iVar11 + -0x2c);
        *param_1 = *(undefined4 *)(iVar11 + -0x38);
        param_1[1] = uVar8;
        param_1[2] = uVar12;
        param_1[3] = uVar15;
        uVar8 = *(undefined4 *)(iVar11 + -0x24);
        uVar12 = *(undefined4 *)(iVar11 + -0x20);
        uVar15 = *(undefined4 *)(iVar11 + -0x1c);
        uVar16 = *(undefined4 *)(iVar11 + -0x18);
        param_1[4] = *(undefined4 *)(iVar11 + -0x28);
        param_1[5] = uVar8;
        param_1[6] = uVar12;
        param_1[7] = uVar15;
        param_1[8] = uVar16;
        uVar8 = *(undefined4 *)(iVar11 + -0x10);
        uVar12 = *(undefined4 *)(iVar11 + -0xc);
        uVar15 = *(undefined4 *)(iVar11 + -8);
        uVar16 = *(undefined4 *)(iVar11 + -4);
        param_1[9] = *(undefined4 *)(iVar11 + -0x14);
        param_1[10] = uVar8;
        param_1[0xb] = uVar12;
        param_1[0xc] = uVar15;
        param_1[0xd] = uVar16;
        return;
      }
    }
    if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
    local_28 = local_28 + 4;
    uVar4 = uVar4 + local_28;
  }
  param_1[1] = 2;
  return;
}

