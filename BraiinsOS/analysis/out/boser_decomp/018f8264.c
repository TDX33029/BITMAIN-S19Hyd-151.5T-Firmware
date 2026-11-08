// FUN_018f8264 @ 018f8264 size=116 calls_out=3 calls_in=1
// strings: 

void FUN_018f8264(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  
  FUN_018a7af8(&local_28);
  uVar2 = local_20;
  uVar1 = local_24;
  local_1c = local_20;
  iVar3 = FUN_01b47dfc(param_3,local_24,&local_1c);
  if (iVar3 == 1) {
    if (local_1c <= uVar2) {
      local_20 = local_1c;
    }
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = local_20;
  }
  else {
    *param_1 = 0x80000001;
    FUN_0134bd64(local_28,uVar1);
  }
  return;
}

