// FUN_012610cc @ 012610cc size=176 calls_out=3 calls_in=2
// strings: 

void FUN_012610cc(int param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  char local_1b;
  undefined2 local_1a;
  char local_18 [4];
  undefined4 local_14;
  
  local_1b = *(char *)(param_1 + 0x21);
  if (local_1b == '\x02') {
    local_20 = 0x10001;
    local_1c = 1;
    local_24 = 0x1b6;
    local_1b = '\0';
    local_28 = 0;
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x14);
    local_24 = *(undefined4 *)(param_1 + 0x18);
    local_20 = *(undefined4 *)(param_1 + 0x1c);
    local_1c = *(undefined1 *)(param_1 + 0x20);
    local_1a = *(undefined2 *)(param_1 + 0x22);
  }
  FUN_019a581c(local_18,&local_28,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  if (local_18[0] == '\x04') {
  }
  else {
    FUN_0069603c(local_18);
    local_14 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x2c) != -1) {
    FUN_01bf01d6();
  }
  *(undefined4 *)(param_1 + 0x2c) = local_14;
  return;
}

