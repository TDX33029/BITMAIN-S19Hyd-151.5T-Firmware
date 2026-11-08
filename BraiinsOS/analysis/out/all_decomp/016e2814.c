// FUN_016e2814 @ 016e2814 size=128 calls_out=2 calls_in=1
// strings: 

undefined4
FUN_016e2814(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_016e25e0(param_1,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_016e24e4(param_1,param_2,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return 1;
}

