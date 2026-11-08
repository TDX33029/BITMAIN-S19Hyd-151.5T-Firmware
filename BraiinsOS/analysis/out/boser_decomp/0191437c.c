// FUN_0191437c @ 0191437c size=172 calls_out=1 calls_in=0
// strings: post_quantum_first | classical_share_len | post_quantum_client_share_len | post_quantum_server_share_len

void FUN_0191437c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_24;
  
  iVar1 = *param_1;
  local_24 = iVar1 + 0xc;
  FUN_01303f28(param_2,&DAT_005258f3,6,"classical_share_len",0x13,iVar1,&LAB_01a6a304,
               "post_quantum_client_share_len",0x1d,iVar1 + 4,&LAB_01a6a304,
               "post_quantum_server_share_len",0x1d,iVar1 + 8,&LAB_01a6a304,"post_quantum_first",
               0x12,&local_24,&LAB_0164c854);
  return;
}

