// FUN_015bb4d4 @ 015bb4d4 size=120 calls_out=1 calls_in=1
// strings: 

uint FUN_015bb4d4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 6) {
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_0040fa05,6);
    iVar1 = 5;
    uVar3 = 0;
    if (iVar2 == 0) {
      iVar1 = 1;
      uVar3 = 7;
    }
    return uVar3 | iVar1 << 8;
  }
  if (param_2 != 10) {
    return 0x500;
  }
  iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0040fa0b,10);
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = 7;
    iVar1 = 0;
  }
  else {
    iVar1 = 5;
  }
  return uVar3 | iVar1 << 8;
}

