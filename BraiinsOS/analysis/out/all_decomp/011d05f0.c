// FUN_011d05f0 @ 011d05f0 size=336 calls_out=4 calls_in=0
// strings: 

void FUN_011d05f0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  
  iVar5 = *param_2;
  puVar6 = *(undefined4 **)(param_6 + 100);
  iVar7 = *(int *)(param_6 + 0x68);
  piVar3 = (int *)(iVar5 + 8);
  iVar1 = iVar7 << 3;
  puVar2 = puVar6;
  do {
    if (iVar1 == 0) {
      if (iVar7 == *(int *)(param_6 + 0x60)) {
        FUN_013c3fcc(param_6 + 0x60);
        puVar6 = *(undefined4 **)(param_6 + 100);
      }
      puVar6[iVar7 * 2] = piVar3;
      (puVar6 + iVar7 * 2)[1] = param_3;
      *(int *)(param_6 + 0x68) = iVar7 + 1;
      DataMemoryBarrier(0xb);
      if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0038bd47,0x2b,&DAT_0188a014,param_4);
      }
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar5 + 0x20) != 0) {
        FUN_0120d9f0(iVar5 + 0x20,iVar5 + 0xc);
      }
      FUN_011c9910(param_1,iVar5 + 0x24,param_3,param_4,param_5,param_6);
      if (*(int *)(param_6 + 0x68) != 0) {
        *(int *)(param_6 + 0x68) = *(int *)(param_6 + 0x68) + -1;
      }
      return;
    }
    piVar4 = (int *)*puVar2;
    iVar1 = iVar1 + -8;
    bVar8 = piVar4 != piVar3;
    if (!bVar8) {
      piVar4 = (int *)puVar2[1];
    }
    puVar2 = puVar2 + 2;
  } while (bVar8 || piVar4 != param_3);
  *param_1 = 0x80000000;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

