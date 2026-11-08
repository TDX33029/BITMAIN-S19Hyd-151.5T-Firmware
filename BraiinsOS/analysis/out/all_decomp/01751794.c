// FUN_01751794 @ 01751794 size=404 calls_out=8 calls_in=0
// strings: 

void FUN_01751794(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int local_28;
  uint local_24;
  
  iVar4 = *(int *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  local_24 = DAT_018ddaf8;
  iVar3 = *(int *)(iVar4 + 0xc);
  if (iVar3 == 0) {
    uVar1 = FUN_0173a338();
    iVar3 = *(int *)(iVar4 + 0x1c);
    if (iVar3 == 0) {
      FUN_0173a338(*(undefined4 *)(param_1 + 8),param_2,0,uVar1);
      iVar3 = FUN_0177a6c0();
      *(int *)(iVar4 + 0x1c) = iVar3;
      if (iVar3 == 0) goto LAB_017518b0;
    }
    uVar6 = FUN_01751354(uVar2,&local_28,iVar3,uVar1,param_2,param_3,*(undefined4 *)(iVar4 + 8));
    param_2 = (uint)((ulonglong)uVar6 >> 0x20);
    if (((int)uVar6 != 0) && (local_28 == param_5)) {
      uVar6 = FUN_0177b0d8(param_4,*(undefined4 *)(iVar4 + 0x1c));
      lVar5 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),(uint)((int)uVar6 == 0));
      goto LAB_0175182c;
    }
  }
  else {
    if (*(int *)(iVar4 + 8) == 1) {
      uVar1 = FUN_0172a6f0(iVar3);
      lVar5 = FUN_01751340(uVar1,param_4,param_5,param_2,param_3,uVar2);
      goto LAB_0175182c;
    }
    if (*(int *)(iVar4 + 8) == 6) {
      lVar5 = FUN_017515f4(uVar2,param_4,param_5,iVar3,*(undefined4 *)(iVar4 + 0x10),
                           *(undefined4 *)(iVar4 + 0x14),param_2,param_3);
      goto LAB_0175182c;
    }
  }
LAB_017518b0:
  lVar5 = (ulonglong)param_2 << 0x20;
LAB_0175182c:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

