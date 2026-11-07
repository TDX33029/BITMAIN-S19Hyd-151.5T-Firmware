// FUN_01152138 @ 01152138 size=1440 calls_out=5 calls_in=1
// strings: 

longlong FUN_01152138(int *param_1,uint param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  bool bVar26;
  uint local_28;
  
  uVar11 = param_3[1];
  uVar19 = param_3[2];
  if (uVar11 - uVar19 < (param_2 * 0x6e) / 100 + 0x14) {
    return CONCAT44(uVar11 - uVar19,1);
  }
  if (param_2 < 0xd) {
    FUN_01152704(param_3,param_1,param_2,0);
    return (ulonglong)(param_3[2] - uVar19) << 0x20;
  }
  uVar21 = 1;
  iVar17 = *param_3;
  *(undefined2 *)(param_4 + ((uint)(*param_1 * -0x61c8864f) >> 0x14) * 2) = 0;
  uVar2 = 0;
  uVar4 = uVar19;
LAB_011521e0:
  uVar6 = 0x21;
  uVar3 = uVar21 + 1;
  uVar13 = uVar21;
  do {
    uVar21 = uVar3;
    uVar3 = uVar13 + 4;
    bVar26 = 0xfffffffa < uVar13;
    bVar25 = uVar13 == 0xfffffffb;
    if (uVar13 < 0xfffffffc) {
      bVar26 = param_2 <= uVar3;
      bVar25 = uVar3 == param_2;
    }
    if (bVar26 && !bVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar13,uVar3,param_2,&DAT_01888c74);
    }
    iVar12 = *(int *)((int)param_1 + uVar13);
    puVar9 = (ushort *)(param_4 + ((uint)(iVar12 * -0x61c8864f) >> 0x14) * 2);
    uVar1 = (uint)*puVar9;
    *puVar9 = (ushort)uVar13;
    uVar18 = uVar13 - uVar1;
    if (uVar18 < 0x10000) {
      uVar10 = uVar1 + 4;
      if (param_2 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar10,param_2,&DAT_01888c74);
      }
      if (*(int *)((int)param_1 + uVar1) == iVar12) break;
    }
    uVar3 = uVar6 >> 5;
    uVar6 = uVar6 + 1;
    uVar3 = uVar21 + uVar3;
    uVar13 = uVar21;
    if (param_2 - 0xc < uVar21) {
      uVar21 = uVar2;
      goto LAB_011525f4;
    }
  } while( true );
  if ((uVar2 < uVar13) && (uVar1 != 0)) {
    uVar21 = uVar13;
    if (param_2 <= uVar1 - 1) {
      uVar21 = uVar13 - 1;
      if (uVar21 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1 - 1,param_2,&DAT_01888c24);
      }
LAB_01152680:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar21,param_2,&DAT_01888c14);
    }
    while( true ) {
      uVar13 = uVar21 - 1;
      if (param_2 <= uVar13) {
        uVar21 = uVar21 - 1;
        goto LAB_01152680;
      }
      if (*(char *)((int)param_1 + (uVar21 - 1)) != *(char *)((int)param_1 + (uVar1 - 1))) break;
      uVar1 = uVar1 - 1;
      if ((uVar1 == 0) || (uVar21 = uVar13, uVar13 <= uVar2)) goto LAB_011522c4;
    }
    uVar13 = uVar21;
