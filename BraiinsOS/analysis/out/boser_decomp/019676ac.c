// FUN_019676ac @ 019676ac size=148 calls_out=5 calls_in=98
// strings: 

void FUN_019676ac(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_24;
  int local_20;
  uint local_1c;
  
  if ((param_2 & 1) == 0) {
    FUN_00664898(&local_24,param_1);
  }
  else {
    uVar1 = param_2 >> 1;
    if (param_2 < 2) {
      iVar2 = 1;
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_01298504(uVar1,1);
      uVar3 = uVar1;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar1);
      }
    }
    FUN_01bed4e2(iVar2,param_1,uVar1);
    local_24 = uVar3;
    local_20 = iVar2;
    local_1c = uVar1;
  }
  FUN_01966564(&local_24);
  return;
}

