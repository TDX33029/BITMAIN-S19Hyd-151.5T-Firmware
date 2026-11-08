// FUN_00a52218 @ 00a52218 size=204 calls_out=4 calls_in=1
// strings: 

void FUN_00a52218(undefined4 param_1,uint param_2)

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
  uVar4 = 500000;
  if (param_2 < 500000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x101) {
    puVar3 = auStack_1020;
    uVar2 = 0x100;
LAB_00a5229c:
    FUN_0094253c(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
    if (0x100 < uVar4) {
      FUN_0132b958(uVar4,puVar3,8,0x10);
    }
    return;
  }
  uVar1 = uVar4 * 0x10;
  bVar7 = 0xffffffe < uVar2;
  bVar6 = uVar2 == 0xfffffff;
  uVar5 = 0;
  if (uVar2 < 0x10000000) {
    bVar7 = 0x7ffffff7 < uVar1;
    bVar6 = uVar1 == 0x7ffffff8;
  }
  if (!bVar7 || bVar6) {
    uVar5 = 8;
    puVar3 = (undefined1 *)FUN_01298504(uVar1,8);
    uVar2 = uVar4;
    if (puVar3 != (undefined1 *)0x0) goto LAB_00a5229c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar1);
}

