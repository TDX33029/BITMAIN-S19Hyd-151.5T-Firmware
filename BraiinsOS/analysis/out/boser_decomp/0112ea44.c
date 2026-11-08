// FUN_0112ea44 @ 0112ea44 size=152 calls_out=3 calls_in=3
// strings: 

void FUN_0112ea44(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar1 = FUN_019ec70c();
  FUN_01209998(local_30,*(undefined4 *)(param_2 + 0x50),param_3);
  if ((local_30[0] & 1) == 0) {
    param_1[2] = local_28;
    param_1[3] = uStack_24;
    param_1[4] = uStack_20;
    param_1[5] = uStack_1c;
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_019ee264(bVar1 == 2 | bVar1 & 1,param_2,param_3);
    uVar3 = 1;
    if (iVar2 != 0) {
      uVar3 = 2;
    }
  }
  *param_1 = uVar3;
  param_1[1] = 0;
  return;
}

