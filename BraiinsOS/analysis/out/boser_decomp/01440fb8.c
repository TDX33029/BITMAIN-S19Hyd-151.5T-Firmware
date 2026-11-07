// FUN_01440fb8 @ 01440fb8 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_01440fb8(int *param_1,int param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  
  iVar1 = 0;
  do {
    FUN_019abc84(&local_28,*(undefined4 *)(param_2 + iVar1),((undefined4 *)(param_2 + iVar1))[1]);
    if (local_28 == 0) {
      *param_1 = local_24;
      param_1[1] = local_20;
      param_1[2] = iStack_1c;
      return;
    }
    if (local_24 != -0x80000000) {
      FUN_019bb7e0(local_24,local_20);
    }
    iVar1 = iVar1 + 8;
  } while (iVar1 != 0x10);
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}

