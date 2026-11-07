// FUN_012b0c50 @ 012b0c50 size=80 calls_out=0 calls_in=1
// strings: 

uint FUN_012b0c50(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_2 + 0x11c);
  if ((uVar2 & 4) != 0) {
    return 0;
  }
  if ((uVar2 & 0x2000) == 0) {
    uVar1 = 1;
    if (((uVar2 & 0x1000) != 0) && (*param_1 == '\0')) {
      uVar1 = (uVar2 & 0xf) >> 3;
    }
  }
  else {
    bVar3 = (uVar2 & 0x1000) == 0;
    uVar1 = (uint)bVar3;
    if (!bVar3 || *param_1 != '\0') {
      return (uVar2 & 0xf) >> 3;
    }
  }
  return uVar1;
}

