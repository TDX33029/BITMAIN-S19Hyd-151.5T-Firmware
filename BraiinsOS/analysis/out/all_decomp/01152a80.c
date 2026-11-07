// FUN_01152a80 @ 01152a80 size=1372 calls_out=5 calls_in=1
// strings: 

longlong FUN_01152a80(int *param_1,uint param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  bool bVar24;
  bool bVar25;
  uint local_28;
  
  uVar20 = param_3[2];
  uVar6 = param_3[1];
  if (uVar6 - uVar20 < (param_2 * 0x6e) / 100 + 0x14) {
    return CONCAT44(uVar6 - uVar20,1);
  }
  uVar13 = 1;
  iVar9 = *param_3;
  *(undefined4 *)(param_4 + ((uint)(*param_1 * -0x61c8864f) >> 0x14) * 4) = 0;
  uVar2 = 0;
  uVar4 = uVar20;
LAB_01152b1c:
  uVar10 = 0x21;
  uVar3 = uVar13 + 1;
  uVar15 = uVar13;
  do {
    uVar13 = uVar3;
    uVar3 = uVar15 + 4;
    if (param_2 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar15,uVar3,param_2,&DAT_01888c74);
    }
    iVar14 = *(int *)((int)param_1 + uVar15);
    uVar19 = (uint)(iVar14 * -0x61c8864f) >> 0x14;
    uVar1 = *(uint *)(param_4 + uVar19 * 4);
    *(uint *)(param_4 + uVar19 * 4) = uVar15;
    uVar19 = uVar15 - uVar1;
    if (uVar19 < 0x10000) {
      uVar7 = uVar1 + 4;
      bVar25 = 0xfffffffa < uVar1;
      bVar24 = uVar1 == 0xfffffffb;
      if (uVar1 < 0xfffffffc) {
        bVar25 = param_2 <= uVar7;
        bVar24 = uVar7 == param_2;
      }
      if (bVar25 && !bVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar7,param_2,&DAT_01888c74);
      }
      if (*(int *)((int)param_1 + uVar1) == iVar14) break;
    }
    uVar3 = uVar10 >> 5;
    uVar10 = uVar10 + 1;
    uVar3 = uVar13 + uVar3;
    uVar15 = uVar13;
    if (param_2 - 0xc < uVar13) {
      uVar13 = uVar2;
      goto LAB_01152efc;
    }
  } while( true );
  if ((uVar2 < uVar15) && (uVar1 != 0)) {
    if (param_2 <= uVar1 - 1) {
      uVar13 = uVar15 - 1;
      if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1 - 1,param_2,&DAT_01888c24);
      }
