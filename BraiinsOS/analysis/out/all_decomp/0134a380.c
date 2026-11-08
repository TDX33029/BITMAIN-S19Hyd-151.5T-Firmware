// FUN_0134a380 @ 0134a380 size=2492 calls_out=9 calls_in=1
// strings: no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0134a380(int *param_1,int param_2,int param_3,char *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  undefined8 uVar25;
  int local_ac;
  int local_a0;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  if (*(int *)(param_2 + 0x6c) != 0) {
    local_58 = *(int *)(param_2 + 0x88);
    iVar20 = *(int *)(param_3 + 8);
    local_50 = *(uint *)(param_2 + 0x78);
    uStack_4c = *(uint *)(param_2 + 0x7c);
    local_60 = *(int *)(param_2 + 0x80);
    local_5c = *(int *)(param_2 + 0x84);
    uVar12 = *(undefined4 *)(param_3 + 4);
    uStack_48 = *(uint *)(param_2 + 0x70);
    local_44 = *(uint *)(param_2 + 0x74);
    local_54 = *(int *)(param_2 + 0x8c);
    FUN_01352290(&local_60,uVar12,iVar20);
    FUN_01352290(&local_60,param_4,param_5);
    uVar17 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
             local_44 >> 0x18;
    lVar4 = (ulonglong)local_50 * (ulonglong)uVar17;
    uVar9 = uStack_4c << 0x18 | (uStack_4c >> 8 & 0xff) << 0x10 | (uStack_4c >> 0x10 & 0xff) << 8 |
            uStack_4c >> 0x18;
    lVar5 = (ulonglong)~uStack_48 * (ulonglong)uVar9;
    uVar14 = (uint)lVar5;
    uVar9 = (local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8 |
            local_50 >> 0x18) * ~uStack_48 + uVar9 * ~local_44 + (int)((ulonglong)lVar5 >> 0x20);
    uVar17 = (uStack_48 << 0x18 | (uStack_48 >> 8 & 0xff) << 0x10 | (uStack_48 >> 0x10 & 0xff) << 8
             | uStack_48 >> 0x18) * local_50 + uVar17 * uStack_4c + (int)((ulonglong)lVar4 >> 0x20)
             ^ (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
               uVar14 >> 0x18);
    uVar9 = (uint)lVar4 ^
            (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18);
    uVar16 = *(uint *)(param_2 + 100);
    iVar21 = *(int *)(param_2 + 0x60);
    uVar14 = uVar17;
    if ((local_50 & 0x20) != 0) {
      uVar14 = uVar9;
      uVar9 = uVar17;
    }
    uVar14 = uVar9 << (local_50 & 0x1f) | (uVar14 >> 1) >> (~local_50 & 0x1f);
    uVar9 = uVar14 >> 0x19;
    local_ac = 0;
    while( true ) {
      uVar14 = uVar16 & uVar14;
      uVar17 = *(uint *)(iVar21 + uVar14);
      uVar6 = uVar17 ^ uVar9 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        uVar22 = uVar6 >> 8;
        uVar3 = uVar6 >> 0x10;
        uVar7 = uVar6 >> 0x18;
        uVar18 = uVar6 << 0x18;
        uVar6 = uVar6 - 1 & uVar6;
        uVar22 = uVar14 + ((uint)LZCOUNT(uVar18 | (uVar22 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                         uVar7) >> 3) & uVar16;
        piVar10 = (int *)(iVar21 + -0x20 + uVar22 * -0x20);
        iVar15 = piVar10[1];
        if (iVar20 == *(int *)(*piVar10 + 0x10)) {
          uVar18 = piVar10[2];
          uVar7 = thunk_FUN_016dd50a(uVar12,*(undefined4 *)(*piVar10 + 0xc),iVar20);
          uVar3 = uVar7;
          if (uVar7 == 0) {
            uVar3 = param_5;
          }
          if ((uVar7 == 0 && uVar3 == uVar18) &&
             (iVar15 = thunk_FUN_016dd50a(param_4,iVar15,param_5), iVar15 == 0)) {
            *param_1 = -0x7ffffff6;
            param_1[1] = iVar21 + uVar22 * -0x20 + -0x14;
            return;
          }
        }
      }
      if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
      local_ac = local_ac + 4;
      uVar14 = uVar14 + local_ac;
    }
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    local_50 = *(uint *)(param_2 + 0x48);
    uStack_4c = *(uint *)(param_2 + 0x4c);
    local_60 = *(int *)(param_2 + 0x50);
    uVar12 = *(undefined4 *)(param_3 + 4);
    local_5c = *(int *)(param_2 + 0x54);
    local_58 = *(int *)(param_2 + 0x58);
    uStack_48 = *(uint *)(param_2 + 0x40);
    local_44 = *(uint *)(param_2 + 0x44);
    local_54 = *(int *)(param_2 + 0x5c);
    iVar21 = *(int *)(param_3 + 8);
    FUN_01352290(&local_60,uVar12);
    iVar20 = *(int *)(param_2 + 0x30);
    uVar16 = *(uint *)(param_2 + 0x34);
    uVar17 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
             local_44 >> 0x18;
    lVar4 = (ulonglong)local_50 * (ulonglong)uVar17;
    uVar9 = uStack_4c << 0x18 | (uStack_4c >> 8 & 0xff) << 0x10 | (uStack_4c >> 0x10 & 0xff) << 8 |
            uStack_4c >> 0x18;
    lVar5 = (ulonglong)~uStack_48 * (ulonglong)uVar9;
    uVar14 = (uint)lVar5;
    uVar9 = (local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8 |
            local_50 >> 0x18) * ~uStack_48 + uVar9 * ~local_44 + (int)((ulonglong)lVar5 >> 0x20);
    uVar17 = (uStack_48 << 0x18 | (uStack_48 >> 8 & 0xff) << 0x10 | (uStack_48 >> 0x10 & 0xff) << 8
             | uStack_48 >> 0x18) * local_50 + uVar17 * uStack_4c + (int)((ulonglong)lVar4 >> 0x20)
             ^ (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
               uVar14 >> 0x18);
    uVar9 = (uint)lVar4 ^
            (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18);
    uVar14 = uVar17;
    if ((local_50 & 0x20) != 0) {
      uVar14 = uVar9;
      uVar9 = uVar17;
    }
    uVar14 = uVar9 << (local_50 & 0x1f) | (uVar14 >> 1) >> (~local_50 & 0x1f);
    uVar9 = uVar14 >> 0x19;
    local_a0 = 0;
    while( true ) {
      uVar14 = uVar16 & uVar14;
      uVar6 = *(uint *)(iVar20 + uVar14);
      uVar17 = uVar6 ^ uVar9 * 0x1010101;
      uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
      while (uVar17 != 0) {
        uVar22 = uVar17 >> 8;
        uVar3 = uVar17 >> 0x10;
        uVar7 = uVar17 >> 0x18;
        uVar18 = uVar17 << 0x18;
        uVar17 = uVar17 - 1 & uVar17;
        uVar22 = uVar14 + ((uint)LZCOUNT(uVar18 | (uVar22 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                         uVar7) >> 3) & uVar16;
        iVar15 = *(int *)(iVar20 + -0xc + uVar22 * -0xc);
        if ((iVar21 == *(int *)(iVar15 + 0x10)) &&
           (iVar15 = thunk_FUN_016dd50a(uVar12,*(undefined4 *)(iVar15 + 0xc),iVar21), iVar15 == 0))
        {
          iVar20 = iVar20 + uVar22 * -0xc;
          uVar25 = FUN_013528d4(*(undefined1 *)(iVar20 + -4),*(undefined4 *)(iVar20 + -8));
          iVar21 = (int)uVar25;
          iVar20 = (int)((ulonglong)uVar25 >> 0x20);
          if (iVar21 != 0) goto LAB_0134a7b4;
          goto LAB_0134ab14;
        }
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      local_a0 = local_a0 + 4;
      uVar14 = uVar14 + local_a0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor"
               ,0x16,&DAT_01892074);
LAB_0134ac30:
  if ((int)param_5 < 0) goto LAB_0134ac3c;
  if (param_5 != 0) {
LAB_0134ab38:
    iVar21 = thunk_FUN_016d4a50(param_5);
    if (iVar21 == 0) goto LAB_0134ad30;
    iVar20 = -0x7ffffffa;
    goto LAB_0134ac64;
  }
  iVar20 = -0x7ffffffa;
  goto LAB_0134ac28;
  while( true ) {
    iVar20 = iVar21 + iVar15;
    pbVar11 = (byte *)(iVar20 + -1);
    uVar9 = (uint)(char)*pbVar11;
    if (0x7fffffff < uVar9) {
      pbVar11 = (byte *)(iVar20 + -2);
      bVar1 = *pbVar11;
      if ((char)bVar1 < -0x40) {
        pbVar11 = (byte *)(iVar20 + -3);
        bVar2 = *pbVar11;
        if ((char)bVar2 < -0x40) {
          pbVar11 = (byte *)(iVar20 + -4);
          uVar14 = (int)(char)bVar2 & 0x3fU | (*pbVar11 & 7) << 6;
        }
        else {
          uVar14 = bVar2 & 0xf;
        }
        uVar14 = (int)(char)bVar1 & 0x3fU | uVar14 << 6;
      }
      else {
        uVar14 = bVar1 & 0x1f;
      }
      uVar9 = uVar9 & 0x3f | uVar14 << 6;
    }
    iVar20 = (int)pbVar11 - iVar21;
    if (uVar9 != 0x23) break;
LAB_0134a7b4:
    iVar15 = iVar20;
    if (iVar15 == 0) {
      iVar15 = 0;
      break;
    }
  }
  FUN_013575a0(&local_60,iVar21,iVar15);
  iVar15 = local_54;
  iVar21 = local_58;
  iVar20 = local_5c;
  if (local_60 != -0x7ffffff6) {
    param_1[3] = local_54;
    param_1[0xb] = local_34;
    param_1[0xc] = iStack_30;
    param_1[0xd] = iStack_2c;
    param_1[2] = local_58;
    param_1[1] = local_5c;
    param_1[4] = local_50;
    param_1[5] = uStack_4c;
    param_1[6] = uStack_48;
    param_1[7] = local_44;
    param_1[8] = iStack_40;
    param_1[9] = iStack_3c;
    param_1[10] = iStack_38;
    *param_1 = local_60;
    return;
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    local_60 = *(int *)(param_2 + 0x80);
    local_5c = *(int *)(param_2 + 0x84);
    uStack_48 = *(uint *)(param_2 + 0x70);
    local_44 = *(uint *)(param_2 + 0x74);
    local_50 = *(uint *)(param_2 + 0x78);
    uStack_4c = *(uint *)(param_2 + 0x7c);
    local_58 = *(int *)(param_2 + 0x88);
    local_54 = *(int *)(param_2 + 0x8c);
    FUN_01352290(&local_60,iVar21,iVar15);
    FUN_01352290(&local_60,param_4,param_5);
    iVar23 = 0;
    uVar9 = uStack_4c << 0x18 | (uStack_4c >> 8 & 0xff) << 0x10 | (uStack_4c >> 0x10 & 0xff) << 8 |
            uStack_4c >> 0x18;
    lVar4 = (ulonglong)~uStack_48 * (ulonglong)uVar9;
    uVar17 = (uint)lVar4;
    uVar14 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
             local_44 >> 0x18;
    uVar9 = (local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8 |
            local_50 >> 0x18) * ~uStack_48 + uVar9 * ~local_44 + (int)((ulonglong)lVar4 >> 0x20);
    lVar4 = (ulonglong)local_50 * (ulonglong)uVar14;
    iVar13 = *(int *)(param_2 + 0x60);
    uVar16 = *(uint *)(param_2 + 100);
    uVar9 = (uint)lVar4 ^
            (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18);
    uVar17 = (uStack_48 << 0x18 | (uStack_48 >> 8 & 0xff) << 0x10 | (uStack_48 >> 0x10 & 0xff) << 8
             | uStack_48 >> 0x18) * local_50 + uVar14 * uStack_4c + (int)((ulonglong)lVar4 >> 0x20)
             ^ (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
               uVar17 >> 0x18);
    uVar14 = uVar17;
    if ((local_50 & 0x20) != 0) {
      uVar14 = uVar9;
      uVar9 = uVar17;
    }
    uVar14 = uVar9 << (local_50 & 0x1f) | (uVar14 >> 1) >> (~local_50 & 0x1f);
    uVar9 = uVar14 >> 0x19;
    while( true ) {
      uVar14 = uVar16 & uVar14;
      uVar6 = *(uint *)(iVar13 + uVar14);
      uVar17 = uVar6 ^ uVar9 * 0x1010101;
      for (uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff; uVar17 != 0;
          uVar17 = uVar17 - 1 & uVar17) {
        uVar22 = uVar14 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                         (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                 uVar16;
        piVar10 = (int *)(iVar13 + -0x20 + uVar22 * -0x20);
        iVar19 = piVar10[1];
        if (iVar15 == *(int *)(*piVar10 + 0x10)) {
          uVar18 = piVar10[2];
          uVar7 = thunk_FUN_016dd50a(iVar21,*(undefined4 *)(*piVar10 + 0xc),iVar15);
          uVar3 = uVar7;
          if (uVar7 == 0) {
            uVar3 = param_5;
          }
          if ((uVar7 == 0 && uVar3 == uVar18) &&
             (iVar19 = thunk_FUN_016dd50a(param_4,iVar19,param_5), iVar19 == 0)) {
            *param_1 = -0x7ffffff6;
            param_1[1] = iVar13 + uVar22 * -0x20 + -0x14;
            if (iVar20 == 0) {
              return;
            }
            thunk_FUN_016d3fb4(iVar21);
            return;
          }
        }
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      iVar23 = iVar23 + 4;
      uVar14 = uVar14 + iVar23;
    }
  }
  if (iVar20 != 0) {
    thunk_FUN_016d3fb4(iVar21);
  }
LAB_0134ab14:
  if (param_5 < 8) {
    if (param_5 != 0) {
      if ((*param_4 == '/') ||
         ((param_5 != 1 &&
          ((param_4[1] == '/' ||
           ((param_5 != 2 &&
            ((param_4[2] == '/' ||
             ((param_5 != 3 &&
              ((param_4[3] == '/' ||
               ((param_5 != 4 &&
                ((param_4[4] == '/' ||
                 ((param_5 != 5 && ((param_4[5] == '/' || ((param_5 != 6 && (param_4[6] == '/'))))))
                 )))))))))))))))))) goto LAB_0134ab38;
LAB_0134ac4c:
      iVar21 = thunk_FUN_016d4a50(param_5);
      if (iVar21 == 0) {
LAB_0134ad30:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_5);
      }
      iVar20 = -0x7ffffffb;
LAB_0134ac64:
      uVar9 = param_5;
      goto LAB_0134ac68;
    }
  }
  else {
    uVar9 = ((uint)(param_4 + 3) & 0xfffffffc) - (int)param_4;
    if (uVar9 == 0) {
      uVar9 = 0;
LAB_0134ab6c:
      do {
        uVar17 = *(uint *)(param_4 + uVar9);
        uVar14 = *(uint *)((int)(param_4 + uVar9) + 4) ^ 0x2f2f2f2f;
        if (((0x1010100 - (uVar17 ^ 0x2f2f2f2f) | uVar17) & 0x80808080 &
            (0x1010100 - uVar14 | uVar14)) != 0x80808080) break;
        uVar9 = uVar9 + 8;
      } while (uVar9 <= param_5 - 8);
    }
    else {
      iVar20 = (int)param_4 - ((uint)(param_4 + 3) & 0xfffffffc);
      pcVar8 = param_4;
      do {
        if (*pcVar8 == '/') goto LAB_0134ac30;
        bVar24 = iVar20 != -1;
        iVar20 = iVar20 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar24);
      if (uVar9 <= param_5 - 8) goto LAB_0134ab6c;
    }
    iVar20 = param_5 - uVar9;
    if (iVar20 != 0) {
      pcVar8 = param_4 + uVar9;
      do {
        if (*pcVar8 == '/') goto LAB_0134ac30;
        iVar20 = iVar20 + -1;
        pcVar8 = pcVar8 + 1;
      } while (iVar20 != 0);
    }
    if ((int)param_5 < 0) {
LAB_0134ac3c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,param_5);
    }
    if (param_5 != 0) goto LAB_0134ac4c;
  }
  iVar20 = -0x7ffffffb;
LAB_0134ac28:
  uVar9 = 0;
  iVar21 = 1;
LAB_0134ac68:
  FUN_016dd1aa(iVar21,param_4,param_5);
  *param_1 = iVar20;
  param_1[1] = uVar9;
  param_1[2] = iVar21;
  param_1[3] = param_5;
  return;
}

