// FUN_0131f778 @ 0131f778 size=352 calls_out=3 calls_in=1
// strings: 

void FUN_0131f778(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ulonglong uVar8;
  
  uVar2 = param_5 >> 3;
  if (uVar2 != 0) {
    iVar6 = 0;
    iVar5 = param_6;
    do {
      uVar8 = FUN_0131ff50(param_3,param_4 + iVar6,8,iVar5,5);
      if ((uVar8 & 1) != 0) {
        uVar2 = (int)(uVar8 >> 0x20) + iVar6;
        goto LAB_0131f848;
      }
      iVar6 = iVar6 + 8;
      iVar5 = iVar5 + 5;
    } while (uVar2 * 8 != iVar6);
  }
  uVar4 = uVar2 * 5;
  if (param_7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,param_7,param_7,&DAT_01ce4d90);
  }
  uVar8 = FUN_0131ff50(param_3,param_4 + (param_5 & 0x7ffffff8),param_5 & 7,param_6 + uVar4,
                       param_7 + uVar2 * -5);
  uVar2 = (uint)(uVar8 >> 0x20);
  if ((uVar8 & 1) == 0) {
    bVar7 = param_2 == 0;
    uVar4 = extraout_r2;
    if (!bVar7) {
      uVar2 = param_5 * 5;
      uVar4 = uVar2 & 7;
      bVar7 = uVar4 == 0;
    }
    if (!bVar7) {
      uVar3 = param_5 - 1;
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0xffffffff,0,&DAT_01ce4dd0);
      }
      if (((uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar3)) &
          ~(-1 << (uVar4 & 0xff)) << (5 - uVar2 & 7)) != 0) {
        param_1[2] = uVar3;
        *param_1 = uVar3 & 0xfffffff8;
        param_1[1] = (uVar3 >> 3) * 5;
        uVar1 = 2;
        goto LAB_0131f860;
      }
    }
    uVar1 = 4;
    *param_1 = param_7;
  }
  else {
    uVar2 = uVar2 + (param_5 & 0x7ffffff8);
LAB_0131f848:
    param_1[2] = uVar2;
    *param_1 = uVar2 & 0xfffffff8;
    param_1[1] = (uVar2 >> 3) * 5;
    uVar1 = 1;
  }
LAB_0131f860:
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}

