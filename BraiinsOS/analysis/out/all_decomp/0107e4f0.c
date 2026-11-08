// FUN_0107e4f0 @ 0107e4f0 size=1564 calls_out=13 calls_in=3
// strings: 

void FUN_0107e4f0(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint in_fpscr;
  double dVar26;
  double dVar27;
  double dVar28;
  int local_84c;
  undefined1 auStack_848 [1032];
  undefined4 local_440 [256];
  
  DataMemoryBarrier(0xb);
  if (2 < *(uint *)param_1[4]) {
    return;
  }
  piVar22 = (int *)param_1[2];
  uVar20 = *param_1;
  uVar14 = piVar22[7] & 0x3f;
  uVar21 = uVar20 >> uVar14 | param_1[1] << (0x20 - uVar14 & 0xff);
  if (-1 < (int)(uVar14 - 0x20)) {
    uVar21 = param_1[1] >> (uVar14 - 0x20 & 0xff);
  }
  uVar14 = 0;
  if (piVar22[7] != 0x40) {
    uVar14 = uVar21;
  }
  if ((uint)piVar22[1] <= uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar14,piVar22[1],&DAT_0188428c);
  }
  iVar15 = *piVar22;
  iVar2 = FUN_0106fc6c();
  iVar15 = iVar15 + uVar14 * 8;
  local_84c = iVar2;
  piVar3 = (int *)FUN_01097034(iVar15);
  piVar9 = (int *)(iVar15 + 4);
  uVar21 = param_1[3];
  piVar19 = (int *)0x0;
  piVar16 = piVar3;
  do {
    uVar14 = piVar16[1];
    uVar25 = uVar14 - 1;
    if ((uVar14 ^ uVar25) <= uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00384db4,0x36,&DAT_01883ba0);
    }
    dVar26 = (double)VectorUnsignedToFloat(uVar14 & 0xfffffffe,(byte)(in_fpscr >> 0x16) & 3);
    dVar28 = (double)VectorUnsignedToFloat(piVar16[5],(byte)(in_fpscr >> 0x16) & 3);
    dVar27 = (double)VectorUnsignedToFloat(*piVar9,(byte)(in_fpscr >> 0x16) & 3);
    uVar14 = in_fpscr;
    if ((uint)piVar16[5] < 25000) {
      in_fpscr = in_fpscr & 0xfffffff;
      uVar17 = in_fpscr | (uint)(dVar28 / dVar26 < 0.1) << 0x1f;
      uVar14 = uVar17 | (uint)NAN(dVar28 / dVar26) << 0x1c;
      if ((byte)(uVar17 >> 0x1f) == ((byte)(uVar14 >> 0x1c) & 1)) goto LAB_0107e64c;
      uVar4 = 0;
      if (dVar27 <= dVar26 * 0.7) {
        iVar10 = *piVar16;
        uVar14 = uVar25 & uVar20;
        uVar17 = 0;
        puVar18 = (uint *)(iVar10 + uVar14 * 4);
        bVar8 = true;
LAB_0107e6bc:
        if (!bVar8) {
          if (uVar25 <= uVar17) {
            piVar19 = (int *)0x0;
            goto LAB_0107e7c4;
          }
          uVar6 = uVar17 + uVar14 + 1;
          uVar17 = uVar17 + 1;
          puVar18 = (uint *)(iVar10 + (uVar6 & uVar25) * 4);
        }
        uVar6 = *puVar18;
        if ((uVar6 & 1) == 0) {
          puVar24 = (uint *)(uVar6 & 0xfffffff8);
          if (puVar24 != (uint *)0x0) {
            uVar23 = *puVar24;
            if (uVar23 != uVar21) goto code_r0x0107e704;
            goto LAB_0107e770;
          }
          goto LAB_0107e7c4;
        }
        uVar4 = 0;
      }
    }
    else {
LAB_0107e64c:
      dVar26 = dVar26 * 0.25;
      uVar4 = 2;
      in_fpscr = uVar14 & 0xfffffff;
      if (dVar27 - dVar28 < dVar26) {
        uVar4 = 1;
      }
      if ((uint)(0.0 < dVar26) * (int)(longlong)dVar26 < 0x80) {
        uVar4 = 2;
      }
    }
    piVar5 = (int *)FUN_0107227c(piVar16,&local_84c,piVar22[2],piVar22[3],piVar22[4],piVar22[5],
                                 uVar4);
    if (piVar5 != (int *)0x0) {
      piVar16 = piVar5;
    }
  } while( true );
  while (*puVar18 == uVar14) {
LAB_0107eab8:
    bVar8 = (bool)hasExclusiveAccess(puVar18);
    if (bVar8) {
      *puVar18 = uVar21;
      goto LAB_0107e97c;
    }
  }
LAB_0107e978:
  ClearExclusiveLocal();
LAB_0107e97c:
  uVar21 = *(uint *)(iVar2 + 0x408);
  if (uVar21 < 0x40) goto LAB_0107e8f0;
  goto LAB_0107e990;
