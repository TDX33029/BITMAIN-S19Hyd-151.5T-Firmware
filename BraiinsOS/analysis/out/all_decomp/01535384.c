// FUN_01535384 @ 01535384 size=324 calls_out=3 calls_in=0
// strings: 

void FUN_01535384(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_40;
  int iStack_3c;
  undefined1 *puStack_38;
  uint uStack_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  
  (**(code **)(param_6 + 0x10))(&local_40,param_5,param_7,param_8,&DAT_0040c93c);
  if (local_40 != -0x7fffffd7) {
    *param_1 = local_40;
    param_1[1] = iStack_3c;
    param_1[2] = (int)puStack_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    param_1[5] = local_2c;
    param_1[6] = local_28;
    param_1[7] = local_24;
    return;
  }
  if (uStack_34 < uStack_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uStack_30,uStack_34,uStack_34,&DAT_018a7c34);
  }
  iVar2 = FUN_0153520c(param_2,param_3,param_4,puStack_38 + uStack_30,uStack_34 - uStack_30);
  *param_1 = -0x7fffffd7;
  param_1[1] = iVar2;
  param_1[2] = (int)&DAT_018a7c88;
  iVar2 = iStack_3c;
  puVar1 = puStack_38;
  if (uStack_34 != 0) {
    puVar3 = puStack_38;
    do {
      *puVar3 = 0;
      uStack_34 = uStack_34 - 1;
      puVar3 = puVar3 + 1;
    } while (uStack_34 != 0);
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (iStack_3c != 0) {
    thunk_FUN_016d3fb4(puStack_38);
  }
  return;
}

