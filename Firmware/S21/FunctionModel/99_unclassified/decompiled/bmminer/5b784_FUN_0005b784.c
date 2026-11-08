// FUN_0005b784 @ 0005b784  size=1064  callers=2
// program: bmminer


void FUN_0005b784(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  long param3;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int local_2060;
  int local_205c;
  int *local_2058;
  char *local_2048;
  int local_2038;
  int local_2034;
  int local_2030;
  int local_202c;
  char local_2028 [16];
  uint local_2018;
  undefined2 uStack_2014;
  undefined1 local_2012;
  
  if ((DAT_00944b84 == (int *)0x0) || (DAT_00944b84[1] == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2028,"Handle is NULL.\n",0x10);
      local_2018 = local_2018 & 0xffffff00;
      FUN_0004948c(3,local_2028,0);
      return;
    }
  }
  else {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2028,"Pattern test sta",0x10);
      local_2018._0_1_ = 'r';
      local_2018._1_1_ = 't';
      local_2018._2_1_ = '.';
      local_2018._3_1_ = '.';
      uStack_2014 = 0xa2e;
      local_2012 = 0;
      FUN_0004948c(3,local_2028,0);
    }
    local_2048 = local_2028;
    FUN_0004bd34(&local_2038);
    FUN_0005a65c();
    uVar1 = FUN_0006c30c();
    FUN_0006c338(uVar1 | 0x10000);
    iVar9 = *DAT_00944b84;
    DAT_00944b84[0x10] = 1;
    if (iVar9 == 0xa1) {
      FUN_000596dc(param_1);
    }
    else {
      FUN_00059790();
    }
    iVar9 = 0;
    do {
      iVar2 = FUN_0002a6f0(iVar9);
      if ((iVar2 != 0) && (DAT_00944b84[iVar9 + 2] == 1)) {
        iVar2 = 3;
        do {
          iVar4 = FUN_0005a324(iVar9);
          if (iVar4 != 0) break;
          usleep(100000);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 4);
    local_2060 = 0;
    DAT_00944b84[0x10] = 0;
    iVar9 = FUN_00059f94();
    do {
      iVar2 = FUN_0002a6f0(local_2060);
      if ((iVar2 != 0) && (DAT_00944b84[local_2060 + 2] == 1)) {
        iVar2 = FUN_0002a514();
        if (iVar2 != 0) {
          local_2058 = (int *)(iVar9 + 0x800ffc + local_2060 * 0x1fe000);
          local_205c = 0;
          do {
            uVar3 = FUN_0002a524();
            iVar4 = FUN_000983e0(local_205c,uVar3);
            iVar5 = FUN_0002a554();
            if (iVar5 != 0) {
              iVar12 = 0;
              iVar13 = iVar9 + (iVar4 + local_2060 * 0x40) * 4;
              piVar14 = local_2058;
              do {
                iVar6 = FUN_0002a574();
                iVar7 = FUN_0002a574();
                iVar7 = iVar12 * iVar7;
                iVar12 = iVar12 + 1;
                uVar3 = FUN_0002a554();
                iVar7 = FUN_000983e0(iVar7,uVar3);
                piVar14 = piVar14 + 1;
                iVar8 = *piVar14;
                iVar6 = iVar9 + (iVar7 + iVar4 * iVar6 + local_2060 * 0x40) * 4;
                *(int *)(&DAT_00ffa010 + iVar6) = *(int *)(&DAT_00ffa010 + iVar6) + iVar8;
                piVar10 = (int *)(iVar9 + (local_205c * 9 + local_2060 * 0x900 + iVar8) * 4 +
                                 0x7f8000);
                *(int *)(&DAT_00ffa410 + iVar13) = *(int *)(&DAT_00ffa410 + iVar13) + iVar8;
                *piVar10 = *piVar10 + 1;
              } while (iVar5 != iVar12);
            }
            local_205c = local_205c + 1;
            local_2058 = local_2058 + 0x7f8;
          } while (iVar2 != local_205c);
        }
        iVar2 = FUN_0002a514();
        if (iVar2 != 0) {
          piVar14 = (int *)(iVar9 + 0x7f8000 + local_2060 * 0x2400);
          piVar10 = piVar14 + iVar2 * 9;
          do {
            piVar11 = piVar14;
            do {
              iVar2 = *piVar11;
              piVar15 = piVar11 + 1;
              piVar11 = piVar11 + 1;
              *piVar11 = *piVar15 + iVar2;
            } while (piVar11 != piVar14 + 8);
            piVar14 = piVar14 + 9;
          } while (piVar14 != piVar10);
        }
        uVar3 = FUN_0005990c(local_2060,iVar9);
        *(undefined4 *)(&DAT_00ffa894 + iVar9 + local_2060 * 4) = uVar3;
      }
      local_2060 = local_2060 + 1;
    } while (local_2060 != 4);
    FUN_0004bd34(&local_2030);
    param3 = local_2030 - local_2038;
    if (local_202c - local_2034 < 0) {
      param3 = param3 + -1;
    }
    if (3 < DAT_000be63c) {
      snprintf(local_2048,0x2000,"Pattern test done, time cost %lds\n",param3);
      FUN_0004948c(3,local_2048,0);
      return;
    }
  }
  return;
}

