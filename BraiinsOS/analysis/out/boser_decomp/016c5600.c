// FUN_016c5600 @ 016c5600 size=1544 calls_out=24 calls_in=5
// strings: assertion failed: self.as_ref().is_valid(id) | attempted to search for a specific pattern without enabling starts_for_each_pattern

void FUN_016c5600(undefined4 *param_1,int *param_2,int param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  uint local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  
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
      uVar8 = FUN_016c4c8c(*(undefined4 *)(iVar19 + 0x27c));
      *param_1 = 5;
      param_1[1] = uVar8;
      return;
    }
    puVar7 = (undefined4 *)(*(int *)(*(int *)(iVar19 + 0x278) + 0x150) + param_4 * 4);
  }
  piVar21 = (int *)param_2[1];
  piVar16 = piVar21 + 0x29;
  uVar22 = *puVar7;
  local_38 = *piVar16;
  local_34 = piVar21[0x2a];
  local_30 = piVar21[0x2b];
  piVar21[0x2a] = 1;
  piVar21[0x29] = 0;
  piVar21[0x2b] = 0;
  FUN_0168b9a4(auStack_44);
  FUN_0168bf40(*(undefined4 *)(iVar19 + 0x278),param_5,local_40,local_3c);
  piVar21[0x12] = 0;
  uVar8 = FUN_0168ba4c(local_40,local_3c);
  FUN_0168b55c(*(undefined4 *)(iVar19 + 0x278),uVar22,uVar8,piVar21 + 0x26,piVar21 + 0xc);
  FUN_0168ba9c(&local_38,auStack_44);
  FUN_0168bb80(*(undefined4 *)(iVar19 + 0x278),piVar21 + 0xc,&local_38);
  iVar14 = local_30;
  iVar6 = local_34;
  iVar5 = local_38;
  bVar2 = *(byte *)(iVar19 + 0x54);
  if (piVar21[3] != 0) {
    uVar9 = FUN_016c850c(piVar21[4],piVar21[5],piVar21[6],piVar21[7],local_34,local_30);
    uVar23 = uVar9 >> 0x19;
    iVar18 = *piVar21;
    uVar17 = piVar21[1];
    iVar24 = 0;
    while( true ) {
      uVar9 = uVar17 & uVar9;
      uVar20 = *(uint *)(iVar18 + uVar9);
      uVar10 = uVar20 ^ uVar23 * 0x1010101;
      for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
          uVar10 = uVar10 - 1 & uVar10) {
        uVar11 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                        (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 uVar17;
        piVar12 = (int *)(iVar18 + -0xc + uVar11 * -0xc);
        if ((iVar14 == piVar12[1]) &&
           (iVar13 = thunk_FUN_01bed842(iVar6,*piVar12 + 8,iVar14), iVar13 == 0)) {
          iVar14 = piVar21[0x29];
          iVar24 = piVar21[0x2a];
          param_2 = *(int **)(iVar18 + uVar11 * -0xc + -4);
          *piVar16 = iVar5;
          piVar21[0x2a] = iVar6;
          piVar21[0x2b] = 0;
          FUN_0134bd64(iVar14,iVar24);
          goto LAB_016c5a6c;
        }
      }
      if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
      iVar24 = iVar24 + 4;
      uVar9 = uVar9 + iVar24;
    }
  }
  uVar25 = FUN_016bc0ec(iVar6,iVar14);
  iVar18 = (int)((ulonglong)uVar25 >> 0x20);
  piVar12 = (int *)uVar25;
  iVar14 = FUN_016c47d4(piVar21);
  if ((iVar14 + iVar18 + (4 << (*(uint *)(iVar19 + 0x27c) & 0x1f)) + 0x14U <=
       *(uint *)(iVar19 + 0x280)) || (iVar14 = FUN_016c4838(param_2), iVar14 == 0)) {
    uVar26 = FUN_016c48d0(param_2);
    if ((uVar26 & 1) == 0) {
      if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d0785c);
      }
      bVar3 = *(byte *)(piVar12 + 2);
      FUN_016c29d4(piVar21 + 0x1d,1 << (*(uint *)(iVar19 + 0x27c) & 0x1f));
      param_2 = (int *)((uint)(uVar26 >> 0x20) | (bVar2 & 1) << 0x1c | (bVar3 & 1) << 0x1b);
      iVar14 = thunk_FUN_01bed842(iVar19 + 600,"",0x20);
      if ((iVar14 != 0) && (iVar14 = FUN_016c4790(iVar19,param_2), iVar14 == 0)) {
        uVar8 = FUN_016c4958(*(undefined4 *)(iVar19 + 0x27c));
        iVar14 = 0;
        for (uVar23 = 0; uVar23 != 0x100; uVar23 = uVar23 + 1) {
          puVar15 = (uint *)(iVar19 + 600 + (uVar23 >> 3 & 0xfffffff0));
          local_68[3] = puVar15[3];
          local_68[0] = *puVar15;
          local_68[1] = puVar15[1];
          local_68[2] = puVar15[2];
          local_4c = 0;
          local_50 = 0;
          local_54 = 0;
          local_58 = 0;
          if ((*(uint *)((int)local_68 + ((uVar23 & 0x60) >> 3)) >> (uVar23 & 0x1f) & 1) != 0) {
            if (0xff < uVar23) break;
            FUN_016c49b8(iVar19,piVar21,param_2,iVar14,uVar8);
          }
          iVar14 = iVar14 + 0x100;
        }
      }
      piVar21[0x1a] = piVar21[0x1a] + iVar18;
      do {
        iVar14 = *piVar12;
        bVar4 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar4);
      *piVar12 = iVar14 + 1;
      if (iVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x16c5c04);
        (*pcVar1)();
      }
      iVar14 = piVar21[0x25];
      if (iVar14 == piVar21[0x23]) {
        FUN_015f5ab8();
      }
      *(undefined8 *)(piVar21[0x24] + iVar14 * 8) = uVar25;
      bVar4 = false;
      piVar21[0x25] = iVar14 + 1;
      FUN_016c920c(piVar21,piVar12,iVar18,param_2);
      goto LAB_016c5a38;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar12;
    bVar4 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar4);
  *piVar12 = iVar14 + -1;
  bVar4 = true;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar12,iVar18);
  }
