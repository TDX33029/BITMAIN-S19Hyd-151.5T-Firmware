// FUN_01b57844 @ 01b57844 size=364 calls_out=8 calls_in=0
// strings: 

void FUN_01b57844(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_30;
  uint local_2c;
  
  iVar4 = *(int *)(param_1 + 0x14);
  local_2c = DAT_01d53560;
  iVar3 = *(int *)(iVar4 + 0xc);
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  if (iVar3 == 0) {
    uVar1 = FUN_01b47374();
    uVar7 = FUN_01b473c0(iVar4,param_1);
    uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      uVar7 = FUN_01b57480(uVar5,&local_30,*(undefined4 *)(iVar4 + 0x1c),uVar1,param_2,param_3,
                           *(undefined4 *)(iVar4 + 8));
      uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
      if (((int)uVar7 != 0) && (local_30 == param_5)) {
        uVar7 = FUN_01b6b750(param_4,*(undefined4 *)(iVar4 + 0x1c));
        lVar6 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),(uint)((int)uVar7 == 0));
        goto LAB_01b578e0;
      }
    }
  }
  else {
    if (*(int *)(iVar4 + 8) == 1) {
      uVar1 = FUN_01b3b4c8(iVar3);
      lVar6 = FUN_01b5746c(uVar1,param_4,param_5,param_2,param_3,uVar5);
      goto LAB_01b578e0;
    }
    uVar2 = param_2;
    if (*(int *)(iVar4 + 8) == 6) {
      lVar6 = FUN_01b576b4(uVar5,param_4,param_5,iVar3,*(undefined4 *)(iVar4 + 0x10),
                           *(undefined4 *)(iVar4 + 0x14),param_2,param_3);
      goto LAB_01b578e0;
    }
  }
  lVar6 = (ulonglong)uVar2 << 0x20;
LAB_01b578e0:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

