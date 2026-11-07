// FUN_0139f504 @ 0139f504 size=260 calls_out=4 calls_in=2
// strings: assertion failed: N::next(&stream).is_none()event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:285event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:263event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:275event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:260

void FUN_0139f504(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  
  if (*param_2 != 1) {
    *param_1 = 0;
    return;
  }
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  iVar1 = param_2[3];
  uVar7 = *(undefined4 *)(param_3 + 0x34);
  bVar9 = iVar4 == iVar1;
  uVar6 = *(undefined4 *)(param_3 + 0x38);
  if (bVar9) {
    iVar1 = param_2[4];
  }
  if (bVar9 && iVar5 == iVar1) {
    iVar1 = FUN_0139f0d0(uVar7,uVar6,iVar4,iVar5);
    if (*(int *)(iVar1 + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: N::next(&stream).is_none()event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:285event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:263event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:275event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:260"
                   ,0x2c,&DAT_01cedcec);
    }
    *param_2 = 0;
  }
  else {
    iVar1 = FUN_0139f148(uVar7,uVar6,iVar4,iVar5);
    iVar8 = *(int *)(iVar1 + 0x5c);
    iVar2 = *(int *)(iVar1 + 0x60);
    uVar3 = *(uint *)(iVar1 + 0x58);
    *(undefined4 *)(iVar1 + 0x58) = 0;
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01cedcdc);
    }
    uVar7 = *(undefined4 *)(param_3 + 0x34);
    uVar6 = *(undefined4 *)(param_3 + 0x38);
    *param_2 = 1;
    param_2[1] = iVar8;
    param_2[2] = iVar2;
  }
  iVar1 = FUN_0139f148(uVar7,uVar6,iVar4,iVar5);
  *(undefined1 *)(iVar1 + 0xe1) = 0;
  *param_1 = param_3;
  param_1[1] = iVar4;
  param_1[2] = iVar5;
  return;
}

