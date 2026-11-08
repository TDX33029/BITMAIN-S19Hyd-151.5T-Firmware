// FUN_013cf1fc @ 013cf1fc size=1236 calls_out=9 calls_in=2
// strings: 

void FUN_013cf1fc(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  uint local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar14 = param_3[1];
  iVar18 = param_3[2];
  if (param_2[0x1f] != 0) {
    uVar3 = FUN_013c34ec(param_2[0x20],param_2[0x21],param_2[0x22],param_2[0x23],iVar14,iVar18);
    uVar17 = uVar3 >> 0x19;
    iVar16 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    iVar19 = 0;
    while( true ) {
      uVar3 = uVar13 & uVar3;
      uVar4 = *(uint *)(iVar16 + uVar3);
      uVar5 = uVar4 ^ uVar17 * 0x1010101;
      for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5)
      {
        uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar13;
        piVar7 = (int *)(iVar16 + -0xc + uVar6 * -0xc);
        if ((iVar18 == piVar7[1]) &&
           (iVar8 = thunk_FUN_016dd50a(iVar14,*piVar7 + 8,iVar18), iVar8 == 0)) {
          iVar19 = param_3[1];
          iVar14 = param_2[0x2a];
          iVar18 = param_2[0x2b];
          uVar11 = *(undefined4 *)(iVar16 + uVar6 * -0xc + -4);
          param_2[0x2a] = *param_3;
          param_2[0x2b] = iVar19;
          param_2[0x2c] = 0;
          if (iVar14 != 0) {
            thunk_FUN_016d3fb4(iVar18);
          }
          *(undefined1 *)(param_1 + 2) = 0;
          *param_1 = 0x30;
          param_1[1] = uVar11;
          return;
        }
      }
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      iVar19 = iVar19 + 4;
      uVar3 = uVar3 + iVar19;
    }
  }
  iVar19 = param_2[0x2e];
  iVar8 = *param_3;
  uVar13 = *(uint *)(iVar19 + 0x58);
  uVar3 = *(uint *)(iVar19 + 0x15c) & 0x1f;
  iVar16 = 1 << uVar3;
  uVar17 = uVar13;
  if (*(int *)(iVar19 + 0x50) - uVar13 < (uint)(1 << uVar3)) {
    FUN_013c4434((int *)(iVar19 + 0x50),uVar13,iVar16,4,4);
    uVar17 = *(uint *)(iVar19 + 0x58);
  }
  iVar9 = *(int *)(iVar19 + 0x54);
  do {
    *(undefined4 *)(iVar9 + uVar17 * 4) = 0;
    uVar17 = uVar17 + 1;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  *(uint *)(iVar19 + 0x58) = uVar17;
  iVar16 = thunk_FUN_016dd50a(param_2 + 4,"",0x20);
  if (iVar16 != 0) {
    uVar3 = 0;
    while( true ) {
      uVar5 = uVar3;
      if (uVar3 < 0x101) {
        uVar5 = 0x100;
      }
      do {
        uVar4 = uVar3;
        if (uVar5 == uVar4) goto LAB_013cf504;
        puVar15 = (uint *)((int)(param_2 + 4) + (uVar4 >> 3 & 0xfffffff0));
        local_48[1] = puVar15[1];
        local_48[0] = *puVar15;
        uVar3 = uVar4 + 1;
        local_48[3] = puVar15[3];
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_48[2] = puVar15[2];
      } while ((*(uint *)((int)local_48 + ((uVar4 & 0x60) >> 3)) >> (uVar4 & 0x1f) & 1) == 0);
      if (0xff < uVar4) break;
      uVar11 = 0x29;
      if ((uVar17 <= uVar13) ||
         (uVar5 = *(uint *)(iVar19 + 0x15c) & 0x1f, (uVar13 & ~(-1 << uVar5)) != 0)) {
        puVar10 = &DAT_003cd87a;
        puVar12 = &DAT_018926d0;
LAB_013cf6b0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(puVar10,uVar11,puVar12);
      }
      uVar5 = 1 << uVar5;
      if (uVar17 <= uVar5) {
        uVar11 = 0x25;
        puVar10 = &DAT_003cd88e;
        puVar12 = &DAT_018926e0;
        goto LAB_013cf6b0;
      }
      uVar4 = uVar13 + *(byte *)(iVar19 + 0x5c + (uVar4 & 0xff));
      if (uVar17 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar4,uVar17,&DAT_018926f0);
      }
      *(uint *)(*(int *)(iVar19 + 0x54) + uVar4 * 4) = uVar5;
    }
  }
LAB_013cf504:
  uVar20 = FUN_011e1508(iVar14,iVar18);
  iVar18 = (int)((ulonglong)uVar20 >> 0x20);
  piVar7 = (int *)uVar20;
  param_2[0x2f] = param_2[0x2f] + iVar18;
  do {
    iVar16 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar16 + 1;
  if (iVar16 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13cf6d0);
    (*pcVar1)();
  }
  iVar16 = param_2[0x26];
  if (iVar16 == param_2[0x24]) {
    FUN_013c3fcc();
  }
  *(undefined8 *)(param_2[0x25] + iVar16 * 8) = uVar20;
  param_2[0x26] = iVar16 + 1;
  FUN_013cdf08(param_2 + 0x1c,piVar7,iVar18,uVar13);
  iVar18 = param_2[0x2a];
  iVar16 = param_2[0x2b];
  param_2[0x2a] = iVar8;
  param_2[0x2b] = iVar14;
  param_2[0x2c] = 0;
  if (iVar18 != 0) {
    thunk_FUN_016d3fb4(iVar16);
  }
  if (*param_2 == 1) {
    iVar14 = param_2[0x2e];
    uVar17 = param_2[1];
    uVar11 = 0x2e;
    if (uVar17 < (uint)((*(int *)(iVar14 + 0x1a8) + *(int *)(iVar14 + 0x58) +
                         *(int *)(iVar14 + 0x168) + *(int *)(iVar14 + 0x174) +
                        *(int *)(iVar14 + 0x184)) * 4)) goto LAB_013cf634;
  }
  if (param_2[2] == 1) {
    uVar17 = param_2[3];
    uVar11 = 0x2f;
    if (uVar17 < (uint)(param_2[0x1f] * 0xc + param_2[0x26] * 8 + param_2[0x2f] + param_2[0x27] * 4
                       + param_2[0x2a])) {
LAB_013cf634:
      *param_1 = uVar11;
      param_1[1] = uVar17;
      return;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = 0x30;
  param_1[1] = uVar13;
  return;
}

