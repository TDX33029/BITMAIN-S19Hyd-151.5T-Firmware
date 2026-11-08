// FUN_000220e0 @ 000220e0  size=352  callers=0
// program: bmminer


void FUN_000220e0(int param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char acStack_818 [2052];
  
  if (param_1 != 0 && param_2 < 4) {
    uVar2 = FUN_00055ce0();
    uVar6 = 0;
    if ((DAT_0008a848 == 1) || (uVar5 = 0, DAT_0048d3d4 < 1)) {
      while( true ) {
        iVar4 = FUN_000200d8();
        if (iVar4 <= (int)uVar6) break;
        sVar1 = FUN_000186d0(param_2,uVar6 & 0xff);
        uVar6 = uVar6 + 1;
        uVar3 = FUN_00056130((int)sVar1,(int)sVar1 >> 0x1f);
        FUN_00056c34(uVar2,uVar3);
      }
    }
    else {
      while( true ) {
        iVar4 = FUN_00017028();
        if (iVar4 <= (int)uVar5) break;
        sVar1 = FUN_00018940(param_2,uVar5 & 0xff);
        uVar3 = FUN_00056130((int)sVar1,(int)sVar1 >> 0x1f);
        FUN_00056c34(uVar2,uVar3);
        uVar5 = uVar5 + 1;
      }
    }
    FUN_00056774(param_1,"temp_chip",uVar2);
    return;
  }
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
    snprintf(acStack_818,0x800,"%s: input bad param\n","api_miner_chain_temp_chip");
    FUN_00032218(3,acStack_818,0);
  }
  return;
}

