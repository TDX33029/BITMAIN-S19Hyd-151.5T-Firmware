// FUN_000637a4 @ 000637a4  size=856  callers=2
// program: bmminer


int FUN_000637a4(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  char acStack_824 [2048];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  local_1c = 0;
  local_20 = 0;
  local_14 = 0;
  local_18 = 0;
  local_c = 0;
  local_24 = 0;
  local_10 = 0;
  iVar3 = FUN_000632ec(param_1,&local_1c,&local_20);
  if (iVar3 == 0) {
    local_14 = param_3 & 0x3ff | 0x80000000;
    FUN_000612bc(local_1c,local_14);
    local_18 = param_3 >> 2;
    for (local_c = 0; local_c < local_18; local_c = local_c + 1) {
      FUN_00061240(local_20,&local_24);
      *(char *)(param_2 + local_c * 4) = (char)((uint)local_24 >> 0x18);
      *(char *)(param_2 + local_c * 4 + 1) = (char)((uint)local_24 >> 0x10);
      *(char *)(param_2 + local_c * 4 + 2) = (char)((uint)local_24 >> 8);
      *(char *)(param_2 + local_c * 4 + 3) = (char)local_24;
    }
    local_10 = local_18 << 2;
    local_18 = param_3 & 3;
    if (local_18 != 0) {
      FUN_00061240(local_20,&local_24);
      uVar1 = (undefined1)((uint)local_24 >> 0x18);
      uVar2 = (undefined1)((uint)local_24 >> 0x10);
      if (local_18 == 2) {
        *(undefined1 *)(param_2 + local_c * 4) = uVar1;
        *(undefined1 *)(param_2 + local_c * 4 + 1) = uVar2;
        local_10 = local_10 + 2;
      }
      else if (local_18 == 3) {
        *(undefined1 *)(param_2 + local_c * 4) = uVar1;
        *(undefined1 *)(param_2 + local_c * 4 + 1) = uVar2;
        *(char *)(param_2 + local_c * 4 + 2) = (char)((uint)local_24 >> 8);
        local_10 = local_10 + 3;
      }
      else if (local_18 == 1) {
        *(undefined1 *)(param_2 + local_c * 4) = uVar1;
        local_10 = local_10 + 1;
      }
      else {
        snprintf(acStack_824,0x800,"%s: the uart%d left data is 4*N length, error!!!\n",
                 "read_uart_data_in_fpga",param_1);
        FUN_0004948c(0,acStack_824,0);
      }
    }
  }
  else {
    snprintf(acStack_824,0x800,"get_read_address_info error, chain_id = %d\n",param_1);
    FUN_0004948c(0,acStack_824,0);
    local_10 = 0;
  }
  return local_10;
}

