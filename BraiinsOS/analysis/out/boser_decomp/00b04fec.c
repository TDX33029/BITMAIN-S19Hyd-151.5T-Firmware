// FUN_00b04fec @ 00b04fec size=84 calls_out=1 calls_in=0
// strings: mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs

bool FUN_00b04fec(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_3 == 0xc) {
    pcVar2 = 
    "mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs"
    ;
    uVar3 = 0xc;
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    pcVar2 = &DAT_00569338;
    uVar3 = 0x10;
  }
  iVar1 = thunk_FUN_01bed842(param_2,pcVar2,uVar3);
  return iVar1 == 0;
}

