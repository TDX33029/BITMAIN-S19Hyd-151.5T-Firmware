// FUN_017959e8 @ 017959e8 size=480 calls_out=1 calls_in=1
// strings: 

uint FUN_017959e8(int param_1,undefined2 *param_2,int param_3,int param_4,uint param_5,int param_6,
                 undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  uVar2 = param_3 - (int)param_2;
  if (param_6 == 0) {
    uVar2 = FUN_01795314(param_2,uVar2,param_4,param_5,param_7);
  }
  else {
    bVar6 = 10 < param_5;
    bVar5 = param_5 == 0xb;
    if (0xb < param_5) {
      bVar6 = 0xf < uVar2;
      bVar5 = uVar2 == 0x10;
    }
    if (!bVar6 || bVar5) {
      return 0;
    }
    uVar1 = param_5 + 3 >> 2;
    uVar2 = FUN_01795314(param_2 + 3,uVar2 - 6,param_4,uVar1,param_7);
    if (0xffffff88 < uVar2) {
      return uVar2;
    }
    if (0xfffe < uVar2 - 1) {
      return 0;
    }
    iVar3 = (int)(param_2 + 3) + uVar2;
    *param_2 = (short)uVar2;
    uVar2 = FUN_01795314(iVar3,param_3 - iVar3,param_4 + uVar1,uVar1,param_7);
    if (0xffffff88 < uVar2) {
      return uVar2;
    }
    if (0xfffe < uVar2 - 1) {
      return 0;
    }
    iVar3 = iVar3 + uVar2;
    param_2[1] = (short)uVar2;
    iVar4 = param_4 + uVar1 + uVar1;
    uVar2 = FUN_01795314(iVar3,param_3 - iVar3,iVar4,uVar1,param_7);
    if (0xffffff88 < uVar2) {
      return uVar2;
    }
    if (0xfffe < uVar2 - 1) {
      return 0;
    }
    param_2[2] = (short)uVar2;
    iVar4 = uVar1 + iVar4;
    iVar3 = iVar3 + uVar2;
    uVar2 = FUN_01795314(iVar3,param_3 - iVar3,iVar4,(param_4 + param_5) - iVar4,param_7);
    if (0xffffff88 < uVar2) {
      return uVar2;
    }
    if (0xfffe < uVar2 - 1) {
      return 0;
    }
    uVar2 = (iVar3 + uVar2) - (int)param_2;
  }
  if ((uVar2 < 0xffffff89) &&
     ((uVar2 == 0 || (uVar2 = (int)param_2 + (uVar2 - param_1), param_5 - 1 <= uVar2)))) {
    return 0;
  }
  return uVar2;
}

