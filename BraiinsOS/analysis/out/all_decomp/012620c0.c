// FUN_012620c0 @ 012620c0 size=1524 calls_out=16 calls_in=1
// strings: 

int * FUN_012620c0(uint *param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint unaff_r8;
  uint unaff_r10;
  int iVar19;
  longlong lVar20;
  int local_e8;
  int local_d0 [20];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined1 local_57;
  undefined1 *local_54;
  undefined1 local_50;
  
  lVar20 = FUN_01262790(param_2,param_3,param_4);
  uVar11 = (uint)((ulonglong)lVar20 >> 0x20);
  piVar5 = (int *)lVar20;
  if (piVar5 == (int *)0x0) {
    piVar7 = (int *)0x0;
    goto LAB_012623c8;
  }
  uVar14 = *(uint *)(param_2 + 8);
  if (0x7ffffffe < uVar14) {
    FUN_00fb71b0(&DAT_0188ada8);
    goto LAB_012626bc;
  }
  *(uint *)(param_2 + 8) = uVar14 + 1;
  if (*(int *)(param_2 + 0x1c) != 0) {
    local_7c = *(uint *)(param_2 + 0x34);
    local_78 = *(uint *)(param_2 + 0x38);
    local_68 = *(uint *)(param_2 + 0x20);
    local_64 = *(uint *)(param_2 + 0x24);
    local_74 = *(uint *)(param_2 + 0x3c);
    local_70 = *(uint *)(param_2 + 0x28);
    local_6c = *(uint *)(param_2 + 0x2c);
    local_80 = *(uint *)(param_2 + 0x30);
    FUN_011df94c(&local_80,param_3,param_4);
    uVar6 = local_70 ^ 0xff;
    uVar12 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 | (local_6c >> 0x10 & 0xff) << 8 |
             local_6c >> 0x18;
    lVar3 = (ulonglong)uVar12 * 0xb36a80d2;
    uVar16 = (uint)lVar3;
    uVar12 = (uVar6 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
             local_70 >> 0x18) * -0x4c957f2e +
             uVar12 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
    uVar13 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
             uVar16 >> 0x18) ^
             local_6c * 0x2df45158 +
             uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
    uVar15 = local_64 << 0x18 | (local_64 >> 8 & 0xff) << 0x10 | (local_64 >> 0x10 & 0xff) << 8 |
             local_64 >> 0x18;
    uVar16 = (uVar12 * 0x1000000 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
    lVar3 = (ulonglong)uVar15 * (ulonglong)uVar16;
    uVar6 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
            uVar13 >> 0x18;
    lVar4 = (ulonglong)~local_68 * (ulonglong)uVar6;
    uVar12 = (uint)lVar4;
    uVar6 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
            uVar16 >> 0x18) * ~local_68 + uVar6 * ~local_64 + (int)((ulonglong)lVar4 >> 0x20);
    uVar17 = *(uint *)(param_2 + 0x14);
    unaff_r8 = *(uint *)(param_2 + 0x10);
    uVar13 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18) ^
             uVar13 * uVar15 +
             uVar16 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                       (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
             (int)((ulonglong)lVar3 >> 0x20);
    uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
            uVar6 >> 0x18) ^ (uint)lVar3;
    iVar19 = 0;
    uVar12 = uVar13;
    if ((uVar16 & 0x20) != 0) {
      uVar12 = uVar6;
      uVar6 = uVar13;
    }
    uVar12 = uVar6 << (uVar16 & 0x1f) | (uVar12 >> 1) >> (~uVar16 & 0x1f);
    uVar6 = uVar12 >> 0x19;
    while( true ) {
      unaff_r10 = uVar17 & uVar12;
      uVar16 = *(uint *)(unaff_r8 + unaff_r10);
      uVar12 = uVar16 ^ uVar6 * 0x1010101;
      for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
          uVar12 = uVar12 - 1 & uVar12) {
        uVar13 = unaff_r10 +
                 ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar17;
        piVar7 = (int *)((unaff_r8 - 0x18) + uVar13 * -0x18);
        if ((param_4 == piVar7[1]) &&
           (iVar8 = thunk_FUN_016dd50a(param_3,*piVar7 + 8,param_4), iVar8 == 0)) {
          iVar19 = unaff_r8 + uVar13 * -0x18;
          piVar7 = *(int **)(iVar19 + -8);
          if (piVar7 != (int *)0x0) goto LAB_01262360;
          goto LAB_01262390;
        }
      }
      if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
      iVar19 = iVar19 + 4;
      uVar12 = unaff_r10 + iVar19;
    }
  }
