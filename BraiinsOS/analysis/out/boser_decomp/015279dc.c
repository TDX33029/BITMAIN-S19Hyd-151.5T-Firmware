// FUN_015279dc @ 015279dc size=1220 calls_out=11 calls_in=3
// strings: 

void FUN_015279dc(undefined4 *param_1,char *param_2,int *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_50;
  int local_4c;
  int iStack_48;
  int *local_44;
  int local_40;
  int iStack_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*param_2 == '\x04') {
    iVar10 = *(int *)(param_2 + 0xc);
    pcVar6 = *(char **)(param_2 + 8);
    param_2 = pcVar6;
    if (iVar10 == 3) {
      if (((*pcVar6 == '\x03') && (param_2 = pcVar6 + 0x18, pcVar6[0x18] == '\x03')) &&
         (param_2 = pcVar6 + 0x30, pcVar6[0x30] == '\x03')) {
        FUN_006666fc(&local_60,*(undefined4 *)(pcVar6 + 8),*(undefined4 *)(pcVar6 + 0xc));
        FUN_006666fc(&local_30,*(undefined4 *)(pcVar6 + 0x20),*(undefined4 *)(pcVar6 + 0x24));
        FUN_006666fc(&local_50,*(undefined4 *)(pcVar6 + 0x38),*(undefined4 *)(pcVar6 + 0x3c));
        FUN_015281d8(param_1 + 1,&local_60,&local_30,&local_50,param_3,param_4);
        goto LAB_01527d74;
      }
      do {
        iVar10 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_01527eac;
      uVar13 = FUN_015321a0();
LAB_01527d48:
      uVar7 = 0x40;
      goto LAB_01527d50;
    }
    if (iVar10 != 2) {
      local_44 = param_3;
      local_40 = param_4;
      if (iVar10 != 1) {
        if (iVar10 == 0) {
          local_28 = 0;
          local_2c = 4;
          local_30 = 0;
        }
        else {
          iVar8 = FUN_01298504(iVar10 * 0xc,4);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(4,iVar10 * 0xc);
          }
          iVar4 = 0;
          iVar12 = 0;
          local_28 = 0;
          local_30 = iVar10;
          local_2c = iVar8;
          do {
            iVar3 = local_28;
            if (pcVar6[iVar4] != '\x03') goto LAB_01527ca0;
            FUN_006666fc(&local_50,*(undefined4 *)(pcVar6 + iVar4 + 8),
                         *(undefined4 *)(pcVar6 + iVar4 + 0xc));
            if (iVar3 == local_30) {
              FUN_019abd3c(&local_30);
              iVar8 = local_2c;
            }
            piVar5 = (int *)(iVar8 + iVar12);
            local_28 = iVar3 + 1;
            iVar12 = iVar12 + 0xc;
            iVar4 = iVar4 + 0x18;
            *piVar5 = local_50;
            piVar5[1] = local_4c;
            piVar5[2] = iStack_48;
          } while (iVar10 * 0x18 != iVar4);
        }
        local_50 = local_30;
        local_4c = local_2c;
        iStack_48 = local_28;
        piVar5 = (int *)thunk_FUN_01be5118(0x14);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        puVar11 = &DAT_01cfb530;
        *piVar5 = local_50;
        piVar5[1] = local_4c;
        piVar5[2] = iStack_48;
        piVar5[3] = (int)local_44;
        piVar5[4] = local_40;
        goto LAB_01527de0;
      }
      if (*pcVar6 != '\x03') {
        do {
          iVar10 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar10 + 1;
        if (iVar10 < 0) goto LAB_01527eac;
        uVar13 = FUN_015321a0();
        uVar7 = 0x40;
        goto LAB_01527d50;
      }
      iVar10 = *(int *)(pcVar6 + 0xc);
      if (iVar10 < 0) {
        uVar7 = 0;
LAB_01527a3c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar7,iVar10);
      }
      uVar9 = *(undefined4 *)(pcVar6 + 8);
      if (iVar10 == 0) {
        iVar4 = 1;
        iVar8 = 0;
      }
      else {
        uVar7 = 1;
        iVar4 = FUN_01298504(iVar10,1);
        if (iVar4 == 0) goto LAB_01527a3c;
        iVar8 = iVar10;
      }
      FUN_01bed4e2(iVar4,uVar9,iVar10);
      local_50 = iVar8;
      local_4c = iVar4;
      iStack_48 = iVar10;
      piVar5 = (int *)thunk_FUN_01be5118(0x14);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x14);
      }
      puVar11 = &DAT_01cfb590;
      *piVar5 = local_50;
      piVar5[1] = local_4c;
      piVar5[2] = iStack_48;
      piVar5[3] = (int)local_44;
      piVar5[4] = local_40;
      param_1[1] = piVar5;
      goto LAB_01527de4;
    }
    if ((*pcVar6 != '\x03') || (param_2 = pcVar6 + 0x18, pcVar6[0x18] != '\x03')) {
      do {
        iVar10 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_01527eac;
      uVar13 = FUN_015321a0();
      goto LAB_01527d48;
    }
    FUN_006666fc(&local_60,*(undefined4 *)(pcVar6 + 8),*(undefined4 *)(pcVar6 + 0xc));
    FUN_006666fc(&local_30,*(undefined4 *)(pcVar6 + 0x20),*(undefined4 *)(pcVar6 + 0x24));
    local_50 = local_60;
    local_4c = iStack_5c;
    iStack_48 = iStack_58;
    local_44 = (int *)local_30;
    local_40 = local_2c;
    iStack_3c = local_28;
    local_38 = param_3;
    local_34 = param_4;
    piVar5 = (int *)thunk_FUN_01be5118(0x20);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    puVar11 = &DAT_01cfb550;
    *piVar5 = local_50;
    piVar5[1] = local_4c;
    piVar5[2] = iStack_48;
    piVar5[3] = (int)local_44;
    piVar5[4] = local_40;
    piVar5[5] = iStack_3c;
    piVar5[6] = (int)local_38;
    piVar5[7] = local_34;
  }
  else {
    do {
      iVar10 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_01527eac;
    uVar13 = FUN_015321a0();
    uVar7 = 1;
LAB_01527d50:
    puVar11 = (undefined *)FUN_015956e0(param_3,param_4,param_3,param_4,uVar13,param_2,uVar7);
    piVar5 = (int *)0x0;
  }
  param_1[1] = piVar5;
  param_1[2] = puVar11;
LAB_01527d74:
  *param_1 = 1;
  return;
LAB_01527ca0:
  do {
    iVar10 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar10 + 1;
  if (iVar10 < 0) {
LAB_01527eac:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1527eac);
    (*pcVar1)();
  }
  uVar13 = FUN_015321a0();
  puVar11 = (undefined *)FUN_015956e0(param_3,param_4,param_3,param_4,uVar13,pcVar6 + iVar4,0x40);
  FUN_006a41c0(&local_30);
  piVar5 = (int *)0x0;
LAB_01527de0:
  param_1[1] = piVar5;
LAB_01527de4:
  param_1[2] = puVar11;
  goto LAB_01527d74;
}

