// FUN_017a2750 @ 017a2750 size=132 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_017a2750(int *param_1,undefined4 param_2,char *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 < 0x20) {
    uVar1 = 2;
    iVar2 = 1;
    *(char *)param_1 = (char)(param_4 << 3) + '\x01';
  }
  else if (param_4 < 0x1000) {
    uVar1 = 3;
    iVar2 = 2;
    *(short *)param_1 = (short)(param_4 << 4) + 5;
  }
  else {
    uVar1 = 4;
    iVar2 = 3;
    *param_1 = param_4 * 0x10 + 0xd;
  }
  *(char *)((int)param_1 + iVar2) = *param_3;
  return uVar1;
}

