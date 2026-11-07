// FUN_0126aea0 @ 0126aea0 size=120 calls_out=1 calls_in=1
// strings: 

void FUN_0126aea0(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_3 - param_4;
  if (param_5 != 3) {
    FUN_0126aa30();
    return;
  }
  if (0xfffffffc < param_3) {
    return;
  }
  uVar3 = param_3 + 3;
  if (uVar3 <= param_2) {
    uVar3 = uVar1 + 1;
  }
  if (uVar3 < param_2) {
    uVar4 = 3;
    if (uVar1 < param_2) {
      uVar4 = uVar1 + 2;
    }
    if (uVar1 < param_2 && uVar4 < param_2) {
      puVar2 = (undefined1 *)(param_1 + param_3);
      *puVar2 = *(undefined1 *)(param_1 + uVar1);
      puVar2[1] = *(undefined1 *)(param_1 + uVar3);
      puVar2[2] = *(undefined1 *)(param_1 + uVar4);
      return;
    }
  }
  return;
}

