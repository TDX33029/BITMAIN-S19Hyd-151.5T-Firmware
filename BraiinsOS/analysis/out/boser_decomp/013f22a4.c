// FUN_013f22a4 @ 013f22a4 size=2536 calls_out=21 calls_in=1
// strings: window

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013f22a4(int param_1,char param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,undefined1 *param_7,uint param_8,int param_9)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  int **ppiVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  int *piVar29;
  int iVar30;
  int iVar31;
  undefined4 *puVar32;
  uint uVar33;
  uint uVar34;
  int *piVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  char *local_108;
  char *local_c0;
  int *local_bc;
  int *local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int *local_88;
  uint local_84;
  int *local_80;
  uint local_7c;
  int *local_78;
  int local_74;
  undefined1 auStack_70 [16];
  int local_60;
  undefined4 local_58;
  int local_54;
  uint local_50;
  undefined4 *local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  uint *local_30;
  uint local_28;
  
  iVar15 = param_9;
  uVar5 = param_8;
  puVar4 = param_7;
  uVar22 = *(uint *)(param_1 + 0x48);
  uVar25 = *(uint *)(param_1 + 0x4c);
  puVar27 = *(undefined1 **)(param_1 + 0x50);
  piVar26 = *(int **)(param_1 + 0xd8);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  bVar37 = ((uint)piVar26 & *(uint *)(param_1 + 0xdc)) != 0xffffffff;
  if (bVar37) {
    local_88 = piVar26;
    local_84 = *(uint *)(param_1 + 0xdc);
  }
  piVar29 = (int *)(uint)bVar37;
  if (param_2 == '\0') {
    local_c0 = "window";
    uVar16 = 6;
    iVar30 = param_3;
  }
  else {
    if (param_2 == '\x01') {
      iVar30 = param_3 + 0x18;
      local_c0 = &DAT_00475c74;
    }
    else {
      iVar30 = param_3 + 0x30;
      local_c0 = &DAT_00475c82;
    }
    uVar16 = 0xe;
  }
  if (param_6 != 0) {
    param_3 = param_3 + 0x48;
    piVar17 = (int *)(param_1 + 0x70);
    puVar8 = (uint *)(param_9 + 0x10);
    bVar37 = true;
    local_ac = 0;
    iVar31 = param_6;
LAB_013f23d0:
    bVar38 = false;
    while( true ) {
      piVar9 = *(int **)(iVar30 + 0xc);
      if (piVar9 == (int *)0x0) {
        piVar13 = (int *)0x0;
        piVar9 = (int *)0x2;
        ppiVar11 = &local_78;
      }
      else {
        piVar26 = *(int **)(*piVar9 + 0x10);
        do {
          iVar18 = *piVar26;
          bVar38 = (bool)hasExclusiveAccess(piVar26);
        } while (!bVar38);
        *piVar26 = iVar18 + 1;
        if (iVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x13f2c8c);
          (*pcVar1)();
        }
        iVar18 = *piVar9;
        local_b0 = *(uint *)(iVar18 + 8);
        local_b4 = *(uint *)(iVar18 + 0xc);
        DataMemoryBarrier(0xb);
        piVar10 = *(int **)(*piVar9 + 0x18);
        piVar19 = *(int **)(*piVar9 + 0x1c);
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        local_74 = 0;
        bVar38 = piVar10 != (int *)0xffffffff || piVar19 != (int *)0xffffffff;
        local_78 = (int *)(uint)bVar38;
        piVar13 = local_bc;
        piVar9 = local_b8;
        if (bVar38) {
          piVar13 = piVar19;
          piVar9 = piVar10;
        }
        ppiVar11 = &local_80;
        bVar38 = *(short *)(iVar18 + 0x34) != *(short *)(iVar18 + 0x36);
        local_bc = piVar13;
        local_b8 = piVar9;
      }
      *ppiVar11 = piVar9;
      piVar9 = local_78;
      ppiVar11[1] = piVar13;
      if (piVar9 == (int *)0x2 && local_74 == 0) {
        return;
      }
      local_ac = local_ac + 1;
      if ((!bVar38) && (((uint)piVar9 & 1) != 0)) break;
      FUN_013f12a4(param_1,piVar26 + 2,local_b0,local_b4,local_c0,uVar16,iVar30,param_3);
      DataMemoryBarrier(0xb);
      do {
        iVar18 = *piVar26;
        bVar37 = (bool)hasExclusiveAccess(piVar26);
      } while (!bVar37);
      *piVar26 = iVar18 + -1;
      if (iVar18 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0140a97c(piVar26);
      }
      bVar37 = false;
      if (local_ac == iVar31) {
        return;
      }
    }
    uVar34 = 0;
    if (puVar27 != &DAT_3b9aca00) {
      uVar3 = (ulonglong)uVar22 * 1000000000;
      uVar34 = (uint)uVar3;
      lVar2 = (ulonglong)uVar25 * 1000000000 + (uVar3 >> 0x20);
      uVar20 = (uint)lVar2;
      uVar23 = (uint)((ulonglong)lVar2 >> 0x20);
      puVar28 = puVar27 + uVar34;
      bVar38 = CARRY4(uVar20,(uint)CARRY4(uVar34,(uint)puVar27));
      uVar20 = uVar20 + CARRY4(uVar34,(uint)puVar27);
      puVar21 = (undefined1 *)0xfffffffe;
      if (puVar28 < (undefined1 *)0xfffffffe) {
        puVar21 = puVar28;
      }
      if (uVar20 != 0xffffffff) {
        puVar21 = puVar28;
      }
      uVar34 = 0;
      uVar24 = 0xffffffff;
      puVar28 = (undefined1 *)0xfffffffe;
      if (-(uint)CARRY4(uVar23,(uint)bVar38) < (uint)(uVar23 + bVar38 == 0)) {
        uVar24 = uVar20;
        puVar28 = puVar21;
      }
      puVar21 = (undefined1 *)((int)local_80 + (int)puVar28);
      uVar20 = local_7c + uVar24 + (uint)CARRY4((uint)local_80,(uint)puVar28);
      if (CARRY4(local_7c,uVar24) ||
          CARRY4(local_7c + uVar24,(uint)CARRY4((uint)local_80,(uint)puVar28))) {
        uVar20 = 0xffffffff;
        puVar21 = (undefined1 *)0xffffffff;
      }
      puVar28 = (undefined1 *)0xfffffffe;
      if (puVar21 < (undefined1 *)0xfffffffe) {
        puVar28 = puVar21;
      }
      if (uVar20 == 0xffffffff) {
        puVar21 = puVar28;
      }
      if (uVar20 < uVar5 || uVar5 - uVar20 < (uint)(puVar21 <= puVar4)) {
        uVar34 = 1;
      }
    }
    piVar9 = local_88;
    if (uVar34 == 0) {
      piVar9 = piVar29;
    }
    if (uVar34 == 0 &&
        ((uint)piVar9 &
        (uint)(local_7c <= local_84 && (uint)(local_88 <= local_80) <= local_7c - local_84)) == 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar26;
        bVar37 = (bool)hasExclusiveAccess(piVar26);
      } while (!bVar37);
      *piVar26 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0140a97c(piVar26);
        return;
      }
      return;
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      local_108 = (char *)0x0;
      local_60 = 0;
      goto LAB_013f26d4;
    }
    FUN_0140b4bc(auStack_70,(int *)(param_1 + 0xe8),piVar26);
    if (local_60 == 0) {
      local_108 = (char *)0x0;
      goto LAB_013f26d4;
    }
    local_108 = (char *)(local_60 + 4);
    if (*local_108 == '\0') {
      bVar38 = (bool)hasExclusiveAccess(local_108);
      if (!bVar38) goto LAB_013f26bc;
      *local_108 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_013f26bc:
      FUN_0164fba8(local_108);
    }
    FUN_0165098c(local_108);
