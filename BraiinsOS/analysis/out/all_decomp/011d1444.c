// FUN_011d1444 @ 011d1444 size=288 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_011d1444(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar7 = *param_1;
  puVar6 = *(undefined4 **)(param_5 + 100);
  piVar4 = (int *)(iVar7 + 8);
  iVar8 = *(int *)(param_5 + 0x68);
  iVar1 = iVar8 << 3;
  puVar3 = puVar6;
  do {
    if (iVar1 == 0) {
      if (iVar8 == *(int *)(param_5 + 0x60)) {
        FUN_013c3fcc(param_5 + 0x60);
        puVar6 = *(undefined4 **)(param_5 + 100);
      }
      puVar6[iVar8 * 2] = piVar4;
      (puVar6 + iVar8 * 2)[1] = param_2;
      *(int *)(param_5 + 0x68) = iVar8 + 1;
      DataMemoryBarrier(0xb);
      if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0038bd47,0x2b,&DAT_0188a014,param_4);
      }
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar7 + 0x20) != 0) {
        FUN_0120d9f0(iVar7 + 0x20,iVar7 + 0xc,param_3);
      }
      uVar2 = FUN_011d018c(iVar7 + 0x24,param_2,param_3,param_4,param_5);
      if (*(int *)(param_5 + 0x68) != 0) {
        *(int *)(param_5 + 0x68) = *(int *)(param_5 + 0x68) + -1;
      }
      return uVar2;
    }
    piVar5 = (int *)*puVar3;
    iVar1 = iVar1 + -8;
    bVar9 = piVar5 != piVar4;
    if (!bVar9) {
      piVar5 = (int *)puVar3[1];
    }
    puVar3 = puVar3 + 2;
  } while (bVar9 || piVar5 != param_2);
  return 0;
}