LAB_016c5a38:
  iVar14 = piVar21[0x29];
  iVar18 = piVar21[0x2a];
  piVar21[0x2b] = 0;
  *piVar16 = iVar5;
  piVar21[0x2a] = iVar6;
  FUN_0134bd64(iVar14,iVar18);
  if (bVar4) {
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
LAB_016c5a6c:
    if (((uint)piVar21[0x1f] <= ((uint)param_2 & 0x7ffffff)) ||
       (((uint)param_2 & 0x7ffffff & ~(-1 << (*(uint *)(iVar19 + 0x27c) & 0x1f))) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.as_ref().is_valid(id)",0x2c,&DAT_01d093e0);
    }
    param_5 = param_5 & 0xff;
    if (param_3 != 0) {
      if (param_3 == 2) {
        if ((*(byte *)(iVar19 + 0x51) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("attempted to search for a specific pattern without enabling starts_for_each_pattern"
                       ,0xa7,&DAT_01d093f0);
        }
        param_5 = param_5 + param_4 * 6 + 0xc;
      }
      else {
        param_5 = param_5 + 6;
      }
    }
    if ((uint)piVar21[0x22] <= param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_5,piVar21[0x22],&DAT_01d09400);
    }
    iVar19 = piVar21[0x21];
    *param_1 = 5;
    param_1[1] = param_2;
    *(int **)(iVar19 + param_5 * 4) = param_2;
  }
  return;
}

