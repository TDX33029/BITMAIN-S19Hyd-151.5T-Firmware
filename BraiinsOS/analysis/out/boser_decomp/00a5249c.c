// FUN_00a5249c @ 00a5249c size=216 calls_out=4 calls_in=1
// strings: 

void FUN_00a5249c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_1030 [4100];
  uint local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 250000;
  if (param_2 < 250000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 0x81) {
    puVar3 = auStack_1030;
    uVar2 = 0x80;
LAB_00a52538:
    FUN_009410b8(param_1,param_2,puVar3,uVar2,param_2 < 0x41);
    if (0x80 < uVar4) {
      FUN_014945f8(&local_2c);
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
    if (puVar3 != (undefined1 *)0x0) {
      local_24 = 0;
      uVar2 = uVar4;
      local_2c = uVar4;
      local_28 = puVar3;
      goto LAB_00a52538;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar1);
}

