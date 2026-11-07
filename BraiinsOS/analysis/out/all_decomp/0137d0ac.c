// FUN_0137d0ac @ 0137d0ac size=120 calls_out=1 calls_in=2
// strings: 

void FUN_0137d0ac(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  uint *local_18;
  code *local_14;
  uint *local_10;
  undefined1 *local_c;
  
  local_1c = *(uint *)(param_1 + 0xc);
  bVar2 = param_3 + 1 <= param_2;
  bVar1 = param_2 == param_3 + 1;
  if (!bVar2 || bVar1) {
    bVar2 = local_1c <= param_3;
    bVar1 = param_3 == local_1c;
  }
  if (bVar2 && !bVar1) {
    local_14 = FUN_005ffff4;
    local_18 = &uStack_24;
    local_c = &LAB_00fac484;
    local_10 = &local_1c;
    uStack_24 = param_2;
    uStack_20 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057a181,&local_18,&DAT_01893ee0);
  }
  *(uint *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x14) = param_3;
  return;
}

