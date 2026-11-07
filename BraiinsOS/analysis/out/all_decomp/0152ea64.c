// FUN_0152ea64 @ 0152ea64 size=1164 calls_out=10 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0152ea64(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *******pppppppuVar5;
  undefined4 *******pppppppuVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *******pppppppuVar9;
  int iVar10;
  uint uVar11;
  int unaff_r4;
  undefined4 *******pppppppuVar12;
  undefined4 uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 *******pppppppuVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  undefined4 *******pppppppuVar22;
  int iVar23;
  undefined4 *******pppppppuVar24;
  uint *puVar25;
  undefined4 *******local_138;
  undefined4 *******local_134;
  undefined4 *******local_130;
  undefined4 *******local_12c;
  undefined4 *******local_128;
  undefined4 *******local_124;
  undefined4 *******local_120;
  undefined4 *******pppppppuStack_11c;
  undefined4 *******pppppppuStack_118;
  undefined4 *******pppppppuStack_114;
  undefined4 local_110;
  undefined4 *******local_108;
  undefined4 *******local_104;
  undefined4 *******local_100;
  undefined4 *******pppppppuStack_fc;
  undefined4 *******local_f8;
  undefined4 *******local_f4;
  undefined4 *******local_f0;
  undefined4 *******local_e8;
  undefined4 *******pppppppuStack_e4;
  undefined4 *******pppppppuStack_e0;
  undefined4 *******pppppppuStack_dc;
  undefined4 *******local_d8;
  undefined4 *******local_d4;
  undefined4 *******local_d0;
  undefined1 auStack_c8 [8];
  int local_c0;
  undefined1 auStack_78 [8];
  int local_70;
  undefined4 uStack_28;
  
  local_110 = CONCAT13(local_110._3_1_,CONCAT12(local_110._2_1_,(undefined2)local_110));
  piVar14 = (int *)param_2[3];
  if (piVar14[4] == 0) {
    *param_1 = 0xc;
    DataMemoryBarrier(0xb);
    do {
      iVar23 = *piVar14;
      bVar1 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar1);
    *piVar14 = iVar23 + -1;
    if (iVar23 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561728(param_2[3]);
    }
    iVar23 = param_2[2];
    iVar21 = param_2[1];
    if (iVar23 != 0) {
      puVar8 = (undefined4 *)(iVar21 + 4);
      do {
        if ((puVar8[-1] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 3;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    if (*param_2 == 0) {
      return;
    }
    if (iVar21 == 0) {
      return;
    }
    iVar23 = FUN_016d3bc8();
    uVar7 = *(byte *)(iVar21 + -3) & 0x1f;
    if (((*(byte *)(iVar23 + 0x14) & 0x1f) != 0) ||
       (uVar15 = *(uint *)(iVar23 + 0x14) & 0xfffff000, iVar10 = uVar15 - 0x10, uVar15 == 0)) {
      iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar23 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar15 = (uint)(*(byte *)(iVar21 + -3) >> 5);
    iVar20 = *(int *)(iVar23 + 8) + 0x10;
    iVar16 = iVar10 * uVar7 + iVar10 + -4;
    iVar10 = iVar20 + iVar16;
    if (4 < uVar15) {
      if (uVar15 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar15 = *(uint *)(iVar10 + -4);
      if (uVar15 < 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar2)();
      }
      if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar2)();
      }
    }
    if ((uint)(iVar10 - iVar21) < uVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar10 - uVar15) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar20 + iVar16) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar23 + 0x14);
    uVar15 = 1 << uVar7;
    *(undefined1 *)(iVar21 + -3) = 0xff;
    *(undefined2 *)(iVar21 + -2) = 0;
    do {
      uVar17 = *(uint *)(iVar23 + 0x10);
      uVar11 = *(uint *)(iVar23 + 0xc) | uVar17;
      if ((uVar15 & uVar11) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar17 == 0) || (uVar11 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar23,uVar7);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar8 = (undefined4 *)FUN_016d2bc8();
        uVar13 = *puVar8;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar8 = uVar13;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar23 + 0x10) = uVar15 + uVar17;
        return;
      }
      puVar25 = (uint *)(iVar23 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar25);
        uVar11 = *puVar25;
        if (uVar17 != uVar11) goto LAB_016d409c;
        bVar1 = (bool)hasExclusiveAccess(puVar25);
      } while (!bVar1);
      *puVar25 = uVar15 + uVar17;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar17 == uVar11) {
        return;
      }
    } while( true );
  }
  iVar23 = param_2[2];
  local_138 = (undefined4 *******)0x8000002d;
  local_d0 = &local_138;
  pppppppuVar9 = (undefined4 *******)param_2[1];
  local_d4 = pppppppuVar9 + iVar23 * 3;
  local_d8 = pppppppuVar9;
  FUN_015207c4(auStack_c8,&local_d8);
  if (local_c0 == -0x7fffffff) {
    pppppppuVar24 = (undefined4 *******)&DAT_00000008;
    pppppppuVar18 = (undefined4 *******)0x0;
    pppppppuVar4 = local_138;
    pppppppuVar12 = local_134;
    pppppppuVar5 = local_130;
    pppppppuVar6 = local_12c;
    pppppppuVar22 = (undefined4 *******)0x0;
  }
  else {
    pppppppuVar24 = (undefined4 *******)thunk_FUN_016d4a50(0x140);
    if (pppppppuVar24 == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0x140);
    }
    FUN_016dd1aa(pppppppuVar24,auStack_c8,0x50);
    local_108 = (undefined4 *******)&DAT_00000004;
    iVar21 = 0x50;
    local_100 = (undefined4 *******)&DAT_00000001;
    local_f8 = local_d8;
    local_f4 = local_d4;
    local_f0 = local_d0;
    local_104 = pppppppuVar24;
    while (pppppppuVar18 = local_100, FUN_015207c4(auStack_78,&local_f8), pppppppuVar4 = local_138,
          pppppppuVar12 = local_134, pppppppuVar5 = local_130, pppppppuVar6 = local_12c,
          pppppppuVar22 = local_108, local_70 != -0x7fffffff) {
      if (pppppppuVar18 == local_108) {
        FUN_0154e5f8(&local_108,pppppppuVar18,1,8,0x50);
        pppppppuVar24 = local_104;
      }
      FUN_016dd1aa((int)pppppppuVar24 + iVar21,auStack_78,0x50);
      local_100 = (undefined4 *******)((int)pppppppuVar18 + 1);
      iVar21 = iVar21 + 0x50;
    }
  }
  local_138 = pppppppuVar4;
  local_134 = pppppppuVar12;
  local_130 = pppppppuVar5;
  if (pppppppuVar4 != (undefined4 *******)0x8000002d) {
    puVar19 = (undefined1 *)((int)pppppppuVar18 + 1);
    pppppppuVar18 = pppppppuVar24;
    local_108 = local_128;
    local_104 = local_124;
    local_100 = local_120;
    pppppppuStack_fc = pppppppuStack_11c;
    while (puVar19 = puVar19 + -1, puVar19 != (undefined1 *)0x0) {
      FUN_015058d4(pppppppuVar18);
      pppppppuVar18 = pppppppuVar18 + 0x14;
    }
    if (pppppppuVar22 != (undefined4 *******)0x0) {
      thunk_FUN_016d3fb4(pppppppuVar24);
    }
    local_e8 = local_108;
    pppppppuStack_e4 = local_104;
    pppppppuStack_e0 = local_100;
    pppppppuStack_dc = pppppppuStack_fc;
    uVar7 = 4;
    if ((int)pppppppuVar4 < 0) {
      uVar7 = (uint)pppppppuVar4 ^ 0x80000000;
    }
    pppppppuVar22 = (undefined4 *******)&DAT_00000006;
    local_f8 = pppppppuVar4;
    local_f4 = pppppppuVar12;
    local_f0 = pppppppuVar5;
    switch(uVar7) {
    case 0:
    case 1:
    case 0x12:
      break;
    default:
      local_120 = local_108;
      pppppppuStack_11c = local_104;
      pppppppuStack_118 = local_100;
      pppppppuStack_114 = pppppppuStack_fc;
      local_134 = (undefined4 *******)&DAT_00000001;
      local_138 = (undefined4 *******)&DAT_00000001;
      local_130 = pppppppuVar4;
      local_12c = pppppppuVar12;
      local_128 = pppppppuVar5;
      local_124 = pppppppuVar6;
      pppppppuVar24 = (undefined4 *******)thunk_FUN_016d4a50(0x28);
      if (pppppppuVar24 == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x28);
      }
      pppppppuVar18 = (undefined4 *******)&DAT_018a7988;
      pppppppuVar22 = (undefined4 *******)&DAT_00000005;
      *pppppppuVar24 = local_138;
      pppppppuVar24[1] = local_134;
      pppppppuVar24[2] = local_130;
      pppppppuVar24[3] = local_12c;
      pppppppuVar24[4] = local_128;
      pppppppuVar24[5] = local_124;
      pppppppuVar24[6] = local_120;
      pppppppuVar24[7] = pppppppuStack_11c;
      pppppppuVar24[8] = pppppppuStack_118;
      pppppppuVar24[9] = pppppppuStack_114;
      goto joined_r0x0152edfc;
    case 0xb:
      pppppppuVar22 = (undefined4 *******)&SUB_00000002;
      break;
    case 0xd:
      pppppppuVar22 = (undefined4 *******)0x3;
      break;
    case 0xe:
      pppppppuVar22 = (undefined4 *******)0x0;
      break;
    case 0x10:
      pppppppuVar22 = (undefined4 *******)&DAT_00000004;
      break;
    case 0x21:
      pppppppuVar22 = (undefined4 *******)&DAT_00000008;
      break;
    case 0x23:
      pppppppuVar22 = (undefined4 *******)&DAT_00000007;
      break;
    case 0x24:
      pppppppuVar22 = (undefined4 *******)&DAT_00000009;
      break;
    case 0x25:
      pppppppuVar22 = (undefined4 *******)&DAT_0000000a;
      break;
    case 0x27:
      pppppppuVar22 = (undefined4 *******)&DAT_0000000b;
      break;
    case 0x29:
    case 0x2b:
      pppppppuVar22 = (undefined4 *******)&DAT_00000001;
    }
    FUN_0152deb0(&local_f8);
    pppppppuVar18 = (undefined4 *******)&DAT_018a7988;
  }
