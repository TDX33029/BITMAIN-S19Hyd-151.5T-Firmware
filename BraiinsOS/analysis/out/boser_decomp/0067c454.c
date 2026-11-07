// FUN_0067c454 @ 0067c454 size=128 calls_out=1 calls_in=1
// strings: 

void FUN_0067c454(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 local_13;
  undefined1 local_11;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 3) = 3;
  }
  else {
    cVar1 = *(char *)(param_2 + 0xc);
    if (cVar1 != '\x02') {
      FUN_0067e188(&local_20);
      local_30 = local_20;
      uStack_2c = uStack_1c;
      uStack_28 = uStack_18;
      local_32 = local_11;
      local_34 = local_13;
    }
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    *(char *)(param_1 + 3) = cVar1;
    *(undefined2 *)((int)param_1 + 0xd) = local_34;
    *(undefined1 *)((int)param_1 + 0xf) = local_32;
  }
  return;
}

