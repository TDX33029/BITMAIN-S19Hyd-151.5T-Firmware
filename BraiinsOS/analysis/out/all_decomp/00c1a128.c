// FUN_00c1a128 @ 00c1a128 size=1464 calls_out=14 calls_in=3
// strings: internal error: entered unreachable code: invalid Once state

void FUN_00c1a128(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 extraout_r1;
  short *psVar9;
  int iVar10;
  ushort uVar11;
  short sVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  int unaff_r4;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ushort uVar21;
  uint *puVar22;
  bool bVar23;
  uint in_fpscr;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  int local_218;
  uint local_1dc;
  undefined1 auStack_1ac [12];
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int local_190;
  undefined8 *local_18c;
  undefined4 local_188;
  int local_184;
  int local_180;
  int local_17c;
  undefined4 local_110;
  code *local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined2 local_e4;
  undefined4 local_80;
  int local_7c;
  undefined4 uStack_28;
  
  if (param_4 == 0) {
    uVar5 = FUN_009b670c(*(undefined4 *)(param_5 + 0x19c));
    local_80 = CONCAT31(local_80._1_3_,uVar5) & 0xffffff01;
    local_10c = FUN_0093efbc;
    local_110 = &local_80;
    local_80._0_2_ = CONCAT11(extraout_r1,(undefined1)local_80);
    FUN_00600d2c(auStack_1ac,&DAT_0057ac04,&local_110);
    uVar7 = FUN_00c6b484(auStack_1ac);
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = uVar7;
    return;
  }
  psVar9 = *(short **)(param_5 + 0x1a4);
  if (*psVar9 == 0) {
    if (*(int *)(psVar9 + 4) == 0) {
      iVar17 = *(int *)(*(int *)(param_5 + 0x19c) + 0xb8);
      if (iVar17 == 0) {
        puVar8 = (undefined4 *)FUN_00c70f88(&DAT_00357a0e,0x25);
        (**(code **)*puVar8)();
        local_1dc = 0;
      }
      else {
        dVar24 = (double)VectorUnsignedToFloat(iVar17,(byte)(in_fpscr >> 0x16) & 3);
        uVar7 = FUN_016d5298(SUB84(SQRT(dVar24),0));
        dVar26 = (double)CONCAT44(extraout_s1,uVar7);
        local_10c = (code *)((uint)(0.0 < dVar26) * (int)(longlong)dVar26);
        uVar6 = in_fpscr & 0xfffffff | (uint)(dVar26 < 65535.0) << 0x1f |
                (uint)(dVar26 == 65535.0) << 0x1e;
        if (NAN(dVar26)) {
          local_10c = (code *)0x0;
        }
        bVar4 = (byte)(uVar6 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && (bool)(bVar4 >> 7) == NAN(dVar26)) {
          local_10c = (code *)0xffff;
        }
        dVar26 = (double)VectorUnsignedToFloat(local_10c,(byte)(uVar6 >> 0x16) & 3);
        uVar7 = FUN_016d5298(SUB84(dVar24 / dVar26,0));
        dVar26 = (double)CONCAT44(extraout_s1_00,uVar7);
        local_108 = CONCAT13(3,(undefined3)local_108);
        sVar12 = (ushort)(0.0 < dVar26) * (short)(longlong)dVar26;
        if (dVar26 < 0.0) {
          sVar12 = 0;
        }
        if (65535.0 < dVar26) {
          sVar12 = -1;
        }
        local_104 = 4;
        uStack_100 = 0;
        uStack_fc = 4;
        uStack_f8 = 0;
        local_f4 = 3;
        local_f0 = 0;
        local_ec = 0;
        uStack_e8 = 0;
        local_e4 = 0x806;
        local_110 = (undefined4 *)CONCAT22(sVar12,1);
        FUN_00d5fe5c(&local_80);
        if (1 < local_f4 - 2U) {
          if (local_f4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                         &DAT_018a9874);
          }
          if (local_f0 != 0) {
            thunk_FUN_016d3fb4(local_ec);
          }
        }
        local_1dc = local_80;
        local_218 = local_7c;
      }
      goto LAB_00c1a354;
    }
    iVar17 = *(int *)(psVar9 + 4);
    if (iVar17 != 0) {
      uVar21 = 0;
      puVar13 = (ushort *)(*(int *)(psVar9 + 2) + 2);
      uVar11 = 0;
      do {
        uVar2 = *puVar13;
        puVar1 = puVar13 + -1;
        puVar13 = puVar13 + 2;
        if (uVar11 < uVar2) {
          uVar11 = uVar2;
        }
        if (uVar21 < *puVar1) {
          uVar21 = *puVar1;
        }
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
  }
  FUN_00d5fe5c(&local_110);
  local_1dc = (uint)local_110;
  local_218 = (int)local_10c;
LAB_00c1a354:
  local_180 = 4;
  local_198 = 0;
  local_19c = 8;
  local_1a0 = 0;
  local_188 = 0;
  local_18c = (undefined8 *)&DAT_00000008;
  local_190 = 0;
  local_17c = 0;
  local_184 = 0;
  if (*(int *)(param_3 + 0xd0) != 0) {
    piVar16 = *(int **)(param_3 + 0xcc);
    if (*(int *)(param_3 + 0xd0) != 1) {
                    /* WARNING: Could not recover jumptable at 0x00c1a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&LAB_00c1a668 + *(int *)(&LAB_00c1a668 + *piVar16 * 4)))(piVar16 + 2);
      return;
    }
    uVar25 = *(undefined8 *)(piVar16 + 6);
    FUN_00d64eec(&local_190);
    *local_18c = uVar25;
    iVar17 = piVar16[10];
    local_188 = 1;
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
    }
    uVar6 = 0;
    iVar10 = 0;
    puVar22 = (uint *)piVar16[9];
    iVar14 = iVar17;
    do {
      bVar23 = CARRY4(uVar6,*puVar22);
      uVar6 = uVar6 + *puVar22;
      iVar10 = iVar10 + (uint)bVar23;
      iVar14 = iVar14 + -1;
      puVar22 = puVar22 + 1;
    } while (iVar14 != 0);
    uVar7 = FUN_01846088(uVar6,iVar10,iVar17,0);
    iVar17 = local_17c;
    if (local_17c == local_184) {
      FUN_009b6bc0(&local_184);
    }
    *(undefined4 *)(local_180 + iVar17 * 4) = uVar7;
    local_17c = iVar17 + 1;
                    /* WARNING: Could not recover jumptable at 0x00c1a534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00c1a538 + *(int *)(&DAT_00c1a538 + *piVar16 * 4)))(piVar16[2],piVar16[3]);
    return;
  }
  FUN_01602d08(&local_110);
  uVar7 = FUN_00c78138(&DAT_00354601,0x2b,&local_110);
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = uVar7;
  if (local_184 != 0) {
    thunk_FUN_016d3fb4(4);
  }
  if (local_190 != 0) {
    thunk_FUN_016d3fb4(local_18c);
  }
  FUN_00ce19cc(8,0);
  if (local_1a0 != 0) {
    thunk_FUN_016d3fb4(8);
  }
  if ((local_1dc & 0x7fffffff) == 0) {
    return;
  }
  if (local_218 == 0) {
    return;
  }
  iVar17 = FUN_016d3bc8();
  uVar6 = *(byte *)(local_218 + -3) & 0x1f;
  if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
     (uVar18 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar14 = uVar18 - 0x10, uVar18 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar18 = (uint)(*(byte *)(local_218 + -3) >> 5);
  iVar20 = *(int *)(iVar17 + 8) + 0x10;
  iVar10 = iVar14 * uVar6 + iVar14 + -4;
  iVar14 = iVar20 + iVar10;
  if (4 < uVar18) {
    if (uVar18 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar18 = *(uint *)(iVar14 + -4);
    if (uVar18 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar14 - local_218) < uVar18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar14 - uVar18) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar20 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar17 + 0x14);
  uVar18 = 1 << uVar6;
  *(undefined1 *)(local_218 + -3) = 0xff;
  *(undefined2 *)(local_218 + -2) = 0;
  do {
    uVar19 = *(uint *)(iVar17 + 0x10);
    uVar15 = *(uint *)(iVar17 + 0xc) | uVar19;
    if ((uVar18 & uVar15) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar19 == 0) || (uVar15 + uVar18 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar17,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar17 + 0x10) = uVar18 + uVar19;
      return;
    }
    puVar22 = (uint *)(iVar17 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar22);
      uVar15 = *puVar22;
      if (uVar19 != uVar15) goto LAB_016d409c;
      bVar23 = (bool)hasExclusiveAccess(puVar22);
    } while (!bVar23);
    *puVar22 = uVar18 + uVar19;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar19 == uVar15) {
      return;
    }
  } while( true );
}

