// FUN_0107d5f0 @ 0107d5f0 size=2440 calls_out=16 calls_in=3
// strings: assertion failed: !bucket::is_tombstone(current_bucket_ptr) | assertion failed: bucket::is_tombstone(previous_bucket_ptr) | assertion failed: !ptr.is_null()

void FUN_0107d5f0(uint *param_1,int *param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint **ppuVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint in_fpscr;
  double dVar34;
  double dVar35;
  double dVar36;
  uint local_90;
  uint *local_8c;
  uint local_88;
  uint *local_84;
  int *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  int local_44;
  
  puVar21 = (uint *)(param_2 + 2);
  local_68 = *puVar21;
  uStack_64 = param_2[3];
  uStack_60 = param_2[4];
  uStack_5c = param_2[5];
  local_6c = uStack_5c ^ 0x74656462;
  local_70 = uStack_60 ^ 0x79746573;
  local_74 = uStack_5c ^ 0x646f7261;
  local_78 = uStack_60 ^ 0x6e646f6d;
  local_7c = uStack_64 ^ 0x6c796765;
  local_80 = (int *)(local_68 ^ 0x6e657261);
  local_84 = (uint *)(uStack_64 ^ 0x736f6d65);
  local_88 = local_68 ^ 0x70736575;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_0108a644(param_3,&local_88);
  uVar30 = (int)local_84 + CARRY4(local_78,local_88) + local_74;
  uVar15 = (local_74 << 0xd | local_78 >> 0x13) ^ uVar30;
  uVar13 = (local_78 << 0xd | local_74 >> 0x13) ^ local_78 + local_88;
  uVar22 = local_54 | local_50 << 0x18;
  uVar24 = uVar22 ^ local_6c;
  uVar2 = local_58 ^ local_70;
  uVar17 = uVar2 + (int)local_80;
  uVar26 = uVar24 + local_7c + (uint)CARRY4(uVar2,(uint)local_80);
  uVar19 = uVar26 + uVar15 + (uint)CARRY4(uVar17,uVar13);
  uVar29 = uVar19 ^ (uVar15 << 0x11 | uVar13 >> 0xf);
  uVar3 = (uVar2 << 0x10 | uVar24 >> 0x10) ^ uVar17;
  uVar26 = (uVar24 << 0x10 | uVar2 >> 0x10) ^ uVar26;
  uVar24 = uVar26 + local_78 + local_88 + (uint)CARRY4(uVar3,uVar30);
  uVar15 = uVar17 + uVar13 ^ (uVar13 << 0x11 | uVar15 >> 0xf);
  uVar2 = uVar3 + uVar30 ^ local_58;
  uVar32 = uVar2 + uVar15;
  uVar33 = (uVar24 ^ uVar22) + uVar29 + (uint)CARRY4(uVar2,uVar15);
  uVar24 = (uVar26 << 0x15 | uVar3 >> 0xb) ^ uVar24;
  uVar23 = uVar33 ^ (uVar29 << 0xd | uVar15 >> 0x13);
  uVar19 = uVar19 ^ 0xff;
  uVar2 = (uVar3 << 0x15 | uVar26 >> 0xb) ^ uVar3 + uVar30;
  uVar22 = uVar32 ^ (uVar15 << 0xd | uVar29 >> 0x13);
  uVar26 = uVar2 + uVar19;
  uVar15 = uVar24 + uVar17 + uVar13 + (uint)CARRY4(uVar2,uVar19);
  uVar19 = uVar23 + uVar15 + (uint)CARRY4(uVar22,uVar26);
  uVar3 = uVar19 ^ (uVar23 << 0x11 | uVar22 >> 0xf);
  uVar17 = uVar22 + uVar26 ^ (uVar22 << 0x11 | uVar23 >> 0xf);
  uVar15 = (uVar24 << 0x10 | uVar2 >> 0x10) ^ uVar15;
  uVar13 = (uVar2 << 0x10 | uVar24 >> 0x10) ^ uVar26;
  uVar23 = uVar13 + uVar33;
  uVar24 = uVar15 + uVar32 + (uint)CARRY4(uVar13,uVar33);
  uVar29 = uVar3 + uVar24 + (uint)CARRY4(uVar17,uVar23);
  uVar2 = (uVar3 << 0xd | uVar17 >> 0x13) ^ uVar29;
  uVar3 = (uVar17 << 0xd | uVar3 >> 0x13) ^ uVar17 + uVar23;
  uVar24 = (uVar15 << 0x15 | uVar13 >> 0xb) ^ uVar24;
  uVar13 = (uVar13 << 0x15 | uVar15 >> 0xb) ^ uVar23;
  uVar15 = uVar13 + uVar19;
  uVar19 = uVar24 + uVar22 + uVar26 + (uint)CARRY4(uVar13,uVar19);
  uVar26 = uVar2 + uVar19 + (uint)CARRY4(uVar3,uVar15);
  uVar22 = (uVar2 << 0x11 | uVar3 >> 0xf) ^ uVar26;
  uVar19 = (uVar24 << 0x10 | uVar13 >> 0x10) ^ uVar19;
  uVar13 = (uVar13 << 0x10 | uVar24 >> 0x10) ^ uVar15;
  uVar24 = uVar13 + uVar29;
  uVar29 = uVar19 + uVar17 + uVar23 + (uint)CARRY4(uVar13,uVar29);
  uVar23 = (uVar19 << 0x15 | uVar13 >> 0xb) ^ uVar29;
  uVar17 = (uVar13 << 0x15 | uVar19 >> 0xb) ^ uVar24;
  uVar13 = uVar17 + uVar26;
  uVar2 = (uVar3 << 0x11 | uVar2 >> 0xf) ^ uVar3 + uVar15;
  uVar3 = uVar23 + uVar3 + uVar15 + (uint)CARRY4(uVar17,uVar26);
  uVar19 = (uVar22 << 0xd | uVar2 >> 0x13) ^ uVar22 + uVar29 + (uint)CARRY4(uVar2,uVar24);
  uVar15 = (uVar2 << 0xd | uVar22 >> 0x13) ^ uVar2 + uVar24;
  uVar2 = uVar19 + uVar3 + (uint)CARRY4(uVar15,uVar13);
  piVar4 = (int *)thunk_FUN_016d4a50(8);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  uVar3 = (uVar23 << 0x10 | uVar17 >> 0x10) ^ uVar3;
  uVar24 = (uVar17 << 0x10 | uVar23 >> 0x10) ^ uVar13;
  uVar17 = (uVar3 << 0x15 | uVar24 >> 0xb) ^ (uVar19 << 0x11 | uVar15 >> 0xf) ^ uVar15 + uVar13 ^
           uVar2;
  uVar2 = (uVar24 << 0x15 | uVar3 >> 0xb) ^ (uVar15 << 0x11 | uVar19 >> 0xf) ^ uVar2 ^
          uVar15 + uVar13;
  *piVar4 = 1;
  piVar4[1] = 0;
  do {
    uVar3 = *param_3;
    bVar12 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar12);
  *param_3 = uVar3 + 1;
  if ((int)uVar3 < 0) {
LAB_0107dfa0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x107dfa0);
    (*pcVar1)();
  }
  do {
    iVar5 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar5 + 1;
  if (iVar5 < 0) {
LAB_0107dd24:
                    /* WARNING: Subroutine does not return */
    FUN_015bef44();
  }
  uVar13 = param_2[7] & 0x3f;
  uVar3 = uVar2 >> uVar13 | uVar17 << (0x20 - uVar13 & 0xff);
  if (-1 < (int)(uVar13 - 0x20)) {
    uVar3 = uVar17 >> (uVar13 - 0x20 & 0xff);
  }
  uVar13 = 0;
  if (param_2[7] != 0x40) {
    uVar13 = uVar3;
  }
  if ((uint)param_2[1] <= uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar13,param_2[1],&DAT_0188428c);
  }
  iVar25 = *param_2;
  iVar5 = FUN_0106fc6c();
  iVar25 = iVar25 + uVar13 * 8;
  local_44 = iVar5;
  piVar6 = (int *)FUN_01097034(iVar25);
  piVar18 = (int *)(iVar25 + 4);
  local_90 = 2;
  puVar20 = param_3;
  piVar31 = piVar4;
  piVar27 = piVar6;
  do {
    uVar3 = piVar27[1];
    if ((uVar3 ^ uVar3 - 1) <= uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00384db4,0x36,&DAT_01883ba0);
    }
    dVar34 = (double)VectorUnsignedToFloat(uVar3 & 0xfffffffe,(byte)(in_fpscr >> 0x16) & 3);
    dVar36 = (double)VectorUnsignedToFloat(piVar27[5],(byte)(in_fpscr >> 0x16) & 3);
    dVar35 = (double)VectorUnsignedToFloat(*piVar18,(byte)(in_fpscr >> 0x16) & 3);
    uVar3 = in_fpscr;
    if ((uint)piVar27[5] < 25000) {
      in_fpscr = in_fpscr & 0xfffffff;
      uVar13 = in_fpscr | (uint)(dVar36 / dVar34 < 0.1) << 0x1f;
      uVar3 = uVar13 | (uint)NAN(dVar36 / dVar34) << 0x1c;
      if ((byte)(uVar13 >> 0x1f) == ((byte)(uVar3 >> 0x1c) & 1)) goto LAB_0107da28;
      uVar7 = 0;
      if (dVar35 <= dVar34 * 0.7) {
        local_88 = local_90;
        uVar13 = piVar27[1] - 1;
        local_80 = piVar31;
        uVar3 = uVar13 & uVar2;
        local_84 = puVar20;
        if (piVar27[1] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar3,0,&DAT_01883b60);
        }
        iVar14 = *piVar27;
        uVar15 = 0;
        local_8c = (uint *)(iVar14 + uVar3 * 4);
LAB_0107db38:
        local_90 = local_88;
        bVar12 = true;
        do {
          piVar31 = local_80;
          puVar20 = local_84;
          if (!bVar12) {
            if (uVar15 < uVar13) {
              uVar24 = uVar15 + uVar3 + 1;
              uVar15 = uVar15 + 1;
              local_8c = (uint *)(iVar14 + (uVar24 & uVar13) * 4);
              uVar24 = *local_8c;
              if ((uVar24 & 1) == 0) goto LAB_0107db8c;
            }
LAB_0107dcb0:
            piVar10 = (int *)FUN_0107227c(piVar27,&local_44,*puVar21,param_2[3],param_2[4],
                                          param_2[5],0);
            goto LAB_0107da78;
          }
          uVar24 = *local_8c;
          if ((uVar24 & 1) != 0) goto LAB_0107dcb0;
LAB_0107db8c:
          piVar31 = (int *)(uVar24 & 0xfffffff8);
          if (piVar31 == (int *)0x0) goto LAB_0107dc34;
          ppuVar8 = (uint **)((uint)local_84 & 0xfffffff8);
          puVar20 = (uint *)*piVar31;
          if (local_90 == 2) {
            ppuVar8 = &local_84;
          }
          puVar28 = *ppuVar8;
          if (puVar20 == puVar28) break;
          iVar9 = FUN_0103cf5c(puVar20 + 2,puVar28 + 2);
          bVar12 = false;
        } while (((((iVar9 == 0) || ((short)puVar20[0x14] != (short)puVar28[0x14])) ||
                  (((short)puVar20[0x14] == 0x24 &&
                   (*(short *)((int)puVar20 + 0x52) != *(short *)((int)puVar28 + 0x52))))) ||
                 ((uint)(ushort)puVar20[0x13] != (uint)(ushort)puVar28[0x13])) ||
                (((ushort)puVar20[0x13] - 5 < 2 &&
                 (*(short *)((int)puVar20 + 0x4e) != *(short *)((int)puVar28 + 0x4e)))));
        if ((uVar24 & 2) == 0) {
          FUN_0107214c(&local_88);
          if (piVar31 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01884090);
          }
          if ((uVar24 & 2) != 0) {
            puVar16 = &DAT_018840a0;
            pcVar11 = "assertion failed: !bucket::is_tombstone(current_bucket_ptr)";
            goto LAB_0107df48;
          }
          puVar21 = (uint *)piVar31[1];
          do {
            uVar3 = *puVar21;
            bVar12 = (bool)hasExclusiveAccess(puVar21);
          } while (!bVar12);
          *puVar21 = uVar3 + 1;
          if (0x7fffffff < uVar3) goto LAB_0107dd24;
          goto LAB_0107ddb0;
        }
