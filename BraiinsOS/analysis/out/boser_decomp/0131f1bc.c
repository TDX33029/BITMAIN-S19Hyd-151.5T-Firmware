// FUN_0131f1bc @ 0131f1bc size=248 calls_out=2 calls_in=1
// strings: 

void FUN_0131f1bc(uint *param_1,undefined4 param_2,int param_3,uint param_4,int param_5,uint param_6
                 )

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = param_4 >> 2;
  if (uVar2 != 0) {
    iVar3 = 0;
    iVar4 = param_5;
    do {
      uVar5 = FUN_013203a4(param_2,param_3 + iVar3,4,iVar4,1);
      if ((uVar5 & 1) != 0) {
        uVar2 = (int)(uVar5 >> 0x20) + iVar3;
        goto LAB_0131f270;
      }
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (uVar2 * 4 != iVar3);
  }
  if (param_6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,param_6,param_6,&DAT_01ce4d90);
  }
  uVar5 = FUN_013203a4(param_2,param_3 + (param_4 & 0x7ffffffc),param_4 & 3,param_5 + uVar2,
                       param_6 - uVar2);
  if ((uVar5 & 1) == 0) {
    uVar1 = 4;
    *param_1 = param_6;
  }
  else {
    uVar2 = (int)(uVar5 >> 0x20) + (param_4 & 0x7ffffffc);
LAB_0131f270:
    *param_1 = uVar2 & 0xfffffffc;
    param_1[2] = uVar2;
    uVar1 = 1;
    param_1[1] = uVar2 >> 2;
  }
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}

