// FUN_01b29158 @ 01b29158 size=264 calls_out=4 calls_in=1
// strings: 

void FUN_01b29158(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r10;
  undefined8 uVar5;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  iVar4 = *param_1;
  iVar3 = param_1[1];
  local_2c = DAT_01d53560;
  uVar2 = param_2;
  do {
    if (iVar3 == 0) {
      uVar1 = 0;
      goto LAB_01b29218;
    }
    local_3c = iVar4;
    local_38 = iVar3;
    local_34 = unaff_r10;
    local_30 = unaff_r6;
    iVar3 = FUN_01b290a8(&local_34,&local_3c,&local_3c,0x20);
    if (iVar3 == 0) {
      iVar4 = local_3c + local_38;
      iVar3 = 0;
      unaff_r6 = local_38;
      unaff_r10 = local_3c;
    }
    else {
      iVar3 = local_38;
      iVar4 = local_3c;
      unaff_r6 = local_30;
      unaff_r10 = local_34;
    }
    uVar5 = FUN_01bedbda(param_2);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  } while ((unaff_r6 != (int)uVar5) ||
          (uVar5 = FUN_01b20118(unaff_r10,param_2,unaff_r6),
          uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0));
  uVar1 = 1;
LAB_01b29218:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

