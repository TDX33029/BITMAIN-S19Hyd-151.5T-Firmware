// FUN_0131df54 @ 0131df54 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_0131df54(undefined1 *param_1,int param_2,int param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  
  if (param_3 != 0) {
    iVar5 = 0;
    puVar4 = param_4;
    do {
      bVar1 = *(byte *)(param_2 + iVar5);
      uVar2 = 4;
      puVar3 = puVar4;
      do {
        bVar6 = uVar2 != 0;
        *puVar3 = param_1[bVar1 >> (uVar2 & 0xff)];
        uVar2 = uVar2 - 4;
        puVar3 = puVar3 + 1;
      } while (bVar6);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 != param_3);
  }
  uVar2 = param_3 * 2;
  if (param_5 < (uint)(param_3 << 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,param_5,param_5,&DAT_01ce4db0);
  }
  if (param_5 == uVar2) {
    return;
  }
  FUN_01bed93e(param_4 + uVar2,*param_1,param_5 + param_3 * -2);
  return;
}