LAB_01152fb4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar13,param_2,&DAT_01888c14);
    }
    do {
      uVar13 = uVar15 - 1;
      if (param_2 <= uVar13) goto LAB_01152fb4;
      if (*(char *)((int)param_1 + (uVar15 - 1)) != *(char *)((int)param_1 + (uVar1 - 1))) break;
      bVar24 = uVar1 != 0;
      uVar1 = uVar1 - 1;
      uVar15 = uVar15 - 1;
      if (uVar1 != 0) {
        bVar24 = uVar2 <= uVar13;
      }
    } while (bVar24 && (uVar1 != 0 && uVar13 != uVar2));
    uVar7 = uVar1 + 4;
    uVar3 = uVar15 + 4;
  }
  local_28 = uVar3;
  uVar3 = FUN_01152938(param_1,param_2,&local_28,param_1,param_2,uVar7);
  uVar13 = local_28;
  uVar1 = local_28 - 2;
  uVar10 = local_28 + 2;
  bVar25 = 0xfffffffa < uVar1;
  bVar24 = local_28 == 0xfffffffd;
  if (!bVar25 || bVar24) {
    bVar25 = param_2 <= uVar10;
    bVar24 = uVar10 == param_2;
  }
  if (bVar25 && !bVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,uVar10,param_2,&DAT_01888c74);
  }
  *(uint *)(param_4 + ((uint)(*(int *)((int)param_1 + uVar1) * -0x61c8864f) >> 0x14) * 4) = uVar1;
  if (uVar6 <= uVar4) {
LAB_01152f80:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,uVar6,&DAT_01888c04);
  }
  bVar8 = 0xf0;
  uVar10 = uVar4 + 1;
  uVar7 = uVar15 - uVar2;
  uVar1 = uVar3;
  if (0xe < uVar3) {
    uVar1 = 0xf;
  }
  if (uVar7 < 0xf) {
    bVar8 = (char)uVar7 * '\x10';
  }
  *(byte *)(iVar9 + uVar4) = bVar8 | (byte)uVar1;
  param_3[2] = uVar10;
  if (0xe < uVar7) {
    for (uVar4 = uVar7 - 0xf; 0xfe < uVar4; uVar4 = uVar4 - 0xff) {
      if (uVar6 == uVar10) goto LAB_01152f6c;
      *(undefined1 *)(iVar9 + uVar10) = 0xff;
      uVar10 = uVar10 + 1;
      param_3[2] = uVar10;
    }
    if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar10,uVar6,&DAT_01888c04);
    }
    *(char *)(iVar9 + uVar10) = (char)uVar4;
    uVar10 = uVar10 + 1;
    param_3[2] = uVar10;
  }
  if ((uVar15 < uVar2) || (param_2 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,uVar15,param_2,&DAT_01888c54);
  }
  uVar1 = uVar10 + uVar7;
  if ((CARRY4(uVar10,uVar7)) || (uVar6 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar10,uVar1,uVar6,&DAT_01888bf4);
  }
  if (uVar15 != uVar2) {
    puVar5 = (undefined4 *)((int)param_1 + uVar2);
    puVar11 = (undefined4 *)(iVar9 + uVar10);
    if (uVar7 < 4) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
      if (uVar7 != 1) {
        *(undefined2 *)puVar11 = *(undefined2 *)puVar5;
        *(undefined2 *)((int)puVar11 + (uVar7 - 2)) = *(undefined2 *)((int)puVar5 + (uVar7 - 2));
      }
    }
    else if (uVar7 < 8) {
      *puVar11 = *puVar5;
      *(undefined4 *)((int)puVar11 + (uVar7 - 4)) = *(undefined4 *)((int)puVar5 + (uVar7 - 4));
    }
    else if (uVar7 < 0x11) {
      uVar12 = *puVar5;
      puVar16 = (undefined4 *)((int)puVar5 + (uVar7 - 8));
      uVar21 = *puVar16;
      uVar17 = puVar16[1];
      puVar11[1] = puVar5[1];
      *puVar11 = uVar12;
      puVar11 = (undefined4 *)((int)puVar11 + (uVar7 - 8));
      *puVar11 = uVar21;
      puVar11[1] = uVar17;
    }
    else if (uVar7 < 0x21) {
      uVar22 = *puVar5;
      uVar23 = puVar5[1];
      uVar12 = puVar5[2];
      puVar16 = (undefined4 *)((int)puVar5 + (uVar7 - 0x10));
      uVar21 = *puVar16;
      puVar11[3] = puVar5[3];
      puVar11[2] = uVar12;
      uVar17 = puVar16[1];
      uVar18 = puVar16[2];
      uVar12 = puVar16[3];
      puVar11[1] = uVar23;
      *puVar11 = uVar22;
      puVar11 = (undefined4 *)((int)puVar11 + (uVar7 - 0x10));
      *puVar11 = uVar21;
      puVar11[1] = uVar17;
      puVar11[2] = uVar18;
      puVar11[3] = uVar12;
    }
    else {
      FUN_016dd1aa(puVar11);
    }
  }
  param_3[2] = uVar1;
  uVar4 = uVar1 + 2;
  bVar25 = 0xfffffffc < uVar1;
  bVar24 = uVar1 == 0xfffffffd;
  if (uVar1 < 0xfffffffe) {
    bVar25 = uVar6 <= uVar4;
    bVar24 = uVar4 == uVar6;
  }
  if (bVar25 && !bVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,uVar4,uVar6,&DAT_01888bf4);
  }
  param_3[2] = uVar4;
  *(short *)(iVar9 + uVar1) = (short)uVar19;
  if (0xe < uVar3) {
    for (uVar3 = uVar3 - 0xf; 0xfe < uVar3; uVar3 = uVar3 - 0xff) {
      if (uVar6 == uVar4) {
LAB_01152f6c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,uVar6,&DAT_01888c04);
      }
      *(undefined1 *)(iVar9 + uVar4) = 0xff;
      uVar4 = uVar4 + 1;
      param_3[2] = uVar4;
    }
    if (uVar6 <= uVar4) goto LAB_01152f80;
    *(char *)(iVar9 + uVar4) = (char)uVar3;
    uVar4 = uVar4 + 1;
    param_3[2] = uVar4;
  }
  uVar2 = uVar13;
  if (param_2 - 0xc < uVar13) {
LAB_01152efc:
    FUN_01152704(param_3,param_1,param_2,uVar13);
    return (ulonglong)(param_3[2] - uVar20) << 0x20;
  }
  goto LAB_01152b1c;
}

