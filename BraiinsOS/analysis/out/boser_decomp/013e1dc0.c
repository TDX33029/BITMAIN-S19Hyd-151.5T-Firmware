// FUN_013e1dc0 @ 013e1dc0 size=76 calls_out=1 calls_in=6
// strings: 

void FUN_013e1dc0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ushort local_12;
  
  local_12 = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = FUN_013d79b4(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar2,
                       &local_12,2);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x14) = iVar2 + 2;
  }
  return;
}

