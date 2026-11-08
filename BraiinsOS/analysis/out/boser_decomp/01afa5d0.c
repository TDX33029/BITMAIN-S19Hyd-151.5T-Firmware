// FUN_01afa5d0 @ 01afa5d0 size=136 calls_out=3 calls_in=1
// strings: 

void FUN_01afa5d0(uint *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar3 = *param_1;
  iVar1 = 1;
  if (0x80000000 < uVar3) {
    iVar1 = uVar3 + 0x7fffffff;
  }
  if (iVar1 == 0) {
    if ((char)param_1[1] == '\x03') {
      puVar4 = (undefined4 *)param_1[2];
      uVar5 = *puVar4;
      puVar6 = (undefined4 *)puVar4[1];
      pcVar2 = (code *)*puVar6;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_01be4678(uVar5);
      }
      thunk_FUN_01be4678(puVar4);
      return;
    }
  }
  else if ((iVar1 == 1) && (uVar3 != 0x80000000)) {
    FUN_019bb7e0(uVar3,param_1[1]);
    return;
  }
  return;
}

