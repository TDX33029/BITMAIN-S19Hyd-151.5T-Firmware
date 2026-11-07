// FUN_014e6144 @ 014e6144 size=260 calls_out=4 calls_in=1
// strings: Odd number of digits | Invalid string lengthevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/record_data.rs:8

void FUN_014e6144(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_20;
  undefined4 local_1c;
  uint *local_18;
  code *local_14;
  undefined4 *local_10;
  code *local_c;
  
  local_2c = 1;
  local_28 = 0;
  iVar2 = param_1 - 0x10ffff;
  local_30 = (uint *)0x0;
  if (param_1 < 0x10ffff) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    local_10 = &local_1c;
    local_18 = &local_20;
    local_c = FUN_012fd02c;
    local_14 = FUN_012fa0d8;
    local_20 = param_1;
    local_1c = param_2;
    iVar2 = FUN_012fa178(&local_30,&DAT_01cfa1bc,&DAT_0057aa93,&local_18);
  }
  else {
    if (iVar2 == 1) {
      uVar3 = 0x14;
      pcVar1 = "Odd number of digits";
    }
    else {
      uVar3 = 0x15;
      pcVar1 = 
      "Invalid string lengthevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/record_data.rs:8"
      ;
    }
    iVar2 = FUN_005fdd28(&local_30,pcVar1,uVar3);
  }
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_18,&DAT_01cfa1d4,&DAT_01d30334);
  }
  local_18 = local_30;
  local_14 = (code *)local_2c;
  local_10 = (undefined4 *)local_28;
  FUN_01966564();
  return;
}

