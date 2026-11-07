// FUN_01b6a14c @ 01b6a14c size=148 calls_out=1 calls_in=1
// strings: 

undefined4 *
FUN_01b6a14c(int param_1,undefined4 *param_2,undefined4 param_3,code *param_4,code *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = (*param_4)(*(undefined4 *)(param_1 + 0x14),param_3);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar1;
  }
  FUN_01bf0fd4(uVar1,*(undefined4 *)(param_1 + 8));
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + extraout_r1 * 4);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + extraout_r1 * 4);
  while ((puVar3 != (undefined4 *)0x0 &&
         (iVar2 = (*param_5)(*(undefined4 *)(param_1 + 0x10),*puVar3,param_3), iVar2 != 0))) {
    puVar4 = puVar3 + 1;
    puVar3 = (undefined4 *)puVar3[1];
  }
  return puVar4;
}

