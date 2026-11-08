// FUN_01b70ea8 @ 01b70ea8 size=68 calls_out=2 calls_in=1
// strings: 

uint FUN_01b70ea8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_01b70cf4();
  uVar1 = (uVar1 ^ 1) & 1;
  iVar2 = FUN_01b70d9c(param_1 + 8);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  return uVar1 ^ 1;
}

