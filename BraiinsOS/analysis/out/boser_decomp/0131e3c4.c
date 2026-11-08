// FUN_0131e3c4 @ 0131e3c4 size=344 calls_out=2 calls_in=2
// strings: 

void FUN_0131e3c4(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = param_3 / 10;
  uVar2 = param_3 / 5;
  if (9 < param_3) {
    uVar5 = 0;
    iVar6 = param_2;
    iVar7 = param_4;
    do {
      iVar3 = 0;
      iVar4 = iVar7;
      do {
        FUN_0131eba0(param_1,iVar6 + iVar3,5,iVar4,8);
        iVar3 = iVar3 + 5;
        iVar4 = iVar4 + 8;
      } while (iVar3 != 10);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 10;
      iVar7 = iVar7 + 0x10;
    } while (uVar5 != uVar1);
  }
  uVar5 = uVar2 & 0x1ffffffe;
  if (uVar5 != uVar2) {
    iVar7 = param_4 + uVar1 * 0x10;
    iVar6 = param_2 + uVar1 * 10;
    do {
      FUN_0131eba0(param_1,iVar6,5,iVar7,8);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 5;
      iVar7 = iVar7 + 8;
    } while (uVar5 < uVar2);
  }
  uVar1 = uVar2 * 5;
  if (param_3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,param_3,param_3,&DAT_01ce4da0);
  }
  if (param_5 < uVar2 << 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2 * 8,param_5,param_5,&DAT_01ce4db0);
  }
  FUN_0131eba0(param_1,param_2 + uVar1,param_3 % 5,param_4 + uVar2 * 8);
  return;
}

