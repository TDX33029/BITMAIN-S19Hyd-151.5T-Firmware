// FUN_0106e598 @ 0106e598 size=2732 calls_out=21 calls_in=1
// strings: window

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0106e598(int param_1,char param_2,int param_3,undefined4 *param_4,int param_5,
                 undefined4 param_6,undefined1 *param_7,uint param_8,int param_9)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  bool bVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  undefined4 uVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  int *piVar28;
  char *pcVar29;
  undefined4 *puVar30;
  undefined4 uVar31;
  undefined1 *puVar32;
  int iVar33;
  undefined1 *puVar34;
  uint uVar35;
  uint uVar36;
  int *piVar37;
  bool bVar38;
  uint in_fpscr;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 local_13c;
  char *local_138;
  uint local_10c;
  uint local_108;
  uint *local_e8;
  uint local_e4;
  uint local_d8;
  uint local_d4;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  
  puVar34 = *(undefined1 **)(param_1 + 0x50);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  bVar38 = (*(uint *)(param_1 + 0xd8) & *(uint *)(param_1 + 0xdc)) != 0xffffffff;
  if (bVar38) {
    local_d8 = *(uint *)(param_1 + 0xd8);
    local_d4 = *(uint *)(param_1 + 0xdc);
  }
  if (param_2 == '\0') {
    local_138 = "window";
    local_13c = 6;
    iVar13 = param_3;
  }
  else {
    if (param_2 == '\x01') {
      local_138 = &DAT_00384cee;
      iVar13 = param_3 + 0x18;
    }
    else {
      local_138 = &DAT_00384cfc;
      iVar13 = param_3 + 0x30;
    }
    local_13c = 0xe;
  }
  if (param_5 != 0) {
    param_3 = param_3 + 0x48;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48) * 1000000000;
    uVar14 = (uint)uVar5;
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x4c) * 1000000000 + (uVar5 >> 0x20);
    uVar21 = (uint)lVar4;
    uVar35 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar24 = *param_4;
    uVar31 = param_4[1];
    puVar15 = puVar34 + uVar14;
    bVar2 = CARRY4(uVar21,(uint)CARRY4(uVar14,(uint)puVar34));
    uVar21 = uVar21 + CARRY4(uVar14,(uint)puVar34);
    puVar32 = (undefined1 *)0xfffffffe;
    if (puVar15 < (undefined1 *)0xfffffffe) {
      puVar32 = puVar15;
    }
    if (uVar21 == 0xffffffff) {
      puVar15 = puVar32;
    }
    uVar14 = 0xffffffff;
    puVar32 = (undefined1 *)0xfffffffe;
    if (-(uint)CARRY4(uVar35,(uint)bVar2) < (uint)(uVar35 + bVar2 == 0)) {
      uVar14 = uVar21;
      puVar32 = puVar15;
    }
    iVar33 = 0;
    piVar28 = (int *)(param_1 + 0x70);
    bVar2 = true;
