// FUN_0109e630 @ 0109e630 size=2056 calls_out=15 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0109e630(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int *piVar26;
  undefined4 *puVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint in_fpscr;
  double dVar32;
  double dVar33;
  double dVar34;
  uint local_dc;
  uint local_d8;
  int *local_b4;
  int *local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  int local_44;
  
  if (param_3 == 0) {
LAB_0109edd4:
    if (param_1[6] == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
    return;
  }
  piVar3 = param_1 + 6;
  iVar12 = param_2;
  do {
    local_68 = param_1[2];
    uStack_64 = param_1[3];
    uStack_7c = uStack_64 ^ 0x6c796765;
    local_80 = local_68 ^ 0x6e657261;
    local_60 = param_1[4];
    uStack_5c = param_1[5];
    local_74 = uStack_5c ^ 0x646f7261;
    local_78 = local_60 ^ 0x6e646f6d;
    uStack_6c = uStack_5c ^ 0x74656462;
    local_70 = local_60 ^ 0x79746573;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_84 = uStack_64 ^ 0x736f6d65;
    local_88 = (int *)(local_68 ^ 0x70736575);
    FUN_010b4a1c(&local_88,*(undefined4 *)(iVar12 + 0x14),*(undefined4 *)(iVar12 + 0x18));
    local_44 = CONCAT31(local_44._1_3_,0xff);
    FUN_010b4a1c(&local_88,&local_44,1);
    uVar30 = local_74 + local_84 + (uint)CARRY4(local_78,(uint)local_88);
    uVar13 = (local_74 << 0xd | local_78 >> 0x13) ^ uVar30;
    uVar14 = (local_78 << 0xd | local_74 >> 0x13) ^ local_78 + (int)local_88;
    uVar22 = local_54 | local_50 << 0x18;
    uVar19 = uVar22 ^ uStack_6c;
    uVar4 = local_58 ^ local_70;
    uVar16 = uVar4 + local_80;
    uVar18 = uVar19 + uStack_7c + (uint)CARRY4(uVar4,local_80);
    uVar5 = (uVar4 << 0x10 | uVar19 >> 0x10) ^ uVar16;
    uVar25 = uVar18 + uVar13 + (uint)CARRY4(uVar16,uVar14);
    uVar18 = (uVar19 << 0x10 | uVar4 >> 0x10) ^ uVar18;
    uVar19 = uVar18 + local_78 + (int)local_88 + (uint)CARRY4(uVar5,uVar30);
    uVar20 = uVar16 + uVar14 ^ (uVar14 << 0x11 | uVar13 >> 0xf);
    uVar4 = uVar5 + uVar30 ^ local_58;
    uVar13 = uVar25 ^ (uVar13 << 0x11 | uVar14 >> 0xf);
    uVar31 = uVar4 + uVar20;
    uVar28 = (uVar19 ^ uVar22) + uVar13 + (uint)CARRY4(uVar4,uVar20);
    uVar19 = (uVar18 << 0x15 | uVar5 >> 0xb) ^ uVar19;
    uVar23 = uVar28 ^ (uVar13 << 0xd | uVar20 >> 0x13);
    uVar25 = uVar25 ^ 0xff;
    uVar4 = (uVar5 << 0x15 | uVar18 >> 0xb) ^ uVar5 + uVar30;
    uVar22 = uVar31 ^ (uVar20 << 0xd | uVar13 >> 0x13);
    uVar18 = uVar4 + uVar25;
    uVar14 = uVar19 + uVar16 + uVar14 + (uint)CARRY4(uVar4,uVar25);
    uVar25 = uVar23 + uVar14 + (uint)CARRY4(uVar22,uVar18);
    uVar13 = (uVar4 << 0x10 | uVar19 >> 0x10) ^ uVar18;
    uVar5 = uVar25 ^ (uVar23 << 0x11 | uVar22 >> 0xf);
    uVar23 = uVar22 + uVar18 ^ (uVar22 << 0x11 | uVar23 >> 0xf);
    uVar14 = (uVar19 << 0x10 | uVar4 >> 0x10) ^ uVar14;
    uVar20 = uVar13 + uVar28;
    uVar16 = uVar14 + uVar31 + (uint)CARRY4(uVar13,uVar28);
    uVar28 = uVar5 + uVar16 + (uint)CARRY4(uVar23,uVar20);
    uVar4 = (uVar5 << 0xd | uVar23 >> 0x13) ^ uVar28;
    uVar5 = (uVar23 << 0xd | uVar5 >> 0x13) ^ uVar23 + uVar20;
    uVar16 = (uVar14 << 0x15 | uVar13 >> 0xb) ^ uVar16;
    uVar13 = (uVar13 << 0x15 | uVar14 >> 0xb) ^ uVar20;
    uVar19 = uVar13 + uVar25;
    uVar14 = uVar16 + uVar22 + uVar18 + (uint)CARRY4(uVar13,uVar25);
    uVar22 = (uVar16 << 0x10 | uVar13 >> 0x10) ^ uVar14;
    uVar13 = (uVar13 << 0x10 | uVar16 >> 0x10) ^ uVar19;
    uVar25 = uVar4 + uVar14 + (uint)CARRY4(uVar5,uVar19);
    uVar16 = uVar13 + uVar28;
    uVar23 = uVar22 + uVar23 + uVar20 + (uint)CARRY4(uVar13,uVar28);
    uVar14 = (uVar13 << 0x15 | uVar22 >> 0xb) ^ uVar16;
    uVar18 = (uVar4 << 0x11 | uVar5 >> 0xf) ^ uVar25;
    uVar20 = (uVar22 << 0x15 | uVar13 >> 0xb) ^ uVar23;
    uVar13 = uVar14 + uVar25;
    uVar4 = (uVar5 << 0x11 | uVar4 >> 0xf) ^ uVar5 + uVar19;
    uVar22 = uVar20 + uVar5 + uVar19 + (uint)CARRY4(uVar14,uVar25);
    uVar5 = (uVar4 << 0xd | uVar18 >> 0x13) ^ uVar4 + uVar16;
    uVar19 = (uVar18 << 0xd | uVar4 >> 0x13) ^ uVar18 + uVar23 + (uint)CARRY4(uVar4,uVar16);
    uVar16 = uVar19 + uVar22 + (uint)CARRY4(uVar5,uVar13);
    uVar22 = (uVar20 << 0x10 | uVar14 >> 0x10) ^ uVar22;
    uVar4 = (uVar14 << 0x10 | uVar20 >> 0x10) ^ uVar13;
    uVar14 = (uVar22 << 0x15 | uVar4 >> 0xb) ^ (uVar19 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar13 ^
             uVar16;
    uVar13 = (uVar4 << 0x15 | uVar22 >> 0xb) ^ (uVar5 << 0x11 | uVar19 >> 0xf) ^ uVar16 ^
             uVar5 + uVar13;
    uVar5 = param_1[7] & 0x3f;
    uVar4 = uVar13 >> uVar5 | uVar14 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = uVar14 >> (uVar5 - 0x20 & 0xff);
    }
    uVar5 = 0;
    if (param_1[7] != 0x40) {
      uVar5 = uVar4;
    }
    if ((uint)param_1[1] <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,param_1[1],&DAT_0188428c);
    }
    iVar21 = *param_1;
    iVar6 = FUN_0106fc6c();
    iVar21 = iVar21 + uVar5 * 8;
    local_44 = iVar6;
    piVar7 = (int *)FUN_01097034(iVar21);
    piVar15 = (int *)(iVar21 + 4);
    iVar8 = iVar12 + 0x20;
    piVar26 = piVar7;
LAB_0109ea84:
    uVar4 = piVar26[1];
    uVar5 = uVar4 - 1;
    if ((uVar4 ^ uVar5) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00384db4,0x36,&DAT_01883ba0);
    }
    dVar32 = (double)VectorUnsignedToFloat(uVar4 & 0xfffffffe,(byte)(in_fpscr >> 0x16) & 3);
    dVar34 = (double)VectorUnsignedToFloat(piVar26[5],(byte)(in_fpscr >> 0x16) & 3);
    dVar33 = (double)VectorUnsignedToFloat(*piVar15,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = in_fpscr;
    if (24999 < (uint)piVar26[5]) {
LAB_0109ebac:
      dVar32 = dVar32 * 0.25;
      uVar9 = 2;
      in_fpscr = uVar4 & 0xfffffff;
      if (dVar33 - dVar34 < dVar32) {
        uVar9 = 1;
      }
      if ((uint)(0.0 < dVar32) * (int)(longlong)dVar32 < 0x80) {
        uVar9 = 2;
      }
      goto LAB_0109ebd8;
    }
    in_fpscr = in_fpscr & 0xfffffff;
    uVar14 = in_fpscr | (uint)(dVar34 / dVar32 < 0.1) << 0x1f;
    uVar4 = uVar14 | (uint)NAN(dVar34 / dVar32) << 0x1c;
    if ((byte)(uVar14 >> 0x1f) == ((byte)(uVar4 >> 0x1c) & 1)) goto LAB_0109ebac;
    uVar9 = 0;
    if (dVar32 * 0.7 < dVar33) goto LAB_0109ebd8;
    uVar4 = uVar5 & uVar13;
    iVar29 = *piVar26;
    bVar17 = true;
    puVar24 = (uint *)(iVar29 + uVar4 * 4);
    uVar14 = 0;
LAB_0109eb08:
    if (!bVar17) {
      if (uVar14 < uVar5) {
        uVar19 = uVar14 + uVar4 + 1;
        uVar14 = uVar14 + 1;
        puVar24 = (uint *)(iVar29 + (uVar19 & uVar5) * 4);
        goto LAB_0109eb2c;
      }
      goto LAB_0109ec20;
    }
LAB_0109eb2c:
    uVar19 = *puVar24;
    if ((uVar19 & 1) != 0) break;
    puVar27 = (undefined4 *)(uVar19 & 0xfffffff8);
    if (puVar27 == (undefined4 *)0x0) goto LAB_0109ec20;
    bVar17 = false;
    if ((puVar27[10] != *(int *)(iVar12 + 0x18)) ||
       (iVar10 = thunk_FUN_016dd50a(puVar27[9],*(undefined4 *)(iVar12 + 0x14)), iVar10 != 0))
    goto LAB_0109eb08;
    if ((uVar19 & 2) != 0) {
LAB_0109ec20:
      uVar4 = 0x80000000;
      local_78 = 0x80000000;
      goto LAB_0109ec34;
    }
    if (*puVar24 != uVar19) {
      ClearExclusiveLocal();
      bVar17 = true;
      goto LAB_0109eb08;
    }
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(puVar24);
    if (bVar2) {
      *puVar24 = (uint)puVar27 | 2;
    }
    bVar17 = true;
    if (!bVar2) goto LAB_0109eb08;
    DataMemoryBarrier(0xb);
    piVar11 = piVar26 + 5;
    do {
      bVar17 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar17);
    *piVar15 = *piVar15 + -1;
    do {
      bVar17 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar17);
    *piVar11 = *piVar11 + 1;
    do {
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = *piVar3 + -1;
    uVar9 = puVar27[5];
    uVar4 = puVar27[6];
    if (uVar4 == 0) {
      local_d8 = 1;
    }
    else {
      local_d8 = thunk_FUN_016d4a50(uVar4);
      if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar4);
      }
    }
    FUN_016dd1aa(local_d8,uVar9,uVar4);
    local_b4 = (int *)*puVar27;
    do {
      iVar12 = *local_b4;
      bVar17 = (bool)hasExclusiveAccess(local_b4);
    } while (!bVar17);
    *local_b4 = iVar12 + 1;
    if (iVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x109ee48);
      (*pcVar1)();
    }
    local_80 = puVar27[2];
    uStack_7c = puVar27[3];
    local_dc = puVar27[1];
    local_88 = local_b4;
    local_84 = local_dc;
    local_78 = uVar4;
    local_74 = local_d8;
    local_70 = uVar4;
    FUN_01071820(iVar6,(uint)puVar27 | 2);
LAB_0109ec34:
    FUN_0109717c(iVar21,iVar6,piVar7,piVar26);
    if ((iVar6 != 0) &&
       (iVar12 = *(int *)(iVar6 + 0x40c) + -1, *(int *)(iVar6 + 0x40c) = iVar12, iVar12 == 0)) {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar6 + 0x420) = 0;
      if (*(int *)(iVar6 + 0x410) == 0) {
        FUN_00fbb698(iVar6);
      }
    }
    if (uVar4 != 0x80000000) {
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(local_d8);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *local_b4;
        bVar17 = (bool)hasExclusiveAccess(local_b4);
      } while (!bVar17);
      *local_b4 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(local_b4,local_dc);
      }
    }
    iVar12 = iVar8;
    if (iVar8 == param_2 + param_3 * 0x20) goto LAB_0109edd4;
  } while( true );
  uVar9 = 0;
LAB_0109ebd8:
  piVar11 = (int *)FUN_01073ab4(piVar26,&local_44,param_1[2],param_1[3],param_1[4],param_1[5],uVar9)
  ;
  if (piVar11 != (int *)0x0) {
    piVar26 = piVar11;
  }
  goto LAB_0109ea84;
}

