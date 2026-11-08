// FUN_0068cd78 @ 0068cd78 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_0068cd78(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_60;
  int iStack_5c;
  int local_58 [16];
  
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  while (FUN_0069b5a4(&local_60,uVar2,uVar3), (local_60 & 1) != 0 && local_58[0] != 0) {
    FUN_019f8c54(uVar1,1);
    FUN_0067e38c(local_58);
  }
  if ((local_60 != 0 || iStack_5c != 0) && local_58[0] != 0) {
    FUN_0067e38c(local_58);
  }
  return;
}

