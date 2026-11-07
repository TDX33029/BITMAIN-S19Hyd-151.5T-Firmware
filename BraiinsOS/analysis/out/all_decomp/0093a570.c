// FUN_0093a570 @ 0093a570 size=216 calls_out=1 calls_in=2
// strings: Testboard braiins 1362-1x1 | Testboard braiins 1366-1x1 | Braiins Mini Miner BMM 100 | Braiins Mini Miner BMM 101 | Braiins Mini POC 1362-4x1

undefined4 FUN_0093a570(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x19) {
    iVar1 = thunk_FUN_016dd50a(param_1,"Braiins Mini POC 1362-4x1",0x19);
    uVar2 = 5;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    return uVar2;
  }
  if (param_2 != 0x1a) {
    return 5;
  }
  iVar1 = thunk_FUN_016dd50a(param_1,"Testboard braiins 1362-1x1",0x1a);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = thunk_FUN_016dd50a(param_1,"Testboard braiins 1366-1x1",0x1a);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = thunk_FUN_016dd50a(param_1,"Braiins Mini Miner BMM 100",0x1a);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = thunk_FUN_016dd50a(param_1,"Braiins Mini Miner BMM 101",0x1a);
  uVar2 = 5;
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  return uVar2;
}