code_r0x0107e704:
  iVar7 = FUN_0103cf5c(uVar23 + 8,uVar21 + 8);
  bVar8 = false;
  if (((((iVar7 == 0) || (*(short *)(uVar23 + 0x50) != *(short *)(uVar21 + 0x50))) ||
       ((*(short *)(uVar23 + 0x50) == 0x24 &&
        (*(short *)(uVar23 + 0x52) != *(short *)(uVar21 + 0x52))))) ||
      ((uint)*(ushort *)(uVar23 + 0x4c) != (uint)*(ushort *)(uVar21 + 0x4c))) ||
     ((*(ushort *)(uVar23 + 0x4c) - 5 < 2 &&
      (*(short *)(uVar23 + 0x4e) != *(short *)(uVar21 + 0x4e))))) goto LAB_0107e6bc;
LAB_0107e770:
  if (((uVar6 & 2) != 0) || (DataMemoryBarrier(0xb), 2 < *(uint *)puVar24[1])) goto LAB_0107e7c4;
  if (*puVar18 != uVar6) {
    ClearExclusiveLocal();
    bVar8 = true;
    goto LAB_0107e6bc;
  }
  DataMemoryBarrier(0xb);
  bVar1 = (bool)hasExclusiveAccess(puVar18);
  if (bVar1) {
    *puVar18 = (uint)puVar24 | 2;
  }
  bVar8 = true;
  if (!bVar1) goto LAB_0107e6bc;
  DataMemoryBarrier(0xb);
  piVar19 = piVar16 + 5;
  do {
    bVar8 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar8);
  *piVar9 = *piVar9 + -1;
  do {
    bVar8 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar8);
  *piVar19 = *piVar19 + 1;
  piVar22 = piVar22 + 6;
  do {
    bVar8 = (bool)hasExclusiveAccess(piVar22);
  } while (!bVar8);
  *piVar22 = *piVar22 + -1;
  piVar19 = (int *)puVar24[1];
  do {
    iVar10 = *piVar19;
    bVar8 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar8);
  *piVar19 = iVar10 + 1;
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_015bef44();
  }
  DataMemoryBarrier(0xb);
  piVar22 = (int *)puVar24[1];
  if (iVar2 == 0) {
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar22;
      bVar8 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar8);
    *piVar22 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4();
    }
  }
  else {
    uVar21 = *(uint *)(iVar2 + 0x408);
    iVar10 = iVar2 + 8;
    if (0x3f < uVar21) {
LAB_0107e990:
      iVar12 = *(int *)(iVar2 + 4);
      iVar7 = 0;
      do {
        local_440[iVar7 * 4] = &DAT_01040efc;
        iVar13 = iVar7 + 1;
        local_440[iVar7 * 4 + 1] = 0;
        local_440[iVar7 * 4 + 2] = 0;
        local_440[iVar7 * 4 + 3] = 0;
        iVar7 = iVar13;
      } while (iVar13 != 0x40);
      FUN_016dd1aa(auStack_848,iVar10,0x404);
      FUN_016dd1aa(iVar10,local_440,0x400);
      *(undefined4 *)(iVar2 + 0x408) = 0;
      DataMemoryBarrier(0xb);
      uVar4 = *(undefined4 *)(iVar12 + 0x60);
      uVar21 = thunk_FUN_016d4a50(0x40c);
      if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x40c);
      }
      FUN_016dd1aa(uVar21,auStack_848,0x404);
      *(undefined4 *)(uVar21 + 0x404) = uVar4;
      *(undefined4 *)(uVar21 + 0x408) = 0;
      puVar18 = (uint *)(iVar12 + 0x40);
LAB_0107ea40:
      do {
        uVar14 = *puVar18;
        DataMemoryBarrier(0xb);
        uVar20 = *(uint *)((uVar14 & 0xfffffffc) + 0x408);
        DataMemoryBarrier(0xb);
        if (uVar20 < 4) {
          puVar24 = (uint *)((uVar14 & 0xfffffffc) + 0x408);
          if (*puVar24 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar8 = (bool)hasExclusiveAccess(puVar24);
              if (bVar8) {
                *puVar24 = uVar21;
                if (*puVar18 != uVar14) goto LAB_0107e978;
                DataMemoryBarrier(0xb);
                goto LAB_0107eab8;
              }
            } while (*puVar24 == 0);
          }
        }
        else if (*puVar18 == uVar14) {
          DataMemoryBarrier(0xb);
          do {
            bVar8 = (bool)hasExclusiveAccess(puVar18);
            if (bVar8) {
              *puVar18 = uVar20;
              goto LAB_0107ea40;
            }
          } while (*puVar18 == uVar14);
        }
        ClearExclusiveLocal();
      } while( true );
    }
LAB_0107e8f0:
    *(int *)(iVar2 + 0x408) = *(int *)(iVar2 + 0x408) + 1;
    puVar11 = (undefined4 *)(iVar10 + uVar21 * 0x10);
    *puVar11 = &DAT_0109c100;
    puVar11[1] = piVar22;
  }
LAB_0107e7c4:
  FUN_0109717c(iVar15,iVar2,piVar3,piVar16);
  if ((iVar2 != 0) &&
     (iVar15 = *(int *)(iVar2 + 0x40c) + -1, *(int *)(iVar2 + 0x40c) = iVar15, iVar15 == 0)) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar2 + 0x420) = 0;
    if (*(int *)(iVar2 + 0x410) == 0) {
      FUN_00fbb698(iVar2);
    }
  }
  if (piVar19 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar19;
      bVar8 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar8);
    *piVar19 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar19);
    }
  }
  return;
}