LAB_0106e760:
    while( true ) {
      piVar16 = *(int **)(iVar13 + 0xc);
      if (piVar16 == (int *)0x0) {
        return;
      }
      iVar6 = *piVar16;
      iVar33 = iVar33 + 1;
      piVar22 = *(int **)(iVar6 + 0x10);
      do {
        iVar25 = *piVar22;
        bVar20 = (bool)hasExclusiveAccess(piVar22);
      } while (!bVar20);
      *piVar22 = iVar25 + 1;
      if (iVar25 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x106f054);
        (*pcVar1)();
      }
      uVar35 = *(uint *)(iVar6 + 8);
      uVar36 = *(uint *)(iVar6 + 0xc);
      piVar22 = *(int **)(iVar6 + 0x10);
      DataMemoryBarrier(0xb);
      uVar21 = *(uint *)(iVar6 + 0x1c) ^ 0xffffffff;
      uVar26 = *(uint *)(iVar6 + 0x18) ^ 0xffffffff;
      if (uVar26 != 0 || uVar21 != 0) {
        local_108 = *(uint *)(iVar6 + 0x18);
        local_10c = *(uint *)(iVar6 + 0x1c);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if ((*(short *)(*piVar16 + 0x34) == *(short *)(*piVar16 + 0x36)) &&
         (uVar26 != 0 || uVar21 != 0)) break;
      FUN_0106f6c8(param_1,piVar22 + 2,uVar35,uVar36,local_138,local_13c,iVar13,param_3);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar22;
        bVar2 = (bool)hasExclusiveAccess(piVar22);
      } while (!bVar2);
      *piVar22 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0108a158(piVar22);
      }
      bVar2 = false;
      if (iVar33 == param_5) {
        return;
      }
    }
    if (puVar34 == &DAT_3b9aca00) {
      if (!bVar38) goto LAB_0106efc0;
LAB_0106e8f4:
      uVar27 = 1;
      if (local_d4 < local_10c || local_10c - local_d4 < (uint)(local_d8 <= local_108)) {
LAB_0106efc0:
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar22;
          bVar38 = (bool)hasExclusiveAccess(piVar22);
        } while (!bVar38);
        *piVar22 = iVar13 + -1;
        if (iVar13 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0108a158(piVar22);
          return;
        }
        return;
      }
    }
    else {
      puVar15 = puVar32 + local_108;
      uVar21 = local_10c + uVar14 + (uint)CARRY4(local_108,(uint)puVar32);
      if (CARRY4(local_10c,uVar14) ||
          CARRY4(local_10c + uVar14,(uint)CARRY4(local_108,(uint)puVar32))) {
        uVar21 = 0xffffffff;
        puVar15 = (undefined1 *)0xffffffff;
      }
      puVar19 = (undefined1 *)0xfffffffe;
      if (puVar15 < (undefined1 *)0xfffffffe) {
        puVar19 = puVar15;
      }
      if (uVar21 == 0xffffffff) {
        puVar15 = puVar19;
      }
      uVar27 = 0;
      if (bVar38) {
        if (param_8 <= uVar21 && (uint)(puVar15 <= param_7) <= param_8 - uVar21) goto LAB_0106e8f4;
      }
      else if (param_8 <= uVar21 && (uint)(puVar15 <= param_7) <= param_8 - uVar21)
      goto LAB_0106efc0;
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      pcVar29 = (char *)0x0;
      local_c0 = 0;
      goto LAB_0106e9dc;
    }
    FUN_0107d5f0(&local_b8,(int *)(param_1 + 0xe8),piVar22);
    local_d0 = local_b8;
    uStack_cc = uStack_b4;
    uStack_c8 = uStack_b0;
    uStack_c4 = uStack_ac;
    local_c0 = iStack_a8;
    uStack_bc = uStack_a4;
    if (iStack_a8 == 0) {
      pcVar29 = (char *)0x0;
      goto LAB_0106e9dc;
    }
    pcVar29 = (char *)(iStack_a8 + 4);
    if (*pcVar29 == '\0') {
      bVar20 = (bool)hasExclusiveAccess(pcVar29);
      if (!bVar20) goto LAB_0106e9c4;
      *pcVar29 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0106e9c4:
      FUN_01280da8(pcVar29);
    }
    FUN_0128236c(pcVar29);
LAB_0106e9dc:
    uVar26 = *(uint *)(param_1 + 0x74) & 0x3f;
    uVar21 = uVar35 >> uVar26 | uVar36 << (0x20 - uVar26 & 0xff);
    if (-1 < (int)(uVar26 - 0x20)) {
      uVar21 = uVar36 >> (uVar26 - 0x20 & 0xff);
    }
    uVar26 = 0;
    if (*(uint *)(param_1 + 0x74) != 0x40) {
      uVar26 = uVar21;
    }
    if (*(uint *)(param_1 + 0x5c) <= uVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar26,*(uint *)(param_1 + 0x5c),&DAT_0188428c);
    }
    iVar25 = *(int *)(param_1 + 0x58);
    iVar6 = FUN_0106fc6c();
    iVar25 = iVar25 + uVar26 * 8;
    local_b8 = iVar6;
    piVar7 = (int *)FUN_01097034(iVar25);
    piVar23 = (int *)(iVar25 + 4);
    piVar16 = piVar7;
