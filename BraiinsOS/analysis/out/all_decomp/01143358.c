// FUN_01143358 @ 01143358 size=348 calls_out=4 calls_in=1
// strings: item_type

void FUN_01143358(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined2 local_2e;
  int local_2c;
  int local_28 [2];
  int iStack_20;
  
  FUN_01147600(&local_38,param_3,2);
  puVar1 = (undefined4 *)CONCAT22(local_32,CONCAT11(local_33,local_34));
  if (local_38 != 5) {
    *param_1 = local_38;
    param_1[1] = (int)puVar1;
    param_1[2] = CONCAT22(local_2e,uStack_30);
    param_1[3] = local_2c;
    return;
  }
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  if (*(char *)((int)puVar1 + 7) == '\x01') {
    FUN_011533ec(&local_38,*puVar1,"item_type",9);
    if (local_38 != 2) goto LAB_01143450;
  }
  FUN_01151b64(&local_38,*puVar1,uVar2,0);
  if (local_38 == 2) {
    if ((*(char *)((int)puVar1 + 7) == '\x01') &&
       (FUN_011533ec(local_28,*puVar1,&DAT_00411190,7), local_28[0] != 2)) {
      local_34 = (undefined1)local_28[0];
      local_33 = (undefined1)((uint)local_28[0] >> 8);
      local_32 = (undefined2)((uint)local_28[0] >> 0x10);
      uStack_30 = (undefined2)local_28[1];
      local_2e = (undefined2)((uint)local_28[1] >> 0x10);
      local_2c = iStack_20;
      local_38 = 0;
    }
    else {
      FUN_01147294(&local_38,*puVar1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
      if (local_38 == 5) {
        *param_1 = 5;
        return;
      }
    }
    *param_1 = local_38;
    param_1[1] = CONCAT22(local_32,CONCAT11(local_33,local_34));
    param_1[2] = CONCAT22(local_2e,uStack_30);
    param_1[3] = local_2c;
    return;
  }
LAB_01143450:
  *(undefined1 *)(param_1 + 2) = local_34;
  *(undefined1 *)((int)param_1 + 9) = local_33;
  *param_1 = 0;
  param_1[1] = local_38;
  *(uint *)((int)param_1 + 10) = CONCAT22(uStack_30,local_32);
  *(undefined2 *)((int)param_1 + 0xe) = local_2e;
  return;
}

