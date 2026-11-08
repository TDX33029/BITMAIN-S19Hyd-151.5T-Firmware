// FUN_013942ec @ 013942ec size=320 calls_out=2 calls_in=0
// strings: ParseU64Errorevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/ping.rs:88 | ParseU64Errorevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/ping.rs:88

undefined4 FUN_013942ec(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint *puVar4;
  int iVar5;
  uint *local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  if ((*param_1 & 1) == 0) {
    local_28 = param_1 + 2;
    uVar2 = FUN_013032f4(param_2,&DAT_0052e42c,2,&local_28,&LAB_015f5418);
  }
  else {
    puVar4 = (uint *)*param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(puVar4,&DAT_0052c2af,3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(puVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar3)(puVar4,
                        "ParseU64Errorevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/ping.rs:88"
                        ,0xd);
    }
    else {
      iVar1 = (*pcVar3)(puVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_20 = &local_19;
      local_19 = 1;
      local_28 = puVar4;
      local_24 = iVar5;
      iVar1 = FUN_01302620(&local_28,
                           "ParseU64Errorevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/ping.rs:88"
                           ,0xd);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01302620(&local_28,&DAT_005312e2,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = (*pcVar3)(puVar4,&DAT_0053341b,1);
  }
  return uVar2;
}

