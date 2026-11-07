// FUN_00ba07e4 @ 00ba07e4 size=128 calls_out=1 calls_in=1
// strings: 

void FUN_00ba07e4(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(param_2 + 0x28) != 5) && (3 < *(uint *)(param_2 + 0x28))) {
    uVar3 = *(undefined4 *)(param_2 + 0x2c);
    puVar2 = *(undefined4 **)(param_2 + 0x30);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
  }
  *(undefined4 *)(param_2 + 0x28) = 4;
  *(undefined4 *)(param_2 + 0x2c) = 1;
  *(undefined **)(param_2 + 0x30) = &DAT_0187294c;
  FUN_016dd1aa(param_1,param_2,0x134);
  return;
}

