// FUN_01bedb9e @ 01bedb9e size=60 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_01bedb9e(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_01be3278();
  uVar2 = FUN_01bedbda();
  if (uVar2 < param_3) {
    FUN_01bed4e2(param_2,uVar1,uVar2 + 1);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x22;
    if (param_3 != 0) {
      FUN_01bed4e2(param_2,uVar1,param_3 - 1);
      uVar3 = 0x22;
      *(undefined1 *)(param_2 + (param_3 - 1)) = 0;
    }
  }
  return uVar3;
}

