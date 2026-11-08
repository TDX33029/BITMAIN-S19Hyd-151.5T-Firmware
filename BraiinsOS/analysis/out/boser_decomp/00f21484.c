// FUN_00f21484 @ 00f21484 size=124 calls_out=5 calls_in=2
// strings: 

void FUN_00f21484(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_0134aee0(*param_1,param_1[1],4,8);
  uVar2 = param_1[4];
  FUN_0129b9e0(uVar2,param_1[5]);
  FUN_0134aee0(param_1[3],uVar2,4,0x3c);
  if (param_1[6] == 0) {
    return;
  }
  puVar1 = (undefined4 *)param_1[6];
  FUN_019bb7e0(*puVar1,puVar1[1]);
  FUN_00f21484(puVar1 + 3);
  thunk_FUN_01be4678(puVar1);
  return;
}

