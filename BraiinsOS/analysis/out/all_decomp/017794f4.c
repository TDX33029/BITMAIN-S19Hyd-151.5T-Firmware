// FUN_017794f4 @ 017794f4 size=180 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_017794f4(int param_1,undefined4 param_2,code *param_3,code *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = (*param_3)(*(undefined4 *)(param_1 + 0x14));
  FUN_0184606c(uVar1,*(undefined4 *)(param_1 + 8));
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + extraout_r1 * 4);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + extraout_r1 * 4);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = (*param_4)(*(undefined4 *)(param_1 + 0x10),*puVar3,param_2);
    if (iVar2 == 0) break;
    puVar4 = puVar3 + 1;
    puVar3 = (undefined4 *)puVar3[1];
  }
  if ((undefined4 *)*puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*puVar4;
}

