// FUN_0003fb88 @ 0003fb88  size=1024  callers=2
// program: bmminer


void FUN_0003fb88(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long param3;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int local_860;
  char *local_844;
  int local_838;
  int local_834;
  int local_830;
  int local_82c;
  char local_828 [16];
  uint local_818;
  undefined2 uStack_814;
  undefined1 local_812;
  
  if ((DAT_0050748c == (int *)0x0) || (DAT_0050748c[1] == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_828,"Handle is NULL.\n",0x10);
      local_818 = local_818 & 0xffffff00;
      FUN_00032218(3,local_828,0);
      return;
    }
  }
  else {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_828,"Pattern test sta",0x10);
      local_818._0_1_ = 'r';
      local_818._1_1_ = 't';
      local_818._2_1_ = '.';
      local_818._3_1_ = '.';
      uStack_814 = 0xa2e;
      local_812 = 0;
      FUN_00032218(3,local_828,0);
    }
    local_844 = local_828;
    FUN_00034828(&local_838);
    FUN_0003ebd8();
    uVar1 = FUN_0004ac18();
    FUN_0004ac38(uVar1 | 0x10000);
    iVar10 = *DAT_0050748c;
    DAT_0050748c[0x10] = 1;
    if (iVar10 == 0xa1) {
      FUN_0003dc58(param_1);
    }
    else {
      FUN_0003dd0c();
    }
    iVar10 = 0;
    do {
      iVar2 = FUN_000201d8(iVar10);
      if ((iVar2 != 0) && (DAT_0050748c[iVar10 + 2] == 1)) {
        iVar2 = 3;
        do {
          iVar3 = FUN_0003e8a0(iVar10);
          if (iVar3 != 0) break;
          usleep(100000);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 4);
    iVar2 = 0;
    DAT_0050748c[0x10] = 0;
    iVar10 = FUN_0003e510();
    do {
      iVar3 = FUN_000201d8(iVar2);
      if ((iVar3 != 0) && (DAT_0050748c[iVar2 + 2] == 1)) {
        iVar3 = FUN_0002002c();
        if (iVar3 != 0) {
          local_860 = 0;
          do {
            uVar4 = FUN_0002003c();
            iVar5 = FUN_00067190(local_860,uVar4);
            iVar6 = FUN_0002006c();
            if (iVar6 != 0) {
              iVar13 = 0;
              iVar14 = iVar10 + (iVar5 + iVar2 * 0x40) * 4;
              piVar15 = (int *)(iVar10 + 0x408ffc + (local_860 + iVar2 * 0x100) * 0x1000);
              do {
                iVar7 = FUN_0002008c();
                iVar8 = FUN_0002008c();
                iVar8 = iVar13 * iVar8;
                iVar13 = iVar13 + 1;
                uVar4 = FUN_0002006c();
                iVar8 = FUN_00067190(iVar8,uVar4);
                piVar15 = piVar15 + 1;
                iVar9 = *piVar15;
                iVar7 = iVar10 + (iVar8 + iVar5 * iVar7 + iVar2 * 0x40) * 4;
                piVar11 = (int *)(iVar10 + (local_860 * 9 + iVar2 * 0x900 + iVar9) * 4 + 0x400000);
                *(int *)(&DAT_0080a010 + iVar7) = *(int *)(&DAT_0080a010 + iVar7) + iVar9;
                *(int *)(&DAT_0080a410 + iVar14) = *(int *)(&DAT_0080a410 + iVar14) + iVar9;
                *piVar11 = *piVar11 + 1;
              } while (iVar6 != iVar13);
            }
            local_860 = local_860 + 1;
          } while (iVar3 != local_860);
        }
        iVar3 = FUN_0002002c();
        if (iVar3 != 0) {
          piVar15 = (int *)(iVar10 + 0x400000 + iVar2 * 0x2400);
          piVar11 = piVar15 + iVar3 * 9;
          do {
            piVar12 = piVar15;
            do {
              iVar3 = *piVar12;
              piVar16 = piVar12 + 1;
              piVar12 = piVar12 + 1;
              *piVar12 = *piVar16 + iVar3;
            } while (piVar12 != piVar15 + 8);
            piVar15 = piVar15 + 9;
          } while (piVar15 != piVar11);
        }
        uVar4 = FUN_0003de88(iVar2,iVar10);
        *(undefined4 *)(&DAT_0080a894 + iVar10 + iVar2 * 4) = uVar4;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    FUN_00034828(&local_830);
    param3 = local_830 - local_838;
    if (local_82c - local_834 < 0) {
      param3 = param3 + -1;
    }
    if (3 < DAT_00087bbc) {
      snprintf(local_844,0x800,"Pattern test done, time cost %lds\n",param3);
      FUN_00032218(3,local_844,0);
      return;
    }
  }
  return;
}

