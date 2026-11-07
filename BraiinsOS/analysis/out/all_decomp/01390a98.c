// FUN_01390a98 @ 01390a98 size=2084 calls_out=19 calls_in=5
// strings: assertion failed: self.as_ref().is_valid(id) | attempted to search for a specific pattern without enabling starts_for_each_pattern

void FUN_01390a98(undefined4 *param_1,int *param_2,int param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  uint local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_30;
  int local_2c;
  int iStack_28;
  
  if (param_3 == 0) {
    iVar19 = *param_2;
    puVar7 = (undefined4 *)(*(int *)(iVar19 + 0x278) + 300);
  }
  else if (param_3 == 1) {
    iVar19 = *param_2;
    puVar7 = (undefined4 *)(*(int *)(iVar19 + 0x278) + 0x128);
  }
  else {
    iVar19 = *param_2;
    if ((*(byte *)(iVar19 + 0x51) & 1) == 0) {
      *param_1 = 2;
      param_1[1] = param_4;
      return;
    }
    if (*(uint *)(*(int *)(iVar19 + 0x278) + 0x154) <= param_4) {
      uVar13 = *(uint *)(iVar19 + 0x27c) & 0x1f;
      if (0x1a < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_01893030);
      }
      *param_1 = 5;
      param_1[1] = 1 << uVar13 | 0x40000000;
      return;
    }
    puVar7 = (undefined4 *)(*(int *)(*(int *)(iVar19 + 0x278) + 0x150) + param_4 * 4);
  }
  piVar20 = (int *)param_2[1];
  uVar21 = *puVar7;
  local_40 = piVar20[0x29];
  local_38 = piVar20[0x2b];
  local_3c = piVar20[0x2a];
  piVar20[0x29] = 0;
  piVar20[0x2a] = 1;
  piVar20[0x2b] = 0;
  if (local_40 - local_38 < 9) {
    FUN_013c4434(&local_40,local_38,9,1);
  }
  iVar6 = local_3c;
  uVar13 = local_40;
  puVar7 = (undefined4 *)(local_3c + local_38);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 0;
  iVar16 = local_38 + 9;
  FUN_013c5f64(*(undefined4 *)(iVar19 + 0x278),param_5,local_3c,iVar16);
  piVar20[0x12] = 0;
  FUN_013c5b10(*(undefined4 *)(iVar19 + 0x278),uVar21,*(undefined4 *)(iVar6 + 1),piVar20 + 0x26);
  local_2c = iVar6;
  local_30 = uVar13;
  iStack_28 = iVar16;
  FUN_013c6f70(&local_40);
  FUN_013c56bc(*(undefined4 *)(iVar19 + 0x278),piVar20 + 0xc,&local_40);
  iVar16 = local_38;
  iVar6 = local_3c;
  uVar13 = local_40;
  bVar2 = *(byte *)(iVar19 + 0x54);
  if (piVar20[3] != 0) {
    uVar8 = FUN_013c34ec(piVar20[4],piVar20[5],piVar20[6],piVar20[7]);
    uVar22 = uVar8 >> 0x19;
    iVar17 = *piVar20;
    uVar15 = piVar20[1];
    iVar23 = 0;
    while( true ) {
      uVar8 = uVar15 & uVar8;
      uVar18 = *(uint *)(iVar17 + uVar8);
      uVar9 = uVar18 ^ uVar22 * 0x1010101;
      for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9)
      {
        uVar10 = uVar8 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                        (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar15;
        piVar11 = (int *)(iVar17 + -0xc + uVar10 * -0xc);
        if ((iVar16 == piVar11[1]) &&
           (iVar12 = thunk_FUN_016dd50a(iVar6,*piVar11 + 8,iVar16), iVar12 == 0)) {
          iVar16 = piVar20[0x29];
          iVar23 = piVar20[0x2a];
          uVar22 = *(uint *)(iVar17 + uVar10 * -0xc + -4);
          piVar20[0x29] = uVar13;
          piVar20[0x2a] = iVar6;
          piVar20[0x2b] = 0;
          if (iVar16 != 0) {
            thunk_FUN_016d3fb4(iVar23);
          }
          goto LAB_01390fd0;
        }
      }
      if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
      iVar23 = iVar23 + 4;
      uVar8 = uVar8 + iVar23;
    }
  }
  uVar24 = FUN_011e1508(iVar6,iVar16);
  iVar16 = (int)((ulonglong)uVar24 >> 0x20);
  piVar11 = (int *)uVar24;
  uVar22 = piVar20[0x26];
  if (*(uint *)(iVar19 + 0x280) <
      iVar16 + piVar20[0x25] * 8 + piVar20[3] * 0xc + piVar20[0x29] + piVar20[0x1a] +
      (piVar20[0x22] + piVar20[0x1f] + piVar20[0xe] + piVar20[0x11] + piVar20[0x15] + piVar20[0x18]
      + uVar22) * 4 + (4 << (*(uint *)(iVar19 + 0x27c) & 0x1f)) + 0x14) {
    if (((*(byte *)(iVar19 + 0x30) & 1) == 0) || ((uint)piVar20[0x1b] < *(uint *)(iVar19 + 0x34))) {
LAB_01390e08:
      FUN_0138e168(param_2);
      goto LAB_01390e10;
    }
    if ((*(byte *)(iVar19 + 0x38) & 1) != 0) {
      iVar17 = 0;
      if (piVar20[0x2c] == 1) {
        uVar8 = piVar20[0x2d];
        uVar15 = piVar20[0x2e];
        iVar17 = uVar8 - uVar15;
        if (uVar8 < uVar15 || iVar17 == 0) {
          iVar17 = uVar15 - uVar8;
        }
      }
      lVar5 = (ulonglong)(uint)piVar20[0x25] * (ulonglong)*(uint *)(iVar19 + 0x3c);
      uVar8 = (uint)lVar5;
      if ((int)((ulonglong)lVar5 >> 0x20) != 0) {
        uVar8 = 0xffffffff;
      }
      if (uVar8 <= (uint)(iVar17 + piVar20[0x1c])) goto LAB_01390e08;
    }
  }
  else {
LAB_01390e10:
    uVar25 = FUN_0138f9cc(param_2);
    if ((uVar25 & 1) == 0) {
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0,0,&DAT_01894308);
      }
      bVar3 = *(byte *)(piVar11 + 2);
      iVar23 = piVar20[0x1f];
      uVar22 = *(uint *)(iVar19 + 0x27c) & 0x1f;
      iVar17 = 1 << uVar22;
      if ((uint)(piVar20[0x1d] - iVar23) < (uint)(1 << uVar22)) {
        FUN_013c4434(piVar20 + 0x1d,iVar23,iVar17,4);
        iVar23 = piVar20[0x1f];
      }
      uVar22 = (uint)(uVar25 >> 0x20) | (bVar2 & 1) << 0x1c | (bVar3 & 1) << 0x1b;
      iVar12 = piVar20[0x1e];
      do {
        *(undefined4 *)(iVar12 + iVar23 * 4) = 0x80000000;
        iVar23 = iVar23 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      piVar20[0x1f] = iVar23;
      iVar17 = thunk_FUN_016dd50a(iVar19 + 600,"",0x20);
      if (iVar17 != 0 && uVar22 != 0x80000000) {
        uVar15 = *(uint *)(iVar19 + 0x27c) & 0x1f;
        uVar8 = 1 << uVar15;
        if (0x1a < uVar15) {
LAB_01391290:
          local_2c = 0;
          local_30 = uVar8;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01893030);
        }
        if (uVar22 != (uVar8 | 0x40000000)) {
          if (uVar15 == 0x1a) {
            uVar8 = 0x8000000;
            goto LAB_01391290;
          }
          if (uVar22 != (2 << uVar15 | 0x20000000U)) {
            iVar17 = 0;
            for (uVar8 = 0; uVar8 != 0x100; uVar8 = uVar8 + 1) {
              puVar14 = (uint *)(iVar19 + 600 + (uVar8 >> 3 & 0xfffffff0));
              local_60[3] = puVar14[3];
              local_60[0] = *puVar14;
              local_60[1] = puVar14[1];
              local_60[2] = puVar14[2];
              local_44 = 0;
              local_48 = 0;
              local_4c = 0;
              local_50 = 0;
              if ((*(uint *)((int)local_60 + ((uVar8 & 0x60) >> 3)) >> (uVar8 & 0x1f) & 1) != 0) {
                if (0xff < uVar8) break;
                FUN_0138fac8(iVar19,piVar20,uVar22,iVar17);
              }
              iVar17 = iVar17 + 0x100;
            }
          }
        }
      }
      piVar20[0x1a] = piVar20[0x1a] + iVar16;
      do {
        iVar17 = *piVar11;
        bVar4 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar4);
      *piVar11 = iVar17 + 1;
      if (iVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x13912bc);
        (*pcVar1)();
      }
      iVar17 = piVar20[0x25];
      if (iVar17 == piVar20[0x23]) {
        FUN_013c3fcc();
      }
      *(undefined8 *)(piVar20[0x24] + iVar17 * 8) = uVar24;
      bVar4 = false;
      piVar20[0x25] = iVar17 + 1;
      FUN_013d1914(piVar20,piVar11,iVar16,uVar22);
      goto LAB_01390f88;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar17 = *piVar11;
    bVar4 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar4);
  *piVar11 = iVar17 + -1;
  bVar4 = true;
  if (iVar17 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar11,iVar16);
  }
