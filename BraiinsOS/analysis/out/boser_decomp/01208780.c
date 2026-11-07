// FUN_01208780 @ 01208780 size=68 calls_out=2 calls_in=1
// strings: uname syscall failed

void FUN_01208780(undefined4 param_1)

{
  undefined1 auStack_34 [24];
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_019b9f84(auStack_34);
  local_18 = 0x14;
  local_1c = "uname syscall failed";
  local_14 = param_1;
  FUN_0120f2c8(&local_1c,auStack_34);
  return;
}

