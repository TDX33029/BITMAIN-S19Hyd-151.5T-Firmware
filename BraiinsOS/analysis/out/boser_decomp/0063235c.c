// FUN_0063235c @ 0063235c size=368 calls_out=2 calls_in=0
// strings: Parse | VariantNotFound | sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254 | VariantNotFound

undefined4 FUN_0063235c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  if (*param_1 == -0x80000000) {
    piVar4 = (int *)*param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(piVar4,"Parse",5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(piVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar3)(piVar4,"VariantNotFound",0xf);
    }
    else {
      iVar1 = (*pcVar3)(piVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = piVar4;
      local_2c = iVar5;
      iVar1 = FUN_01302620(&local_30,"VariantNotFound",0xf);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = (*pcVar3)(piVar4,&DAT_0053341b,1);
  }
  else {
    local_30 = param_1 + 3;
    uVar2 = FUN_01303d90(param_2,&DAT_00534240,2,&DAT_0056ef14,4,param_1,&DAT_019ba4dc,
                         "sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254"
                         ,6,&local_30,&LAB_01936e20);
  }
  return uVar2;
}

