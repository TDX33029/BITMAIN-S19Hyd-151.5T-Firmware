// FUN_011d04b0 @ 011d04b0 size=308 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_011d04b0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  
  iVar6 = *param_1;
  puVar5 = *(undefined4 **)(param_5 + 100);
  piVar3 = (int *)(iVar6 + 8);
  iVar7 = *(int *)(param_5 + 0x68);
  iVar1 = iVar7 << 3;
  puVar2 = puVar5;
  do {
    if (iVar1 == 0) {
      if (iVar7 == *(int *)(param_5 + 0x60)) {
        FUN_013c3fcc(param_5 + 0x60);
        puVar5 = *(undefined4 **)(param_5 + 100);
      }
      puVar5[iVar7 * 2] = piVar3;
      (puVar5 + iVar7 * 2)[1] = param_2;
      *(int *)(param_5 + 0x68) = iVar7 + 1;
      DataMemoryBarrier(0xb);
      if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0038bd47,0x2b,&DAT_0188a014,param_4);
      }
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar6 + 0x20) != 0) {
        FUN_0120d9f0(iVar6 + 0x20,iVar6 + 0xc,param_3);
      }
      uVar9 = FUN_011cf8a8(iVar6 + 0x24,param_2,param_3,param_4,param_5);
      if (*(int *)(param_5 + 0x68) != 0) {
        *(int *)(param_5 + 0x68) = *(int *)(param_5 + 0x68) + -1;
      }
      return uVar9;
    }
    piVar4 = (int *)*puVar2;
    iVar1 = iVar1 + -8;
    bVar8 = piVar4 != piVar3;
    if (!bVar8) {
      piVar4 = (int *)puVar2[1];
    }
    puVar2 = puVar2 + 2;
  } while (bVar8 || piVar4 != param_2);
  return 0x188a36400000001;
}

