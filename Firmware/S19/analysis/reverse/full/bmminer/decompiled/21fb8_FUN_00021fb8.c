// FUN_00021fb8 @ 00021fb8  size=292  callers=0
// program: bmminer


void FUN_00021fb8(int param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  char *__s1;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char acStack_818 [2048];
  
  if (param_1 == 0 || 3 < param_2) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      snprintf(acStack_818,0x800,"%s: input bad param\n","api_miner_chain_temp_pic");
      FUN_00032218(3,acStack_818,0);
    }
    return;
  }
  uVar2 = FUN_00055ce0();
  __s1 = (char *)FUN_0001fffc();
  iVar3 = strcmp(__s1,"BHB28601");
  if (iVar3 == 0) {
    uVar4 = FUN_00017028();
  }
  else {
    uVar4 = FUN_000200d8();
  }
  if (0 < (int)uVar4) {
    uVar7 = 0;
    do {
      uVar6 = uVar7 & 0xff;
      uVar7 = uVar7 + 1;
      sVar1 = FUN_000186d0(param_2,uVar6);
      uVar5 = FUN_00056130((int)sVar1,(int)sVar1 >> 0x1f);
      FUN_00056c34(uVar2,uVar5);
    } while (uVar4 != uVar7);
  }
  FUN_00056774(param_1,"temp_pic",uVar2);
  return;
}

