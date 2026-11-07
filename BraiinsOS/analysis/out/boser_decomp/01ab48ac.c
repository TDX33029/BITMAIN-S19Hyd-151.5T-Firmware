// FUN_01ab48ac @ 01ab48ac size=224 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01ab48ac(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2c [5];
  
  if (((*(int *)(param_1 + 0x1c) == -0x80000000) ||
      ((uVar3 = 0, *(uint *)(param_1 + 0x24) <= *(uint *)(param_2 + 0x18) &&
       (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x14)),
       iVar2 == 0)))) &&
     ((*(int *)(param_1 + 0x10) == -0x80000000 ||
      ((uVar3 = 0, *(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x10) &&
       (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0xc)),
       iVar2 == 0)))))) {
    uVar3 = 1;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = *(int *)(param_1 + 0xc) << 5;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + 0x18);
      do {
        FUN_01abb514(local_2c,param_2 + 0x1c,puVar1[-1],*puVar1);
        if (local_2c[0] == 0) {
          return 0;
        }
        puVar1 = puVar1 + 8;
        iVar2 = iVar2 + -0x20;
      } while (iVar2 != 0);
    }
  }
  return uVar3;
}

