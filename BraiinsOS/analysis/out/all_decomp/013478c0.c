// FUN_013478c0 @ 013478c0 size=144 calls_out=1 calls_in=1
// strings: 

int FUN_013478c0(int param_1,int param_2)

{
  uint uVar1;
  uint extraout_r1;
  uint uVar2;
  bool bVar3;
  int local_24 [2];
  undefined4 local_1c;
  
  do {
    if (*(char *)(param_1 + 0x25) != '\0') {
      return param_2;
    }
    FUN_0062a644(local_24,param_1);
    if (local_24[0] == 1) {
      *(undefined4 *)(param_1 + 0x1c) = local_1c;
    }
    else {
      if (*(char *)(param_1 + 0x25) != '\0') {
        return param_2;
      }
      uVar1 = (uint)*(byte *)(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x25) = 1;
      bVar3 = uVar1 == 0;
      uVar2 = extraout_r1;
      if (bVar3) {
        uVar1 = *(uint *)(param_1 + 0x1c);
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      if (bVar3 && uVar2 == uVar1) {
        return param_2;
      }
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return 0;
    }
  } while( true );
}

