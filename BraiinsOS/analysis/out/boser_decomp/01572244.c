// FUN_01572244 @ 01572244 size=1716 calls_out=15 calls_in=1
// strings: 

int * FUN_01572244(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *unaff_r6;
  uint unaff_r8;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_c4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  uint local_a4;
  int *local_88;
  uint local_84;
  uint local_80;
  char local_7c;
  byte local_71;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  uVar17 = FUN_01570de0(param_2,param_3,param_4);
  uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
  piVar4 = (int *)uVar17;
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  uVar16 = *(uint *)(param_2 + 8);
  if (0x7ffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01cfbe30);
  }
  *(uint *)(param_2 + 8) = uVar16 + 1;
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar5 = FUN_0155d010(param_2 + 0x20,param_3,param_4);
    iVar13 = *(int *)(param_2 + 0x10);
    uVar14 = (uVar5 >> 0x19) * 0x1010101;
    uVar12 = *(uint *)(param_2 + 0x14);
    iVar15 = 0;
LAB_015722dc:
    unaff_r6 = (int *)(uVar12 & uVar5);
    uVar11 = *(uint *)(iVar13 + (int)unaff_r6);
    uVar5 = ~(uVar11 ^ uVar14) & 0x80808080 & (uVar11 ^ uVar14) + 0xfefefeff;
    while( true ) {
      if (uVar5 == 0) goto LAB_01572390;
      uVar6 = (int)unaff_r6 +
              ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar12;
      piVar7 = (int *)(iVar13 + -0x18 + uVar6 * -0x18);
      local_c4 = uVar14;
      if ((param_4 == piVar7[1]) &&
         (iVar8 = thunk_FUN_01bed842(param_3,*piVar7 + 8,param_4), iVar8 == 0)) break;
      uVar5 = uVar5 - 1 & uVar5;
    }
    piVar7 = *(int **)(iVar13 + uVar6 * -0x18 + -4);
    unaff_r8 = uVar6 * -3;
    if (piVar7 == (int *)0x0) goto LAB_015723f0;
    do {
      iVar13 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar13 + 1;
    if (iVar13 < 0) goto LAB_015728fc;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
    goto LAB_01572868;
  }
LAB_015723f0:
  *(uint *)(param_2 + 8) = uVar16;
  if (*param_1 == 2) {
    uVar16 = param_1[1];
    unaff_r8 = param_1[2];
    uVar5 = param_1[3];
    local_c4 = param_1[4];
  }
  else {
    uVar5 = 0;
    uVar16 = 0;
  }
  FUN_01679c94(&local_b0,piVar4 + 2,uVar10);
  if ((uVar16 & 1) != 0) {
    if (local_7c != '\x03' && local_7c != '\x02') {
      do {
        iVar13 = *local_88;
        bVar2 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar2);
      *local_88 = iVar13 + 1;
      if (iVar13 < 0) goto LAB_015728fc;
      local_108 = local_84;
      local_10c = local_80;
      unaff_r6 = local_88;
    }
    local_100 = (uint)local_71;
    FUN_0167a2fc(&local_b0);
    local_80 = local_10c;
    local_84 = local_108;
    local_a8 = 1;
    local_104 = uVar5;
    local_a4 = unaff_r8;
    local_88 = unaff_r6;
  }
  uVar16 = local_a4;
  uVar3 = local_a8;
  if ((uVar5 & 1) != 0) {
    if (local_7c != '\x03' && local_7c != '\x02') {
      do {
        iVar13 = *local_88;
        bVar2 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar2);
      *local_88 = iVar13 + 1;
      if (iVar13 < 0) goto LAB_015728fc;
      local_100 = local_84;
      local_104 = local_80;
      unaff_r6 = local_88;
    }
    FUN_0167a2fc(&local_b0);
    local_80 = local_104;
    local_84 = local_100;
    local_ac = local_c4;
    local_b0 = 1;
    local_88 = unaff_r6;
  }
  local_a8 = uVar3;
  local_a4 = uVar16;
  FUN_01679e04(&local_50,&local_b0);
  if (local_50 == 0) {
    if (local_4c != -0x80000000) {
      FUN_019bb7e0(local_4c,local_48);
    }
    FUN_01572b24(&local_b0);
    piVar7 = (int *)0x0;
LAB_01572868:
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar13 + -1;
  }
  else {
    local_34 = local_4c;
    iStack_30 = local_48;
    iStack_2c = iStack_44;
    local_38 = local_50;
    local_3c = 1;
    local_40 = 1;
    piVar7 = (int *)thunk_FUN_01be5118(0x18);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    *piVar7 = local_40;
    piVar7[1] = local_3c;
    piVar7[2] = local_38;
    piVar7[3] = local_34;
    piVar7[4] = iStack_30;
    piVar7[5] = iStack_2c;
    if (*(int *)(param_2 + 8) != 0) {
      FUN_01306fc8(&DAT_01cfbe40);
LAB_015728fc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15728fc);
      (*pcVar1)();
    }
    *(undefined4 *)(param_2 + 8) = 0xffffffff;
    iVar13 = FUN_01541e48(param_2 + 0x10,param_3,param_4);
    if (iVar13 == 0) {
      iVar13 = 0;
    }
    else {
      do {
        iVar15 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar15 + 1;
      if (iVar15 < 0) goto LAB_015728fc;
      piVar9 = *(int **)(iVar13 + 0xc);
      if (piVar9 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar15 + -1;
        if (iVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155d918(*(undefined4 *)(iVar13 + 0xc));
        }
      }
      *(int **)(iVar13 + 0xc) = piVar7;
      iVar13 = *(int *)(param_2 + 8) + 1;
    }
    *(int *)(param_2 + 8) = iVar13;
    FUN_01572b24(&local_b0);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar13 + -1;
  }
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar4,uVar10);
  }
  return piVar7;
LAB_01572390:
  unaff_r8 = uVar14;
  if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) goto LAB_015723f0;
  iVar15 = iVar15 + 4;
  uVar5 = (int)unaff_r6 + iVar15;
  goto LAB_015722dc;
}

