// FUN_007b7c90 @ 007b7c90 size=124 calls_out=1 calls_in=2
// strings: 

void FUN_007b7c90(undefined4 param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  if ((*(uint *)(param_2 + 0x28) != 5) && (3 < *(uint *)(param_2 + 0x28))) {
    uVar5 = *(undefined4 *)(param_2 + 0x2c);
    puVar6 = *(undefined4 **)(param_2 + 0x30);
    pcVar1 = (code *)*puVar6;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = uVar4;
  FUN_016dd1aa(param_1,param_2,0x134);
  return;
}

