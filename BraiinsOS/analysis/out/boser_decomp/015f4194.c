// FUN_015f4194 @ 015f4194 size=232 calls_out=4 calls_in=1
// strings: 

void FUN_015f4194(undefined4 param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  
  uVar6 = (*param_3)(param_2);
  iVar4 = (int)uVar6;
  (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0xc))(&local_30,iVar4);
  if ((local_30 == -0x3ec88446 && local_28 == -0x249b249d) &&
      (iStack_2c == 0x60d24636 && iStack_24 == 0x7ab693b4)) {
    iVar3 = *(int *)(iVar4 + 0x48);
    uVar2 = 0;
    if (iVar3 < 0) {
LAB_015f4210:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar2,iVar3);
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x44);
    if (iVar3 == 0) {
      iVar1 = 1;
      iVar4 = 0;
    }
    else {
      uVar2 = 1;
      iVar1 = FUN_01298504(iVar3,1);
      iVar4 = iVar3;
      if (iVar1 == 0) goto LAB_015f4210;
    }
    FUN_01bed4e2(iVar1,uVar5,iVar3);
    local_30 = iVar4;
    iStack_2c = iVar1;
    local_28 = iVar3;
    FUN_015dcc90(param_1,&local_30);
  }
  return;
}

