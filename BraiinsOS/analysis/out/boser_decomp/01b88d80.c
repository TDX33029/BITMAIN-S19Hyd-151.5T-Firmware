// FUN_01b88d80 @ 01b88d80 size=784 calls_out=6 calls_in=1
// strings: 

uint FUN_01b88d80(int param_1,int *param_2,int *param_3,int *param_4,undefined2 *param_5,
                 uint param_6,undefined1 *param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_38 = *param_3;
  iStack_34 = param_3[1];
  iStack_30 = param_3[2];
  if (param_10 != 0) {
    iVar2 = param_2[1] - *param_2 >> 3;
    if (param_2[9] == 1) {
      iVar4 = param_2[10];
    }
    else {
      iVar4 = iVar2;
    }
    psVar7 = (short *)(*param_2 + 4);
    for (iVar8 = 0; iVar2 != iVar8; iVar8 = iVar8 + 1) {
      iVar9 = *(int *)(psVar7 + -2);
      uVar6 = (uint)(*psVar7 == 0);
      if (iVar8 == iVar4) {
        uVar6 = 0;
      }
      if (iVar9 - 1U < 3) {
        iVar3 = uVar6 + (iVar9 - 1U);
        if (iVar3 == 3) {
          iVar1 = *param_3 + -1;
          iVar3 = *param_4 + -1;
        }
        else {
          iVar1 = param_3[iVar3];
          iVar3 = param_4[iVar3];
        }
        if (iVar1 == iVar3) goto LAB_01b88ea8;
        *(int *)(psVar7 + -2) = iVar3 + 3;
        iVar3 = iVar3 + 3;
      }
      else {
LAB_01b88ea8:
        iVar3 = iVar9;
      }
      FUN_01b857dc(param_3,iVar3);
      FUN_01b857dc(param_4,iVar9,uVar6);
      psVar7 = psVar7 + 4;
    }
  }
  if (2 < param_6) {
    uVar6 = FUN_01b88a34(param_2,*(undefined4 *)(param_1 + 0x860),*(undefined4 *)(param_1 + 0x864),
                         param_1 + 0xbc,(int)param_5 + 3,param_6 - 3,param_8,
                         *(undefined4 *)(param_1 + 0x948),*(undefined4 *)(param_1 + 8));
    if (0xffffff88 < uVar6) goto LAB_01b88df4;
    bVar10 = uVar6 == 0x18;
    if (uVar6 < 0x19) {
      bVar10 = *(int *)(param_1 + 0x2ec) == 0;
    }
    if ((bVar10) && (iVar2 = FUN_01b85678(param_7,param_8), iVar2 != 0)) {
      uVar6 = 1;
    }
    if (*(int *)(param_1 + 0x2dc) == 0) {
      if (uVar6 == 0) {
        uVar6 = FUN_01b85618(param_5,param_6,param_7,param_8,param_9);
        if (0xffffff88 < uVar6) goto LAB_01b88df4;
        *param_3 = local_38;
        param_3[1] = iStack_34;
        param_3[2] = iStack_30;
      }
      else if (uVar6 == 1) {
        if (param_6 == 3) goto LAB_01b88df0;
        uVar6 = 4;
        *(undefined1 *)((int)param_5 + 3) = *param_7;
        iVar2 = param_9 + 2 + param_8 * 8;
        *param_5 = (short)iVar2;
        *(char *)(param_5 + 1) = (char)((uint)iVar2 >> 0x10);
        *param_3 = local_38;
        param_3[1] = iStack_34;
        param_3[2] = iStack_30;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x864);
        *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x860);
        *(undefined4 *)(param_1 + 0x860) = uVar5;
        iVar2 = param_9 + 4 + uVar6 * 8;
        uVar6 = uVar6 + 3;
        *param_5 = (short)iVar2;
        *(char *)(param_5 + 1) = (char)((uint)iVar2 >> 0x10);
      }
      if (*(int *)(*(int *)(param_1 + 0x860) + 0x11dc) == 2) {
        *(undefined4 *)(*(int *)(param_1 + 0x860) + 0x11dc) = 1;
      }
      goto LAB_01b88df4;
    }
    uVar6 = FUN_01b8586c(param_1 + 0x2dc,param_2,&local_38);
    if (uVar6 < 0xffffff89) {
      uVar5 = *(undefined4 *)(param_1 + 0x860);
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x864);
      *(undefined4 *)(param_1 + 0x864) = uVar5;
      goto LAB_01b88df4;
    }
  }
LAB_01b88df0:
  uVar6 = 0xffffffba;
LAB_01b88df4:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar6;
}

