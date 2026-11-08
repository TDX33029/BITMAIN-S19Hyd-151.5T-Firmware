// FUN_0127dffc @ 0127dffc size=148 calls_out=5 calls_in=3
// strings: 

undefined4 FUN_0127dffc(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar3 = param_1[1];
  iVar4 = param_1[2];
  iVar2 = 0;
  if (iVar4 < 0) {
LAB_0127e018:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar2,iVar4);
  }
  if (iVar4 == 0) {
    local_20 = 1;
  }
  else {
    iVar2 = 1;
    local_20 = FUN_01298504(iVar4,1);
    if (local_20 == 0) goto LAB_0127e018;
    iVar2 = iVar4;
  }
  FUN_01bed4e2(local_20,uVar3,iVar4);
  local_24 = iVar2;
  local_1c = iVar4;
  uVar1 = FUN_01966564(&local_24);
  FUN_0134bd64(*param_1,uVar3);
  return uVar1;
}

