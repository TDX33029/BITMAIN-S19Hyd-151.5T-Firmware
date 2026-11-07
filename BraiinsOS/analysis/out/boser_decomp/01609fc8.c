// FUN_01609fc8 @ 01609fc8 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_01609fc8(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_01be3dde(0x80000);
  uVar3 = extraout_r1;
  if (uVar1 < 0x80000000) {
    uVar3 = 4;
    param_1[1] = uVar1;
  }
  if ((int)uVar1 < 0) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar4 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar4;
    return;
  }
  *(undefined1 *)param_1 = uVar3;
  return;
}

