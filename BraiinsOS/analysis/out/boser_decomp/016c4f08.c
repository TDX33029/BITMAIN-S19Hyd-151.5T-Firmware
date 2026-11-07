// FUN_016c4f08 @ 016c4f08 size=1528 calls_out=17 calls_in=7
// strings: state saver does not have saved state ID

undefined8 FUN_016c4f08(int *param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  uint local_64;
  uint local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  piVar21 = (int *)param_1[1];
  iVar23 = *param_1;
  uVar20 = param_2 & 0x7ffffff;
  piVar12 = piVar21 + 0x29;
  local_30 = *piVar12;
  uVar4 = *(uint *)(iVar23 + 0x27c);
  local_2c = piVar21[0x2a];
  local_28 = piVar21[0x2b];
  piVar21[0x2a] = 1;
  piVar21[0x2b] = 0;
  *piVar12 = 0;
  uVar4 = uVar4 & 0x1f;
  uVar6 = uVar20 >> uVar4;
  if ((uint)piVar21[0x25] <= uVar20 >> uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,piVar21[0x25],&DAT_01d09410);
  }
  puVar16 = (undefined4 *)(piVar21[0x24] + uVar6 * 8);
  FUN_0168a4a4(&local_40,*(undefined4 *)(iVar23 + 0x278),
               *(byte *)(iVar23 + 0x50) == 2 | *(byte *)(iVar23 + 0x50) & 1,piVar21 + 0xc,
               piVar21 + 0x26,*puVar16,puVar16[1],param_3,&local_30);
  iVar5 = FUN_016c47d4(piVar21);
  uVar4 = *(uint *)(iVar23 + 0x27c) & 0x1f;
  uVar17 = *(uint *)(iVar23 + 0x280);
  uVar6 = iVar5 + local_38 + (4 << uVar4) + 0x14;
  iVar5 = local_38;
  if (uVar17 < uVar6) {
    if ((uint)piVar21[0x25] <= uVar20 >> uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20 >> uVar4,piVar21[0x25],&DAT_01d09420);
    }
    puVar16 = (undefined4 *)(piVar21[0x24] + (uVar20 >> uVar4) * 8);
    piVar18 = (int *)*puVar16;
    do {
      iVar5 = *piVar18;
      bVar3 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar3);
    *piVar18 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_016c5504;
    iVar5 = puVar16[1];
    if (piVar21[8] == 1) {
      piVar7 = (int *)piVar21[10];
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar21[10],piVar21[0xb]);
      }
    }
    piVar21[8] = 1;
    piVar21[9] = param_2;
    piVar21[10] = (int)piVar18;
    piVar21[0xb] = iVar5;
    iVar5 = local_38;
  }
  if (piVar21[3] != 0) {
    uVar20 = FUN_016c850c(piVar21[4],piVar21[5],piVar21[6],piVar21[7],local_3c,iVar5);
    uVar4 = uVar20 >> 0x19;
    iVar22 = *piVar21;
    uVar19 = piVar21[1];
    iVar14 = 0;
    while( true ) {
      uVar20 = uVar19 & uVar20;
      uVar8 = *(uint *)(iVar22 + uVar20);
      uVar9 = uVar8 ^ uVar4 * 0x1010101;
      for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9)
      {
        uVar10 = uVar20 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                         (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar19
        ;
        piVar18 = (int *)(iVar22 + -0xc + uVar10 * -0xc);
        if ((iVar5 == piVar18[1]) &&
           (iVar11 = thunk_FUN_01bed842(local_3c,*piVar18 + 8,iVar5), iVar11 == 0)) {
          iVar23 = piVar21[0x29];
          iVar5 = piVar21[0x2a];
          uVar4 = *(uint *)(iVar22 + uVar10 * -0xc + -4);
          *piVar12 = local_40;
          piVar21[0x2a] = local_3c;
          piVar21[0x2b] = 0;
          FUN_0134bd64(iVar23,iVar5);
          goto LAB_016c5378;
        }
      }
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      iVar14 = iVar14 + 4;
      uVar20 = uVar20 + iVar14;
    }
  }
  uVar24 = FUN_016bc0ec(local_3c,iVar5);
  uVar4 = (uint)((ulonglong)uVar24 >> 0x20);
  piVar18 = (int *)uVar24;
  iVar5 = FUN_016c47d4(piVar21);
  if ((iVar5 + uVar4 + (4 << (*(uint *)(iVar23 + 0x27c) & 0x1f)) + 0x14 <= *(uint *)(iVar23 + 0x280)
      ) || (iVar5 = FUN_016c4838(param_1), iVar5 == 0)) {
    uVar25 = FUN_016c48d0(param_1);
    if ((uVar25 & 1) == 0) {
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d0785c);
      }
      bVar2 = *(byte *)(piVar18 + 2);
      FUN_016c29d4(piVar21 + 0x1d,1 << (*(uint *)(iVar23 + 0x27c) & 0x1f));
      uVar20 = (uint)(uVar25 >> 0x20) | (bVar2 & 1) << 0x1b;
      iVar5 = thunk_FUN_01bed842(iVar23 + 600,"",0x20);
      if ((iVar5 != 0) && (iVar5 = FUN_016c4790(iVar23,uVar20), iVar5 == 0)) {
        uVar13 = FUN_016c4958(*(undefined4 *)(iVar23 + 0x27c));
        iVar14 = 0;
        iVar22 = *param_1;
        iVar5 = param_1[1];
        for (uVar19 = 0; uVar19 != 0x100; uVar19 = uVar19 + 1) {
          puVar15 = (uint *)(iVar23 + 600 + (uVar19 >> 3 & 0xfffffff0));
          local_60[3] = puVar15[3];
          local_60[0] = *puVar15;
          local_60[1] = puVar15[1];
          local_60[2] = puVar15[2];
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
          local_50 = 0;
          if ((*(uint *)((int)local_60 + ((uVar19 & 0x60) >> 3)) >> (uVar19 & 0x1f) & 1) != 0) {
            if (0xff < uVar19) break;
            FUN_016c49b8(iVar22,iVar5,uVar20,iVar14,uVar13);
          }
          iVar14 = iVar14 + 0x100;
        }
      }
      piVar21[0x1a] = piVar21[0x1a] + uVar4;
      do {
        iVar23 = *piVar18;
        bVar3 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar3);
      *piVar18 = iVar23 + 1;
      if (iVar23 < 0) {
LAB_016c5504:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x16c5504);
        (*pcVar1)();
      }
      iVar23 = piVar21[0x25];
      if (iVar23 == piVar21[0x23]) {
        FUN_015f5ab8(piVar21 + 0x23);
      }
      *(undefined8 *)(piVar21[0x24] + iVar23 * 8) = uVar24;
      bVar3 = false;
      piVar21[0x25] = iVar23 + 1;
      FUN_016c920c(piVar21,piVar18,uVar4,uVar20);
      uVar4 = uVar20;
      goto LAB_016c5348;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar23 = *piVar18;
    bVar3 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar3);
  *piVar18 = iVar23 + -1;
  bVar3 = true;
  if (iVar23 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar18,uVar4);
  }
LAB_016c5348:
  iVar23 = piVar21[0x29];
  iVar5 = piVar21[0x2a];
  piVar21[0x2b] = 0;
  *piVar12 = local_40;
  piVar21[0x2a] = local_3c;
  FUN_0134bd64(iVar23,iVar5);
  if (bVar3) {
    uVar13 = 1;
  }
  else {
LAB_016c5378:
    local_64 = param_2;
    if (uVar17 < uVar6) {
      local_64 = piVar21[9];
      iVar5 = piVar21[8];
      piVar12 = (int *)piVar21[10];
      iVar23 = piVar21[0xb];
      piVar21[8] = 0;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar12;
          bVar3 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar3);
        *piVar12 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar12,iVar23,1,param_3);
        }
      }
      else if (iVar5 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("state saver does not have saved state ID",0x28,&DAT_01d093a0);
      }
    }
    FUN_016c49b8(*param_1,param_1[1],local_64,param_3,uVar4);
    uVar13 = 0;
  }
  return CONCAT44(uVar4,uVar13);
}

