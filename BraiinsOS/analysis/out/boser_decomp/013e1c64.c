// FUN_013e1c64 @ 013e1c64 size=72 calls_out=1 calls_in=3
// strings: 

void FUN_013e1c64(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_11;
  
  iVar2 = *(int *)(param_1 + 0x14);
  local_11 = param_2;
  iVar1 = FUN_013d79b4(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar2,
                       &local_11,1);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x14) = iVar2 + 1;
  }
  return;
}