LAB_013f26d4:
    uVar23 = *(uint *)(param_1 + 0x74) & 0x3f;
    uVar20 = local_b0 >> uVar23 | local_b4 << (0x20 - uVar23 & 0xff);
    if (-1 < (int)(uVar23 - 0x20)) {
      uVar20 = local_b4 >> (uVar23 - 0x20 & 0xff);
    }
    uVar23 = 0;
    if (*(uint *)(param_1 + 0x74) != 0x40) {
      uVar23 = uVar20;
    }
    if (*(uint *)(param_1 + 0x5c) <= uVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar23,*(uint *)(param_1 + 0x5c),&DAT_01cf3dd8);
    }
    iVar31 = *(int *)(param_1 + 0x58);
    uVar12 = FUN_013f0d78();
    iVar31 = iVar31 + uVar23 * 8;
    local_58 = uVar12;
    piVar13 = (int *)FUN_0140b1c4(iVar31);
    piVar10 = (int *)(iVar31 + 4);
    piVar9 = piVar13;
    do {
      uVar23 = piVar9[1];
      uVar20 = uVar23 - 1;
      if ((uVar23 ^ uVar20) <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
      }
      piVar19 = piVar9 + 5;
      cVar7 = FUN_0160a118(uVar23 >> 1,piVar19,piVar10);
      if (cVar7 == '\x03') {
        local_38 = 1;
        local_48 = uVar20 & local_b0;
        local_3c = 0;
        local_54 = *piVar9;
        local_44 = local_54 + local_48 * 4;
        local_50 = uVar23;
        local_4c = &local_58;
        local_40 = local_48;
        while( true ) {
          FUN_013f4d28(&local_34,&local_54);
          uVar20 = local_28;
          puVar6 = local_30;
          if (local_34 != 1) goto LAB_013f2ab8;
          if (local_30 == (uint *)0x0) break;
          uVar23 = 0;
          puVar32 = (undefined4 *)(local_28 & 0xfffffff8);
          if (puVar32 == (undefined4 *)0x0) goto LAB_013f2a38;
          piVar35 = (int *)*puVar32;
          if ((piVar35 == piVar26) ||
             (((((iVar18 = FUN_013cad2c(piVar35 + 2,piVar26 + 2), iVar18 != 0 &&
                 ((short)piVar35[0x14] == (short)piVar26[0x14])) &&
                (((short)piVar35[0x14] != 0x24 ||
                 (*(short *)((int)piVar35 + 0x52) == *(short *)((int)piVar26 + 0x52))))) &&
               ((uint)*(ushort *)(piVar35 + 0x13) == (uint)*(ushort *)(piVar26 + 0x13))) &&
              ((1 < *(ushort *)(piVar35 + 0x13) - 5 ||
               (*(short *)((int)piVar35 + 0x4e) == *(short *)((int)piVar26 + 0x4e))))))) {
            if ((uVar20 & 2) != 0) goto LAB_013f2a38;
            piVar35 = *(int **)(*(int *)(puVar32[1] + 0x80) + 0x18);
            uVar24 = *(uint *)(*(int *)(puVar32[1] + 0x80) + 0x1c);
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            if (piVar35 == (int *)&DAT_ffffffff && uVar24 == 0xffffffff) goto LAB_013f2a38;
            if ((piVar29 == (int *)0x0) ||
               (local_84 < uVar24 || uVar24 - local_84 < (uint)(local_88 <= piVar35))) {
              if (puVar27 == &DAT_3b9aca00) goto LAB_013f2a38;
              uVar3 = (ulonglong)uVar22 * 1000000000;
              uVar36 = (uint)uVar3;
              uVar23 = 0;
              lVar2 = (ulonglong)uVar25 * 1000000000 + (uVar3 >> 0x20);
              uVar14 = (uint)lVar2;
              uVar33 = (uint)((ulonglong)lVar2 >> 0x20);
              puVar28 = puVar27 + uVar36;
              bVar38 = CARRY4(uVar14,(uint)CARRY4(uVar36,(uint)puVar27));
              uVar14 = uVar14 + CARRY4(uVar36,(uint)puVar27);
              puVar21 = (undefined1 *)0xfffffffe;
              if (puVar28 < (undefined1 *)0xfffffffe) {
                puVar21 = puVar28;
              }
              if (uVar14 != 0xffffffff) {
                puVar21 = puVar28;
              }
              uVar36 = 0xffffffff;
              puVar28 = (undefined1 *)0xfffffffe;
              if (-(uint)CARRY4(uVar33,(uint)bVar38) < (uint)(uVar33 + bVar38 == 0)) {
                uVar36 = uVar14;
                puVar28 = puVar21;
              }
              puVar21 = (undefined1 *)((int)piVar35 + (int)puVar28);
              uVar14 = uVar24 + uVar36 + (uint)CARRY4((uint)piVar35,(uint)puVar28);
              if (CARRY4(uVar24,uVar36) ||
                  CARRY4(uVar24 + uVar36,(uint)CARRY4((uint)piVar35,(uint)puVar28))) {
                uVar14 = 0xffffffff;
                puVar21 = (undefined1 *)0xffffffff;
              }
              puVar28 = (undefined1 *)0xfffffffe;
              if (puVar21 < (undefined1 *)0xfffffffe) {
                puVar28 = puVar21;
              }
              if (uVar14 == 0xffffffff) {
                puVar21 = puVar28;
              }
              if (uVar5 <= uVar14 && (uint)(puVar21 <= puVar4) <= uVar5 - uVar14) goto LAB_013f2a38;
            }
            if (*puVar6 == uVar20) {
              uVar23 = (uint)puVar32 | 2;
              DataMemoryBarrier(0xb);
              bVar38 = (bool)hasExclusiveAccess(puVar6);
              if (bVar38) {
                *puVar6 = uVar23;
                DataMemoryBarrier(0xb);
                goto LAB_013f2a38;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            local_38 = 1;
          }
        }
        if (&param_5 == (undefined4 *)&DAT_000000a0) goto LAB_013f2c04;
        cVar7 = '\0';
      }
      piVar19 = (int *)FUN_013f57f0(piVar9,&local_58,*(undefined4 *)(param_1 + 0x60),
                                    *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                                    *(undefined4 *)(param_1 + 0x6c),cVar7);
      if (piVar19 != (int *)0x0) {
        piVar9 = piVar19;
      }
    } while( true );
  }
LAB_013f2c48:
  *(undefined1 *)(param_9 + 0x1c) = 1;
  return;
LAB_013f2c04:
  uVar23 = 0x10;
LAB_013f2a38:
  if ((uVar23 & 0xfffffff8) == 0) {
LAB_013f2ab8:
    piVar10 = (int *)0x0;
  }
  else {
    do {
      bVar38 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar38);
    *piVar10 = *piVar10 + -1;
    do {
      bVar38 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar38);
    *piVar19 = *piVar19 + 1;
    do {
      bVar38 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar38);
    *piVar17 = *piVar17 + -1;
    piVar10 = *(int **)((uVar23 & 0xfffffff8) + 4);
    do {
      iVar18 = *piVar10;
      bVar38 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar38);
    *piVar10 = iVar18 + 1;
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0197a954();
    }
    FUN_013f5018(uVar12,uVar23);
  }
  FUN_0140b280(iVar31,uVar12,piVar13,piVar9);
  FUN_013f0f2c(uVar12);
  if (piVar10 == (int *)0x0) {
    FUN_013f12a4(param_1,piVar26 + 2,local_b0,local_b4,local_c0,uVar16,iVar30,param_3);
    bVar38 = true;
    bVar37 = false;
  }
  else {
    iVar31 = *(int *)(param_9 + 0x18);
    if (iVar31 != 0) {
      FUN_013f10ac(iVar31,piVar26,piVar10,uVar34 ^ 1);
    }
    bVar38 = iVar31 == 0;
    uVar20 = *puVar8;
    uVar23 = *(uint *)(iVar15 + 0x14);
    uVar34 = uVar20 + 1;
    iVar31 = uVar23 + (0xfffffffe < uVar20);
    if (CARRY4(uVar23,(uint)(0xfffffffe < uVar20))) {
      uVar34 = 0xffffffff;
      iVar31 = -1;
    }
    *puVar8 = uVar34;
    *(int *)(iVar15 + 0x14) = iVar31;
    FUN_013f1184(local_c0,uVar16,iVar30,param_3,param_4,param_5,piVar10,param_9);
  }
  FUN_013f1058(local_108);
  FUN_013f0f64(auStack_70);
  iVar31 = param_6;
  if (bVar38) {
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar26;
      bVar38 = (bool)hasExclusiveAccess(piVar26);
    } while (!bVar38);
    *piVar26 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(piVar26);
    }
  }
  if (local_ac == iVar31) goto LAB_013f2c3c;
  goto LAB_013f23d0;
LAB_013f2c3c:
  if (!bVar37) {
    return;
  }
  goto LAB_013f2c48;
}

