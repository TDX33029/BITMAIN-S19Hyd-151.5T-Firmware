// FUN_0172abc4 @ 0172abc4 size=120 calls_out=2 calls_in=2
// strings: 

ulonglong FUN_0172abc4(int *param_1)

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
  FUN_0177aaa0(uVar1,*(undefined4 *)(*param_1 + 0x1c));
  uVar2 = FUN_0172aae8(param_1);
  return uVar2;
}

