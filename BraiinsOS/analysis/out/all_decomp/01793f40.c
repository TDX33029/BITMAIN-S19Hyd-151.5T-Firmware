// FUN_01793f40 @ 01793f40 size=944 calls_out=0 calls_in=3
// strings: 

undefined4
FUN_01793f40(undefined2 *param_1,int param_2,int param_3,uint param_4,short *param_5,uint param_6)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int unaff_r4;
  short *psVar15;
  short *psVar16;
  int iVar17;
  short *psVar18;
  char cVar19;
  short *psVar20;
  short *psVar21;
  byte *pbVar22;
  bool bVar23;
  short *local_40;
  int local_38;
  
  bVar23 = param_4 == 0;
  if (bVar23) {
    unaff_r4 = 8;
  }
  cVar19 = '\0';
  uVar1 = 1 << (param_4 & 0xff);
  if (!bVar23) {
    unaff_r4 = (uVar1 >> 1) + 1;
  }
  uVar4 = param_3 + 2;
  uVar10 = 1 << (param_4 & 0xff);
  if (!bVar23) {
    unaff_r4 = unaff_r4 << 2;
  }
  uVar6 = (1 << (param_4 - 0x20 & 0xff) | 1U >> (0x20 - param_4 & 0xff)) +
          (uint)CARRY4(uVar10,uVar4);
  uVar10 = uVar10 + uVar4 >> 1 | uVar6 * -0x80000000;
  uVar11 = uVar10 + 2;
  if ((uint)(uVar11 * 4 <= param_6) <=
      -((((uVar6 >> 1) + (uint)(0xfffffffd < uVar10)) * 2 + (uint)CARRY4(uVar11,uVar11)) * 2 +
       (uint)CARRY4(uVar11 * 2,uVar11 * 2))) {
    return 0xffffffd4;
  }
  psVar5 = param_5 + uVar4;
  iVar7 = (int)param_1 + unaff_r4;
  iVar8 = (uVar1 >> 1) + (uVar1 >> 3) + 3;
  *param_1 = (short)param_4;
  uVar10 = uVar1 - 1;
  sVar3 = (short)uVar1 + 1;
  param_1[1] = (short)param_3;
  if (param_3 == -1) {
    *param_5 = sVar3;
    local_38 = -2;
LAB_01794278:
    if (uVar1 == 0) goto LAB_01794128;
    uVar6 = 0;
    uVar4 = 0;
    do {
      *(undefined1 *)((int)psVar5 + (uVar10 & uVar4)) = *(undefined1 *)((int)psVar5 + uVar6 + uVar1)
      ;
      uVar11 = iVar8 + uVar4;
      iVar17 = uVar6 + uVar1 + 1;
      uVar6 = uVar6 + 2;
      uVar4 = iVar8 * 2 + uVar4 & uVar10;
      *(undefined1 *)((int)psVar5 + (uVar11 & uVar10)) = *(undefined1 *)((int)psVar5 + iVar17);
    } while (uVar6 < uVar1);
  }
  else {
    local_38 = param_3 * 2;
    psVar15 = (short *)(param_2 + -2);
    psVar18 = (short *)(param_2 + local_38);
    *param_5 = 0;
    psVar16 = psVar15;
    psVar20 = param_5;
    uVar4 = uVar10;
    do {
      psVar16 = psVar16 + 1;
      psVar21 = psVar20 + 1;
      if (*psVar16 == -1) {
        *psVar21 = *psVar20 + 1;
        *(char *)((int)psVar5 + uVar4) = cVar19;
        uVar4 = uVar4 - 1;
      }
      else {
        *psVar21 = *psVar20 + *psVar16;
      }
      cVar19 = cVar19 + '\x01';
      psVar20 = psVar21;
    } while (psVar18 != psVar16);
    param_5[param_3 + 1] = sVar3;
    if (uVar4 == uVar10) {
      uVar4 = 0;
      iVar17 = 0;
      uVar6 = 0;
      do {
        psVar15 = psVar15 + 1;
        iVar9 = (int)*psVar15;
        *(uint *)((int)psVar5 + iVar17 + uVar1) = uVar4;
        *(uint *)((int)psVar5 + iVar17 + uVar1 + 4) = uVar6;
        if (8 < iVar9) {
          puVar13 = (uint *)((int)psVar5 + iVar17 + uVar1 + 8);
          do {
            *puVar13 = uVar4;
            puVar14 = puVar13 + 2;
            puVar13[1] = uVar6;
            puVar13 = puVar14;
          } while ((uint *)((int)psVar5 + (iVar9 - 9U & 0xfffffff8) + iVar17 + uVar1 + 0x10) !=
                   puVar14);
        }
        bVar23 = 0xfefefefe < uVar4;
        uVar4 = uVar4 + 0x1010101;
        iVar17 = iVar17 + iVar9;
        uVar6 = uVar6 + 0x1010101 + (uint)bVar23;
      } while (psVar18 != psVar15);
      goto LAB_01794278;
    }
    uVar11 = 0;
    uVar6 = uVar11;
    do {
      psVar15 = psVar15 + 1;
      sVar3 = *psVar15;
      if (0 < sVar3) {
        iVar17 = 0;
        do {
          *(char *)((int)psVar5 + uVar6) = (char)uVar11;
          do {
            uVar6 = iVar8 + uVar6 & uVar10;
          } while (uVar4 < uVar6);
          iVar17 = iVar17 + 1;
        } while (sVar3 != iVar17);
      }
      uVar11 = uVar11 + 1;
    } while (psVar18 != psVar15);
    if (uVar1 == 0) goto LAB_01794128;
  }
  pbVar22 = (byte *)((int)psVar5 + -1);
  do {
    pbVar22 = pbVar22 + 1;
    uVar2 = param_5[*pbVar22];
    param_5[*pbVar22] = uVar2 + 1;
    param_1[uVar2 + 2] = ((short)pbVar22 + (short)uVar1) - (short)psVar5;
  } while ((byte *)((int)psVar5 + (uVar1 - 1)) != pbVar22);
LAB_01794128:
  local_40 = (short *)(param_2 + -2);
  iVar8 = 0;
  iVar17 = iVar7 + 4;
  do {
    local_40 = local_40 + 1;
    iVar9 = (int)*local_40;
    uVar10 = (param_4 - 0x1f) + LZCOUNT(iVar9 + -1);
    if (iVar9 == 0) {
      *(uint *)(iVar7 + 4) = (param_4 + 1) * 0x10000 - uVar1;
    }
    else {
      iVar12 = iVar8 - iVar9;
      if ((iVar9 + 1U & 0xfffd) == 0) {
        iVar9 = iVar8 + -1;
        iVar8 = iVar8 + 1;
        *(uint *)(iVar7 + 4) = param_4 * 0x10000 - uVar1;
        *(int *)(iVar17 + -4) = iVar9;
      }
      else {
        *(uint *)(iVar7 + 4) = uVar10 * 0x10000 - (iVar9 << (uVar10 & 0xff));
        iVar8 = iVar8 + iVar9;
        *(int *)(iVar17 + -4) = iVar12;
      }
    }
    iVar7 = iVar7 + 8;
    iVar17 = iVar17 + 8;
  } while ((short *)(param_2 + local_38) != local_40);
  return 0;
}

