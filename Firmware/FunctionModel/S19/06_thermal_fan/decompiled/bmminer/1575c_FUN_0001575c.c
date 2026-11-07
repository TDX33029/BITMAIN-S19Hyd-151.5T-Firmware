// FUN_0001575c @ 0001575c  size=524  callers=2
// program: bmminer


undefined4 FUN_0001575c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint param4;
  uint uVar5;
  char acStack_820 [2052];
  
  if (param_2 == 0) {
    FUN_000156a8();
    iVar3 = FUN_00020248();
    iVar1 = FUN_00020238();
    if (iVar3 < iVar1) {
      DAT_00088814 = DAT_00088814 + 1;
      uVar4 = 0;
      while( true ) {
        param4 = uVar4 & 0xff;
        uVar4 = uVar4 + 1;
        iVar3 = FUN_00020238();
        uVar5 = DAT_00088814;
        if (iVar3 <= (int)param4) break;
        if (3 < DAT_00087bbc) {
          iVar3 = FUN_00020378(param4);
          snprintf(acStack_820,0x800,"conti_check_count:%d, fan_id = %d, fan_speed = %d\n",uVar5,
                   param4,iVar3);
          FUN_00032218(3,acStack_820,0);
        }
      }
    }
    else {
      DAT_00088814 = 0;
    }
    iVar3 = FUN_00020248();
    iVar1 = FUN_00020238();
    if ((iVar3 < iVar1) && (9 < DAT_00088814)) goto LAB_00015890;
  }
  else {
    iVar3 = 10;
    do {
      FUN_000156a8(param_1);
      iVar1 = FUN_00020248();
      iVar2 = FUN_00020238();
      if (iVar2 <= iVar1) break;
      FUN_00034a5c(2000);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = FUN_00020248();
    iVar1 = FUN_00020238();
    if (iVar3 < iVar1) {
LAB_00015890:
      if (1 < DAT_00087bbc) {
        iVar3 = FUN_00020248();
        iVar1 = FUN_00020238();
        snprintf(acStack_820,0x800,"Error, fan lost, only find %d (< %d)\n",iVar3,iVar1);
        FUN_00032218(1,acStack_820,0);
      }
      uVar4 = 0;
      while( true ) {
        uVar5 = uVar4 & 0xff;
        uVar4 = uVar4 + 1;
        iVar3 = FUN_00020238();
        if (iVar3 <= (int)uVar5) break;
        if (3 < DAT_00087bbc) {
          iVar3 = FUN_00020378(uVar5);
          snprintf(acStack_820,0x800,"fan_id = %d, fan_speed = %d\n",uVar5,iVar3);
          FUN_00032218(3,acStack_820,0);
        }
      }
      FUN_0003a9e0(10,0xff);
      FUN_00022a2c(1);
      FUN_00036380(7,"fan lost");
      return 0xffffffff;
    }
  }
  FUN_00022a2c(0);
  return 0;
}

