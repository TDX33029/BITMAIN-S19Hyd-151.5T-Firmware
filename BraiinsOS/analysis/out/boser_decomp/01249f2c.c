// FUN_01249f2c @ 01249f2c size=264 calls_out=2 calls_in=1
// strings: Hashes | KiloHashes | MegaHashes | GigaHashes | TeraHashes

void FUN_01249f2c(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 10) {
    iVar2 = thunk_FUN_01bed842(param_2,"KiloHashes",10);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"MegaHashes",10);
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      else {
        iVar2 = thunk_FUN_01bed842(param_2,"GigaHashes",10);
        if (iVar2 == 0) {
          uVar1 = 3;
        }
        else {
          iVar2 = thunk_FUN_01bed842(param_2,"TeraHashes",10);
          if (iVar2 != 0) goto LAB_0124a010;
          uVar1 = 4;
        }
      }
    }
    param_1[1] = uVar1;
    uVar1 = 0;
  }
  else {
    if ((param_3 == 6) && (iVar2 = thunk_FUN_01bed842(param_2,"Hashes",6), iVar2 == 0)) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_0124a008;
    }
LAB_0124a010:
    uVar3 = FUN_01265080(param_2,param_3,&DAT_01c24d9c,5);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar1 = 1;
  }
LAB_0124a008:
  *param_1 = uVar1;
  return;
}

