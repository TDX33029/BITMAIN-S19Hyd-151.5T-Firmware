// FUN_017a2690 @ 017a2690 size=192 calls_out=1 calls_in=1
// strings: 

uint FUN_017a2690(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_4 < 0x20) {
    uVar1 = param_4 + 1;
    if (uVar1 <= param_2) {
      iVar2 = 1;
      *(char *)param_1 = (char)(param_4 << 3);
LAB_017a26c4:
      FUN_016dd1aa((undefined1 *)((int)param_1 + iVar2),param_3,param_4);
      return uVar1;
    }
  }
  else {
    iVar2 = (0xfff < param_4) + 2;
    uVar1 = iVar2 + param_4;
    if (uVar1 <= param_2) {
      if (iVar2 == 3) {
        *param_1 = param_4 * 0x10 + 0xc;
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
        *(short *)param_1 = (short)(param_4 << 4) + 4;
      }
      goto LAB_017a26c4;
    }
  }
  return 0xffffffba;
}