LAB_0107dc34:
        piVar31 = local_80;
        puVar20 = local_84;
        if (local_90 == 2) {
          puVar28 = (uint *)thunk_FUN_016d4a50(8);
          if (puVar28 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,8);
          }
          *puVar28 = (uint)puVar20;
          puVar28[1] = (uint)piVar31;
          if (*local_8c == uVar24) goto LAB_0107dc88;
LAB_0107dc6c:
          ClearExclusiveLocal();
          goto LAB_0107dc98;
        }
        puVar28 = local_84;
        if (*local_8c != uVar24) goto LAB_0107dc6c;
LAB_0107dc88:
        DataMemoryBarrier(0xb);
        bVar12 = (bool)hasExclusiveAccess(local_8c);
        if (!bVar12) {
LAB_0107dc98:
          local_84 = puVar28;
          local_88 = 3;
          goto LAB_0107db38;
        }
        *local_8c = (uint)puVar28;
        DataMemoryBarrier(0xb);
        if (uVar24 < 8) {
          do {
            bVar12 = (bool)hasExclusiveAccess(piVar18);
          } while (!bVar12);
          *piVar18 = *piVar18 + 1;
          puVar21 = (uint *)0x0;
        }
        else {
          if ((uVar24 & 2) == 0) {
            puVar16 = &DAT_018840b0;
            pcVar11 = "assertion failed: bucket::is_tombstone(previous_bucket_ptr)";
LAB_0107df48:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(pcVar11,0x3b,puVar16);
          }
          do {
            bVar12 = (bool)hasExclusiveAccess(piVar18);
          } while (!bVar12);
          *piVar18 = *piVar18 + 1;
          if (uVar24 < 8) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: !ptr.is_null()",0x20,&DAT_01883b10);
          }
          puVar21 = (uint *)0x0;
          FUN_0109ba68(iVar5,uVar24);
        }
