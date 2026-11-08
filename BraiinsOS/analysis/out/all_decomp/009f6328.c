// FUN_009f6328 @ 009f6328 size=128 calls_out=2 calls_in=0
// strings: 

void FUN_009f6328(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[1];
  iVar6 = param_1[2];
  if (iVar6 != 0) {
    iVar4 = 0;
    do {
      puVar1 = (undefined4 *)(iVar5 + iVar4 * 8);
      uVar3 = *puVar1;
      puVar1 = (undefined4 *)puVar1[1];
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar3);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar6 != iVar4);
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  FUN_009f7814(param_1 + 3);
  return;
}

