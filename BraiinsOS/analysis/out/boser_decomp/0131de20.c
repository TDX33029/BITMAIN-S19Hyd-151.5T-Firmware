// FUN_0131de20 @ 0131de20 size=160 calls_out=1 calls_in=2
// strings: 

void FUN_0131de20(undefined1 *param_1,int param_2,int param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar6 = 0;
    puVar5 = param_4;
    do {
      bVar1 = *(byte *)(param_2 + iVar6);
      uVar4 = 0;
      puVar3 = puVar5;
      do {
        uVar2 = (uint)(bVar1 >> (uVar4 & 0xff));
        if (-1 < (int)(uVar4 - 0x20)) {
          uVar2 = 0;
        }
        uVar4 = uVar4 + 4;
        *puVar3 = param_1[uVar2];
        puVar3 = puVar3 + 1;
      } while (uVar4 != 8);
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 != param_3);
  }
  uVar4 = param_3 * 2;
  if (param_5 < (uint)(param_3 << 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,param_5,param_5,&DAT_01ce4db0);
  }
  if (param_5 == uVar4) {
    return;
  }
  FUN_01bed93e(param_4 + uVar4,*param_1,param_5 + param_3 * -2);
  return;
}

