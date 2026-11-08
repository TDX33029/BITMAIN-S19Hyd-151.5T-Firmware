// FUN_0060621c @ 0060621c size=228 calls_out=5 calls_in=0
// strings: 

undefined4
FUN_0060621c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  pbVar3 = (byte *)*param_1;
  FUN_00604af8(&local_24,param_2,param_3,*(undefined4 *)(&DAT_00564600 + (uint)*pbVar3 * 4));
  uVar1 = local_20;
  if (local_24 != 0) {
    return 1;
  }
  if (*(char *)(param_1[1] + 0x18) == *(char *)(*param_4 + 0x18)) {
    if (*(char *)(param_1 + 2) == '\x01') {
      uVar2 = 1;
      FUN_00606104(&local_24,*pbVar3);
      if (local_24 == 0) {
        uVar2 = FUN_00604a40(uVar1,param_4,local_20,local_1c);
        FUN_0177aafc(local_20);
      }
    }
    else {
      uVar2 = FUN_00604a40(local_20,param_4,param_5,param_6);
    }
  }
  else {
    uVar2 = 1;
  }
  FUN_01739ee4(uVar1);
  return uVar2;
}

