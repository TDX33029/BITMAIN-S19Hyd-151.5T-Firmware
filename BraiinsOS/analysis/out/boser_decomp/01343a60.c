// FUN_01343a60 @ 01343a60 size=156 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_01343a60(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      uVar1 = (uint)*(byte *)(param_1 + uVar2);
      if (uVar1 == 0x25) {
        if (param_2 <= uVar2 + 2) {
          return 0;
        }
        iVar3 = 3;
        if (((&DAT_00451b67)[*(byte *)(param_1 + uVar2 + 2)] &
            (&DAT_00451b67)[((byte *)(param_1 + uVar2))[1]]) == 0) {
          return 0;
        }
      }
      else {
        iVar3 = 1;
        if (""[uVar1] == '\0') {
          return 0;
        }
      }
      uVar2 = uVar2 + iVar3;
    } while (uVar2 < param_2);
  }
  return 1;
}

