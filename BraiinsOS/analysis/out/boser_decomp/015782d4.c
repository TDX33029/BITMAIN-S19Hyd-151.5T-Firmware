// FUN_015782d4 @ 015782d4 size=256 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_015782d4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar6 = *param_1;
  iVar8 = *(int *)(param_5 + 0x68);
  iVar7 = iVar6 + 8;
  iVar4 = *(int *)(param_5 + 100);
  if (iVar8 != 0) {
    piVar3 = (int *)(iVar4 + 4);
    iVar1 = iVar8 << 3;
    do {
      iVar5 = piVar3[-1];
      bVar9 = iVar5 == iVar7;
      if (bVar9) {
        iVar5 = *piVar3;
      }
      if (bVar9 && iVar5 == param_2) {
        return 0;
      }
      piVar3 = piVar3 + 2;
      iVar1 = iVar1 + -8;
    } while (iVar1 != 0);
  }
  if (iVar8 == *(int *)(param_5 + 0x60)) {
    FUN_015f5ab8();
    iVar4 = *(int *)(param_5 + 100);
  }
  piVar3 = (int *)(iVar4 + iVar8 * 8);
  *piVar3 = iVar7;
  piVar3[1] = param_2;
  *(int *)(param_5 + 0x68) = iVar8 + 1;
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar6 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004a67d5,0x2b,&DAT_01cfbf10);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar6 + 0x20) != 0) {
    FUN_01551bbc(iVar6 + 0x20,iVar6 + 0xc);
  }
  uVar2 = FUN_015776f4(iVar6 + 0x24,param_2,param_3,param_4,param_5);
  if (*(int *)(param_5 + 0x68) != 0) {
    *(int *)(param_5 + 0x68) = *(int *)(param_5 + 0x68) + -1;
  }
  return uVar2;
}

