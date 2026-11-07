// FUN_01654718 @ 01654718 size=132 calls_out=3 calls_in=1
// strings: 

void FUN_01654718(undefined4 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar3 = (undefined1 *)*param_1;
  if (puVar3 != &DAT_80000008) {
    uVar1 = 4;
    if ((int)puVar3 < 0) {
      uVar1 = (uint)puVar3 ^ 0x80000000;
    }
    if (uVar1 == 4) {
      FUN_0134bd64(puVar3,param_1[1]);
      return;
    }
    bVar7 = uVar1 == 1;
    if (bVar7) {
      uVar1 = (uint)*(byte *)(param_1 + 1);
    }
    if (bVar7 && uVar1 == 3) {
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
  return;
}

