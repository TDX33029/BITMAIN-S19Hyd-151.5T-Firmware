// FUN_0093e56c @ 0093e56c size=196 calls_out=1 calls_in=0
// strings: 

bool FUN_0093e56c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((((*(char *)(param_2 + 0x30) == *(char *)(param_1 + 0x24)) &&
       (*(int *)(param_1 + 8) == *(int *)(param_2 + 0x14))) &&
      (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x10)),
      iVar1 == 0)) &&
     (((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x20) &&
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x1c)),
       iVar1 == 0)) &&
      ((bVar2 = *(int *)(param_1 + 0x18) == -0x80000000 && *(int *)(param_2 + 0x24) == -0x80000000,
       *(int *)(param_1 + 0x18) != -0x80000000 && *(int *)(param_2 + 0x24) != -0x80000000 &&
       (bVar2 = false, *(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x2c))))))) {
    iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x28));
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

