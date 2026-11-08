// FUN_00d36a10 @ 00d36a10 size=128 calls_out=2 calls_in=2
// strings: 

void FUN_00d36a10(uint *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar1 = *param_1 - 3;
  }
  if (iVar1 == 1) {
    puVar4 = (undefined4 *)param_1[3];
    uVar3 = param_1[2];
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] == 0) {
      return;
    }
    thunk_FUN_01be4678(uVar3);
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  FUN_01139b38(param_1[0x2a],param_1[0x2b]);
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_01839f10(param_1);
  FUN_009d5b68(param_1 + 0x22);
  return;
}

