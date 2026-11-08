// FUN_01609a7c @ 01609a7c size=104 calls_out=2 calls_in=2
// strings: 

void FUN_01609a7c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = param_2 * 0x10;
  bVar5 = 0xffffffe < param_2;
  bVar4 = param_2 == 0xfffffff;
  uVar3 = 0;
  if (param_2 < 0x10000000) {
    bVar5 = 0x7ffffff7 < uVar1;
    bVar4 = uVar1 == 0x7ffffff8;
  }
  if (!bVar5 || bVar4) {
    if (uVar1 == 0) {
      uVar2 = 8;
      param_2 = 0;
    }
    else {
      uVar3 = 8;
      uVar2 = FUN_01298504(uVar1,8);
      if (uVar2 == 0) goto LAB_01609a94;
    }
    *param_1 = param_2;
    param_1[1] = uVar2;
    param_1[2] = 0;
    return;
  }
LAB_01609a94:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar3,uVar1);
}

