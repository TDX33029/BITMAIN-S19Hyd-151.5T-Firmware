// FUN_0070bdb8 @ 0070bdb8 size=452 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_0070bdb8(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  uint unaff_r9;
  uint uVar11;
  int iVar12;
  int local_38;
  
  uVar11 = param_2[2];
  iVar12 = *param_1;
  uVar2 = param_1[1];
  local_38 = 0;
  uVar5 = uVar11;
  while( true ) {
    uVar5 = uVar2 & uVar5;
    uVar6 = *(uint *)(iVar12 + uVar5);
    uVar7 = uVar6 ^ (uVar11 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      unaff_r9 = uVar5 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                        (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar2;
      piVar8 = (int *)(iVar12 + -0x18 + unaff_r9 * -0x18);
      uVar7 = uVar7 - 1 & uVar7;
      if ((*param_2 == *piVar8 && uVar11 == piVar8[2]) &&
          (param_2[1] == piVar8[1] && param_2[3] == piVar8[3])) {
        iVar1 = ((int)(unaff_r9 * 0x18) >> 3) * -0x55555555;
        puVar3 = (uint *)(iVar12 + (iVar1 - 4U & uVar2));
        uVar2 = *puVar3;
        uVar5 = *(uint *)(iVar12 + iVar1) & 0x80808080 & *(uint *)(iVar12 + iVar1) << 1;
        uVar4 = 0x80;
        if (((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                           | uVar5 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar2 & 0x80808080 & uVar2 << 1) >> 3) < 4) {
          param_1[2] = param_1[2] + 1;
          uVar4 = 0xff;
        }
        iVar9 = iVar12 + unaff_r9 * -0x18;
        *(undefined1 *)(iVar12 + iVar1) = uVar4;
        *(undefined1 *)(puVar3 + 1) = uVar4;
        uVar10 = *(undefined4 *)(iVar9 + -8);
        unaff_r9 = *(uint *)(iVar9 + -4);
        param_1[3] = param_1[3] + -1;
        goto LAB_0070bf6c;
      }
    }
    uVar10 = 0;
    if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
    local_38 = local_38 + 4;
    uVar5 = uVar5 + local_38;
  }
LAB_0070bf6c:
  return CONCAT44(unaff_r9,uVar10);
}

