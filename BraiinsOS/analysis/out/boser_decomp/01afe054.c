// FUN_01afe054 @ 01afe054 size=136 calls_out=2 calls_in=1
// strings: 

undefined8
FUN_01afe054(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01afdebc(param_1,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_01afddc0(param_1,param_2,param_4);
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

