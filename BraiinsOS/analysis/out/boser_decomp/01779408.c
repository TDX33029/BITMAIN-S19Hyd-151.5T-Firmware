// FUN_01779408 @ 01779408 size=816 calls_out=7 calls_in=2
// strings: hyper::proto::h1::iobuf.len/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:603event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:330event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:326event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:275event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:348event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:354event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:233event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:211event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:256event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/decode.rs:254 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_01779408(int param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *local_cc;
  int local_c8;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x017795e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_017795e8 + *(int *)(&DAT_017795e8 + *param_2 * 4)))();
    return;
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4f0dc - 1 < 2 ||
       ((DAT_01d4f0dc != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4f0d4), cVar2 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d4f0d4), iVar4 != 0)))) {
    uVar5 = *(uint *)(DAT_01d4f0d4 + 0x20);
    if (1 < uVar5) {
      FUN_0170f924(&local_68,param_1 + 0x18);
      FUN_017c4408(&local_68);
      if (2 < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x01779700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_01779704 + *(int *)(&DAT_01779704 + *param_2 * 4)))();
        return;
      }
    }
LAB_01779964:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1a280);
  }
  iVar4 = DAT_01d4f0d4;
  if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
    local_3c = *(undefined4 *)(DAT_01d4f0d4 + 0x14);
    local_38 = *(undefined4 *)(DAT_01d4f0d4 + 0x18);
    local_40 = 5;
    DataMemoryBarrier(0xb);
    puVar6 = DAT_01d4edc8;
    pcVar1 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      puVar6 = &DAT_01cfc5e0;
      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar6[3])(pcVar1,&local_40);
    if (iVar3 != 0) {
      uVar5 = *(uint *)(DAT_01d4f0d4 + 0x20);
      if (uVar5 != 0) {
        local_cc = pcVar1;
        local_c8 = iVar4;
      }
      if (1 < uVar5) {
        FUN_0170f924(&local_68,param_1 + 0x18);
        FUN_017c4408(&local_68);
        if (2 < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x017795b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_017795bc + *(int *)(&DAT_017795bc + *param_2 * 4)))(local_c8,local_cc);
          return;
        }
      }
      goto LAB_01779964;
    }
  }
  local_68 = *param_2;
  iStack_64 = param_2[1];
  iStack_60 = param_2[2];
  iStack_5c = param_2[3];
  iStack_58 = param_2[4];
  local_54 = param_2[5];
  iStack_50 = param_2[6];
  iStack_4c = param_2[7];
  iStack_48 = param_2[8];
  iStack_44 = param_2[9];
  FUN_017e2eac(param_1 + 0x18);
  return;
}

