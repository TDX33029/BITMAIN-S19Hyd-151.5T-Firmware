// FUN_019653ec @ 019653ec size=180 calls_out=3 calls_in=1
// strings: 

void FUN_019653ec(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if (uVar3 < *(uint *)(param_2 + 0x10)) {
    iVar1 = 0;
    do {
      uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar3 + iVar1);
      if (9 < uVar4 - 0x30) {
        if (uVar4 == 0x2e) {
          FUN_01965594();
          return;
        }
        if (uVar4 == 0x45 || uVar4 == 0x65) {
          FUN_01965748();
          return;
        }
        break;
      }
      iVar2 = uVar3 + 1 + iVar1;
      iVar1 = iVar1 + 1;
      *(int *)(param_2 + 0x14) = iVar2;
    } while (*(uint *)(param_2 + 0x10) - uVar3 != iVar1);
  }
  FUN_019654a0();
  return;
}