joined_r0x0152edfc:
  if (iVar23 != 0) {
    pppppppuVar12 = pppppppuVar9 + 1;
    do {
      if (((uint)pppppppuVar12[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*pppppppuVar12);
      }
      pppppppuVar12 = pppppppuVar12 + 3;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
  if (*param_2 != 0) {
    thunk_FUN_016d3fb4(pppppppuVar9);
  }
  if (pppppppuVar4 == (undefined4 *******)0x8000002d) {
    local_120 = (undefined4 *******)param_2[4];
    pppppppuStack_11c = (undefined4 *******)param_2[5];
    pppppppuStack_118 = (undefined4 *******)param_2[6];
    pppppppuStack_114 = (undefined4 *******)param_2[7];
    local_134 = (undefined4 *******)0x1;
    local_138 = (undefined4 *******)0x1;
    local_110 = CONCAT22(CONCAT11(local_110._3_1_,*(undefined1 *)((int)param_2 + 0x22)),
                         (short)param_2[8]);
    local_130 = pppppppuVar22;
    local_12c = pppppppuVar24;
    local_128 = pppppppuVar18;
    local_124 = (undefined4 *******)piVar14;
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x2c);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x2c);
    }
    *puVar8 = local_138;
    puVar8[1] = local_134;
    puVar8[2] = local_130;
    puVar8[3] = local_12c;
    puVar8[4] = local_128;
    puVar8[5] = local_124;
    puVar8[6] = local_120;
    puVar8[7] = pppppppuStack_11c;
    puVar8[8] = pppppppuStack_118;
    puVar8[9] = pppppppuStack_114;
    puVar8[10] = local_110;
    *param_1 = 0xd;
    param_1[1] = puVar8;
    return;
  }
  *param_1 = pppppppuVar22;
  param_1[1] = pppppppuVar24;
  param_1[2] = pppppppuVar18;
  DataMemoryBarrier(0xb);
  do {
    iVar23 = *piVar14;
    bVar1 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar1);
  *piVar14 = iVar23 + -1;
  if (iVar23 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561728(piVar14);
  }
  return;
}

