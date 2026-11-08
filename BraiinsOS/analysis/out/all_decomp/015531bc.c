// FUN_015531bc @ 015531bc size=344 calls_out=3 calls_in=0
// strings: 

void FUN_015531bc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int local_38;
  int iStack_34;
  undefined1 *puStack_30;
  uint uStack_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  (**(code **)(param_5 + 0x10))(&local_38,param_4,param_6,param_7,&DAT_0040c938);
  if (local_38 != -0x7fffffd7) {
    *param_1 = local_38;
    param_1[1] = iStack_34;
    param_1[2] = (int)puStack_30;
    param_1[3] = uStack_2c;
    param_1[4] = local_28;
    param_1[5] = local_24;
    param_1[6] = local_20;
    param_1[7] = local_1c;
    return;
  }
  if (uStack_2c < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(local_28,uStack_2c,uStack_2c,&DAT_018a7c34);
  }
  FUN_01553334(param_2,param_3,0x30,puStack_30 + local_28,uStack_2c - local_28,param_8,param_9,
               param_10,param_11);
  iVar1 = iStack_34;
  puVar2 = puStack_30;
  if (uStack_2c != 0) {
    puVar3 = puStack_30;
    do {
      *puVar3 = 0;
      uStack_2c = uStack_2c - 1;
      puVar3 = puVar3 + 1;
    } while (uStack_2c != 0);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (iStack_34 != 0) {
    thunk_FUN_016d3fb4(puStack_30);
  }
  *param_1 = -0x7fffffd7;
  return;
}

