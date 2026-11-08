// FUN_01aa0998 @ 01aa0998 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_01aa0998(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_80 [26];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  while (FUN_01a9e54c(local_80,uVar1,uVar2), (local_80[0] & 6) != 4) {
    FUN_019f8c54(uVar3,1);
    if ((local_80[0] & 6) != 4) {
      FUN_01a9e910(local_80);
    }
  }
  return;
}

