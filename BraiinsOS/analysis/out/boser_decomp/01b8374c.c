// FUN_01b8374c @ 01b8374c size=336 calls_out=1 calls_in=2
// strings: 

uint FUN_01b8374c(undefined2 *param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  bVar6 = 0xf < param_2;
  bVar5 = param_2 == 0x10;
  if (0x10 < param_2) {
    bVar6 = 10 < param_4;
    bVar5 = param_4 == 0xb;
  }
  if (bVar6 && !bVar5) {
    uVar2 = param_4 + 3 >> 2;
    uVar1 = FUN_01b830e8(param_1 + 3,param_2 - 6,param_3,uVar2,param_5);
    if (0xffffff88 < uVar1) {
      return uVar1;
    }
    if (uVar1 - 1 < 0xffff) {
      iVar4 = (int)(param_1 + 3) + uVar1;
      *param_1 = (short)uVar1;
      uVar1 = FUN_01b830e8(iVar4,(int)param_1 + (param_2 - iVar4),param_3 + uVar2,uVar2,param_5);
      if (0xffffff88 < uVar1) {
        return uVar1;
      }
      if (uVar1 - 1 < 0xffff) {
        iVar4 = iVar4 + uVar1;
        param_1[1] = (short)uVar1;
        iVar3 = param_3 + uVar2 + uVar2;
        uVar1 = FUN_01b830e8(iVar4,(int)param_1 + (param_2 - iVar4),iVar3,uVar2,param_5);
        if (0xffffff88 < uVar1) {
          return uVar1;
        }
        if (uVar1 - 1 < 0xffff) {
          iVar4 = iVar4 + uVar1;
          iVar3 = iVar3 + uVar2;
          param_1[2] = (short)uVar1;
          uVar2 = FUN_01b830e8(iVar4,(int)param_1 + (param_2 - iVar4),iVar3,
                               (param_3 + param_4) - iVar3,param_5);
          if (0xffffff88 < uVar2) {
            return uVar2;
          }
          if (uVar2 - 1 < 0xffff) {
            return (iVar4 + uVar2) - (int)param_1;
          }
        }
      }
    }
  }
  return 0;
}

