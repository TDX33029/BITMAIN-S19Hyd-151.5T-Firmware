// FUN_01935ea0 @ 01935ea0 size=268 calls_out=4 calls_in=9
// strings: 

void FUN_01935ea0(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar7 = FUN_0192fac8(param_2,2);
  if (((ushort *)uVar7 == (ushort *)0x0) || ((int)((ulonglong)uVar7 >> 0x20) != 2)) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    param_1[2] = "u16";
    param_1[3] = 3;
    uVar4 = 1;
  }
  else {
    uVar1 = *(ushort *)uVar7;
    if (uVar1 == 0) {
      uVar4 = 1;
      *(undefined1 *)(param_1 + 1) = 0x17;
    }
    else {
      lVar8 = FUN_0192fac8(param_2,uVar1 << 8 | uVar1 >> 8);
      iVar3 = (int)((ulonglong)lVar8 >> 0x20);
      if ((int)lVar8 == 0) {
        uVar4 = 1;
        param_1[3] = 0;
        param_1[1] = 0xb;
      }
      else {
        uVar5 = 0;
        if (lVar8 < 0) {
LAB_01935ef8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar5,iVar3);
        }
        uVar4 = 0;
        if (iVar3 == 0) {
          iVar2 = 1;
          iVar6 = 0;
        }
        else {
          uVar5 = 1;
          iVar2 = FUN_01298504(iVar3,1);
          iVar6 = iVar3;
          if (iVar2 == 0) goto LAB_01935ef8;
        }
        FUN_01bed4e2(iVar2,(int)lVar8,iVar3);
        param_1[1] = iVar6;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
      }
    }
  }
  *param_1 = uVar4;
  return;
}