LAB_0107ddb0:
        FUN_0109717c(iVar25,iVar5,piVar6,piVar27);
        if ((iVar5 != 0) &&
           (iVar25 = *(int *)(iVar5 + 0x40c) + -1, *(int *)(iVar5 + 0x40c) = iVar25, iVar25 == 0)) {
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar5 + 0x420) = 0;
          if (*(int *)(iVar5 + 0x410) == 0) {
            FUN_00fbb698(iVar5);
          }
        }
        if (puVar21 == (uint *)0x0) {
          piVar31 = param_2 + 6;
          do {
            bVar12 = (bool)hasExclusiveAccess(piVar31);
          } while (!bVar12);
          *piVar31 = *piVar31 + 1;
          do {
            uVar3 = *param_3;
            bVar12 = (bool)hasExclusiveAccess(param_3);
          } while (!bVar12);
          *param_3 = uVar3 + 1;
          if (-1 < (int)uVar3) {
            *param_1 = uVar2;
            param_1[1] = uVar17;
            param_1[2] = (uint)param_2;
            param_1[3] = (uint)param_3;
            param_1[4] = (uint)piVar4;
            return;
          }
        }
        else {
          do {
            uVar3 = *param_3;
            bVar12 = (bool)hasExclusiveAccess(param_3);
          } while (!bVar12);
          *param_3 = uVar3 + 1;
          if (-1 < (int)uVar3) {
            *param_1 = uVar2;
            param_1[1] = uVar17;
            param_1[2] = (uint)param_2;
            param_1[3] = (uint)param_3;
            param_1[4] = (uint)puVar21;
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar12 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar12);
            *piVar4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              thunk_FUN_016d3fb4(piVar4);
            }
            return;
          }
        }
        goto LAB_0107dfa0;
      }
    }
    else {
LAB_0107da28:
      dVar34 = dVar34 * 0.25;
      uVar7 = 2;
      in_fpscr = uVar3 & 0xfffffff;
      if (dVar35 - dVar36 < dVar34) {
        uVar7 = 1;
      }
      if ((uint)(0.0 < dVar34) * (int)(longlong)dVar34 < 0x80) {
        uVar7 = 2;
      }
    }
    piVar10 = (int *)FUN_0107227c(piVar27,&local_44,*puVar21,param_2[3],param_2[4],param_2[5],uVar7)
    ;
LAB_0107da78:
    if (piVar10 != (int *)0x0) {
      piVar27 = piVar10;
    }
  } while( true );
}

