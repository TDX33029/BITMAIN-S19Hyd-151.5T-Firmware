// FUN_0143c860 @ 0143c860 size=320 calls_out=6 calls_in=0
// strings: 

void FUN_0143c860(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar5 = 0;
  if (*(int *)(param_3 + 0x10) == 0) {
    iVar4 = 0;
  }
  else {
    uVar6 = FUN_01415984(*(undefined4 *)(param_3 + 0xc));
    unaff_r7 = (int)((ulonglong)uVar6 >> 0x20);
    iVar4 = (int)uVar6;
  }
  if (iVar4 == 0) {
    iVar4 = 1;
    unaff_r7 = 0;
  }
  uVar6 = FUN_01443294(iVar4,unaff_r7,0x5b);
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar1 = (int)uVar6;
  if (iVar1 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else if (*(char *)(iVar1 + iVar2 + -1) != ']') {
      iVar1 = 0;
    }
    unaff_r6 = iVar2 + -1;
    iVar5 = iVar1;
  }
  uVar3 = 0;
  if (iVar5 == 0) {
    unaff_r6 = unaff_r7;
  }
  if (unaff_r6 < 0) {
LAB_0143c8f8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,unaff_r6);
  }
  if (unaff_r6 == 0) {
    local_28 = 1;
    local_2c = 0;
  }
  else {
    uVar3 = 1;
    local_28 = FUN_01298504(unaff_r6,1);
    local_2c = unaff_r6;
    if (local_28 == 0) goto LAB_0143c8f8;
  }
  if (iVar5 != 0) {
    iVar4 = iVar5;
  }
  FUN_01bed4e2(local_28,iVar4,unaff_r6);
  local_24 = unaff_r6;
  FUN_01938bd0(&local_40,&local_2c);
  if ((char)local_40 == '\x02') {
    *(undefined1 *)param_1 = 2;
    param_1[1] = 1;
    param_1[2] = &DAT_01cf7f60;
  }
  else {
    *param_1 = local_40;
    param_1[1] = uStack_3c;
    param_1[2] = uStack_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
  }
  return;
}

