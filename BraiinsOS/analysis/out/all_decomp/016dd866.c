// FUN_016dd866 @ 016dd866 size=60 calls_out=3 calls_in=5
// strings: 

undefined4 FUN_016dd866(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_016d2bfc();
  uVar2 = FUN_016dd8a2();
  if (uVar2 < param_3) {
    FUN_016dd1aa(param_2,uVar1,uVar2 + 1);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x22;
    if (param_3 != 0) {
      FUN_016dd1aa(param_2,uVar1,param_3 - 1);
      uVar3 = 0x22;
      *(undefined1 *)(param_2 + (param_3 - 1)) = 0;
    }
  }
  return uVar3;
}

