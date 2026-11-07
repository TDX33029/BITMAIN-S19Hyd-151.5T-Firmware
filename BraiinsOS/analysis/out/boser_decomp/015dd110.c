// FUN_015dd110 @ 015dd110 size=432 calls_out=1 calls_in=2
// strings: 

void FUN_015dd110(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int local_64;
  
  uVar4 = FUN_015f7180(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar19 = uVar4 >> 0x19;
  iVar12 = *param_2;
  uVar13 = param_2[1];
  local_64 = 0;
  while( true ) {
    uVar4 = uVar13 & uVar4;
    uVar9 = *(uint *)(iVar12 + uVar4);
    uVar5 = uVar9 ^ uVar19 * 0x1010101;
    uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
    while (uVar5 != 0) {
      uVar6 = uVar5 >> 8;
      uVar1 = uVar5 >> 0x10;
      uVar2 = uVar5 >> 0x18;
      uVar3 = uVar5 << 0x18;
      uVar5 = uVar5 - 1 & uVar5;
      uVar6 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar6 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                      >> 3) & uVar13;
      if (param_3 == *(int *)(iVar12 + -0x40 + uVar6 * -0x40)) {
        puVar14 = (uint *)(iVar12 + (uVar6 - 4 & uVar13));
        uVar19 = *puVar14;
        uVar4 = *(uint *)(iVar12 + uVar6) & 0x80808080 & *(uint *)(iVar12 + uVar6) << 1;
        iVar10 = iVar12 + uVar6 * -0x40;
        uVar22 = 0x80;
        if (((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                           | uVar4 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar19 & 0x80808080 & uVar19 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar22 = 0xff;
        }
        *(undefined1 *)(iVar12 + uVar6) = uVar22;
        iVar12 = param_2[3];
        *(undefined1 *)(puVar14 + 1) = uVar22;
        param_2[3] = iVar12 + -1;
        uVar23 = *(undefined4 *)(iVar10 + -0x34);
        uVar15 = *(undefined4 *)(iVar10 + -0x30);
        uVar17 = *(undefined4 *)(iVar10 + -0x2c);
        uVar20 = *(undefined4 *)(iVar10 + -0x28);
        uVar24 = *(undefined4 *)(iVar10 + -0x24);
        uVar7 = *(undefined4 *)(iVar10 + -0x20);
        uVar16 = *(undefined4 *)(iVar10 + -0x1c);
        uVar18 = *(undefined4 *)(iVar10 + -0x18);
        uVar21 = *(undefined4 *)(iVar10 + -0x14);
        uVar25 = *(undefined4 *)(iVar10 + -0x10);
        iVar12 = *(int *)(iVar10 + -0xc);
        uVar11 = *(undefined4 *)(iVar10 + -4);
        uVar8 = *(undefined4 *)(iVar10 + -8);
        if (iVar12 != -0x80000000) {
          *param_1 = *(undefined4 *)(iVar10 + -0x38);
          param_1[1] = uVar23;
          param_1[2] = uVar15;
          param_1[3] = uVar17;
          param_1[4] = uVar20;
          param_1[5] = uVar24;
          param_1[6] = uVar7;
          param_1[7] = uVar16;
          param_1[8] = uVar18;
          param_1[9] = uVar21;
          param_1[10] = uVar25;
          param_1[0xb] = iVar12;
          param_1[0xc] = uVar8;
          param_1[0xd] = uVar11;
          return;
        }
        goto LAB_015dd280;
      }
    }
    if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
    local_64 = local_64 + 4;
    uVar4 = uVar4 + local_64;
  }
LAB_015dd280:
  param_1[0xb] = 0x80000000;
  return;
}

