// FUN_015bb0d4 @ 015bb0d4 size=208 calls_out=1 calls_in=1
// strings: 

uint FUN_015bb0d4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 7) {
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0040f9b1,7);
    if (iVar1 == 0) {
      return 0x207;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0040f9b8,7);
    uVar3 = 0;
    if (iVar1 == 0) {
      uVar3 = 7;
    }
  }
  else {
    uVar3 = 0;
    if (param_2 == 6) {
      iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0040f9f9,6);
      if (iVar1 == 0) {
        return 7;
      }
      iVar2 = thunk_FUN_016dd50a(param_1,&DAT_0040f9ff,6);
      iVar1 = 3;
      uVar3 = 0;
      if (iVar2 == 0) {
        iVar1 = 1;
        uVar3 = 7;
      }
      return uVar3 | iVar1 << 8;
    }
  }
  return uVar3 | 0x300;
}

