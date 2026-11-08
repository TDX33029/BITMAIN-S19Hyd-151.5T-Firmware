// FUN_018f2d24 @ 018f2d24 size=92 calls_out=1 calls_in=7
// strings: 

void FUN_018f2d24(int param_1)

{
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_c;
  
  if (*(char *)(param_1 + 0x255) == '\0') {
    *(undefined2 *)(param_1 + 0x255) = 0x101;
    local_c = 4;
    local_80 = 0;
    local_84 = 0x80000001;
    FUN_018f1fc4(param_1,&local_84,*(char *)(param_1 + 0x31) == '\x02');
    return;
  }
  return;
}