LAB_0106ea58:
    uVar21 = piVar16[1];
    uVar26 = uVar21 - 1;
    if ((uVar21 ^ uVar26) <= uVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00384db4,0x36,&DAT_01883ba0);
    }
    dVar39 = (double)VectorUnsignedToFloat(uVar21 & 0xfffffffe,(byte)(in_fpscr >> 0x16) & 3);
    dVar41 = (double)VectorUnsignedToFloat(piVar16[5],(byte)(in_fpscr >> 0x16) & 3);
    dVar40 = (double)VectorUnsignedToFloat(*piVar23,(byte)(in_fpscr >> 0x16) & 3);
    uVar21 = in_fpscr;
    if ((uint)piVar16[5] < 25000) {
      in_fpscr = in_fpscr & 0xfffffff;
      uVar11 = in_fpscr | (uint)(dVar41 / dVar39 < 0.1) << 0x1f;
      uVar21 = uVar11 | (uint)NAN(dVar41 / dVar39) << 0x1c;
      if ((byte)(uVar11 >> 0x1f) == ((byte)(uVar21 >> 0x1c) & 1)) goto LAB_0106eaf8;
      uVar8 = 0;
      if (dVar40 <= dVar39 * 0.7) {
        bVar20 = true;
        iVar17 = *piVar16;
        local_e8 = (uint *)(iVar17 + (uVar26 & uVar35) * 4);
        local_e4 = 0;
LAB_0106eb70:
        if (bVar20) {
          uVar21 = *local_e8;
        }
        else {
          if (uVar26 <= local_e4) goto LAB_0106ed44;
          uVar21 = local_e4 + (uVar26 & uVar35) + 1;
          local_e4 = local_e4 + 1;
          local_e8 = (uint *)(iVar17 + (uVar21 & uVar26) * 4);
          uVar21 = *local_e8;
        }
        if ((uVar21 & 1) == 0) {
          puVar30 = (undefined4 *)(uVar21 & 0xfffffff8);
          piVar9 = (int *)0x0;
          if (puVar30 != (undefined4 *)0x0) {
            piVar37 = (int *)*puVar30;
            if (piVar37 != piVar22) goto code_r0x0106ebe0;
            goto LAB_0106ec4c;
          }
          goto LAB_0106ede0;
        }
        uVar8 = 0;
      }
    }
    else {
LAB_0106eaf8:
      dVar39 = dVar39 * 0.25;
      uVar8 = 2;
      in_fpscr = uVar21 & 0xfffffff;
      if (dVar40 - dVar41 < dVar39) {
        uVar8 = 1;
      }
      if ((uint)(0.0 < dVar39) * (int)(longlong)dVar39 < 0x80) {
        uVar8 = 2;
      }
    }
    piVar9 = (int *)FUN_01072ee0(piVar16,&local_b8,*(undefined4 *)(param_1 + 0x60),
                                 *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                                 *(undefined4 *)(param_1 + 0x6c),uVar8);
    if (piVar9 != (int *)0x0) {
      piVar16 = piVar9;
    }
    goto LAB_0106ea58;
  }
LAB_0106f008:
  *(undefined1 *)(param_9 + 0x1c) = 1;
  return;
LAB_0106ed44:
  piVar9 = (int *)0x0;
LAB_0106ede0:
  FUN_0109717c(iVar25,iVar6,piVar7,piVar16);
  if ((iVar6 != 0) &&
     (iVar25 = *(int *)(iVar6 + 0x40c) + -1, *(int *)(iVar6 + 0x40c) = iVar25, iVar25 == 0)) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar6 + 0x420) = 0;
    if (*(int *)(iVar6 + 0x410) == 0) {
      FUN_00fbb698(iVar6);
    }
  }
  if (piVar9 == (int *)0x0) {
    FUN_0106f6c8(param_1,piVar22 + 2,uVar35,uVar36,local_138,local_13c,iVar13,param_3);
    bVar20 = true;
    bVar2 = false;
  }
  else {
    iVar6 = *(int *)(param_9 + 0x18);
    if (iVar6 != 0) {
      FUN_0106dd3c(&local_b8,piVar9 + 2);
      FUN_0109d3d0(iVar6,piVar22,&local_b8,uVar27);
    }
    bVar20 = iVar6 == 0;
    uVar35 = *(uint *)(param_9 + 0x10);
    uVar21 = uVar35 + 1;
    iVar6 = *(uint *)(param_9 + 0x14) + (uint)(0xfffffffe < uVar35);
    if (CARRY4(*(uint *)(param_9 + 0x14),(uint)(0xfffffffe < uVar35))) {
      uVar21 = 0xffffffff;
      iVar6 = -1;
    }
    *(uint *)(param_9 + 0x10) = uVar21;
    *(int *)(param_9 + 0x14) = iVar6;
    FUN_0106f874(local_138,local_13c,iVar13,param_3,uVar24,uVar31,piVar9,param_9);
  }
  if (pcVar29 != (char *)0x0) {
    FUN_01282570(pcVar29);
    if (*pcVar29 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(pcVar29);
        if (bVar3) {
          *pcVar29 = '\0';
          goto LAB_0106ef5c;
        }
      } while (*pcVar29 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar29);
  }
