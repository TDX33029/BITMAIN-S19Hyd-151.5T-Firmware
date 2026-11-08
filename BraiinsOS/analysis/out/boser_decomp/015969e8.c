// FUN_015969e8 @ 015969e8 size=40 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015969e8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0154a9e8();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = *param_1;
    *param_1 = 0;
  }
  return uVar2;
}

