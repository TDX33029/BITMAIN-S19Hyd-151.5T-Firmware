// FUN_00f9155c @ 00f9155c size=108 calls_out=0 calls_in=0
// strings: 

void FUN_00f9155c(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (puVar3 == (undefined4 *)param_2[1]) goto LAB_00f915bc;
    puVar3 = puVar3 + 2;
    *param_2 = (int)puVar3;
  }
  if (puVar3 != (undefined4 *)param_2[1]) {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    *param_2 = (int)(puVar3 + 2);
    *(undefined1 *)(param_1 + 8) = 0;
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 0x80000000;
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    return;
  }
LAB_00f915bc:
  *param_1 = 0x80000000;
  return;
}