LAB_01390f88:
  iVar16 = piVar20[0x29];
  iVar17 = piVar20[0x2a];
  piVar20[0x29] = uVar13;
  piVar20[0x2a] = iVar6;
  piVar20[0x2b] = 0;
  if (iVar16 != 0) {
    thunk_FUN_016d3fb4(iVar17);
  }
  if (bVar4) {
    *param_1 = 3;
    return;
  }
LAB_01390fd0:
  if (((uint)piVar20[0x1f] <= (uVar22 & 0x7ffffff)) ||
     ((uVar22 & 0x7ffffff & ~(-1 << (*(uint *)(iVar19 + 0x27c) & 0x1f))) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.as_ref().is_valid(id)",0x2c,&DAT_01892fc0);
  }
  param_5 = param_5 & 0xff;
  if (param_3 != 0) {
    if (param_3 == 2) {
      if ((*(byte *)(iVar19 + 0x51) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("attempted to search for a specific pattern without enabling starts_for_each_pattern"
                     ,0xa7,&DAT_01892fd0);
      }
      param_5 = param_5 + param_4 * 6 + 0xc;
    }
    else {
      param_5 = param_5 + 6;
    }
  }
  if ((uint)piVar20[0x22] <= param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_5,piVar20[0x22],&DAT_01892fe0);
  }
  iVar19 = piVar20[0x21];
  *param_1 = 5;
  param_1[1] = uVar22;
  *(uint *)(iVar19 + param_5 * 4) = uVar22;
  return;
}

