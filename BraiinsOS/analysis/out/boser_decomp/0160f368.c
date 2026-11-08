// FUN_0160f368 @ 0160f368 size=128 calls_out=1 calls_in=4
// strings: 

void FUN_0160f368(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  int *local_10;
  code *local_c;
  
  if (param_3 == 6) {
    iVar1 = 0;
    local_18 = 0;
    local_1c = 0;
    do {
      *(undefined1 *)((int)&local_1c + iVar1) = *(undefined1 *)(param_2 + iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 6);
    param_1[1] = local_1c;
    *(undefined2 *)(param_1 + 2) = local_18;
    *param_1 = 0x80000000;
  }
  else {
    local_10 = &local_14;
    local_c = FUN_012fd02c;
    local_14 = param_3;
    FUN_00664898(param_1,&DAT_005872bd,&local_10);
  }
  return;
}

