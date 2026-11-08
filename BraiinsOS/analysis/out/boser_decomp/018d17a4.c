// FUN_018d17a4 @ 018d17a4 size=184 calls_out=2 calls_in=2
// strings: 

void FUN_018d17a4(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char local_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined4 uStack_24;
  
  FUN_018d89cc(&local_30);
  uVar2 = local_2c;
  uVar1 = uStack_2e;
  if (local_30 == '\x14') {
    FUN_018c4324(&local_30,param_2);
    if (CONCAT22(uStack_2e,CONCAT11(uStack_2f,local_30)) != 1) {
      *param_1 = CONCAT22(uStack_2a,local_2c);
      param_1[1] = CONCAT22(local_26,uStack_28);
      param_1[2] = uStack_24;
      *(undefined2 *)((int)param_1 + 0xe) = uVar2;
      *(undefined2 *)(param_1 + 3) = uVar1;
      return;
    }
    param_1[1] = CONCAT22(uStack_2a,local_2c);
    param_1[2] = CONCAT22(local_26,uStack_28);
    param_1[3] = uStack_24;
  }
  else {
    *(uint *)((int)param_1 + 10) = CONCAT22(uStack_28,uStack_2a);
    *(undefined2 *)((int)param_1 + 0xe) = local_26;
    *(uint *)((int)param_1 + 6) = CONCAT22(local_2c,uStack_2e);
    *(undefined1 *)((int)param_1 + 5) = uStack_2f;
    *(char *)(param_1 + 1) = local_30;
  }
  *param_1 = 0x80000000;
  return;
}

