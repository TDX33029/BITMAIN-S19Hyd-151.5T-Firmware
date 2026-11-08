// FUN_016c8e64 @ 016c8e64 size=204 calls_out=4 calls_in=1
// strings: 

void FUN_016c8e64(undefined4 param_1,uint param_2)

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
  uVar4 = 2000000;
  if (param_2 < 2000000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x401) {
    puVar3 = auStack_1020;
    uVar2 = 0x400;
LAB_016c8ee8:
    FUN_01694f24(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
    if (0x400 < uVar4) {
      FUN_0134aee0(uVar4,puVar3,4,4);
    }
    return;
  }
  uVar1 = uVar4 * 4;
  bVar7 = 0x3ffffffe < uVar2;
  bVar6 = uVar2 == 0x3fffffff;
  uVar5 = 0;
  if (uVar2 < 0x40000000) {
    bVar7 = 0x7ffffffb < uVar1;
    bVar6 = uVar1 == 0x7ffffffc;
  }
  if (!bVar7 || bVar6) {
    uVar5 = 4;
    puVar3 = (undefined1 *)FUN_01298504(uVar1,4);
    uVar2 = uVar4;
    if (puVar3 != (undefined1 *)0x0) goto LAB_016c8ee8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar1);
}