LAB_011522c4:
    uVar10 = uVar1 + 4;
    uVar3 = uVar13 + 4;
  }
  local_28 = uVar3;
  uVar3 = FUN_01152938(param_1,param_2,&local_28,param_1,param_2,uVar10);
  uVar21 = local_28;
  uVar1 = local_28 - 2;
  uVar6 = local_28 + 2;
  bVar26 = 0xfffffffa < uVar1;
  bVar25 = local_28 == 0xfffffffd;
  if (!bVar26 || bVar25) {
    bVar26 = param_2 <= uVar6;
    bVar25 = uVar6 == param_2;
  }
  if (bVar26 && !bVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,uVar6,param_2,&DAT_01888c74);
  }
  *(short *)(param_4 + ((uint)(*(int *)((int)param_1 + uVar1) * -0x61c8864f) >> 0x14) * 2) =
       (short)uVar1;
  if (uVar11 <= uVar4) {
LAB_01152690:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,uVar11,&DAT_01888c04);
  }
  uVar1 = uVar13 - uVar2;
  bVar16 = 0xf0;
  uVar6 = uVar3;
  if (0xe < uVar3) {
    uVar6 = 0xf;
  }
  if (uVar1 < 0xf) {
    bVar16 = (char)uVar1 * '\x10';
  }
  uVar10 = uVar4 + 1;
  *(byte *)(iVar17 + uVar4) = bVar16 | (byte)uVar6;
  param_3[2] = uVar10;
  if (0xe < uVar1) {
    for (uVar4 = uVar1 - 0xf; 0xfe < uVar4; uVar4 = uVar4 - 0xff) {
      if (uVar11 == uVar10) goto LAB_01152668;
      *(undefined1 *)(iVar17 + uVar10) = 0xff;
      uVar10 = uVar10 + 1;
      param_3[2] = uVar10;
    }
    if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar10,uVar11,&DAT_01888c04);
    }
    *(char *)(iVar17 + uVar10) = (char)uVar4;
    uVar10 = uVar10 + 1;
    param_3[2] = uVar10;
  }
  if ((uVar13 < uVar2) || (param_2 < uVar13)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,uVar13,param_2,&DAT_01888c54);
  }
  uVar6 = uVar10 + uVar1;
  if ((CARRY4(uVar10,uVar1)) || (uVar11 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar10,uVar6,uVar11,&DAT_01888bf4);
  }
  if (uVar13 != uVar2) {
    puVar5 = (undefined4 *)((int)param_1 + uVar2);
    puVar8 = (undefined4 *)(iVar17 + uVar10);
    if (uVar1 < 4) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      if (uVar1 != 1) {
        *(undefined2 *)puVar8 = *(undefined2 *)puVar5;
        *(undefined2 *)((int)puVar8 + (uVar1 - 2)) = *(undefined2 *)((int)puVar5 + (uVar1 - 2));
      }
    }
    else if (uVar1 < 8) {
      *puVar8 = *puVar5;
      *(undefined4 *)((int)puVar8 + (uVar1 - 4)) = *(undefined4 *)((int)puVar5 + (uVar1 - 4));
    }
    else if (uVar1 < 0x11) {
      uVar7 = *puVar5;
      puVar14 = (undefined4 *)((int)puVar5 + (uVar1 - 8));
      uVar22 = *puVar14;
      uVar15 = puVar14[1];
      puVar8[1] = puVar5[1];
      *puVar8 = uVar7;
      puVar8 = (undefined4 *)((int)puVar8 + (uVar1 - 8));
      *puVar8 = uVar22;
      puVar8[1] = uVar15;
    }
    else if (uVar1 < 0x21) {
      uVar23 = *puVar5;
      uVar24 = puVar5[1];
      uVar7 = puVar5[2];
      puVar14 = (undefined4 *)((int)puVar5 + (uVar1 - 0x10));
      uVar20 = *puVar14;
      puVar8[3] = puVar5[3];
      puVar8[2] = uVar7;
      uVar15 = puVar14[1];
      uVar22 = puVar14[2];
      uVar7 = puVar14[3];
      puVar8[1] = uVar24;
      *puVar8 = uVar23;
      puVar8 = (undefined4 *)((int)puVar8 + (uVar1 - 0x10));
      *puVar8 = uVar20;
      puVar8[1] = uVar15;
      puVar8[2] = uVar22;
      puVar8[3] = uVar7;
    }
    else {
      FUN_016dd1aa(puVar8);
    }
  }
  param_3[2] = uVar6;
  uVar4 = uVar6 + 2;
  bVar26 = 0xfffffffc < uVar6;
  bVar25 = uVar6 == 0xfffffffd;
  if (uVar6 < 0xfffffffe) {
    bVar26 = uVar11 <= uVar4;
    bVar25 = uVar4 == uVar11;
  }
  if (bVar26 && !bVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar6,uVar4,uVar11,&DAT_01888bf4);
  }
  param_3[2] = uVar4;
  *(short *)(iVar17 + uVar6) = (short)uVar18;
  if (0xe < uVar3) {
    for (uVar3 = uVar3 - 0xf; 0xfe < uVar3; uVar3 = uVar3 - 0xff) {
      if (uVar11 == uVar4) {
LAB_01152668:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar11,uVar11,&DAT_01888c04);
      }
      *(undefined1 *)(iVar17 + uVar4) = 0xff;
      uVar4 = uVar4 + 1;
      param_3[2] = uVar4;
    }
    if (uVar11 <= uVar4) goto LAB_01152690;
    *(char *)(iVar17 + uVar4) = (char)uVar3;
    uVar4 = uVar4 + 1;
    param_3[2] = uVar4;
  }
  uVar2 = uVar21;
  if (param_2 - 0xc < uVar21) {
LAB_011525f4:
    FUN_01152704(param_3,param_1,param_2,uVar21);
    return (ulonglong)(param_3[2] - uVar19) << 0x20;
  }
  goto LAB_011521e0;
}

