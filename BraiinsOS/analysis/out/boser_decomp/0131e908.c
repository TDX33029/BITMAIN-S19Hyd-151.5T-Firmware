// FUN_0131e908 @ 0131e908 size=344 calls_out=2 calls_in=2
// strings: 

void FUN_0131e908(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = param_3 / 0xc;
  uVar2 = param_3 / 3;
  if (0xb < param_3) {
    uVar5 = 0;
    iVar6 = param_2;
    iVar7 = param_4;
    do {
      iVar3 = 0;
      iVar4 = iVar7;
      do {
        FUN_0131eb08(param_1,iVar6 + iVar3,3,iVar4,4);
        iVar3 = iVar3 + 3;
        iVar4 = iVar4 + 4;
      } while (iVar3 != 0xc);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0xc;
      iVar7 = iVar7 + 0x10;
    } while (uVar5 != uVar1);
  }
  uVar5 = uVar2 & 0x3ffffffc;
  if (uVar5 != uVar2) {
    iVar7 = param_4 + uVar1 * 0x10;
    iVar6 = param_2 + uVar1 * 0xc;
    do {
      FUN_0131eb08(param_1,iVar6,3,iVar7,4);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 3;
      iVar7 = iVar7 + 4;
    } while (uVar5 < uVar2);
  }
  uVar1 = uVar2 * 3;
  if (param_3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,param_3,param_3,&DAT_01ce4da0);
  }
  if (param_5 < uVar2 << 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2 * 4,param_5,param_5,&DAT_01ce4db0);
  }
  FUN_0131eb08(param_1,param_2 + uVar1,param_3 % 3,param_4 + uVar2 * 4);
  return;
}

