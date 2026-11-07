// FUN_01577b18 @ 01577b18 size=304 calls_out=4 calls_in=0
// strings: 

void FUN_01577b18(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar5 = *param_2;
  iVar6 = *(int *)(param_6 + 100);
  iVar7 = *(int *)(param_6 + 0x68);
  iVar4 = iVar5 + 8;
  if (iVar7 != 0) {
    piVar2 = (int *)(iVar6 + 4);
    iVar1 = iVar7 << 3;
    do {
      iVar3 = piVar2[-1];
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        iVar3 = *piVar2;
      }
      if (bVar8 && iVar3 == param_3) {
        *param_1 = 0x80000000;
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = 0;
        return;
      }
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + -8;
    } while (iVar1 != 0);
  }
  if (iVar7 == *(int *)(param_6 + 0x60)) {
    FUN_015f5ab8();
    iVar6 = *(int *)(param_6 + 100);
  }
  piVar2 = (int *)(iVar6 + iVar7 * 8);
  *piVar2 = iVar4;
  piVar2[1] = param_3;
  *(int *)(param_6 + 0x68) = iVar7 + 1;
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar5 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004a67d5,0x2b,&DAT_01cfbf10);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar5 + 0x20) != 0) {
    FUN_01551bbc(iVar5 + 0x20,iVar5 + 0xc);
  }
  FUN_01573b2c(&local_40,iVar5 + 0x24,param_3,param_4,param_5,param_6);
  if (*(int *)(param_6 + 0x68) != 0) {
    *(int *)(param_6 + 0x68) = *(int *)(param_6 + 0x68) + -1;
  }
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = local_34;
  param_1[4] = uStack_30;
  param_1[5] = uStack_2c;
  param_1[6] = uStack_28;
  return;
}

