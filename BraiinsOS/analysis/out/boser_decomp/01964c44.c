// FUN_01964c44 @ 01964c44 size=44 calls_out=3 calls_in=6
// strings: 

void FUN_01964c44(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    return;
  }
  if (bVar1 == 3) {
    FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
  if (bVar1 == 4) {
    FUN_00949b70();
    return;
  }
  FUN_0196afa8(param_1 + 4);
  return;
}

