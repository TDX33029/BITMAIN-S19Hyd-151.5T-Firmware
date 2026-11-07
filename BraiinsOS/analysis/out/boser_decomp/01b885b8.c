// FUN_01b885b8 @ 01b885b8 size=1124 calls_out=5 calls_in=2
// strings: 

int * FUN_01b885b8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
                  int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                  undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  uVar9 = *(undefined4 *)(param_2 + 0x14);
  iVar1 = FUN_01b884c8(param_2);
  local_30 = 0x23;
  uVar2 = FUN_01b82fe4(param_9,&local_30,uVar8,param_3,param_10,param_11);
  *(undefined4 *)(param_5 + 0xddc) = *(undefined4 *)(param_4 + 0xddc);
  iVar3 = FUN_01b8d6d4(param_5 + 0xddc,param_9,local_30,uVar2,param_3,9,param_4 + 0x8b0,
                       &DAT_005628ee,6,1,param_8);
  uVar4 = FUN_01b8d888(param_6,param_7 - param_6,param_5 + 0x8b0,9,iVar3,param_9,local_30,uVar8,
                       param_3,&DAT_005628ee,6,0x23,param_4 + 0x8b0,0x524,param_10,param_11);
  if (0xffffff88 < uVar4) {
    *param_1 = iVar3;
    param_1[3] = uVar4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    goto LAB_01b88750;
  }
  uVar11 = uVar4;
  if (iVar3 != 2) {
    uVar11 = 0;
  }
  iVar10 = param_6 + uVar4;
  local_30 = 0x1f;
  uVar2 = FUN_01b82fe4(param_9,&local_30,uVar7,param_3,param_10,param_11);
  *(undefined4 *)(param_5 + 0xdd4) = *(undefined4 *)(param_4 + 0xdd4);
  iVar5 = FUN_01b8d6d4(param_5 + 0xdd4,param_9,local_30,uVar2,param_3,8,param_4,&DAT_00562814,5,
                       local_30 < 0x1d,param_8);
  uVar4 = FUN_01b8d888(iVar10,param_7 - iVar10,param_5,8,iVar5,param_9,local_30,uVar7,param_3,
                       &DAT_00562814,5,0x1c,param_4,0x304,param_10,param_11);
  if (uVar4 < 0xffffff89) {
    local_30 = 0x34;
    iVar10 = iVar10 + uVar4;
    if (iVar5 == 2) {
      uVar11 = uVar4;
    }
    uVar2 = FUN_01b82fe4(param_9,&local_30,uVar9,param_3,param_10,param_11);
    *(undefined4 *)(param_5 + 0xdd8) = *(undefined4 *)(param_4 + 0xdd8);
    iVar6 = FUN_01b8d6d4(param_5 + 0xdd8,param_9,local_30,uVar2,param_3,9,param_4 + 0x304,
                         &DAT_0056284e,6,1,param_8);
    uVar4 = FUN_01b8d888(iVar10,param_7 - iVar10,param_5 + 0x304,9,iVar6,param_9,local_30,uVar9,
                         param_3,&DAT_0056284e,6,0x34,param_4 + 0x304,0x5ac,param_10,param_11);
    if (0xffffff88 < uVar4) {
      *param_1 = iVar3;
      param_1[1] = iVar5;
      param_1[2] = iVar6;
      goto LAB_01b888a0;
    }
    *param_1 = iVar3;
    if (iVar6 == 2) {
      uVar11 = uVar4;
    }
    param_1[1] = iVar5;
    param_1[2] = iVar6;
    param_1[3] = (iVar10 + uVar4) - param_6;
  }
  else {
    *param_1 = iVar3;
    param_1[1] = iVar5;
    param_1[2] = 0;
LAB_01b888a0:
    param_1[3] = uVar4;
  }
  param_1[4] = uVar11;
LAB_01b88750:
  param_1[5] = iVar1;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return param_1;
}

