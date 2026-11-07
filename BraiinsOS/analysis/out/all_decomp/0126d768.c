// FUN_0126d768 @ 0126d768 size=116 calls_out=1 calls_in=1
// strings: 

void FUN_0126d768(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = param_3 - param_4;
  if (param_5 != 3) {
    FUN_0126d328();
    return;
  }
  bVar4 = 0xfffffffb < param_3;
  bVar3 = param_3 == 0xfffffffc;
  if (param_3 < 0xfffffffd) {
    bVar4 = param_2 <= param_3 + 3;
    bVar3 = param_3 + 3 == param_2;
  }
  if ((!bVar4 || bVar3) && (uVar1 + 2 < param_2 && uVar1 < param_2)) {
    if (uVar1 + 1 < param_2) {
      puVar2 = (undefined1 *)(param_1 + param_3);
      *puVar2 = *(undefined1 *)(param_1 + uVar1);
      puVar2[1] = *(undefined1 *)(param_1 + uVar1 + 1);
      puVar2[2] = *(undefined1 *)(param_1 + uVar1 + 2);
    }
    return;
  }
  return;
}

