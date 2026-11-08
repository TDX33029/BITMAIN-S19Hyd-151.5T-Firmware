// FUN_00a887bc @ 00a887bc size=52 calls_out=1 calls_in=0
// strings: 

uint FUN_00a887bc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x408);
  uVar1 = FUN_01ab69e4();
  if (uVar1 < uVar2) {
    uVar1 = uVar2;
  }
  if ((*(char *)(param_1 + 0x4b8) == '\0') && (*(char *)(param_1 + 0x4b9) != '\0')) {
    uVar1 = 6;
  }
  return uVar1;
}

