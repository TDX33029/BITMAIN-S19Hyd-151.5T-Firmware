// FUN_01b8cf18 @ 01b8cf18 size=104 calls_out=0 calls_in=2
// strings: 

int FUN_01b8cf18(int *param_1,undefined4 param_2,char *param_3,uint param_4)

{
  int iVar1;
  
  if (param_4 < 0x20) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  if (0xfff < param_4) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 2) {
    *(short *)param_1 = (short)param_4 * 0x10 + 5;
  }
  else if (iVar1 == 3) {
    *param_1 = param_4 * 0x10 + 0xd;
  }
  else {
    *(char *)param_1 = (char)param_4 * '\b' + '\x01';
  }
  *(char *)((int)param_1 + iVar1) = *param_3;
  return iVar1 + 1;
}

