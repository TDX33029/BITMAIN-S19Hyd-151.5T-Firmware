// FUN_015fd0b8 @ 015fd0b8 size=140 calls_out=1 calls_in=3
// strings: 

bool FUN_015fd0b8(undefined4 *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 2) == '\0') {
    if (param_1[1] == param_3) {
      iVar1 = thunk_FUN_01bed842(*param_1);
      return iVar1 == 0;
    }
  }
  else {
    if (param_1[1] != param_3) {
      return false;
    }
    pbVar3 = (byte *)*param_1;
    do {
      if (param_3 == 0) {
        return true;
      }
      uVar4 = (uint)*param_2;
      param_3 = param_3 + -1;
      uVar2 = (uint)*pbVar3;
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      param_2 = param_2 + 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar2 == uVar4);
  }
  return false;
}

