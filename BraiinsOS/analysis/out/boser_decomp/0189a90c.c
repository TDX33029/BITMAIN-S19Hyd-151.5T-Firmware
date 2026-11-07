// FUN_0189a90c @ 0189a90c size=184 calls_out=5 calls_in=0
// strings: 

void FUN_0189a90c(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [248];
  
  uVar3 = 2;
  if ((param_3 & 0x1fffffff) == 0x20) {
    FUN_01bed93e(auStack_108,0,0xf4);
    uVar1 = 1;
    if ((DAT_01d53480 & 4) == 0) {
      uVar1 = DAT_01d53480 & 1 ^ 3;
    }
    if (uVar1 == 1) {
      iVar2 = FUN_01bd8d80(param_2,0x100,auStack_108);
    }
    else if (uVar1 == 2) {
      iVar2 = FUN_01bda430(param_2,0x100);
    }
    else {
      iVar2 = FUN_01bcf2c8(param_2,0x100);
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      FUN_01bed4e2(param_1 + 1,auStack_108,0xf4);
      uVar3 = 0;
    }
  }
  *param_1 = uVar3;
  return;
}

