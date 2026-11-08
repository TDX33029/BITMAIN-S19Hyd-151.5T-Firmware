// FUN_016f00bc @ 016f00bc size=424 calls_out=8 calls_in=1
// strings: 

void FUN_016f00bc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_68 [6];
  int local_50;
  int local_4c;
  int local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar4 = *param_2;
  iVar7 = param_2[1];
  local_50 = CONCAT31(local_50._1_3_,1);
  local_44 = 0;
  local_4c = 0;
  local_68[3] = 0;
  local_68[5] = 10;
  local_68[0] = 10;
  uVar6 = 0xffffffff;
  local_68[1] = iVar4;
  local_68[2] = iVar7;
  local_68[4] = iVar7;
  local_48 = iVar7;
  do {
    uVar5 = uVar6;
    iVar1 = FUN_016f0278(local_68);
    uVar6 = uVar5 + 1;
  } while (iVar1 != 0);
  if ((iVar7 != 0) && (*(char *)(iVar4 + iVar7 + -1) == '\n')) {
    uVar6 = uVar5 + 2;
  }
  iVar1 = 0;
  if (1 < uVar6) {
    iVar2 = FUN_012fc81c(uVar6,local_68);
    iVar1 = 10 - iVar2;
    if (iVar2 == 10) {
      iVar8 = 1;
      iVar9 = 0;
    }
    else {
      iVar8 = FUN_01298504(iVar1,1);
      iVar9 = iVar1;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,iVar1);
      }
    }
    FUN_01bed4e2(iVar8,(int)local_68 + iVar2,iVar1);
    FUN_0134bd64(iVar9,iVar8);
  }
  local_38 = 0;
  local_3c = 4;
  local_40 = 0;
  FUN_016e35cc(local_68,&local_40,uVar6);
  puVar3 = (undefined4 *)param_2[3];
  local_68[5] = 0;
  local_68[4] = 4;
  local_68[3] = 0;
  local_40 = *puVar3;
  local_3c = puVar3[1];
  local_38 = puVar3[2];
  uStack_34 = puVar3[3];
  uStack_30 = puVar3[4];
  uStack_2c = puVar3[5];
  local_50 = iVar4;
  local_4c = iVar7;
  local_48 = iVar1;
  FUN_016f0478(local_68,&local_40);
  puVar3 = (undefined4 *)param_2[4];
  if (puVar3 != (undefined4 *)0x0) {
    local_40 = *puVar3;
    local_3c = puVar3[1];
    local_38 = puVar3[2];
    uStack_34 = puVar3[3];
    uStack_30 = puVar3[4];
    uStack_2c = puVar3[5];
    FUN_016f0478(local_68,&local_40);
  }
  *param_1 = local_68[0];
  param_1[1] = local_68[1];
  param_1[2] = local_68[2];
  param_1[3] = local_68[3];
  param_1[4] = local_68[4];
  param_1[5] = local_68[5];
  param_1[6] = local_50;
  param_1[7] = local_4c;
  param_1[8] = local_48;
  return;
}

