// FUN_01b82320 @ 01b82320 size=820 calls_out=0 calls_in=3
// strings: 

undefined4
FUN_01b82320(undefined2 *param_1,short *param_2,uint param_3,uint param_4,short *param_5,
            uint param_6)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int unaff_r5;
  int iVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  short *psVar20;
  int iVar21;
  bool bVar22;
  short *local_38;
  
  uVar4 = 1 << (param_4 & 0xff);
  if (param_4 != 0) {
    unaff_r5 = (uVar4 >> 1) + 1;
  }
  uVar6 = param_3 + 2;
  uVar18 = 1 << (param_4 & 0xff);
  if (param_4 != 0) {
    iVar11 = unaff_r5 << 2;
  }
  else {
    iVar11 = 8;
  }
  uVar14 = (1 << (param_4 - 0x20 & 0xff) | 1U >> (0x20 - param_4 & 0xff)) +
           (uint)CARRY4(uVar18,uVar6);
  uVar18 = uVar18 + uVar6 >> 1 | uVar14 * -0x80000000;
  uVar19 = uVar18 + 2;
  if (-(((uVar14 >> 1) + (uint)(0xfffffffd < uVar18)) * 4 | uVar19 >> 0x1e) <
      (uint)(uVar19 * 4 <= param_6)) {
    iVar8 = (uVar4 >> 1) + (uVar4 >> 3) + 3;
    iVar11 = (int)param_1 + iVar11;
    psVar20 = (short *)(uVar4 - 1);
    psVar17 = param_2 + -1;
    param_1[1] = (short)param_3;
    psVar16 = param_5 + uVar6;
    *param_1 = (short)param_4;
    *param_5 = 0;
    psVar10 = psVar20;
    psVar7 = param_5;
    local_38 = psVar17;
    for (psVar12 = (short *)&DAT_00000001; psVar12 <= (short *)(param_3 + 1);
        psVar12 = (short *)((int)psVar12 + 1)) {
      local_38 = local_38 + 1;
      psVar15 = psVar7 + 1;
      if (*local_38 == -1) {
        *psVar15 = *psVar7 + 1;
        *(char *)((int)psVar16 + (int)psVar10) = (char)psVar12 + -1;
        psVar10 = (short *)((int)psVar10 + -1);
      }
      else {
        *psVar15 = *psVar7 + *local_38;
      }
      psVar7 = psVar15;
    }
    if (psVar10 != psVar20) {
      param_2 = (short *)0x0;
      psVar12 = psVar17;
    }
    param_5[param_3 + 1] = (short)uVar4 + 1;
    psVar7 = param_2;
    if (psVar10 != psVar20) {
      for (; param_2 < (short *)(param_3 + 1); param_2 = (short *)((int)param_2 + 1)) {
        psVar12 = psVar12 + 1;
        sVar2 = *psVar12;
        for (iVar9 = 0; iVar9 < sVar2; iVar9 = iVar9 + 1) {
          *(char *)((int)psVar16 + (int)psVar7) = (char)param_2;
          do {
            psVar7 = (short *)((uint)((int)psVar7 + iVar8) & (uint)psVar20);
          } while (psVar10 < psVar7);
        }
      }
    }
    else {
      uVar18 = 0;
      iVar13 = 0;
      iVar9 = 0;
      local_38 = psVar17;
      while (local_38 != param_2 + param_3) {
        iVar21 = iVar9 + uVar4;
        local_38 = local_38 + 1;
        sVar2 = *local_38;
        *(uint *)((int)psVar16 + iVar9 + uVar4) = uVar18;
        *(int *)((int)psVar16 + iVar21 + 4) = iVar13;
        for (iVar5 = 8; iVar5 < sVar2; iVar5 = iVar5 + 8) {
          *(uint *)((int)psVar16 + iVar5 + iVar21) = uVar18;
          *(int *)((int)psVar16 + iVar5 + iVar21 + 4) = iVar13;
        }
        iVar9 = iVar9 + sVar2;
        bVar22 = 0xfefefefe < uVar18;
        uVar18 = uVar18 + 0x1010101;
        iVar13 = iVar13 + 0x1010101 + (uint)bVar22;
      }
      uVar18 = 0;
      for (uVar6 = 0; uVar6 < uVar4; uVar6 = uVar6 + 2) {
        *(undefined1 *)((int)psVar16 + (uVar18 & (uint)psVar20)) =
             *(undefined1 *)((int)psVar16 + uVar6 + uVar4);
        *(undefined1 *)((int)psVar16 + (uVar18 + iVar8 & (uint)psVar20)) =
             *(undefined1 *)((int)psVar16 + uVar6 + uVar4 + 1);
        uVar18 = uVar18 + iVar8 * 2 & (uint)psVar20;
      }
    }
    for (uVar18 = 0; uVar18 != uVar4; uVar18 = uVar18 + 1) {
      uVar1 = param_5[*(byte *)((int)psVar16 + uVar18)];
      param_5[*(byte *)((int)psVar16 + uVar18)] = uVar1 + 1;
      param_1[uVar1 + 2] = (short)uVar4 + (short)uVar18;
    }
    uVar4 = 0;
    iVar9 = 0;
    iVar8 = iVar11;
    do {
      psVar17 = psVar17 + 1;
      iVar13 = (int)*psVar17;
      if (iVar13 == 0) {
        *(uint *)(iVar8 + 4) = (param_4 + 1) * 0x10000 - uVar18;
      }
      else if ((iVar13 + 1U & 0xfffd) == 0) {
        iVar13 = iVar9 + -1;
        iVar9 = iVar9 + 1;
        *(uint *)(iVar8 + 4) = param_4 * 0x10000 - uVar18;
        *(int *)(iVar11 + uVar4 * 8) = iVar13;
      }
      else {
        uVar6 = (param_4 - 0x1f) + LZCOUNT(iVar13 + -1);
        *(uint *)(iVar8 + 4) = uVar6 * 0x10000 - (iVar13 << (uVar6 & 0xff));
        iVar21 = iVar9 - iVar13;
        iVar9 = iVar9 + iVar13;
        *(int *)(iVar11 + uVar4 * 8) = iVar21;
      }
      uVar4 = uVar4 + 1;
      iVar8 = iVar8 + 8;
    } while (uVar4 <= param_3);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffd4;
  }
  return uVar3;
}

