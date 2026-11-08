// FUN_0143f42c @ 0143f42c size=212 calls_out=3 calls_in=1
// strings: hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0143f42c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01aaaecc(DAT_01d4eb2c,param_1);
  iVar1 = DAT_01d4eb2c;
  if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
    local_20 = *(undefined4 *)(DAT_01d4eb2c + 0x14);
    local_1c = *(undefined4 *)(DAT_01d4eb2c + 0x18);
    local_24 = 2;
    DataMemoryBarrier(0xb);
    puVar4 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar4 = &DAT_01cfc5e0;
    }
    pcVar3 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar4[3])(pcVar3,&local_24);
    if (iVar2 != 0) {
      FUN_01aaa328(iVar1,pcVar3,puVar4[4],&local_24,param_1);
    }
  }
  return;
}

