// FUN_0143a750 @ 0143a750 size=84 calls_out=0 calls_in=1
// strings: 

void FUN_0143a750(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2) != 0) {
      iVar1 = param_1 + iVar2;
      (**(code **)(*(int *)(param_1 + iVar2) + 0x10))
                (iVar1 + 0xc,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    }
    iVar2 = iVar2 + 0x10;
  } while (iVar2 != 0x50);
  return;
}

