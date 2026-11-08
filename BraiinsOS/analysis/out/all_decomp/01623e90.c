// FUN_01623e90 @ 01623e90 size=396 calls_out=0 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01623e90(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int local_2c;
  
  uVar10 = param_3 >> 0x19;
  iVar14 = *param_2;
  uVar15 = param_2[1];
  local_2c = 0;
  while( true ) {
    param_3 = uVar15 & param_3;
    uVar1 = *(uint *)(iVar14 + param_3);
    uVar2 = uVar1 ^ uVar10 * 0x1010101;
    uVar2 = ~uVar2 & 0x80808080 & uVar2 + 0xfefefeff;
    while (uVar2 != 0) {
      uVar16 = param_3 + ((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                        (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) & uVar15;
      piVar9 = (int *)(iVar14 + -0x30 + uVar16 * -0x30);
      uVar2 = uVar2 - 1 & uVar2;
      if (param_5 == *piVar9 && param_6 == piVar9[1]) {
        iVar5 = ((int)(uVar16 * 0x30) >> 4) * -0x55555555;
        iVar3 = iVar14 + uVar16 * -0x30;
        puVar7 = (uint *)(iVar14 + (iVar5 - 4U & uVar15));
        uVar15 = *puVar7;
        uVar10 = *(uint *)(iVar14 + iVar5) & 0x80808080 & *(uint *)(iVar14 + iVar5) << 1;
        uVar10 = ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) +
                 ((uint)LZCOUNT(uVar15 & 0x80808080 & uVar15 << 1) >> 3);
        iVar12 = 0x80;
        if (uVar10 < 4) {
          iVar12 = param_2[2];
        }
        param_2[3] = param_2[3] + -1;
        if (uVar10 < 4) {
          param_2[2] = iVar12 + 1;
          iVar12 = 0xff;
        }
        *(char *)(iVar14 + iVar5) = (char)iVar12;
        *(char *)(puVar7 + 1) = (char)iVar12;
        uVar4 = *(undefined4 *)(iVar3 + -0x2c);
        uVar6 = *(undefined4 *)(iVar3 + -0x28);
        uVar8 = *(undefined4 *)(iVar3 + -0x24);
        uVar11 = *(undefined4 *)(iVar3 + -0x20);
        uVar13 = *(undefined4 *)(iVar3 + -0x1c);
        *param_1 = *(undefined4 *)(iVar3 + -0x30);
        param_1[1] = uVar4;
        param_1[2] = uVar6;
        param_1[3] = uVar8;
        param_1[4] = uVar11;
        param_1[5] = uVar13;
        uVar4 = *(undefined4 *)(iVar3 + -0x14);
        uVar6 = *(undefined4 *)(iVar3 + -0x10);
        uVar8 = *(undefined4 *)(iVar3 + -0xc);
        uVar11 = *(undefined4 *)(iVar3 + -8);
        uVar13 = *(undefined4 *)(iVar3 + -4);
        param_1[6] = *(undefined4 *)(iVar3 + -0x18);
        param_1[7] = uVar4;
        param_1[8] = uVar6;
        param_1[9] = uVar8;
        param_1[10] = uVar11;
        param_1[0xb] = uVar13;
        return;
      }
    }
    if ((uVar1 & 0x80808080 & uVar1 << 1) != 0) break;
    local_2c = local_2c + 4;
    param_3 = param_3 + local_2c;
  }
  param_1[4] = 3;
  return;
}

