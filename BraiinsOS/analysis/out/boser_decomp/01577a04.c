// FUN_01577a04 @ 01577a04 size=264 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01577a04(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = *param_1;
  iVar8 = *(int *)(param_5 + 0x68);
  iVar6 = iVar5 + 8;
  iVar3 = *(int *)(param_5 + 100);
  if (iVar8 != 0) {
    piVar4 = (int *)(iVar3 + 4);
    iVar1 = iVar8 << 3;
    do {
      iVar7 = piVar4[-1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        iVar7 = *piVar4;
      }
      if (bVar9 && iVar7 == param_2) {
        return 1;
      }
      piVar4 = piVar4 + 2;
      iVar1 = iVar1 + -8;
    } while (iVar1 != 0);
  }
  if (iVar8 == *(int *)(param_5 + 0x60)) {
    FUN_015f5ab8();
    iVar3 = *(int *)(param_5 + 100);
  }
  piVar4 = (int *)(iVar3 + iVar8 * 8);
  *piVar4 = iVar6;
  piVar4[1] = param_2;
  *(int *)(param_5 + 0x68) = iVar8 + 1;
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar5 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004a67d5,0x2b,&DAT_01cfbf10);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar5 + 0x20) != 0) {
    FUN_01551bbc(iVar5 + 0x20,iVar5 + 0xc);
  }
  uVar2 = FUN_01576990(iVar5 + 0x24,param_2,param_3,param_4,param_5);
  if (*(int *)(param_5 + 0x68) != 0) {
    *(int *)(param_5 + 0x68) = *(int *)(param_5 + 0x68) + -1;
  }
  return uVar2;
}

