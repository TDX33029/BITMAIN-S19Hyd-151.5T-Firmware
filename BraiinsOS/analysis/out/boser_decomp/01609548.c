// FUN_01609548 @ 01609548 size=60 calls_out=2 calls_in=5
// strings: 

void FUN_01609548(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_01be3e06(param_2,2,param_3,0);
  if (uVar1 < 0x80000000) {
    *(undefined1 *)param_1 = 4;
  }
  if ((int)uVar1 < 0) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  return;
}

