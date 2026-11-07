// FUN_0131fbb0 @ 0131fbb0 size=348 calls_out=3 calls_in=1
// strings: 

void FUN_0131fbb0(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar2 = param_5 >> 2;
  if (uVar2 != 0) {
    iVar5 = 0;
    iVar4 = param_6;
    do {
      uVar7 = FUN_0131fd14(param_3,param_4 + iVar5,4,iVar4,3);
      if ((uVar7 & 1) != 0) {
        uVar2 = (int)(uVar7 >> 0x20) + iVar5;
        goto LAB_0131fc84;
      }
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 3;
    } while (uVar2 * 4 != iVar5);
  }
  uVar3 = uVar2 * 3;
  if (param_7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar3,param_7,param_7,&DAT_01ce4d90);
  }
  uVar7 = FUN_0131fd14(param_3,param_4 + (param_5 & 0x7ffffffc),param_5 & 3,param_6 + uVar3,
                       param_7 + uVar2 * -3);
  uVar2 = (uint)(uVar7 >> 0x20);
  if ((uVar7 & 1) == 0) {
    bVar6 = param_2 == 0;
    if (!bVar6) {
      uVar2 = param_5 * 6 & 6;
      bVar6 = uVar2 == 0;
    }
    if (!bVar6) {
      uVar3 = param_5 - 1;
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0xffffffff,0,&DAT_01ce4dd0);
      }
      if (((uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar3)) & ~(-1 << (uVar2 & 0xff))) !=
          0) {
        param_1[2] = uVar3;
        *param_1 = uVar3 & 0xfffffffc;
        param_1[1] = (uVar3 >> 2) * 3;
        uVar1 = 2;
        goto LAB_0131fc9c;
      }
    }
    uVar1 = 4;
    *param_1 = param_7;
  }
  else {
    uVar2 = uVar2 + (param_5 & 0x7ffffffc);
LAB_0131fc84:
    param_1[2] = uVar2;
    *param_1 = uVar2 & 0xfffffffc;
    param_1[1] = (uVar2 >> 2) * 3;
    uVar1 = 1;
  }
LAB_0131fc9c:
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}

