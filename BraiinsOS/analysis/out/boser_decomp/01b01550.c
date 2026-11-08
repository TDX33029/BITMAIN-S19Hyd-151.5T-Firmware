// FUN_01b01550 @ 01b01550 size=448 calls_out=5 calls_in=1
// strings: crypto_md32_final | /aws-lc/crypto/decrepit/ripemd/../../fipsmodule/digest/md32_common.h | n < block_size

undefined8 FUN_01b01550(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_28;
  int local_24;
  
  uVar1 = param_2[0x17];
  local_24 = DAT_01d53560;
  if (0x3f < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("n < block_size",
                 "/aws-lc/crypto/decrepit/ripemd/../../fipsmodule/digest/md32_common.h",0x78,
                 "crypto_md32_final");
  }
  puVar3 = param_2 + 7;
  uVar4 = param_2[6];
  uVar2 = param_2[5];
  *(undefined1 *)((int)puVar3 + uVar1) = 0x80;
  uVar1 = uVar1 + 1;
  if (0x38 < uVar1) {
    FUN_01aff988((int)puVar3 + uVar1,0x40 - uVar1);
    FUN_01affac0(param_2,puVar3,1);
    uVar1 = 0;
  }
  FUN_01aff988((int)puVar3 + uVar1,0x38 - uVar1);
  local_28 = uVar2;
  FUN_01aff9c4(param_2 + 0x15,&local_28,4);
  local_28 = uVar4;
  FUN_01aff9c4(param_2 + 0x16,&local_28,4);
  FUN_01affac0(param_2,puVar3,1);
  param_2[0x17] = 0;
  FUN_01aff988(puVar3,0x40);
  local_28 = *param_2;
  FUN_01aff9c4(param_1,&local_28,4);
  local_28 = param_2[1];
  FUN_01aff9c4(param_1 + 4,&local_28);
  local_28 = param_2[2];
  FUN_01aff9c4(param_1 + 8,&local_28,4);
  local_28 = param_2[3];
  FUN_01aff9c4(param_1 + 0xc,&local_28,4);
  local_28 = param_2[4];
  FUN_01aff9c4(param_1 + 0x10,&local_28,4);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 1;
}

