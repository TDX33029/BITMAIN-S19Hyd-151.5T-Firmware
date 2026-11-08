// FUN_0191ecdc @ 0191ecdc size=200 calls_out=3 calls_in=2
// strings: 

void FUN_0191ecdc(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int local_94;
  int *local_90;
  undefined1 local_8c;
  undefined2 local_1c;
  
  iVar1 = FUN_018ed844(*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_3 + 0x24c) + 1;
    if (*(int *)(param_3 + 0x24c) == -1) {
      iVar1 = -1;
    }
    *(int *)(param_3 + 0x24c) = iVar1;
    local_94 = param_3 + 0x38;
    local_90 = (int *)0x0;
    if (*(int *)(param_3 + 0x228) != -0x80000000) {
      local_90 = (int *)(param_3 + 0x228);
    }
    local_8c = *(undefined1 *)(param_3 + 0x259);
    FUN_0191f448(param_1,param_2,&local_94,param_4);
  }
  else {
    local_1c = 4;
    local_94 = -0x7fffffff;
    local_90 = (int *)0xd0001;
    FUN_018f1fc4(param_3,&local_94,*(char *)(param_3 + 0x31) == '\x02');
    *(undefined1 *)(param_1 + 1) = 6;
    *(undefined1 *)(param_3 + 0x255) = 1;
    *param_1 = &DAT_8000001c;
  }
  return;
}

