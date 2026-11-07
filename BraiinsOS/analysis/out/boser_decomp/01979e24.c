// FUN_01979e24 @ 01979e24 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_01979e24(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01be9b78(param_2,0x29,param_3,param_4,0x14);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
  }
  else {
    *(undefined1 *)param_1 = 4;
  }
  return;
}

