// FUN_0196ad08 @ 0196ad08 size=140 calls_out=4 calls_in=5
// strings: 

void FUN_0196ad08(undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar2 = 0;
  if (param_3 < 0) {
LAB_0196ad20:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    iVar3 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar3 = param_3;
    if (iVar1 == 0) goto LAB_0196ad20;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  local_2c = iVar3;
  local_28 = iVar1;
  local_24 = param_3;
  uVar4 = FUN_016571c0(&local_2c);
  *param_1 = uVar4;
  return;
}

