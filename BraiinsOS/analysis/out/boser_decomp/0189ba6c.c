// FUN_0189ba6c @ 0189ba6c size=136 calls_out=4 calls_in=2
// strings: 

void FUN_0189ba6c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  uint local_24;
  int local_20;
  uint local_1c;
  
  uVar1 = param_2 * 4;
  bVar4 = 0x3ffffffe < param_2;
  bVar3 = param_2 == 0x3fffffff;
  uVar2 = 0;
  if (param_2 < 0x40000000) {
    bVar4 = 0x7ffffffb < uVar1;
    bVar3 = uVar1 == 0x7ffffffc;
  }
  if (!bVar4 || bVar3) {
    if (uVar1 == 0) {
      local_20 = 4;
      local_24 = 0;
    }
    else {
      uVar2 = 4;
      local_20 = FUN_01298504(uVar1,4);
      local_24 = param_2;
      if (local_20 == 0) goto LAB_0189ba88;
    }
    FUN_01bed4e2(local_20,param_1,uVar1);
    local_1c = param_2;
    FUN_0189b9a4(&local_24);
    return;
  }
LAB_0189ba88:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar2,uVar1);
}

