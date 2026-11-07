// FUN_0181d6bc @ 0181d6bc size=232 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0181d6bc(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  *(undefined **)(param_1 + 0xb20) = &DAT_018bc298;
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(undefined **)(param_1 + 0xb38) = &DAT_018bc270;
  *(undefined **)(param_1 + 0xb2c) = &DAT_018bc284;
  *(undefined2 **)(param_1 + 0xb24) = (undefined2 *)(param_1 + 0x988);
  *(undefined2 **)(param_1 + 0xb30) = (undefined2 *)(param_1 + 0xa7c);
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  iVar1 = param_1;
  do {
    *(undefined2 *)(iVar1 + 0x94) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != param_1 + 0x478);
  puVar3 = (undefined2 *)(param_1 + 0x988);
  do {
    puVar2 = puVar3 + 2;
    *puVar3 = 0;
    puVar3 = puVar2;
  } while (puVar2 != (undefined2 *)(param_1 + 0xa00));
  puVar3 = (undefined2 *)(param_1 + 0xa7c);
  do {
    puVar2 = puVar3 + 2;
    *puVar3 = 0;
    puVar3 = puVar2;
  } while (puVar2 != (undefined2 *)(param_1 + 0xac8));
  *(undefined2 *)(param_1 + 0x494) = 1;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  return 0;
}

