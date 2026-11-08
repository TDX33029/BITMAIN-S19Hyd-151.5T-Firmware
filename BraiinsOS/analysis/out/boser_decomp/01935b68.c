// FUN_01935b68 @ 01935b68 size=236 calls_out=4 calls_in=5
// strings: 

void FUN_01935b68(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar3 = 1;
  uVar6 = FUN_0192fac8(param_2,1);
  if (((undefined1 *)uVar6 == (undefined1 *)0x0) || ((int)((ulonglong)uVar6 >> 0x20) != 1)) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    lVar7 = FUN_0192fac8(param_2,*(undefined1 *)uVar6);
    iVar2 = (int)((ulonglong)lVar7 >> 0x20);
    if ((int)lVar7 == 0) {
      param_1[3] = 0;
      param_1[1] = 0xb;
    }
    else {
      uVar4 = 0;
      if (lVar7 < 0) {
LAB_01935bb8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar4,iVar2);
      }
      uVar3 = 0;
      if (iVar2 == 0) {
        iVar1 = 1;
        iVar5 = 0;
      }
      else {
        uVar4 = 1;
        iVar1 = FUN_01298504(iVar2,1);
        iVar5 = iVar2;
        if (iVar1 == 0) goto LAB_01935bb8;
      }
      FUN_01bed4e2(iVar1,(int)lVar7,iVar2);
      param_1[1] = iVar5;
      param_1[2] = iVar1;
      param_1[3] = iVar2;
    }
  }
  *param_1 = uVar3;
  return;
}

