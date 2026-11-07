// FUN_01396394 @ 01396394 size=212 calls_out=3 calls_in=1
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01396394(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  
  FUN_01aaaecc(&DAT_01ced004,param_1);
  if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
    local_20 = 
    "h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs"
    ;
    local_1c = 0x18;
    local_24 = 5;
    DataMemoryBarrier(0xb);
    puVar3 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar3 = &DAT_01cfc5e0;
    }
    pcVar2 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar1 = (*(code *)puVar3[3])(pcVar2,&local_24);
    if (iVar1 != 0) {
      FUN_01aaa328(&DAT_01ced004,pcVar2,puVar3[4],&local_24,param_1);
    }
  }
  return;
}

