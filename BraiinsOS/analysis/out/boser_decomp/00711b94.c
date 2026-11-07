// FUN_00711b94 @ 00711b94 size=140 calls_out=7 calls_in=9
// strings: 

void FUN_00711b94(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  FUN_0134c054(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),4,4);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  FUN_01a646b8(param_1 + 0x74);
  FUN_0070e718(param_1 + 0x80);
  FUN_00708a8c(param_1 + 8);
  FUN_0070899c(param_1 + 0x28);
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

