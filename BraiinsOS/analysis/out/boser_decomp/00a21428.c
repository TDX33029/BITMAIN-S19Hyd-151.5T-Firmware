// FUN_00a21428 @ 00a21428 size=112 calls_out=1 calls_in=13
// strings: unspecified save actionevent open/boser/boser/src/api/grpc.rs:73event open/boser/boser/src/api/grpc.rs:248event open/boser/boser/src/api/grpc.rs:233

void FUN_00a21428(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  switch(param_2) {
  default:
    FUN_01a71aac(param_1,3,
                 "unspecified save actionevent open/boser/boser/src/api/grpc.rs:73event open/boser/boser/src/api/grpc.rs:248event open/boser/boser/src/api/grpc.rs:233"
                 ,0x17);
    return;
  case 1:
    uVar1 = 0;
    *param_1 = 3;
    param_1[1] = 0;
    break;
  case 2:
    *param_1 = 3;
    param_1[1] = 0;
    uVar1 = 1;
    break;
  case 3:
    *param_1 = 3;
    param_1[1] = 0;
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}

