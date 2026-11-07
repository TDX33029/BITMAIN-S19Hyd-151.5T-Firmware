// FUN_0104b93c @ 0104b93c size=76 calls_out=1 calls_in=1
// strings: 

void FUN_0104b93c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ushort local_12;
  
  local_12 = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = FUN_0105dce0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar2,
                       &local_12,2);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x14) = iVar2 + 2;
  }
  return;
}

