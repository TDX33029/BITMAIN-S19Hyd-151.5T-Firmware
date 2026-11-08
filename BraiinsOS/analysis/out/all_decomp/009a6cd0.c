// FUN_009a6cd0 @ 009a6cd0 size=1852 calls_out=15 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_009a6cd0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 *puVar8;
  char cVar9;
  uint uVar10;
  code *pcVar11;
  code *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  char *pcVar19;
  undefined *puVar20;
  code *pcVar21;
  uint *puVar22;
  uint *puVar23;
  int *piVar24;
  uint *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  int iVar29;
  bool bVar30;
  bool bVar31;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a9;
  undefined4 *local_a8;
  code *local_a4;
  undefined4 *puStack_a0;
  undefined4 **local_98;
  undefined4 local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined **local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined *local_68;
  undefined4 **local_64;
  undefined4 *local_60;
  code *local_5c;
  undefined4 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined4 **local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined4 ***local_30;
  int local_2c;
  
  FUN_015f3b0c(&local_60,1);
  puVar8 = local_58;
  pcVar1 = local_5c;
  puVar5 = local_60;
  puVar14 = *(undefined4 **)(param_1 + 0x13c);
  if (puVar14 == (undefined4 *)0x0) {
    return;
  }
  puVar25 = *(uint **)(param_1 + 0x130);
  uVar10 = *puVar25;
  puVar22 = puVar25;
  while( true ) {
    puVar22 = puVar22 + 1;
    if ((uVar10 & 0x80808080) != 0x80808080) break;
    uVar10 = *puVar22;
    puVar25 = puVar25 + -0xd8;
  }
  puVar28 = (undefined1 *)((int)puVar14 + -1);
  puVar17 = puVar14;
  if (puVar28 == (undefined1 *)0xffffffff) {
    puVar17 = (undefined4 *)0xffffffff;
  }
  puVar27 = puVar17;
  if (puVar17 < &DAT_00000005) {
    puVar27 = (undefined4 *)&DAT_00000004;
  }
  bVar31 = (undefined4 *)0x1ffffffe < puVar17;
  bVar30 = puVar17 == (undefined4 *)0x1fffffff;
  uVar15 = (int)puVar27 * 8;
  if (puVar17 < (undefined4 *)0x20000000) {
    bVar31 = 0x7ffffffb < uVar15;
    bVar30 = uVar15 == 0x7ffffffc;
  }
  if (bVar31 && !bVar30) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar15);
  }
  pcVar11 = (code *)thunk_FUN_016d4a50(uVar15);
  if (pcVar11 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar15);
  }
  uVar15 = uVar10 & 0x80808080 ^ 0x80808080;
  puVar17 = (undefined4 *)&DAT_00000001;
  uVar10 = uVar15 - 1 & uVar15;
  sVar4 = (short)((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3);
  *(uint **)pcVar11 = puVar25 + -sVar4 * 0x36 + -0x36;
  *(uint **)(pcVar11 + 4) = puVar25 + -sVar4 * 0x36 + -0x34;
  local_60 = puVar27;
  local_5c = pcVar11;
  while( true ) {
    pcVar7 = local_5c;
    puVar27 = local_60;
    local_58 = puVar17;
    if (puVar28 == (undefined1 *)0x0) break;
    puVar23 = puVar22;
    if (uVar10 == 0) {
      do {
        puVar22 = puVar23 + 1;
        uVar10 = *puVar23;
        puVar25 = puVar25 + -0xd8;
        puVar23 = puVar22;
      } while ((uVar10 & 0x80808080) == 0x80808080);
      uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
    }
    if (puVar17 == local_60) {
      puVar18 = puVar28;
      if (puVar28 == (undefined1 *)0x0) {
        puVar18 = (undefined1 *)0xffffffff;
      }
      FUN_009b6da4(&local_60,puVar17,puVar18,4,8);
      pcVar11 = local_5c;
    }
    uVar15 = uVar10 >> 8;
    uVar26 = uVar10 >> 0x10;
    uVar2 = uVar10 >> 0x18;
    uVar3 = uVar10 << 0x18;
    uVar10 = uVar10 - 1 & uVar10;
    sVar4 = (short)((uint)LZCOUNT(uVar3 | (uVar15 & 0xff) << 0x10 | (uVar26 & 0xff) << 8 | uVar2) >>
                   3);
    iVar16 = (int)puVar17 * 8;
    *(uint **)(pcVar11 + iVar16) = puVar25 + -sVar4 * 0x36 + -0x36;
    puVar17 = (undefined4 *)((int)puVar17 + 1);
    *(uint **)(pcVar11 + iVar16 + 4) = puVar25 + -sVar4 * 0x36 + -0x34;
    puVar28 = puVar28 + -1;
  }
  if (&DAT_00000001 < puVar14) {
    if (&DAT_00000014 < puVar14) {
      FUN_009ba178(local_5c,puVar14);
    }
    else {
      FUN_009ce170(local_5c,puVar14);
    }
  }
  else if (puVar14 == (undefined4 *)0x0) goto LAB_009a73a0;
  pcVar11 = pcVar7;
  do {
    local_b4 = *(undefined4 *)pcVar11;
    iVar16 = *(int *)(pcVar11 + 4);
    uVar26 = *(uint *)(iVar16 + 0xb4);
    uVar15 = *(uint *)(iVar16 + 0xa4);
    puVar17 = (undefined4 *)(*(uint *)(iVar16 + 0xb0) + *(uint *)(iVar16 + 0xa0));
    uVar10 = uVar26 + uVar15 + (uint)CARRY4(*(uint *)(iVar16 + 0xb0),*(uint *)(iVar16 + 0xa0));
    if ((int)uVar15 < 0 != (int)((uVar26 ^ uVar10) & ~(uVar26 ^ uVar15)) < 0) {
LAB_009a7384:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    puVar28 = (undefined1 *)(*(int *)(iVar16 + 0xa8) + *(int *)(iVar16 + 0xb8));
    if (&DAT_3b9aca00 <= puVar28) {
      bVar30 = (undefined4 *)0xfffffffe < puVar17;
      puVar17 = (undefined4 *)((int)puVar17 + 1);
      uVar15 = uVar10 + bVar30;
      if ((int)((uVar10 ^ uVar15) & ~uVar10) < 0) goto LAB_009a7384;
      puVar28 = puVar28 + -1000000000;
      uVar10 = uVar15;
    }
    iVar29 = 0;
    pcVar21 = (code *)&DAT_00000004;
    bVar30 = (int)((int)pcVar1 - (uVar10 + (puVar5 < puVar17))) < 0 !=
             (SBORROW4((int)pcVar1,uVar10) !=
             SBORROW4((int)pcVar1 - uVar10,(uint)(puVar5 < puVar17)));
    if (puVar5 == puVar17 && pcVar1 == (code *)uVar10) {
      bVar30 = puVar8 < puVar28;
    }
    bVar31 = true;
    if (bVar30) {
      piVar24 = *(int **)(iVar16 + 0xc0);
      puVar17 = (undefined4 *)0x0;
      if (piVar24 != (int *)0x0) {
        do {
          iVar16 = *piVar24;
          bVar30 = (bool)hasExclusiveAccess(piVar24);
        } while (!bVar30);
        *piVar24 = iVar16 + 1;
        if (iVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x9a73dc);
          (*pcVar1)();
        }
        FUN_009a0dec(&local_60,piVar24[3],piVar24[4]);
        puVar17 = local_58;
        pcVar21 = local_5c;
        puVar6 = local_60;
        DataMemoryBarrier(0xb);
        do {
          iVar16 = *piVar24;
          bVar30 = (bool)hasExclusiveAccess(piVar24);
        } while (!bVar30);
        *piVar24 = iVar16 + -1;
        if (iVar16 == 1) {
          DataMemoryBarrier(0xb);
          FUN_009ba06c(piVar24);
        }
        bVar31 = puVar6 == (undefined4 *)0x0;
      }
    }
    else {
      puVar17 = (undefined4 *)0x0;
    }
    pcVar11 = pcVar11 + 8;
    iVar16 = (int)puVar17 * 0x30;
    if (iVar16 != 0) {
      do {
        while (1 < *(uint *)(pcVar21 + iVar29)) {
LAB_009a706c:
          iVar29 = iVar29 + 0x30;
          if (iVar16 == iVar29) goto LAB_009a736c;
        }
        local_b0 = *(undefined4 *)(pcVar21 + iVar29 + 0x28);
        local_a9 = pcVar21[iVar29 + 0x24];
        if (*(int *)(pcVar21 + iVar29) == 0) {
          pcVar12 = (code *)thunk_FUN_016d4a50(7);
          puVar17 = (undefined4 *)&DAT_00000007;
          if (pcVar12 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4();
          }
          *(undefined4 *)(pcVar12 + 3) = 0x6e776f6e;
          *(undefined4 *)pcVar12 = 0x6e6b6e55;
          puStack_a0 = (undefined4 *)&DAT_00000007;
        }
        else {
          local_80 = *(undefined4 *)(pcVar21 + iVar29 + 4);
          local_3c = &LAB_00fb1efc;
          local_40 = &local_80;
          FUN_00600d2c(&local_60,&DAT_0034936d,&local_40);
          puVar17 = local_60;
          pcVar12 = local_5c;
          puStack_a0 = local_58;
        }
        local_a8 = puVar17;
        local_a4 = pcVar12;
        if ((DAT_018d9130 < 3) && (DAT_018d9818 != '\0')) {
          if (DAT_018d9818 == '\x01') {
LAB_009a717c:
            DataMemoryBarrier(0xb);
            puVar20 = DAT_018daa78;
            if (DAT_018dd984 != 2) {
              puVar20 = &DAT_018ae394;
            }
            pcVar19 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) && (pcVar19 = DAT_018daa74, DAT_018daa70 != 0)) {
              pcVar19 = DAT_018daa74 + (*(int *)(puVar20 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar13 = (**(code **)(puVar20 + 0x14))(pcVar19,DAT_018d9810);
            if (iVar13 == 0) goto LAB_009a7348;
          }
          else if (DAT_018d9818 != '\x02') {
            cVar9 = FUN_0169ac90(&DAT_018d9810);
            if (cVar9 == '\0') goto LAB_009a7348;
            if (cVar9 != '\x02') goto LAB_009a717c;
          }
          if (*(int *)(DAT_018d9810 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186962c);
          }
          local_70 = 0;
          local_7c = *(undefined4 *)(DAT_018d9810 + 0x20);
          local_78 = *(undefined4 *)(DAT_018d9810 + 0x24);
          local_74 = *(undefined4 *)(DAT_018d9810 + 0x28);
          local_90 = (undefined4 *)(DAT_018d9810 + 0x1c);
          local_80 = *local_90;
          local_64 = &local_60;
          local_68 = &DAT_00591d6c;
          local_44 = &DAT_006043a8;
          local_48 = &local_a8;
          local_4c = &LAB_00f5cea0;
          local_50 = &local_a9;
          local_54 = &LAB_00fac484;
          local_58 = &local_b0;
          local_5c = FUN_009b9fc8;
          local_60 = &local_b4;
          local_98 = &local_8c;
          local_84 = &DAT_018abb78;
          local_88 = &local_68;
          local_8c = &local_80;
          local_30 = &local_98;
          local_94 = 1;
          local_3c = (undefined1 *)0x0;
          local_40 = (undefined4 *)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar19 = s_SetGloba_00414c05;
          puVar20 = &DAT_018ae394;
          if (DAT_018dd984 == 2) {
            pcVar19 = DAT_018daa74;
            puVar20 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar19 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          local_2c = DAT_018d9810;
          iVar13 = (**(code **)(puVar20 + 0x28))(pcVar19,&local_40);
          if (iVar13 != 0) {
            (**(code **)(puVar20 + 0x2c))(pcVar19,&local_40);
          }
        }
LAB_009a7348:
        if (local_a8 == (undefined4 *)0x0) goto LAB_009a706c;
        thunk_FUN_016d3fb4(local_a4);
        iVar29 = iVar29 + 0x30;
      } while (iVar16 != iVar29);
    }
LAB_009a736c:
    if (!bVar31) {
      thunk_FUN_016d3fb4(pcVar21);
    }
  } while (pcVar11 != pcVar7 + (int)puVar14 * 8);
LAB_009a73a0:
  if (puVar27 != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(pcVar7);
  }
  return;
}

