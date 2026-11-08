// FUN_018e40dc @ 018e40dc size=204 calls_out=4 calls_in=1
// strings: 

void FUN_018e40dc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  pbVar1 = (byte *)FUN_018e3fe8(param_2,param_3,0x23);
  if (((pbVar1 == (byte *)0x0) &&
      (pbVar1 = (byte *)FUN_018e3fe8(param_2,param_3,0x27), pbVar1 == (byte *)0x0)) ||
     ((*pbVar1 & 0x1e) != 0xc)) {
    *param_1 = -0x80000000;
    return;
  }
  iVar3 = *(int *)(pbVar1 + 0xc);
  uVar4 = 0;
  if (iVar3 < 0) {
LAB_018e413c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar3);
  }
  uVar5 = *(undefined4 *)(pbVar1 + 8);
  if (iVar3 == 0) {
    iVar2 = 1;
    iVar6 = 0;
  }
  else {
    uVar4 = 1;
    iVar2 = FUN_01298504(iVar3,1);
    iVar6 = iVar3;
    if (iVar2 == 0) goto LAB_018e413c;
  }
  FUN_01bed4e2(iVar2,uVar5,iVar3);
  *param_1 = iVar6;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  return;
}

