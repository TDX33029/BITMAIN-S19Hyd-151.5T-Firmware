// FUN_00036d8c @ 00036d8c  size=980  callers=1
// program: bmminer


void FUN_00036d8c(void)

{
  ulonglong param5;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int extraout_r1;
  int extraout_r1_00;
  char *pcVar8;
  char *pcVar7;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char acStack_828 [512];
  char acStack_628 [1540];
  
  uVar9 = 0;
  do {
    iVar2 = FUN_000201d8(uVar9);
    if (iVar2 != 0) {
      FUN_0002002c();
      uVar5 = 0;
      puVar10 = (ulonglong *)(&DAT_00b2b1e0 + uVar9 * 0x200);
      while( true ) {
        uVar4 = FUN_0002002c();
        uVar1 = DAT_00087bbc;
        if (uVar4 <= uVar5) break;
        uVar6 = *(undefined4 *)((int)puVar10 + 4);
        param5 = *puVar10;
        iVar2 = (uVar9 * 0x3c00 + uVar5 * 0x3c + DAT_0048d370 % 0x3c) * 8;
        *(int *)(&DAT_0048e3f0 + iVar2) = (int)*puVar10;
        *(undefined4 *)(&DAT_0048e3f4 + iVar2) = uVar6;
        if (4 < uVar1) {
          snprintf(acStack_828,0x800,"chain %u asic %u asic_nonce_num %llu\n",uVar9,uVar5,param5);
          FUN_00032218(4,acStack_828,0);
        }
        uVar5 = uVar5 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 4);
  DAT_0048d370 = DAT_0048d370 + 1;
  memset(&DAT_0072093c,0,0x2000);
  memset(&DAT_0071e888,0,0x2000);
  memset(&DAT_0071c840,0,0x2000);
  FUN_00035f58(&DAT_0072093c,10);
  FUN_00035f58(&DAT_0071e888,0x1e);
  iVar2 = 0;
  puVar13 = &DAT_0048d3f0;
  FUN_00035f58(&DAT_0071c840,0x3c);
  do {
    iVar3 = FUN_000201d8(iVar2);
    if (iVar3 != 0) {
      iVar3 = 0;
      uVar9 = 0;
      puVar14 = &DAT_00b2b1e0 + iVar2 * 0x200;
      while( true ) {
        uVar5 = FUN_0002002c();
        iVar11 = iVar3 + uVar9;
        if (uVar5 <= uVar9) break;
        uVar6 = FUN_0002003c();
        FUN_000673ec(uVar9,uVar6);
        iVar12 = iVar11;
        if (extraout_r1 == 0) {
          iVar3 = iVar3 + 1;
          iVar12 = iVar3 + uVar9;
          FUN_00020758(iVar2,iVar11,0x20);
        }
        iVar11 = DAT_0048d370 % 0x3c + -1;
        if (iVar11 < 0) {
          iVar11 = DAT_0048d370 % 0x3c + 0x3b;
        }
        if (*(int *)(&DAT_0048e3f0 + (iVar2 * 0x3c00 + uVar9 * 0x3c + iVar11) * 8) < 2) {
          FUN_00020758(iVar2,iVar12,0x6f);
          puVar13[uVar9] = puVar13[uVar9] + 1;
        }
        else {
          FUN_00020758(iVar2,iVar12,0x6f);
        }
        uVar9 = uVar9 + 1;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14 = puVar14 + 2;
      }
      FUN_00020758(iVar2,iVar11,0);
    }
    iVar2 = iVar2 + 1;
    puVar13 = puVar13 + 0x100;
  } while (iVar2 != 4);
  uVar9 = 0;
  iVar2 = 0;
  do {
    iVar3 = FUN_000201d8(iVar2);
    if (iVar3 != 0) {
      memset(acStack_828,0,0x200);
      FUN_000207cc(iVar2,acStack_828);
      pcVar8 = acStack_828;
      do {
        pcVar7 = pcVar8 + 1;
        if (*pcVar8 == 'x') {
          uVar9 = uVar9 + 1;
        }
        else if (*pcVar8 == '\0') break;
        pcVar8 = pcVar7;
      } while (acStack_628 != pcVar7);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      if (uVar9 < 9) {
        iVar2 = 0;
        do {
          iVar3 = FUN_000201d8(iVar2);
          if (iVar3 != 0) {
            iVar3 = 0;
            uVar9 = 0;
            while( true ) {
              uVar5 = FUN_0002002c();
              iVar11 = iVar3 + uVar9;
              if (uVar5 <= uVar9) break;
              uVar6 = FUN_0002003c();
              FUN_000673ec(uVar9,uVar6);
              iVar12 = iVar11;
              if (extraout_r1_00 == 0) {
                iVar3 = iVar3 + 1;
                iVar12 = iVar3 + uVar9;
                FUN_00020758(iVar2,iVar11,0x20);
              }
              uVar9 = uVar9 + 1;
              FUN_00020758(iVar2,iVar12,0x6f);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
      }
      return;
    }
  } while( true );
}

