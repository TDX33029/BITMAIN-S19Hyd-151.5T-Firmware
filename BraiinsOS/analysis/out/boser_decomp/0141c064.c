// FUN_0141c064 @ 0141c064 size=164 calls_out=0 calls_in=2
// strings: 

void FUN_0141c064(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  byte bVar3;
  
  if (*(char *)(param_2 + 8) == '\0') {
    bVar3 = 5;
    if (3 < *(byte *)(param_2 + 9)) {
      bVar3 = *(byte *)(param_2 + 9) - 4;
    }
    uVar2 = (uint)bVar3;
    if ((uVar2 < 7) && ((0x7bU >> uVar2 & 1) != 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)((int)param_1 + 0x46) = 2;
      uVar1 = *(undefined2 *)(&DAT_00536e44 + uVar2 * 2);
      param_1[0x10] = 0;
      *(undefined2 *)(param_1 + 0xe) = 0;
      param_1[6] = 2;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 4;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 4;
      param_1[0xd] = 0;
      *(undefined2 *)(param_1 + 0x11) = uVar1;
      return;
    }
  }
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

