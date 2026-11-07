// FUN_0126520c @ 0126520c size=428 calls_out=7 calls_in=2
// strings: 

void FUN_0126520c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44 [4];
  int local_34;
  int local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  uVar4 = 0;
  if (param_4 < 0) {
LAB_01265224:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,param_4);
  }
  if (param_4 == 0) {
    iVar1 = 1;
    iVar5 = 0;
  }
  else {
    uVar4 = 1;
    iVar1 = FUN_01298504(param_4,1);
    iVar5 = param_4;
    if (iVar1 == 0) goto LAB_01265224;
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  local_50 = iVar5;
  local_4c = iVar1;
  local_48 = param_4;
  iVar2 = FUN_012fc81c(param_2,local_44);
  local_30 = 10 - iVar2;
  if (iVar2 == 10) {
    iVar3 = 1;
    iVar6 = 0;
  }
  else {
    iVar3 = FUN_01298504(local_30,1);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,local_30);
    }
    iVar6 = local_30;
  }
  FUN_01bed4e2(iVar3,(int)local_44 + iVar2,local_30);
  local_28 = &LAB_00632348;
  local_2c = local_44 + 3;
  local_44[3] = iVar6;
  local_34 = iVar3;
  FUN_00664898(local_44,&DAT_005a8e5e,&local_2c);
  FUN_019bb7e0(local_44[3],local_34);
  if ((uint)(iVar5 - param_4) < local_44[2]) {
    FUN_016092cc(&local_50,param_4,local_44[2],1,1);
    param_4 = local_48;
    iVar1 = local_4c;
  }
  else {
  }
  FUN_01bed4e2(iVar1 + param_4,local_44[1],local_44[2]);
  local_48 = param_4 + local_44[2];
  FUN_019bb7e0(local_44[0],local_44[1]);
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  return;
}

