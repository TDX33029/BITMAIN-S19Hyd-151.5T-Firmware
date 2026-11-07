// FUN_0179c17c @ 0179c17c size=1152 calls_out=5 calls_in=3
// strings: 

int * FUN_0179c17c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
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
  int iVar9;
  undefined4 uVar10;
  uint local_3c;
  uint local_30;
  int local_2c;
  
  uVar10 = *(undefined4 *)(param_2 + 0x10);
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  local_2c = DAT_018ddaf8;
  uVar8 = *(undefined4 *)(param_2 + 0x14);
  iVar1 = FUN_0179c020(param_2);
  local_30 = 0x23;
  uVar2 = FUN_01794dfc(param_9,&local_30,uVar10,param_3,param_10,param_11);
  *(undefined4 *)(param_5 + 0xddc) = *(undefined4 *)(param_4 + 0xddc);
  iVar3 = FUN_017a2eac(param_5 + 0xddc,param_9,local_30,uVar2,param_3,9,param_4 + 0x8b0,
                       &DAT_004510dc,6,1,param_8);
  uVar4 = FUN_017a30e8(param_6,param_7 - param_6,param_5 + 0x8b0,9,iVar3,param_9,local_30,uVar10,
                       param_3,&DAT_004510dc,6,0x23,param_4 + 0x8b0,0x524,param_10,param_11);
  if (uVar4 < 0xffffff89) {
    local_3c = uVar4;
    if (iVar3 != 2) {
      local_3c = 0;
    }
    local_30 = 0x1f;
    iVar9 = param_6 + uVar4;
    uVar2 = FUN_01794dfc(param_9,&local_30,uVar7,param_3,param_10,param_11);
    *(undefined4 *)(param_5 + 0xdd4) = *(undefined4 *)(param_4 + 0xdd4);
    iVar5 = FUN_017a2eac(param_5 + 0xdd4,param_9,local_30,uVar2,param_3,8,param_4,&DAT_00450ffc,5,
                         local_30 < 0x1d,param_8);
    uVar4 = FUN_017a30e8(iVar9,param_7 - iVar9,param_5,8,iVar5,param_9,local_30,uVar7,param_3,
                         &DAT_00450ffc,5,0x1c,param_4,0x304,param_10,param_11);
    if (uVar4 < 0xffffff89) {
      if (iVar5 == 2) {
        local_3c = uVar4;
      }
      iVar9 = iVar9 + uVar4;
      local_30 = 0x34;
      uVar2 = FUN_01794dfc(param_9,&local_30,uVar8,param_3,param_10,param_11);
      *(undefined4 *)(param_5 + 0xdd8) = *(undefined4 *)(param_4 + 0xdd8);
      iVar6 = FUN_017a2eac(param_5 + 0xdd8,param_9,local_30,uVar2,param_3,9,param_4 + 0x304,
                           &DAT_00451038,6,1,param_8);
      uVar4 = FUN_017a30e8(iVar9,param_7 - iVar9,param_5 + 0x304,9,iVar6,param_9,local_30,uVar8,
                           param_3,&DAT_00451038,6,0x34,param_4 + 0x304,0x5ac,param_10,param_11);
      *param_1 = iVar3;
      param_1[1] = iVar5;
      if (uVar4 < 0xffffff89) {
        param_1[5] = iVar1;
        if (iVar6 == 2) {
          local_3c = uVar4;
        }
        param_1[2] = iVar6;
        param_1[3] = (iVar9 + uVar4) - param_6;
        param_1[4] = local_3c;
        goto LAB_0179c560;
      }
      param_1[2] = iVar6;
    }
    else {
      *param_1 = iVar3;
      param_1[1] = iVar5;
      param_1[2] = 0;
    }
    param_1[4] = local_3c;
    param_1[3] = uVar4;
    param_1[5] = iVar1;
  }
  else {
    *param_1 = iVar3;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = uVar4;
    param_1[4] = 0;
    param_1[5] = iVar1;
  }
LAB_0179c560:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return param_1;
}