LAB_0106ef5c:
  FUN_0106dc00(&local_d0);
  if (bVar20) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar22;
      bVar20 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar20);
    *piVar22 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0108a158(piVar22);
    }
  }
  if (iVar33 == param_5) goto LAB_0106effc;
  goto LAB_0106e760;
code_r0x0106ebe0:
  iVar10 = FUN_0103cf5c(piVar37 + 2,piVar22 + 2);
  bVar20 = false;
  if (((((iVar10 != 0) && ((short)piVar37[0x14] == (short)piVar22[0x14])) &&
       (((short)piVar37[0x14] != 0x24 ||
        (*(short *)((int)piVar37 + 0x52) == *(short *)((int)piVar22 + 0x52))))) &&
      ((uint)*(ushort *)(piVar37 + 0x13) == (uint)*(ushort *)(piVar22 + 0x13))) &&
     ((1 < *(ushort *)(piVar37 + 0x13) - 5 ||
      (*(short *)((int)piVar37 + 0x4e) == *(short *)((int)piVar22 + 0x4e))))) {
LAB_0106ec4c:
    if ((uVar21 & 2) != 0) goto LAB_0106ede0;
    uVar11 = *(uint *)(*(int *)(puVar30[1] + 0x80) + 0x18);
    uVar18 = *(uint *)(*(int *)(puVar30[1] + 0x80) + 0x1c);
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    if (uVar11 == 0xffffffff && uVar18 == 0xffffffff) goto LAB_0106ede0;
    if ((!bVar38) || (local_d4 < uVar18 || uVar18 - local_d4 < (uint)(local_d8 <= uVar11))) {
      if (puVar34 == &DAT_3b9aca00) goto LAB_0106ede0;
      piVar9 = (int *)0x0;
      puVar15 = puVar32 + uVar11;
      uVar12 = uVar18 + uVar14 + (uint)CARRY4(uVar11,(uint)puVar32);
      if (CARRY4(uVar18,uVar14) || CARRY4(uVar18 + uVar14,(uint)CARRY4(uVar11,(uint)puVar32))) {
        uVar12 = 0xffffffff;
        puVar15 = (undefined1 *)0xffffffff;
      }
      puVar19 = (undefined1 *)0xfffffffe;
      if (puVar15 < (undefined1 *)0xfffffffe) {
        puVar19 = puVar15;
      }
      if (uVar12 == 0xffffffff) {
        puVar15 = puVar19;
      }
      if (param_8 <= uVar12 && (uint)(puVar15 <= param_7) <= param_8 - uVar12) goto LAB_0106ede0;
    }
    if (*local_e8 == uVar21) {
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(local_e8);
      if (bVar3) {
        *local_e8 = (uint)puVar30 | 2;
      }
      bVar20 = true;
      if (bVar3) {
        piVar9 = (int *)0x0;
        DataMemoryBarrier(0xb);
        if ((uVar21 & 0xfffffff8) != 0) {
          piVar9 = piVar16 + 5;
          do {
            bVar20 = (bool)hasExclusiveAccess(piVar23);
          } while (!bVar20);
          *piVar23 = *piVar23 + -1;
          do {
            bVar20 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar20);
          *piVar9 = *piVar9 + 1;
          do {
            bVar20 = (bool)hasExclusiveAccess(piVar28);
          } while (!bVar20);
          *piVar28 = *piVar28 + -1;
          piVar9 = *(int **)((uVar21 & 0xfffffff8) + 4);
          do {
            iVar17 = *piVar9;
            bVar20 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar20);
          *piVar9 = iVar17 + 1;
          if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_015bef44();
          }
          FUN_010715b8(iVar6);
        }
        goto LAB_0106ede0;
      }
    }
    else {
      ClearExclusiveLocal();
      bVar20 = true;
    }
  }
  goto LAB_0106eb70;
LAB_0106effc:
  if (!bVar2) {
    return;
  }
  goto LAB_0106f008;
}

