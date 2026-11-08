// FUN_01b3b8f8 @ 01b3b8f8 size=112 calls_out=2 calls_in=2
// strings: 

ulonglong FUN_01b3b8f8(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return (ulonglong)uVar1;
  }
  FUN_01b6b174(uVar1,*(undefined4 *)(*param_1 + 0x1c));
  uVar2 = FUN_01b3b854(param_1);
  return uVar2;
}

