// FUN_01682b90 @ 01682b90 size=1620 calls_out=9 calls_in=2
// strings: 

void FUN_01682b90(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  int local_32c;
  undefined1 auStack_310 [112];
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [72];
  uint local_210;
  int local_208;
  undefined1 auStack_204 [108];
  undefined1 auStack_198 [72];
  undefined1 auStack_150 [112];
  undefined1 auStack_e0 [108];
  undefined1 auStack_74 [80];
  
  uVar13 = param_2[6];
  if (uVar13 != 0) {
    if (uVar13 != 1) {
      uVar12 = FUN_006a4f44(*param_2,param_2[1],param_2[2],param_2[3],param_3,param_4);
      uVar5 = uVar12 >> 0x19;
      uVar6 = param_2[8];
      iVar2 = param_2[5];
      puVar11 = (uint *)param_2[7];
      iVar1 = 0;
      do {
        uVar12 = uVar6 & uVar12;
        uVar7 = *(uint *)((int)puVar11 + uVar12);
        uVar19 = uVar7 ^ uVar5 * 0x1010101;
        for (uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff; uVar19 != 0;
            uVar19 = uVar19 - 1 & uVar19) {
          uVar17 = uVar12 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                           (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                   uVar6;
          uVar3 = puVar11[-1 - uVar17];
          if (uVar13 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,uVar13,&DAT_018adbc8);
          }
          iVar16 = iVar2 + uVar3 * 0xc0;
          if ((param_4 == *(int *)(iVar16 + 0x78)) &&
             (iVar16 = thunk_FUN_016dd50a(param_3,*(undefined4 *)(iVar16 + 0x74),param_4),
             iVar16 == 0)) {
            puVar4 = (uint *)((int)puVar11 + (uVar17 - 4 & uVar6));
            uVar12 = *puVar4;
            uVar5 = *(uint *)((int)puVar11 + uVar17) & 0x80808080 &
                    *(uint *)((int)puVar11 + uVar17) << 1;
            uVar9 = 0x80;
            iVar1 = param_2[10];
            if (((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                               (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar12 & 0x80808080 & uVar12 << 1) >> 3) < 4) {
              param_2[9] = param_2[9] + 1;
              uVar9 = 0xff;
            }
            *(undefined1 *)((int)puVar11 + uVar17) = uVar9;
            *(undefined1 *)(puVar4 + 1) = uVar9;
            uVar12 = puVar11[-1 - uVar17];
            iVar1 = iVar1 + -1;
            uVar5 = uVar12 + 1;
            param_2[10] = iVar1;
            if (uVar13 < uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar5,uVar13,uVar13,&DAT_018adbf8);
            }
            if ((uint)(param_2[9] + iVar1) >> 1 < uVar13 - uVar5) {
              if (iVar1 != 0) {
                puVar4 = puVar11 + 1;
                uVar6 = ~*puVar11 & 0x80808080;
                do {
                  puVar10 = puVar4;
                  if (uVar6 == 0) {
                    do {
                      puVar4 = puVar10 + 1;
                      uVar6 = *puVar10;
                      puVar11 = puVar11 + -4;
                      puVar10 = puVar4;
                    } while ((uVar6 & 0x80808080) == 0x80808080);
                    uVar6 = uVar6 & 0x80808080 ^ 0x80808080;
                  }
                  uVar7 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                        (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 1 & 0x1c;
                  uVar19 = *(uint *)((int)puVar11 + (-4 - uVar7));
                  bVar22 = uVar19 <= uVar5;
                  if (uVar5 <= uVar19) {
                    bVar22 = uVar13 <= uVar19;
                  }
                  if (!bVar22) {
                    *(uint *)((int)puVar11 + (-4 - uVar7)) = uVar19 - 1;
                  }
                  iVar1 = iVar1 + -1;
                  uVar6 = uVar6 - 1 & uVar6;
                } while (iVar1 != 0);
              }
            }
            else {
              uVar19 = uVar13 - uVar5;
              uVar3 = ((uVar13 - uVar5) * 0xc0 >> 6) * -0x55555555;
              uVar7 = 0;
              if (uVar13 < uVar5) {
                uVar19 = 0;
              }
              if (uVar3 < uVar19) {
                uVar19 = uVar3;
              }
              if (uVar19 != 0) {
LAB_01682fc0:
                uVar15 = *(uint *)(iVar2 + uVar5 * 0xc0 + uVar7 * 0xc0 + 0xb8);
                uVar21 = uVar12 + uVar7;
                uVar3 = uVar15 >> 0x19;
                uVar17 = uVar7 + uVar5;
                uVar7 = uVar7 + 1;
                local_32c = 0;
                do {
                  uVar15 = uVar15 & uVar6;
                  uVar18 = *(uint *)((int)puVar11 + uVar15);
                  uVar8 = uVar18 ^ uVar3 * 0x1010101;
                  uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
                  while (uVar8 != 0) {
                    uVar20 = uVar15 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                     (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >>
                                      3) & uVar6;
                    uVar8 = uVar8 - 1 & uVar8;
                    if (puVar11[-1 - uVar20] == uVar17) {
                      puVar11[-1 - uVar20] = uVar21;
                      if (uVar7 == uVar19) goto LAB_01682ffc;
                      goto LAB_01682fc0;
                    }
                  }
                  if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fb74b8(&DAT_00414578,0xf,&DAT_018adbd8);
                  }
                  local_32c = local_32c + 4;
                  uVar15 = local_32c + uVar15;
                } while( true );
              }
            }
LAB_01682ffc:
            if (uVar13 <= uVar12) {
LAB_016831d0:
                    /* WARNING: Subroutine does not return */
              FUN_00602938(uVar12,uVar13,&DAT_018adc08);
            }
            piVar14 = (int *)(iVar2 + uVar12 * 0xc0);
            iVar1 = *piVar14;
            FUN_016dd1aa(auStack_258,piVar14 + 1,0xbc);
            FUN_016dd52c(piVar14,piVar14 + 0x30,(uVar13 + ~uVar12) * 0xc0);
            uVar13 = uVar13 - 1;
            param_2[6] = uVar13;
            if (iVar1 == 4) goto LAB_016831d0;
            FUN_016dd1aa(auStack_e0,auStack_258,0xbc);
            FUN_016dd1aa(auStack_2a0,auStack_74,0x48);
            FUN_016dd1aa(auStack_310,auStack_e0,0x6c);
            goto LAB_01683088;
          }
        }
        if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) goto LAB_0168315c;
        iVar1 = iVar1 + 4;
        uVar12 = iVar1 + uVar12;
      } while( true );
    }
    piVar14 = (int *)param_2[5];
    if ((param_4 == piVar14[0x1e]) &&
       (iVar1 = thunk_FUN_016dd50a(param_3,piVar14[0x1d],param_4), iVar1 == 0)) {
      iVar16 = 0;
      iVar1 = *piVar14;
      param_2[6] = 0;
      FUN_016dd1aa(auStack_150,piVar14 + 1,0x6c);
      FUN_016dd1aa(auStack_198,piVar14 + 0x1c,0x48);
      uVar5 = piVar14[0x2e];
      iVar2 = param_2[7];
      uVar12 = param_2[8];
      uVar13 = uVar5 >> 0x19;
      while( true ) {
        uVar5 = uVar12 & uVar5;
        uVar19 = *(uint *)(iVar2 + uVar5);
        uVar6 = uVar19 ^ uVar13 * 0x1010101;
        uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
        while (uVar6 != 0) {
          uVar7 = uVar6 >> 8;
          uVar3 = uVar6 >> 0x10;
          uVar17 = uVar6 >> 0x18;
          uVar15 = uVar6 << 0x18;
          uVar6 = uVar6 - 1 & uVar6;
          uVar7 = uVar5 + ((uint)LZCOUNT(uVar15 | (uVar7 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                         uVar17) >> 3) & uVar12;
          if (*(int *)(iVar2 + -4 + uVar7 * -4) == 0) {
            iVar16 = (int)(uVar7 << 2) >> 2;
            uVar5 = *(uint *)(iVar2 + iVar16);
            puVar11 = (uint *)(iVar2 + (iVar16 - 4U & uVar12));
            uVar13 = *puVar11;
            uVar5 = uVar5 & 0x80808080 & uVar5 << 1;
            uVar9 = 0x80;
            if (((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                               (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar13 & 0x80808080 & uVar13 << 1) >> 3) < 4) {
              param_2[9] = param_2[9] + 1;
              uVar9 = 0xff;
            }
            *(undefined1 *)(iVar2 + ((int)(uVar7 << 2) >> 2)) = uVar9;
            iVar2 = param_2[10];
            *(undefined1 *)(puVar11 + 1) = uVar9;
            param_2[10] = iVar2 + -1;
            goto LAB_01683150;
          }
        }
        if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
        iVar16 = iVar16 + 4;
        uVar5 = iVar16 + uVar5;
      }
LAB_01683150:
      if (iVar1 != 4) {
        FUN_016dd1aa(auStack_2a0,auStack_198,0x48);
        FUN_016dd1aa(auStack_310,auStack_150,0x6c);
        uVar12 = 0;
LAB_01683088:
        FUN_016dd1aa(auStack_258,auStack_2a0,0x48);
        local_210 = uVar12;
        local_208 = iVar1;
        FUN_016dd1aa(auStack_204,auStack_310,0x6c);
        FUN_016dd1aa(param_1 + 1,auStack_310,0x6c);
        FUN_00919614(auStack_258);
        *param_1 = iVar1;
        return;
      }
    }
  }
LAB_0168315c:
  *param_1 = 4;
  return;
}

