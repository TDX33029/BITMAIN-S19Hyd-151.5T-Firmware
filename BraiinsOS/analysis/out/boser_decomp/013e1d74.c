// FUN_013e1d74 @ 013e1d74 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_013e1d74(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint local_14;
  
  local_14 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
             param_2 >> 0x18;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = FUN_013d79b4(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar2,
                       &local_14,4);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x14) = iVar2 + 4;
  }
  return;
}

