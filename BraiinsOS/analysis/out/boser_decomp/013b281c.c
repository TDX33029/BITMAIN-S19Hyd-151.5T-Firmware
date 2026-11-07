// FUN_013b281c @ 013b281c size=516 calls_out=2 calls_in=0
// strings: Indicesevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:928 | Indicesevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:928

undefined4 FUN_013b281c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  piVar4 = (int *)*param_1;
  if (*piVar4 != 1) {
                    /* WARNING: Could not recover jumptable at 0x013b2888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar2;
  }
  iVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar3 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar3)(iVar5,&DAT_0056f9dc,4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(iVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = piVar4 + 2;
    iVar1 = FUN_01303d90(param_2,
                         "Indicesevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:928"
                         ,7,&DAT_0056e2e0,4,piVar4 + 1,&LAB_01a6a304,&DAT_0056e0f8,4,&local_34,
                         &LAB_006616e8);
    if (iVar1 != 0) {
      return 1;
    }
    iVar5 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar1 = (*pcVar3)(iVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_35 = 1;
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_24 = piVar4 + 2;
    local_30 = &DAT_01ce45f8;
    local_34 = &local_44;
    local_44 = iVar5;
    local_40 = iVar6;
    iVar1 = FUN_01303d90(&local_34,
                         "Indicesevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:928"
                         ,7,&DAT_0056e2e0,4,piVar4 + 1,&LAB_01a6a304,&DAT_0056e0f8,4,&local_24,
                         &LAB_006616e8);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar2 = (*pcVar3)(iVar5,&DAT_0053341b,1);
  return uVar2;
}

