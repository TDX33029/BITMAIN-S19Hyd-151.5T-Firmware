// FUN_00fa7c88 @ 00fa7c88 size=284 calls_out=1 calls_in=1
// strings: 

bool FUN_00fa7c88(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int extraout_r12;
  int iVar5;
  byte bVar6;
  int local_1c;
  char *local_18;
  int local_14;
  
  FUN_00fab1e0(&local_1c,param_1,param_2);
  bVar2 = false;
  if (((local_1c == 0) && (local_14 != 0)) && (*local_18 == '-')) {
    if (local_14 == 1) {
      return true;
    }
    if ((byte)local_18[1] - 0x30 < 10) {
      if (local_14 == 2) {
        return true;
      }
      bVar6 = 0;
      iVar3 = 2;
      bVar1 = false;
      iVar5 = extraout_r12;
      do {
        uVar4 = (uint)(byte)local_18[iVar3];
        bVar2 = bVar1;
        if (9 < uVar4 - 0x30) {
          if (uVar4 == 0x2e) {
            bVar1 = (bool)(bVar6 | bVar1);
            bVar6 = 1;
            bVar2 = false;
            if (bVar1) {
              return false;
            }
          }
          else {
            iVar5 = iVar3 + -1;
            if (uVar4 != 0x45 && uVar4 != 0x65) {
              return false;
            }
            bVar2 = true;
            if (bVar1) {
              return false;
            }
          }
        }
        bVar1 = bVar2;
        iVar3 = iVar3 + 1;
      } while (local_14 != iVar3);
      bVar2 = true;
      if (bVar1) {
        return iVar5 != local_14 + -2;
      }
    }
  }
  return bVar2;
}

