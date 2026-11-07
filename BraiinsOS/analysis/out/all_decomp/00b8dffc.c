// FUN_00b8dffc @ 00b8dffc size=228 calls_out=2 calls_in=2
// strings: 

int FUN_00b8dffc(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar4 = uVar1 * 8 - (param_4 >> 3);
    param_1 = FUN_00b8dffc(param_1,param_1 + iVar4 * 0x20,uVar1 * 0x188 + param_1,uVar1);
    param_2 = FUN_00b8dffc(param_2,param_2 + iVar4 * 0x20,uVar1 * 0x188 + param_2,uVar1);
    param_3 = FUN_00b8dffc(param_3,param_3 + iVar4 * 0x20,uVar1 * 0x188 + param_3,uVar1);
  }
  cVar2 = FUN_010e1310(param_1,param_2);
  cVar3 = FUN_010e1310(param_1,param_3);
  if ((cVar2 == -1) == (cVar3 == -1)) {
    cVar3 = FUN_010e1310(param_2,param_3);
    param_1 = param_2;
    if ((cVar2 == -1) != (cVar3 == -1)) {
      param_1 = param_3;
    }
  }
  return param_1;
}

