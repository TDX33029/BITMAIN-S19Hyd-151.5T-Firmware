// FUN_0131d6cc @ 0131d6cc size=152 calls_out=1 calls_in=2
// strings: 

void FUN_0131d6cc(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (param_3 != 0) {
    iVar5 = 0;
    iVar3 = param_4;
    do {
      bVar2 = *(byte *)(param_2 + iVar5);
      iVar4 = 0;
      do {
        *(undefined1 *)(iVar3 - iVar4) = param_1[bVar2 >> (iVar4 + 7U & 0xff)];
        bVar6 = iVar4 != -7;
        iVar4 = iVar4 + -1;
      } while (bVar6);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar5 != param_3);
  }
  uVar1 = param_3 * 8;
  if (param_5 < (uint)(param_3 << 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,param_5,param_5,&DAT_01ce4db0);
  }
  if (param_5 == uVar1) {
    return;
  }
  FUN_01bed93e(param_4 + uVar1,*param_1,param_5 + param_3 * -8);
  return;
}

