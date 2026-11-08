// FUN_0117847c @ 0117847c size=244 calls_out=4 calls_in=2
// strings: 

void FUN_0117847c(int *param_1,code *param_2,undefined1 param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar3 = CONCAT44(iStack_40,iStack_3c);
  iVar1 = (*param_2)(0);
  uVar4 = CONCAT44(local_2c,local_28);
  if (iVar1 == 0) {
LAB_01178564:
    local_2c = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_28 = (undefined4)uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_019b0950(&DAT_01d301c0);
  }
  if (*(char *)(iVar1 + 0x32) == '\x02') {
    iVar2 = 0x1f0;
    *(undefined1 *)(iVar1 + 0x32) = param_3;
    if ((param_4 & 1) != 0) {
      iVar2 = 0x128;
    }
    uVar3 = FUN_019f7c78(param_5 + iVar2);
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      uVar4 = FUN_019e9e08();
      if ((uint)uVar4 < 2) {
        uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),1);
      }
    }
    else {
      uVar4 = CONCAT44(*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c));
    }
    *(undefined4 *)(iVar1 + 0x24) = 1;
    *(undefined8 *)(iVar1 + 0x28) = uVar3;
    FUN_019ec774(&local_38,iVar1,param_4,param_5);
    local_48 = local_34;
    iStack_44 = iStack_30;
    uVar3 = uVar4;
    if (local_38 == 4) goto LAB_01178564;
  }
  else {
    local_38 = 3;
  }
  iStack_40 = (int)((ulonglong)uVar3 >> 0x20);
  iStack_3c = (int)uVar3;
  *param_1 = local_38;
  param_1[1] = local_48;
  param_1[2] = iStack_44;
  param_1[3] = iStack_40;
  param_1[4] = iStack_3c;
  return;
}

