// FUN_01549a20 @ 01549a20 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_01549a20(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_102c [4096];
  uint local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 500000;
  if (param_2 < 500000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x101) {
    puVar3 = auStack_102c;
    uVar2 = 0x100;
LAB_01549abc:
    FUN_01549b1c(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
    if (0x100 < uVar4) {
      FUN_0154a0f0(&local_2c);
    }
    return;
  }
  uVar1 = uVar4 * 0x10;
  bVar7 = 0xffffffe < uVar2;
  bVar6 = uVar2 == 0xfffffff;
  uVar5 = 0;
  if (uVar2 < 0x10000000) {
    bVar7 = 0x7ffffffb < uVar1;
    bVar6 = uVar1 == 0x7ffffffc;
  }
  if (!bVar7 || bVar6) {
    uVar5 = 4;
    puVar3 = (undefined1 *)FUN_01298504(uVar1,4);
    if (puVar3 != (undefined1 *)0x0) {
      local_24 = 0;
      uVar2 = uVar4;
      local_2c = uVar4;
      local_28 = puVar3;
      goto LAB_01549abc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar1);
}

