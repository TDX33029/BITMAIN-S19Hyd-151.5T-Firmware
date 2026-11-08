// FUN_016bc164 @ 016bc164 size=552 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_016bc164(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_48;
  uint *local_44;
  code *local_40;
  int *local_3c;
  undefined1 *local_38;
  int *local_34;
  code *local_30;
  uint local_2c;
  int local_28;
  
  pcVar3 = *(code **)(param_3 + 0xc);
  iVar1 = (*pcVar3)(param_2,&DAT_004ce22f,0xf);
  if (iVar1 != 0) {
    return 1;
  }
  iVar11 = *(int *)(param_1 + 0x148);
  iVar9 = *(int *)(param_1 + 0x128);
  iVar10 = *(int *)(param_1 + 300);
  iVar7 = *(int *)(param_1 + 0x144);
  iVar1 = iVar11 * 0x14;
  iVar5 = 0;
  do {
    if (iVar1 == 0) {
      uVar4 = *(uint *)(param_1 + 0x154);
      if (1 < uVar4) {
        iVar1 = (*pcVar3)(param_2,"\n",1);
        if (iVar1 != 0) {
          return 1;
        }
        uVar6 = 0;
        iVar1 = *(int *)(param_1 + 0x150);
        do {
          local_3c = &local_28;
          local_28 = *(int *)(iVar1 + uVar6 * 4);
          local_38 = &LAB_01a6a304;
          local_40 = (code *)&LAB_01a6a304;
          local_44 = &local_2c;
          local_2c = uVar6;
          iVar5 = FUN_012fa178(param_2,param_3,&DAT_004ce23e,&local_44);
          if (iVar5 != 0) {
            return 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar4 != uVar6);
      }
      uVar8 = 1;
      iVar1 = (*pcVar3)(param_2,"\n",1);
      if (iVar1 == 0) {
        local_40 = FUN_016c6858;
        local_44 = (uint *)(param_1 + 8);
        iVar1 = FUN_012fa178(param_2,param_3,&DAT_005a3b66,&local_44);
        if (iVar1 == 0) {
          uVar8 = (*pcVar3)(param_2,")\n",2);
        }
      }
      return uVar8;
    }
    if (iVar11 == iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d097b8);
    }
    local_2c = 0x20;
    if (iVar10 == iVar5) {
      local_2c = 0x3e;
    }
    if (iVar9 == iVar5) {
      local_2c = 0x5e;
    }
    local_30 = FUN_0168c80c;
    local_34 = &local_48;
    local_38 = &LAB_01a6a304;
    local_3c = &local_28;
    local_40 = FUN_012fbb84;
    local_44 = &local_2c;
    local_48 = iVar7;
    local_28 = iVar5;
    iVar2 = FUN_012fa178(param_2,param_3,&DAT_004ce254,&local_44);
    iVar1 = iVar1 + -0x14;
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x14;
  } while (iVar2 == 0);
  return 1;
}

