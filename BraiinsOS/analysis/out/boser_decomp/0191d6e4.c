// FUN_0191d6e4 @ 0191d6e4 size=148 calls_out=2 calls_in=4
// strings: 

void FUN_0191d6e4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char local_1c;
  undefined2 local_1b;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_019310dc(&local_1c);
  if (local_1c == '\x18') {
    uVar2 = FUN_0192fac8(param_2,local_18);
    local_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 == 0) {
      local_14 = 0;
      param_1[1] = 0xb;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      param_1[1] = 0x80000000;
      param_1[2] = (int)uVar2;
    }
  }
  else {
    *(char *)(param_1 + 1) = local_1c;
    uVar1 = 1;
    *(undefined1 *)((int)param_1 + 7) = local_19;
    *(undefined2 *)((int)param_1 + 5) = local_1b;
    param_1[2] = local_18;
  }
  *param_1 = uVar1;
  param_1[3] = local_14;
  return;
}

