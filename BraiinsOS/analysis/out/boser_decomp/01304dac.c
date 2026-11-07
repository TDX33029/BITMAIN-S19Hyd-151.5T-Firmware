// FUN_01304dac @ 01304dac size=208 calls_out=2 calls_in=12
// strings: 

void FUN_01304dac(undefined2 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 local_40;
  int local_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 local_1b;
  
  local_40 = param_2;
  local_3c = param_3;
  FUN_01304258(&local_28,&local_40);
  if ((char)local_28 == '\0') {
    FUN_013046c0(&local_28,&local_40);
    if ((char)local_28 == '\x01') {
      uVar2 = CONCAT13((undefined1)uStack_24,local_28._1_3_);
      local_28 = CONCAT13((undefined1)uStack_20,uStack_24._1_3_);
      uStack_24 = CONCAT13(uStack_1c,uStack_20._1_3_);
      if (local_3c == 0) {
        uStack_20 = local_1b;
        uVar1 = 1;
        goto LAB_01304e40;
      }
    }
  }
  else if (local_3c == 0) {
    uVar2 = CONCAT13((undefined1)uStack_24,local_28._1_3_);
    uVar1 = 0;
LAB_01304e40:
    *(undefined4 *)((int)param_1 + 1) = uVar2;
    *(undefined1 *)param_1 = uVar1;
    *(undefined4 *)((int)param_1 + 0xd) = uStack_20;
    *(undefined4 *)((int)param_1 + 9) = uStack_24;
    *(undefined4 *)((int)param_1 + 5) = local_28;
    return;
  }
  *param_1 = 2;
  return;
}

