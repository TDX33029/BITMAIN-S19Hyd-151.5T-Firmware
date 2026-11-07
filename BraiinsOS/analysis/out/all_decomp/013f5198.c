// FUN_013f5198 @ 013f5198 size=412 calls_out=8 calls_in=1
// strings: 

void FUN_013f5198(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  
  iVar6 = *param_2;
  iVar8 = param_2[1];
  local_50 = CONCAT31(local_50._1_3_,1);
  local_44 = 0;
  local_4c = 0;
  local_68[3] = 0;
  local_68[5] = 10;
  local_68[0] = 10;
  uVar5 = 0xffffffff;
  local_68[1] = iVar6;
  local_68[2] = iVar8;
  local_68[4] = iVar8;
  local_48 = iVar8;
  do {
    uVar4 = uVar5;
    iVar1 = FUN_013f40c4(local_68);
    uVar5 = uVar4 + 1;
  } while (iVar1 != 0);
  if ((iVar8 != 0) && (*(char *)(iVar6 + iVar8 + -1) == '\n')) {
    uVar5 = uVar4 + 2;
  }
  iVar1 = 0;
  if (1 < uVar5) {
    iVar2 = FUN_00fabc64(uVar5,local_68);
    iVar7 = (int)local_68 + iVar2;
    iVar1 = 10 - iVar2;
    if (iVar2 == 10) {
      FUN_016dd1aa(1,iVar7,0);
    }
    else {
      iVar2 = thunk_FUN_016d4a50(iVar1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar1);
      }
      FUN_016dd1aa(iVar2,iVar7,iVar1);
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  local_38 = 0;
  local_40 = 0;
  local_3c = 4;
  FUN_013e6808(local_68,&local_40,uVar5);
  local_68[4] = 4;
  puVar3 = (undefined4 *)param_2[3];
  local_68[5] = 0;
  local_68[3] = 0;
  local_40 = *puVar3;
  local_3c = puVar3[1];
  local_38 = puVar3[2];
  uStack_34 = puVar3[3];
  uStack_30 = puVar3[4];
  uStack_2c = puVar3[5];
  local_50 = iVar6;
  local_4c = iVar8;
  local_48 = iVar1;
  FUN_013f3878(local_68,&local_40);
  puVar3 = (undefined4 *)param_2[4];
  if (puVar3 != (undefined4 *)0x0) {
    local_40 = *puVar3;
    local_3c = puVar3[1];
    local_38 = puVar3[2];
    uStack_34 = puVar3[3];
    uStack_30 = puVar3[4];
    uStack_2c = puVar3[5];
    FUN_013f3878(local_68,&local_40);
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

