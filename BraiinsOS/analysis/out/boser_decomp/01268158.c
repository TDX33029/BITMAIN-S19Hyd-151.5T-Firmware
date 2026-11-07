// FUN_01268158 @ 01268158 size=112 calls_out=1 calls_in=5
// strings: 

uint FUN_01268158(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_4;
  if (param_2 < param_4) {
    uVar2 = param_2;
  }
  iVar1 = FUN_01bed842(param_1,param_3,uVar2);
  if (iVar1 == 0) {
    iVar1 = param_2 - param_4;
  }
  uVar2 = 0;
  uVar3 = (uint)(0 < iVar1) - (uint)(iVar1 < 0) & 0xff;
  if (uVar3 != 2) {
    if (uVar3 == 0) {
      return 2;
    }
    uVar2 = uVar3 >> 7;
  }
  return uVar2;
}

