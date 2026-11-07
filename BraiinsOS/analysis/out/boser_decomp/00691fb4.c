// FUN_00691fb4 @ 00691fb4 size=624 calls_out=5 calls_in=2
// strings: 

void FUN_00691fb4(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_c8 [136];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = FUN_00692224(param_2[2],param_2[3],param_2[4],param_2[5],param_3);
  piVar8 = (int *)(*param_2 + ((uVar2 << 7) >> (param_2[6] & 0x1fU)) * 0x20);
  if (*piVar8 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar8);
    if (bVar1) {
      *piVar8 = -4;
      DataMemoryBarrier(0xb);
      goto LAB_00692024;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0131c50c(piVar8);
LAB_00692024:
  uVar7 = uVar2 >> 0x19;
  iVar9 = piVar8[1];
  uVar12 = piVar8[2];
  iVar6 = 0;
  while( true ) {
    uVar2 = uVar12 & uVar2;
    uVar10 = *(uint *)(iVar9 + uVar2);
    uVar3 = uVar10 ^ uVar7 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar13 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar12;
      iVar4 = FUN_0067cd5c(param_3,iVar9 + -0xa0 + uVar13 * -0xa0);
      uVar3 = uVar3 - 1 & uVar3;
      if (iVar4 != 0) {
        iVar4 = ((int)(uVar13 * 0xa0) >> 5) * -0x33333333;
        puVar11 = (uint *)(iVar9 + (iVar4 - 4U & uVar12));
        uVar7 = *puVar11;
        uVar2 = *(uint *)(iVar9 + iVar4) & 0x80808080 & *(uint *)(iVar9 + iVar4) << 1;
        piVar8[4] = piVar8[4] + -1;
        iVar6 = iVar9 + uVar13 * -0xa0;
        uVar5 = 0x80;
        if (((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                           | uVar2 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar7 & 0x80808080 & uVar7 << 1) >> 3) < 4) {
          piVar8[3] = piVar8[3] + 1;
          uVar5 = 0xff;
        }
        *(undefined1 *)(iVar9 + iVar4) = uVar5;
        *(undefined1 *)(puVar11 + 1) = uVar5;
        FUN_01bed4e2(auStack_c8,iVar6 + -0xa0,0x88);
        local_40 = *(undefined4 *)(iVar6 + -0x18);
        uStack_3c = *(undefined4 *)(iVar6 + -0x14);
        uStack_38 = *(undefined4 *)(iVar6 + -0x10);
        uStack_34 = *(undefined4 *)(iVar6 + -0xc);
        uStack_30 = *(undefined4 *)(iVar6 + -8);
        uStack_2c = *(undefined4 *)(iVar6 + -4);
        FUN_01bed4e2(param_1,auStack_c8,0xa0);
        goto LAB_006921b8;
      }
    }
    if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
    iVar6 = iVar6 + 4;
    uVar2 = iVar6 + uVar2;
  }
  *param_1 = 2;
  param_1[1] = 0;
LAB_006921b8:
  if (*piVar8 == -4) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
      if (bVar1) {
        *piVar8 = 0;
        return;
      }
    } while (*piVar8 == -4);
  }
  ClearExclusiveLocal();
  FUN_0131c8c0(piVar8);
  return;
}

