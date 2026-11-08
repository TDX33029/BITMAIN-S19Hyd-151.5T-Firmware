// FUN_007aaef8 @ 007aaef8 size=92 calls_out=2 calls_in=3
// strings: 

void FUN_007aaef8(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_1c [3];
  
  if (*param_3 == '\x04') {
    *param_1 = 0x80000007;
  }
  else {
    uVar2 = *(undefined4 *)param_3;
    uVar1 = *(undefined4 *)(param_3 + 4);
    FUN_007a8c6c(local_1c);
    if (local_1c[0] != -0x7ffffff9) {
      FUN_007a90c8(local_1c);
    }
    param_1[2] = uVar1;
    *param_1 = 0x80000001;
    param_1[1] = uVar2;
  }
  return;
}

