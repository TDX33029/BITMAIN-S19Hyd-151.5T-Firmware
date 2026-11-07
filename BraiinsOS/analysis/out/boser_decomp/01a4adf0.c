// FUN_01a4adf0 @ 01a4adf0 size=1616 calls_out=9 calls_in=2
// strings: index not found

void FUN_01a4adf0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int local_2b4;
  undefined1 auStack_2a0 [112];
  undefined1 auStack_230 [72];
  undefined1 auStack_1e8 [72];
  uint local_1a0;
  int local_198;
  undefined1 auStack_194 [24];
  undefined1 auStack_17c [84];
  undefined1 auStack_128 [72];
  undefined1 auStack_e0 [108];
  undefined1 auStack_74 [80];
  
  uVar17 = param_2[6];
  if (uVar17 != 0) {
    if (uVar17 != 1) {
      uVar11 = FUN_01a60560(*param_2,param_2[1],param_2[2],param_2[3],param_3,param_4);
      uVar5 = param_2[8];
      uVar12 = uVar11 >> 0x19;
      iVar16 = param_2[5];
      iVar1 = 0;
      puVar10 = (uint *)param_2[7];
      do {
        uVar11 = uVar5 & uVar11;
        uVar6 = *(uint *)((int)puVar10 + uVar11);
        uVar18 = uVar6 ^ uVar12 * 0x1010101;
        for (uVar18 = ~uVar18 & 0x80808080 & uVar18 + 0xfefefeff; uVar18 != 0;
            uVar18 = uVar18 - 1 & uVar18) {
          uVar14 = uVar11 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                           (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                   uVar5;
          uVar3 = puVar10[-1 - uVar14];
          if (uVar17 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar3,uVar17,&DAT_01d307c8);
          }
          iVar2 = iVar16 + uVar3 * 0xc0;
          if ((param_4 == *(int *)(iVar2 + 0x78)) &&
             (iVar2 = thunk_FUN_01bed842(param_3,*(undefined4 *)(iVar2 + 0x74),param_4), iVar2 == 0)
             ) {
            puVar4 = (uint *)((int)puVar10 + (uVar14 - 4 & uVar5));
            uVar11 = *puVar4;
            uVar12 = *(uint *)((int)puVar10 + uVar14) & 0x80808080 &
                     *(uint *)((int)puVar10 + uVar14) << 1;
            uVar8 = 0x80;
            iVar1 = param_2[10];
            if (((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                               (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar11 & 0x80808080 & uVar11 << 1) >> 3) < 4) {
              param_2[9] = param_2[9] + 1;
              uVar8 = 0xff;
            }
            *(undefined1 *)((int)puVar10 + uVar14) = uVar8;
            *(undefined1 *)(puVar4 + 1) = uVar8;
            uVar11 = puVar10[-1 - uVar14];
            iVar1 = iVar1 + -1;
            param_2[10] = iVar1;
            uVar12 = uVar11 + 1;
            if (uVar17 < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar12,uVar17,uVar17,&DAT_01d2c0d4);
            }
            if ((uint)(param_2[9] + iVar1) >> 1 < uVar17 - uVar12) {
              puVar4 = puVar10 + 1;
              uVar5 = ~*puVar10 & 0x80808080;
              while (iVar1 != 0) {
                puVar9 = puVar4;
                if (uVar5 == 0) {
                  do {
                    puVar4 = puVar9 + 1;
                    uVar5 = *puVar9;
                    puVar10 = puVar10 + -4;
                    puVar9 = puVar4;
                  } while ((uVar5 & 0x80808080) == 0x80808080);
                  uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
                }
                iVar1 = iVar1 + -1;
                uVar3 = uVar5 - 1 & uVar5;
                uVar18 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 1 & 0x1c;
                uVar6 = *(uint *)((int)puVar10 + (-4 - uVar18));
                uVar5 = uVar3;
                if ((uVar12 <= uVar6) && (uVar6 < uVar17)) {
                  *(uint *)((int)puVar10 + (-4 - uVar18)) = uVar6 - 1;
                }
              }
            }
            else {
              uVar18 = uVar17 - uVar12;
              uVar6 = ((uVar17 - uVar12) * 0xc0 >> 6) * -0x55555555;
              uVar3 = 0;
              if (uVar17 < uVar12) {
                uVar18 = 0;
              }
              if (uVar6 < uVar18) {
                uVar18 = uVar6;
              }
              if (uVar18 != 0) {
LAB_01a4b174:
                uVar14 = *(uint *)(iVar16 + uVar12 * 0xc0 + uVar3 * 0xc0 + 0xb8);
                uVar6 = uVar14 >> 0x19;
                local_2b4 = 0;
                do {
                  uVar14 = uVar5 & uVar14;
                  uVar7 = *(uint *)((int)puVar10 + uVar14);
                  uVar15 = uVar7 ^ uVar6 * 0x1010101;
                  uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
                  while (uVar15 != 0) {
                    uVar19 = uVar14 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18)
                                      >> 3) & uVar5;
                    uVar15 = uVar15 - 1 & uVar15;
                    if (puVar10[-1 - uVar19] == uVar3 + uVar12) {
                      uVar6 = uVar3 + uVar11;
                      uVar3 = uVar3 + 1;
                      puVar10[-1 - uVar19] = uVar6;
                      if (uVar3 == uVar18) goto LAB_01a4b24c;
                      goto LAB_01a4b174;
                    }
                  }
                  if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("index not found",0xf,&DAT_01d2c0b4);
                  }
                  local_2b4 = local_2b4 + 4;
                  uVar14 = local_2b4 + uVar14;
                } while( true );
              }
            }
LAB_01a4b24c:
            if (uVar17 <= uVar11) {
LAB_01a4b42c:
                    /* WARNING: Subroutine does not return */
              FUN_0066651c(uVar11,uVar17,&DAT_01d2c0e4);
            }
            piVar13 = (int *)(iVar16 + uVar11 * 0xc0);
            iVar1 = *piVar13;
            FUN_01bed4e2(auStack_1e8,piVar13 + 1,0xbc);
            FUN_01bed864(piVar13,piVar13 + 0x30,(uVar17 + ~uVar11) * 0xc0);
            uVar17 = uVar17 - 1;
            param_2[6] = uVar17;
            if (iVar1 == 4) goto LAB_01a4b42c;
            FUN_01bed4e2(auStack_e0,auStack_1e8,0xbc);
            FUN_01bed4e2(auStack_230,auStack_74,0x48);
            FUN_01bed4e2(auStack_2a0,auStack_e0,0x6c);
            goto LAB_01a4b2d8;
          }
        }
        if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) goto LAB_01a4b3d0;
        iVar1 = iVar1 + 4;
        uVar11 = iVar1 + uVar11;
      } while( true );
    }
    piVar13 = (int *)param_2[5];
    if ((param_4 == piVar13[0x1e]) &&
       (iVar1 = thunk_FUN_01bed842(param_3,piVar13[0x1d],param_4), iVar1 == 0)) {
      iVar1 = *piVar13;
      iVar16 = 0;
      param_2[6] = 0;
      if (iVar1 != 4) {
        uVar12 = piVar13[0x2e];
        FUN_01bed4e2(auStack_1e8,piVar13 + 1,0xb4);
        uVar17 = uVar12 >> 0x19;
        iVar2 = param_2[7];
        uVar11 = param_2[8];
        while( true ) {
          uVar12 = uVar11 & uVar12;
          uVar18 = *(uint *)(iVar2 + uVar12);
          uVar5 = uVar18 ^ uVar17 * 0x1010101;
          uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
          while (uVar5 != 0) {
            uVar6 = uVar5 >> 8;
            uVar3 = uVar5 >> 0x10;
            uVar14 = uVar5 >> 0x18;
            uVar7 = uVar5 << 0x18;
            uVar5 = uVar5 - 1 & uVar5;
            uVar6 = uVar12 + ((uint)LZCOUNT(uVar7 | (uVar6 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                            uVar14) >> 3) & uVar11;
            if (*(int *)(iVar2 + -4 + uVar6 * -4) == 0) {
              puVar10 = (uint *)(iVar2 + (uVar6 - 4 & uVar11));
              uVar17 = *puVar10;
              uVar12 = *(uint *)(iVar2 + uVar6) & 0x80808080 & *(uint *)(iVar2 + uVar6) << 1;
              uVar8 = 0x80;
              if (((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                 (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) +
                  ((uint)LZCOUNT(uVar17 & 0x80808080 & uVar17 << 1) >> 3) < 4) {
                param_2[9] = param_2[9] + 1;
                uVar8 = 0xff;
              }
              *(undefined1 *)(iVar2 + uVar6) = uVar8;
              iVar16 = param_2[10];
              *(undefined1 *)(puVar10 + 1) = uVar8;
              param_2[10] = iVar16 + -1;
              goto LAB_01a4b3a0;
            }
          }
          if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
          iVar16 = iVar16 + 4;
          uVar12 = iVar16 + uVar12;
        }
LAB_01a4b3a0:
        FUN_01bed4e2(auStack_128,auStack_17c,0x48);
        FUN_01bed4e2(auStack_e0,auStack_1e8,0x6c);
        if (iVar1 != 4) {
          FUN_01bed4e2(auStack_230,auStack_128,0x48);
          FUN_01bed4e2(auStack_2a0,auStack_e0,0x6c);
          uVar11 = 0;
LAB_01a4b2d8:
          FUN_01bed4e2(auStack_1e8,auStack_230,0x48);
          local_1a0 = uVar11;
          local_198 = iVar1;
          FUN_01bed4e2(auStack_194,auStack_2a0,0x6c);
          FUN_01bed4e2(param_1,&local_198,0x70);
          FUN_01a49de4(auStack_1e8);
          return;
        }
      }
    }
  }
LAB_01a4b3d0:
  *param_1 = 4;
  return;
}

