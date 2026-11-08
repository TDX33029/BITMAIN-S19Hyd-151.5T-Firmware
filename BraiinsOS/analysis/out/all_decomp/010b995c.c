// FUN_010b995c @ 010b995c size=628 calls_out=1 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_010b995c(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_50;
  
  uVar9 = param_2[2];
  if (param_1[2] == 0) {
    FUN_0109f6b4(param_1);
  }
  uVar8 = param_1[1];
  puVar12 = (uint *)*param_1;
  bVar3 = false;
  iVar5 = 0;
  uVar4 = uVar9;
  do {
    uVar4 = uVar8 & uVar4;
    uVar6 = *(uint *)((int)puVar12 + uVar4);
    uVar10 = uVar6 ^ (uVar9 >> 0x19) * 0x1010101;
    uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
    while (uVar10 != 0) {
      uVar7 = uVar4 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & uVar8;
      puVar11 = puVar12 + uVar7 * -6 + -6;
      if ((*param_2 == *puVar11 && param_2[2] == puVar11[2]) &&
          (param_2[1] == puVar11[1] && param_2[3] == puVar11[3])) {
        uVar4 = uVar7 * -3;
      }
      uVar10 = uVar10 - 1 & uVar10;
      if ((*param_2 == *puVar11 && param_2[2] == puVar11[2]) &&
          (param_2[1] == puVar11[1] && param_2[3] == puVar11[3])) {
        lVar2 = *(longlong *)(puVar12 + uVar4 * 2 + -2);
        puVar12[uVar4 * 2 + -2] = param_3;
        puVar12[uVar4 * 2 + -1] = param_4;
        return lVar2;
      }
    }
    uVar10 = uVar6 & 0x80808080;
    if (bVar3) {
LAB_010b9ad4:
      if ((uVar10 & uVar6 << 1) != 0) {
        uVar4 = (uint)*(char *)((int)puVar12 + uStack_50);
        if (-1 < (int)uVar4) {
          uVar4 = *puVar12 & 0x80808080;
          uVar6 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
          uVar4 = (uint)*(byte *)((int)puVar12 + (uVar6 >> 3));
          uStack_50 = uVar6 >> 3;
        }
        uVar13 = *param_2;
        uVar7 = param_2[1];
        uVar10 = param_2[2];
        uVar6 = param_2[3];
        param_1[2] = param_1[2] - (uVar4 & 1);
        param_1[3] = param_1[3] + 1;
        bVar1 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)puVar12 + uStack_50) = bVar1;
        *(byte *)((int)puVar12 + (uVar8 & uStack_50 - 4) + 4) = bVar1;
        puVar12[uStack_50 * -6 + -1] = param_4;
        puVar12[uStack_50 * -6 + -2] = param_3;
        puVar12[uStack_50 * -6 + -6] = uVar13;
        puVar12[uStack_50 * -6 + -5] = uVar7;
        puVar12[uStack_50 * -6 + -4] = uVar10;
        puVar12[uStack_50 * -6 + -3] = uVar6;
        return (ulonglong)param_3 << 0x20;
      }
      bVar3 = true;
    }
    else {
      if (uVar10 != 0) {
        uStack_50 = uVar4 + ((uint)LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                    uVar8;
        goto LAB_010b9ad4;
      }
      bVar3 = false;
    }
    iVar5 = iVar5 + 4;
    uVar4 = iVar5 + uVar4;
  } while( true );
}

