// FUN_0131d5a0 @ 0131d5a0 size=156 calls_out=1 calls_in=2
// strings: 

void FUN_0131d5a0(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar5 = 0;
    iVar4 = param_4;
    do {
      bVar1 = *(byte *)(param_2 + iVar5);
      uVar2 = 0;
      do {
        uVar3 = (uint)(bVar1 >> (uVar2 & 0xff));
        if (-1 < (int)(uVar2 - 0x20)) {
          uVar3 = 0;
        }
        *(undefined1 *)(iVar4 + uVar2) = param_1[uVar3];
        uVar2 = uVar2 + 1;
      } while (uVar2 != 8);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar5 != param_3);
  }
  uVar2 = param_3 * 8;
  if (param_5 < (uint)(param_3 << 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,param_5,param_5,&DAT_01ce4db0);
  }
  if (param_5 == uVar2) {
    return;
  }
  FUN_01bed93e(param_4 + uVar2,*param_1,param_5 + param_3 * -8);
  return;
}

