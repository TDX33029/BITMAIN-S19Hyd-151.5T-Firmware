// FUN_010c8558 @ 010c8558 size=484 calls_out=5 calls_in=1
// strings: domain is valid Urievent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:743hyper_util::client::legacy::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:918

void FUN_010c8558(char *param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char local_ec;
  char local_eb;
  undefined1 local_ea;
  undefined1 auStack_c0 [48];
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_84 [2];
  char local_7c;
  char local_7b;
  undefined1 local_7a;
  char local_50;
  char local_4f;
  char local_4e;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  local_38 = 0;
  local_48 = 0;
  local_50 = '\x03';
  FUN_010ca804(&local_7c,&local_50,*param_2,param_2[1]);
  cVar2 = local_7c;
  uVar1 = (uint)&local_7c | 1;
  FUN_016dd1aa(auStack_c0,uVar1,0x2b);
  local_90 = param_2[2];
  uStack_8c = param_2[3];
  uStack_88 = param_2[4];
  auStack_84[0] = param_2[5];
  if (cVar2 == '\x04') {
    (**(code **)(local_90 + 0x10))(auStack_84,uStack_8c,uStack_88);
    cVar2 = '\x04';
  }
  else {
    uVar3 = (uint)&local_50 | 1;
    FUN_016dd1aa(uVar3,uVar1,0x2b);
    local_50 = cVar2;
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(&uStack_3c,local_44,local_40);
    }
    cVar2 = local_50;
    local_48 = param_2[2];
    local_44 = param_2[3];
    local_40 = param_2[4];
    uStack_3c = param_2[5];
    FUN_016dd1aa(auStack_c0,uVar3,0x2b);
  }
  local_50 = cVar2;
  FUN_016dd1aa((uint)&local_50 | 1,auStack_c0,0x2b);
  FUN_010ca624(&local_ec,&local_50,&DAT_00418645);
  if (local_ec != '\x04') {
    FUN_016dd1aa((uint)&local_7c | 3,(uint)&local_ec | 3,0x29);
    local_7a = local_ea;
    local_7b = local_eb;
    local_7c = local_ec;
    FUN_010a2fe8(&local_50,&local_7c);
    cVar2 = local_50;
    if (local_50 != '\x03') {
      FUN_016dd1aa(auStack_c0,(uint)&local_50 | 3,0x29);
      param_1[2] = local_4e;
      param_1[1] = local_4f;
      *param_1 = cVar2;
      FUN_016dd1aa(param_1 + 3,auStack_c0,0x29);
      return;
    }
    local_eb = '\x03';
  }
  local_50 = local_eb;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8("domain is valid Urievent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:743hyper_util::client::legacy::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:918"
               ,0x13,&local_50,&DAT_018a44c4,&DAT_018850d0);
}

