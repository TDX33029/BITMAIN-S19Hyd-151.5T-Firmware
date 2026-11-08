// FUN_013ca428 @ 013ca428 size=104 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013ca428(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_54 [68];
  
  uVar1 = *(undefined1 *)(param_2 + 0x19);
  if (param_3 == 0) {
    uVar2 = FUN_013c80e8(param_1,param_2,uVar1);
    return uVar2;
  }
  FUN_013c9680(auStack_54);
  uVar2 = FUN_013c80e8(auStack_54,param_2,uVar1);
  FUN_0079217c(auStack_54);
  return uVar2;
}

