// FUN_015dd568 @ 015dd568 size=316 calls_out=1 calls_in=2
// strings: 

void FUN_015dd568(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int local_34;
  int local_28;
  
  iVar5 = param_1[3];
  if (iVar5 != 0) {
    puVar9 = (uint *)*param_1;
    uVar6 = param_1[1];
    local_34 = param_1[2];
    puVar11 = puVar9 + 1;
    uVar13 = ~*puVar9 & 0x80808080;
    puVar10 = puVar9;
    local_28 = iVar5;
    do {
      puVar14 = puVar11;
      if (uVar13 == 0) {
        do {
          puVar11 = puVar14 + 1;
          uVar13 = *puVar14;
          puVar10 = puVar10 + -0x10;
          puVar14 = puVar11;
        } while ((uVar13 & 0x80808080) == 0x80808080);
        uVar13 = uVar13 & 0x80808080 ^ 0x80808080;
      }
      iVar12 = (int)puVar10 +
               (LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                        | uVar13 >> 0x18) & 0x38U) * -2;
      if (param_2 <= *(ushort *)(iVar12 + -4)) {
        iVar1 = (int)puVar9 - iVar12 >> 4;
        puVar14 = (uint *)((int)puVar9 + (iVar1 - 4U & uVar6));
        uVar3 = *puVar14;
        uVar7 = *(uint *)((int)puVar9 + iVar1) & 0x80808080 & *(uint *)((int)puVar9 + iVar1) << 1;
        uVar8 = 0x80;
        if (((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar3 & 0x80808080 & uVar3 << 1) >> 3) < 4) {
          uVar8 = 0xff;
          local_34 = local_34 + 1;
          param_1[2] = local_34;
        }
        *(undefined1 *)((int)puVar9 + iVar1) = uVar8;
        *(undefined1 *)(puVar14 + 1) = uVar8;
        uVar2 = *(undefined4 *)(iVar12 + -0x10);
        uVar4 = *(undefined4 *)(iVar12 + -0xc);
        local_28 = local_28 + -1;
        param_1[3] = local_28;
        FUN_0134bd64(uVar2,uVar4);
      }
      iVar5 = iVar5 + -1;
      uVar13 = uVar13 - 1 & uVar13;
    } while (iVar5 != 0);
  }
  return;
}

