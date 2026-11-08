// FUN_0072356c @ 0072356c size=204 calls_out=4 calls_in=1
// strings: 

void FUN_0072356c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_1020 [4096];
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 1000000;
  if (param_2 < 1000000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x201) {
    puVar3 = auStack_1020;
    uVar2 = 0x200;
LAB_007235f0:
    FUN_0071c334(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
    if (0x200 < uVar4) {
      FUN_0134c054(uVar4,puVar3,4,8);
    }
    return;
  }
  uVar1 = uVar4 * 8;
  bVar7 = 0x1ffffffe < uVar2;
  bVar6 = uVar2 == 0x1fffffff;
  uVar5 = 0;
  if (uVar2 < 0x20000000) {
    bVar7 = 0x7ffffffb < uVar1;
    bVar6 = uVar1 == 0x7ffffffc;
  }
  if (!bVar7 || bVar6) {
    uVar5 = 4;
    puVar3 = (undefined1 *)FUN_01298504(uVar1,4);
    uVar2 = uVar4;
    if (puVar3 != (undefined1 *)0x0) goto LAB_007235f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar1);
}

