// FUN_01b6a1e0 @ 01b6a1e0 size=84 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01b6a1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_01b6a14c(param_1,0,param_2,param_3,param_4);
  uVar2 = 0;
  if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)*piVar1;
  }
  return uVar2;
}

