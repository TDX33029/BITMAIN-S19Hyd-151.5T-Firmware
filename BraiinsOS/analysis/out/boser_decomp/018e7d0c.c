// FUN_018e7d0c @ 018e7d0c size=248 calls_out=3 calls_in=1
// strings: 

void FUN_018e7d0c(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  char local_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  
  FUN_0190df5c(&local_30);
  uVar3 = local_2c;
  if (local_30 == '\x18') {
    uVar1 = CONCAT11(uStack_2d,uStack_2e);
    FUN_019310dc(&local_30,param_2);
    if (local_30 == '\x18') {
      uVar2 = CONCAT22(uStack_2a,local_2c);
      FUN_0191d6e4(&local_30,param_2);
      if (CONCAT13(uStack_2d,CONCAT12(uStack_2e,CONCAT11(uStack_2f,local_30))) != 1) {
        *param_1 = CONCAT22(uStack_2a,local_2c);
        param_1[1] = CONCAT22(uStack_26,local_28);
        param_1[2] = uStack_24;
        param_1[4] = uVar2;
        *(undefined2 *)((int)param_1 + 0xe) = uVar3;
        *(undefined2 *)(param_1 + 3) = uVar1;
        return;
      }
      param_1[1] = CONCAT22(uStack_2a,local_2c);
      param_1[2] = CONCAT22(uStack_26,local_28);
      param_1[3] = uStack_24;
      goto LAB_018e7dd8;
    }
    *(undefined1 *)((int)param_1 + 7) = uStack_2d;
    *(ushort *)((int)param_1 + 5) = CONCAT11(uStack_2e,uStack_2f);
    param_1[2] = CONCAT22(uStack_2a,local_2c);
    param_1[3] = CONCAT22(uStack_26,local_28);
  }
  else {
    *(uint *)((int)param_1 + 10) = CONCAT22(local_28,uStack_2a);
    *(undefined2 *)((int)param_1 + 0xe) = uStack_26;
    *(uint *)((int)param_1 + 6) = CONCAT22(local_2c,CONCAT11(uStack_2d,uStack_2e));
    *(undefined1 *)((int)param_1 + 5) = uStack_2f;
  }
  *(char *)(param_1 + 1) = local_30;
LAB_018e7dd8:
  *param_1 = 0x80000001;
  return;
}

