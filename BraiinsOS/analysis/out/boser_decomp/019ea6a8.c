// FUN_019ea6a8 @ 019ea6a8 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_019ea6a8(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_01be3388(param_2,3);
  if ((uVar1 == 0xffffffff) || (iVar2 = FUN_01be3388(param_2,4,uVar1 | 0x800), iVar2 == -1)) {
    puVar3 = (undefined4 *)FUN_01be3244();
    uVar4 = *puVar3;
    *param_1 = 0;
    param_1[1] = uVar4;
    return;
  }
  *(undefined1 *)param_1 = 4;
  return;
}

