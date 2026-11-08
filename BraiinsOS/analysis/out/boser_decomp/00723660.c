// FUN_00723660 @ 00723660 size=204 calls_out=4 calls_in=1
// strings: 

void FUN_00723660(undefined4 param_1,uint param_2)

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
  uVar4 = 250000;
  if (param_2 < 250000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x81) {
    puVar3 = auStack_1020;
    uVar2 = 0x80;
LAB_007236e4:
    FUN_0071b0c8(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
    if (0x80 < uVar4) {
      FUN_0134c054(uVar4,puVar3,8,0x20);
    }
    return;
  }
  uVar1 = uVar4 * 0x20;
  bVar7 = 0x7fffffe < uVar2;
  bVar6 = uVar2 == 0x7ffffff;
  uVar5 = 0;
  if (uVar2 < 0x8000000) {
    bVar7 = 0x7ffffff7 < uVar1;
    bVar6 = uVar1 == 0x7ffffff8;
  }
  if (!bVar7 || bVar6) {
    uVar5 = 8;
    puVar3 = (undefined1 *)FUN_01298504(uVar1,8);
    uVar2 = uVar4;
    if (puVar3 != (undefined1 *)0x0) goto LAB_007236e4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar1);
}