LAB_01262390:
  *(uint *)(param_2 + 8) = uVar14;
  uVar9 = 0;
  puVar18 = &DAT_000f4240;
  if (*param_1 == 2) {
    uVar14 = 0;
    uVar6 = 0;
  }
  else {
    uVar14 = param_1[2];
    unaff_r8 = param_1[3];
    uVar6 = param_1[4];
    if ((*param_1 & 1) != 0) {
      puVar18 = (undefined1 *)param_1[1];
    }
    unaff_r10 = param_1[5];
  }
  if (lVar20 < 0) {
LAB_012623f4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar9,uVar11);
  }
  piVar7 = piVar5 + 2;
  if (uVar11 == 0) {
    local_e8 = 1;
    FUN_016dd1aa(1,piVar7,0);
    uVar12 = 1;
  }
  else {
    local_e8 = thunk_FUN_016d4a50(uVar11);
    if (local_e8 == 0) {
      uVar9 = 1;
      goto LAB_012623f4;
    }
    FUN_016dd1aa(local_e8,piVar7,uVar11);
    uVar12 = thunk_FUN_016d4a50(uVar11);
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar11);
    }
  }
  FUN_016dd52c(uVar12,piVar7,uVar11);
  local_60 = 10;
  local_5f = 0;
  local_57 = 0;
  local_50 = 0;
  local_64 = 0xfa;
  local_5b = 0x1010000;
  local_80 = uVar14 & 1;
  local_7c = unaff_r8;
  local_78 = uVar6 & 1;
  local_74 = unaff_r10;
  local_70 = uVar11;
  local_6c = uVar12;
  local_68 = uVar11;
  local_54 = puVar18;
  FUN_00ff28c0(local_d0,&local_80);
  if (local_d0[0] == 3) {
    FUN_011648d0((uint)local_d0 | 4);
    piVar7 = (int *)0x0;
    if (uVar11 != 0) {
      thunk_FUN_016d3fb4(local_e8);
    }
    goto LAB_01262524;
  }
  FUN_016dd1aa(&local_78,local_d0,0x50);
  local_7c = 1;
  local_80 = 1;
  piVar7 = (int *)thunk_FUN_016d4a50(0x58);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x58);
  }
  FUN_016dd1aa(piVar7,&local_80,0x58);
  if (*(int *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0188adb8);
  }
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  iVar19 = FUN_01225f1c(param_2 + 0x10,param_3,param_4);
  if (iVar19 == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else {
    do {
      iVar8 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_012626bc;
    piVar10 = *(int **)(iVar19 + 8);
    if (piVar10 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011e08bc(*(undefined4 *)(iVar19 + 8));
      }
    }
    *(int **)(iVar19 + 8) = piVar7;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (uVar11 != 0) {
    thunk_FUN_016d3fb4(local_e8);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar19 + -1;
  goto LAB_0126263c;
LAB_01262360:
  do {
    iVar8 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar8 + 1;
  if (iVar8 < 0) {
LAB_012626bc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x12626bc);
    (*pcVar1)();
  }
  piVar7 = *(int **)(iVar19 + -8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
LAB_01262524:
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar19 + -1;
LAB_0126263c:
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar5,uVar11);
    return piVar7;
  }
LAB_012623c8:
  return piVar7;
}

