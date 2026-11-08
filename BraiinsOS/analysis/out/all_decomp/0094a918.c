// FUN_0094a918 @ 0094a918 size=304 calls_out=2 calls_in=1
// strings: Hashes | KiloHashes | MegaHashes | GigaHashes | TeraHashesTunerError

void FUN_0094a918(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 10) {
    iVar1 = thunk_FUN_016dd50a(param_2,"KiloHashes",10);
    if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"MegaHashes",10);
    if (iVar1 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"GigaHashes",10);
    if (iVar1 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"TeraHashesTunerError",10);
    if (iVar1 == 0) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 6) && (iVar1 = thunk_FUN_016dd50a(param_2,"Hashes",6), iVar1 == 0)) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  uVar2 = FUN_00953d54(param_2,param_3,&DAT_018776bc,5);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

