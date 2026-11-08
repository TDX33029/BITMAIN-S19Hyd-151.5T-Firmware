// FUN_0168105c @ 0168105c size=116 calls_out=1 calls_in=2
// strings: 

void FUN_0168105c(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  uint *local_18;
  code *local_14;
  uint *local_10;
  code *local_c;
  
  uStack_20 = *(uint *)(param_1 + 0x14);
  local_1c = *(uint *)(param_1 + 0xc);
  bVar2 = uStack_20 + 1 <= param_2;
  bVar1 = param_2 == uStack_20 + 1;
  if (!bVar2 || bVar1) {
    bVar2 = local_1c <= uStack_20;
    bVar1 = uStack_20 == local_1c;
  }
  if (bVar2 && !bVar1) {
    local_14 = FUN_0065fd28;
    local_18 = &uStack_24;
    local_c = FUN_012fd02c;
    local_10 = &local_1c;
    uStack_24 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005a4e9e,&local_18,&DAT_01d08154);
  }
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}

