// FUN_01608e60 @ 01608e60 size=140 calls_out=1 calls_in=1
// strings: 

void FUN_01608e60(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_6 & param_3 - param_4;
  if (param_5 != 3) {
    FUN_016089b4();
    return;
  }
  if (0xfffffffc < param_3) {
    return;
  }
  uVar3 = param_3 + 3;
  if (uVar3 <= param_2) {
    uVar3 = uVar2 + 1 & param_6;
  }
  if (uVar3 < param_2) {
    if (uVar2 < param_2) {
      param_6 = uVar2 + 2 & param_6;
    }
    if (uVar2 < param_2 && param_6 < param_2) {
      puVar1 = (undefined1 *)(param_1 + param_3);
      *puVar1 = *(undefined1 *)(param_1 + uVar2);
      puVar1[1] = *(undefined1 *)(param_1 + uVar3);
      puVar1[2] = *(undefined1 *)(param_1 + param_6);
      return;
    }
  }
  return;
}

