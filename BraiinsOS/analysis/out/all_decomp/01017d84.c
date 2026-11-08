// FUN_01017d84 @ 01017d84 size=200 calls_out=2 calls_in=3
// strings: stream closed because of a broken pipeh2::codec::framed_write/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/codec/framed_write.rsFramedWrite::bufferframeFramedWrite::flush

void FUN_01017d84(int param_1)

{
  int iVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  if (5 < *(byte *)(param_1 + 0x20)) {
    FUN_015e79d4(auStack_20,0xb,
                 "stream closed because of a broken pipeh2::codec::framed_write/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/codec/framed_write.rsFramedWrite::bufferframeFramedWrite::flush"
                 ,0x26);
    FUN_0102e79c(&local_38,auStack_20);
    *(undefined4 *)(param_1 + 0x20) = local_38;
    *(undefined4 *)(param_1 + 0x24) = uStack_34;
    *(undefined4 *)(param_1 + 0x28) = uStack_30;
    *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
    *(undefined4 *)(param_1 + 0x30) = uStack_28;
    *(undefined4 *)(param_1 + 0x34) = uStack_24;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 4))(*(undefined4 *)(param_1 + 0x44));
  }
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 4))(*(undefined4 *)(param_1 + 0x54));
  }
  iVar1 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01017e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))(*(undefined4 *)(param_1 + 0x5c));
  return;
}

