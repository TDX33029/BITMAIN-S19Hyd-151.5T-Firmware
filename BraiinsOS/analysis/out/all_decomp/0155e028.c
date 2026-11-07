// FUN_0155e028 @ 0155e028 size=176 calls_out=2 calls_in=1
// strings: 

void FUN_0155e028(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 uStack_20;
  undefined2 local_1e;
  undefined4 uStack_1c;
  
  FUN_0152a528(&local_28);
  uVar2 = local_24;
  uVar1 = uStack_26;
  if (local_28 != '\x18') {
    *(char *)(param_1 + 1) = local_28;
    *(uint *)((int)param_1 + 10) = CONCAT22(uStack_20,local_22);
    *(undefined2 *)((int)param_1 + 0xe) = local_1e;
    *(uint *)((int)param_1 + 6) = CONCAT22(local_24,uStack_26);
    *(undefined1 *)((int)param_1 + 5) = uStack_27;
    *param_1 = 0x80000000;
    return;
  }
  FUN_01540ae4(&local_28,param_2);
  if (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) == 1) {
    *param_1 = 0x80000000;
    param_1[1] = CONCAT22(local_22,local_24);
    param_1[2] = CONCAT22(local_1e,uStack_20);
    param_1[3] = uStack_1c;
    return;
  }
  *(undefined2 *)((int)param_1 + 0xe) = uVar2;
  *param_1 = CONCAT22(local_22,local_24);
  param_1[1] = CONCAT22(local_1e,uStack_20);
  param_1[2] = uStack_1c;
  *(undefined2 *)(param_1 + 3) = uVar1;
  return;
}

