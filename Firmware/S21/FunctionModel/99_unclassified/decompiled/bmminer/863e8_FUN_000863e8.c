// FUN_000863e8 @ 000863e8  size=264  callers=0
// program: bmminer


undefined4 FUN_000863e8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  memset((void *)(param_1 + 0x408),0,0x20);
  uVar1 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  uVar2 = param_2 & 7;
  if (-1 < (int)-param_2) {
    uVar2 = -(-param_2 & 7);
  }
  *(byte *)(param_1 + ((int)uVar1 >> 3) + 0x408) =
       *(byte *)(param_1 + ((int)uVar1 >> 3) + 0x408) | ~(byte)(0xff << (8 - uVar2 & 0xff));
  uVar1 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  memset((void *)(param_1 + ((int)uVar1 >> 3) + 0x409),0xff,0x1f - ((int)uVar2 >> 3));
  return 0;
}

