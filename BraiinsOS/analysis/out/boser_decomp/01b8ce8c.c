// FUN_01b8ce8c @ 01b8ce8c size=140 calls_out=1 calls_in=2
// strings: 

uint FUN_01b8ce8c(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_4 < 0x20) {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
  }
  if (0xfff < param_4) {
    iVar2 = iVar2 + 1;
  }
  uVar1 = param_4 + iVar2;
  if (param_2 < uVar1) {
    uVar1 = 0xffffffba;
  }
  else {
    if (iVar2 == 2) {
      *(short *)param_1 = (short)param_4 * 0x10 + 4;
    }
    else if (iVar2 == 3) {
      *param_1 = param_4 * 0x10 + 0xc;
    }
    else {
      *(char *)param_1 = (char)(param_4 << 3);
    }
    FUN_01bed4e2((undefined1 *)((int)param_1 + iVar2),param_3,param_4);
  }
  return uVar1;
}

