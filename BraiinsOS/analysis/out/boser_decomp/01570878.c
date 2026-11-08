// FUN_01570878 @ 01570878 size=1160 calls_out=18 calls_in=1
// strings: 

int * FUN_01570878(uint *param_1,uint param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  int local_ec;
  uint local_e4;
  int local_e0;
  uint local_dc;
  uint local_d0;
  undefined1 auStack_cc [76];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined1 auStack_70 [12];
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined1 local_57;
  uint local_54;
  undefined1 local_50;
  
  lVar18 = FUN_01570de0(param_2,param_3,param_4);
  iVar11 = (int)((ulonglong)lVar18 >> 0x20);
  piVar3 = (int *)lVar18;
  if (piVar3 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    uVar17 = *(uint *)(param_2 + 8);
    if (0x7ffffffe < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01cfbd40);
    }
    *(uint *)(param_2 + 8) = uVar17 + 1;
    if (*(int *)(param_2 + 0x1c) != 0) {
      uVar4 = FUN_0155d010(param_2 + 0x20,param_3,param_4);
      uVar15 = uVar4 >> 0x19;
      iVar13 = *(int *)(param_2 + 0x10);
      uVar16 = *(uint *)(param_2 + 0x14);
      local_e0 = 0;
LAB_01570918:
      uVar4 = uVar16 & uVar4;
      uVar12 = *(uint *)(iVar13 + uVar4);
      uVar5 = uVar12 ^ uVar15 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while( true ) {
        if (uVar5 == 0) goto LAB_015709bc;
        uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar16;
        piVar7 = (int *)(iVar13 + -0x18 + uVar6 * -0x18);
        local_e4 = uVar16;
        if ((param_4 == piVar7[1]) &&
           (iVar8 = thunk_FUN_01bed842(param_3,*piVar7 + 8,param_4), iVar8 == 0)) break;
        uVar5 = uVar5 - 1 & uVar5;
      }
      piVar7 = *(int **)(iVar13 + uVar6 * -0x18 + -8);
      if (piVar7 == (int *)0x0) goto LAB_01570a2c;
      do {
        iVar13 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar13 + 1;
      if (iVar13 < 0) goto LAB_01570d08;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      goto LAB_01570b9c;
    }
LAB_01570a2c:
    *(uint *)(param_2 + 8) = uVar17;
    uVar14 = 0;
    uVar17 = 1000000;
    if (*param_1 == 2) {
      uVar4 = 0;
      local_dc = 0;
      uVar15 = param_2;
    }
    else {
      local_dc = param_1[2];
      uVar4 = param_1[4];
      uVar15 = param_1[5];
      if ((*param_1 & 1) != 0) {
        uVar17 = param_1[1];
      }
      local_e4 = param_1[3];
    }
    if (lVar18 < 0) {
LAB_01570a90:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,iVar11);
    }
    if (iVar11 == 0) {
      iVar13 = 1;
      local_ec = 0;
    }
    else {
      uVar14 = 1;
      iVar13 = FUN_01298504(iVar11,1);
      local_ec = iVar11;
      if (iVar13 == 0) goto LAB_01570a90;
    }
    FUN_01bed4e2(iVar13,piVar3 + 2,iVar11);
    FUN_0134bd64(0,1);
    FUN_006666fc(auStack_70,iVar13,iVar11);
    local_57 = 0;
    local_5b = 0x1010000;
    local_60 = 10;
    local_64 = 0xfa;
    local_5f = 0;
    local_78 = uVar4 & 1;
    local_7c = local_e4;
    local_50 = 0;
    local_80 = local_dc & 1;
    local_74 = uVar15;
    local_54 = uVar17;
    FUN_01335298(&local_d0,&local_80);
    if (local_d0 == 3) {
      FUN_0150174c(auStack_cc);
      FUN_019bb7e0(local_ec,iVar13);
      piVar7 = (int *)0x0;
LAB_01570b9c:
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar13 + -1;
    }
    else {
      FUN_01bed4e2(&local_74,auStack_cc,0x4c);
      local_78 = local_d0;
      local_7c = 1;
      local_80 = 1;
      piVar7 = (int *)thunk_FUN_01be5118(0x58);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x58);
      }
      FUN_01bed4e2(piVar7,&local_80,0x58);
      if (*(int *)(param_2 + 8) != 0) {
        FUN_01306fc8(&DAT_01cfbd50);
LAB_01570d08:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1570d08);
        (*pcVar1)();
      }
      *(undefined4 *)(param_2 + 8) = 0xffffffff;
      iVar8 = FUN_01541e48(param_2 + 0x10,param_3,param_4);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        do {
          iVar9 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_01570d08;
        piVar10 = *(int **)(iVar8 + 8);
        if (piVar10 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar10;
            bVar2 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar2);
          *piVar10 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0155da0c(*(undefined4 *)(iVar8 + 8));
          }
        }
        *(int **)(iVar8 + 8) = piVar7;
        iVar8 = *(int *)(param_2 + 8) + 1;
      }
      *(int *)(param_2 + 8) = iVar8;
      FUN_019bb7e0(local_ec,iVar13);
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar13 + -1;
    }
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(piVar3,iVar11);
    }
  }
  return piVar7;
LAB_015709bc:
  if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) goto LAB_01570a2c;
  local_e0 = local_e0 + 4;
  uVar4 = uVar4 + local_e0;
  goto LAB_01570918;
}

