// FUN_01307070 @ 01307070 size=120 calls_out=0 calls_in=3
// strings: 

void FUN_01307070(uint *param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = 1;
  uVar2 = (int)(char)(&DAT_00425be6)[param_2 & 0xff] & 0x7f;
  if (0x7fffffff < (uint)(int)(char)(&DAT_00425be6)[param_2 & 0xff]) {
    if (uVar2 == 0) {
      uVar1 = 4;
      uVar2 = (uint)(byte)(&DAT_005679b8)[(param_2 & 0xff) >> 4] << 0x10 |
              (uint)(byte)(&DAT_005679b8)[param_2 & 0xf] << 0x18 | 0x785c;
    }
    else {
      uVar2 = uVar2 << 8 | 0x5c;
      uVar1 = 2;
    }
  }
  *(undefined1 *)((int)param_1 + 5) = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = uVar2;
  return;
}

