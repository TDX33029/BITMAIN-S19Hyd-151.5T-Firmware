// FUN_017a1ef4 @ 017a1ef4 size=316 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_017a1ef4(uint param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2d8) != 0) {
      return 0xffffffc0;
    }
    if (param_1 < *(uint *)(param_1 + 0x224)) {
      bVar1 = false;
    }
    else if (param_1 < *(uint *)(param_1 + 0x228)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (*(int *)(param_1 + 0x990) != 0) {
      if (*(code **)(param_1 + 0x2cc) == (code *)0x0) {
        thunk_FUN_016d3fb4(*(int *)(param_1 + 0x990));
      }
      else {
        (**(code **)(param_1 + 0x2cc))(*(undefined4 *)(param_1 + 0x2d0));
      }
    }
    FUN_017a0cdc(*(undefined4 *)(param_1 + 0x9a0));
    *(undefined4 *)(param_1 + 0x990) = 0;
    *(undefined4 *)(param_1 + 0x994) = 0;
    *(undefined4 *)(param_1 + 0x998) = 0;
    *(undefined4 *)(param_1 + 0x99c) = 0;
    *(undefined4 *)(param_1 + 0x9a0) = 0;
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    *(undefined4 *)(param_1 + 0x9ac) = 0;
    *(undefined4 *)(param_1 + 0x9b0) = 0;
    *(undefined4 *)(param_1 + 0x9a4) = 0;
    iVar2 = *(int *)(param_1 + 0x224);
    pcVar3 = *(code **)(param_1 + 0x2cc);
    uVar4 = *(undefined4 *)(param_1 + 0x2d0);
    FUN_016dd606((int *)(param_1 + 0x224),0,0x2c);
    if (iVar2 != 0) {
      if (pcVar3 == (code *)0x0) {
        thunk_FUN_016d3fb4(iVar2);
      }
      else {
        (*pcVar3)(uVar4,iVar2);
      }
    }
    if (!bVar1) {
      if (*(code **)(param_1 + 0x2cc) == (code *)0x0) {
        thunk_FUN_016d3fb4(param_1);
      }
      else {
        (**(code **)(param_1 + 0x2cc))(*(undefined4 *)(param_1 + 0x2d0),param_1);
      }
    }
  }
  return 0;
}

