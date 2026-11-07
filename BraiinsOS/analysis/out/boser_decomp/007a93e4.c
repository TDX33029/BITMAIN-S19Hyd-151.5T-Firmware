// FUN_007a93e4 @ 007a93e4 size=148 calls_out=4 calls_in=5
// strings: 

void FUN_007a93e4(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  iVar2 = 2;
  if ((uint)(uVar3 < 2) <= -param_1[1]) {
    iVar2 = uVar3 - 2;
  }
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 == 1) {
    puVar1 = param_1 + 2;
    if (*puVar1 == 0) {
      puVar1 = param_1 + 4;
    }
    FUN_01139b38(*puVar1,puVar1[1]);
    return;
  }
  FUN_007af1e8(param_1,iVar2,uVar3,-(param_1[1] + (uint)(uVar3 >= 2)));
  if (*param_1 != 0 || param_1[1] != 0) {
    puVar1 = param_1 + 2;
    if (*puVar1 == 0) {
      puVar1 = param_1 + 4;
    }
    FUN_01139b38(*puVar1,puVar1[1]);
  }
  FUN_01340e1c(param_1[0x40e]);
  FUN_019bb7e0(param_1[0x410],param_1[0x411]);
  return;
}

