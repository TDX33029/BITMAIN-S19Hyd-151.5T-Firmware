// FUN_0118fb28 @ 0118fb28 size=748 calls_out=8 calls_in=0
// strings: contentEncoding | contentEncoding

void FUN_0118fb28(undefined4 *param_1,int param_2,int *param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  int local_a8;
  undefined8 local_a4;
  int local_9c;
  undefined8 local_98;
  undefined1 *local_88;
  undefined2 local_84;
  undefined1 local_50;
  char *local_4c;
  int *local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  iVar6 = *param_3;
  if (iVar6 != 0) {
    iVar13 = param_3[1];
    do {
      uVar10 = (uint)*(ushort *)(iVar6 + 0x192);
      iVar11 = iVar6 + 0x10c;
      uVar8 = 0xffffffff;
      iVar9 = uVar10 * 0xc;
      do {
        if (iVar9 == 0) goto LAB_0118fbd4;
        uVar7 = *(uint *)(iVar11 + 8);
        uVar5 = uVar7;
        if (0xf < uVar7) {
          uVar5 = 0x10;
        }
        iVar3 = FUN_016dd50a(&DAT_00563e80,*(undefined4 *)(iVar11 + 4),uVar5);
        if (iVar3 == 0) {
          iVar3 = 0x10 - uVar7;
        }
        iVar9 = iVar9 + -0xc;
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + 0xc;
      } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
      uVar10 = uVar8;
      if (0 < iVar3 == iVar3 < 0) goto LAB_0118fc58;
LAB_0118fbd4:
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      iVar6 = *(int *)(iVar6 + uVar10 * 4 + 0x198);
    } while( true );
  }
  if (*param_4 != '\x03') {
    uStack_30 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             "contentEncoding",0xf);
    piVar4 = (int *)uStack_30;
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    if (-1 < iVar6) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar6 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar6 + 1;
      if (-1 < iVar6) {
        local_38 = DAT_018da8b4;
        uStack_34 = DAT_018da8b8;
        local_50 = 6;
        local_84 = 0x4000;
        local_88 = &DAT_80000028;
        local_a8 = 1;
        local_4c = param_4;
        local_a4 = uStack_30;
        iVar6 = thunk_FUN_016d4a50(0x80);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar6,&local_a8,0x80);
        param_1[1] = 0;
        param_1[2] = iVar6;
        *param_1 = 1;
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x118fe10);
    (*pcVar1)();
  }
  uVar12 = *(undefined4 *)(param_4 + 8);
  iVar13 = *(int *)(param_4 + 0xc);
  iVar6 = FUN_01263ec4(*(undefined4 *)(param_2 + 0x48),uVar12,iVar13);
  if (iVar6 == 0) {
LAB_0118fc58:
    *param_1 = 0;
    return;
  }
  uVar14 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                        "contentEncoding",0xf);
  if (iVar13 < 0) {
    uVar12 = 0;
LAB_0118fc4c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar12,iVar13);
  }
  if (iVar13 == 0) {
    iVar9 = 0;
    iVar11 = 1;
  }
  else {
    iVar11 = thunk_FUN_016d4a50(iVar13);
    if (iVar11 == 0) {
      uVar12 = 1;
      goto LAB_0118fc4c;
    }
    iVar9 = iVar13;
  }
  FUN_016dd1aa(iVar11,uVar12,iVar13);
  local_a8 = iVar9;
  local_a4._0_4_ = iVar11;
  local_a4._4_4_ = iVar13;
  local_9c = iVar6;
  local_98 = uVar14;
  piVar4 = (int *)thunk_FUN_016d4a50(0x18);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *piVar4 = local_a8;
  piVar4[1] = (int)local_a4;
  piVar4[2] = local_a4._4_4_;
  piVar4[3] = local_9c;
  *(undefined8 *)(piVar4 + 4) = local_98;
  param_1[1] = piVar4;
  param_1[2] = &DAT_01889a88;
  *param_1 = 1;
  return;
}

