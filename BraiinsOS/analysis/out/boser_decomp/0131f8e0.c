// FUN_0131f8e0 @ 0131f8e0 size=344 calls_out=3 calls_in=1
// strings: 

void FUN_0131f8e0(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar2 = param_5 >> 3;
  if (uVar2 != 0) {
    iVar5 = 0;
    iVar4 = param_6;
    do {
      uVar7 = FUN_0131fe94(param_3,param_4 + iVar5,8,iVar4,5);
      if ((uVar7 & 1) != 0) {
        uVar2 = (int)(uVar7 >> 0x20) + iVar5;
        goto LAB_0131f9b0;
      }
      iVar5 = iVar5 + 8;
      iVar4 = iVar4 + 5;
    } while (uVar2 * 8 != iVar5);
  }
  uVar3 = uVar2 * 5;
  if (param_7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar3,param_7,param_7,&DAT_01ce4d90);
  }
  uVar7 = FUN_0131fe94(param_3,param_4 + (param_5 & 0x7ffffff8),param_5 & 7,param_6 + uVar3,
                       param_7 + uVar2 * -5);
  uVar2 = (uint)(uVar7 >> 0x20);
  if ((uVar7 & 1) == 0) {
    bVar6 = param_2 == 0;
    if (!bVar6) {
      uVar2 = param_5 * 5 & 7;
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
        *param_1 = uVar3 & 0xfffffff8;
        param_1[1] = (uVar3 >> 3) * 5;
        uVar1 = 2;
        goto LAB_0131f9c8;
      }
    }
    uVar1 = 4;
    *param_1 = param_7;
  }
  else {
    uVar2 = uVar2 + (param_5 & 0x7ffffff8);
LAB_0131f9b0:
    param_1[2] = uVar2;
    *param_1 = uVar2 & 0xfffffff8;
    param_1[1] = (uVar2 >> 3) * 5;
    uVar1 = 1;
  }
LAB_0131f9c8:
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}

