// FUN_01348b98 @ 01348b98 size=184 calls_out=5 calls_in=2
// strings: 

void FUN_01348b98(undefined4 param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4,
                 int param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  uVar1 = FUN_005ef5e8(param_2);
  iVar2 = 0;
  uVar4 = *param_2;
  uVar3 = param_2[1];
  if (param_5 < 0) {
LAB_01348bd0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar2,param_5);
  }
  if (param_5 == 0) {
    local_38 = 1;
  }
  else {
    iVar2 = 1;
    local_38 = FUN_01298504(param_5,1);
    if (local_38 == 0) goto LAB_01348bd0;
    iVar2 = param_5;
  }
  FUN_01bed4e2(local_38,param_4,param_5);
  local_34 = param_5;
  local_3c = iVar2;
  local_30 = uVar4;
  local_2c = uVar3;
  local_28 = param_3;
  FUN_01348748(param_1,uVar1,&local_3c);
  return;
}

