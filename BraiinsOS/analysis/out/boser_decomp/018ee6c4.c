// FUN_018ee6c4 @ 018ee6c4 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_018ee6c4(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = *param_2;
  uVar1 = uVar3;
  if (uVar3 < 0x80000001) {
    uVar1 = 0;
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    FUN_01938d70(&local_28);
    *param_1 = local_28;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    if (uVar3 != 0x80000000) {
      FUN_0134bd64(uVar3,param_2[1]);
      return;
    }
  }
  else {
    if ((uVar1 & 0x7fffffff) == 1) {
      uVar2 = 0x80000001;
    }
    else {
      uVar2 = 0x80000002;
    }
    *param_1 = uVar2;
  }
  return;
}

