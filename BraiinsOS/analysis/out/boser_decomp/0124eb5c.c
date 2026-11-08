// FUN_0124eb5c @ 0124eb5c size=112 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_0124eb5c(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar1 = *(ushort *)(param_2 + 0x242);
  uVar7 = (uint)uVar1;
  if (10 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x242) = uVar1 + 1;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  iVar2 = param_2 + uVar7 * 0xc;
  *(undefined4 *)(iVar2 + 0x1bc) = *param_3;
  *(undefined4 *)(iVar2 + 0x1c0) = uVar3;
  *(undefined4 *)(iVar2 + 0x1c4) = uVar5;
  uVar3 = param_4[1];
  uVar5 = param_4[2];
  uVar4 = param_4[3];
  uVar8 = param_4[4];
  puVar6 = (undefined4 *)(param_2 + uVar7 * 0x28);
  *puVar6 = *param_4;
  puVar6[1] = uVar3;
  puVar6[2] = uVar5;
  puVar6[3] = uVar4;
  puVar6[4] = uVar8;
  uVar3 = param_4[6];
  uVar5 = param_4[7];
  uVar4 = param_4[8];
  uVar8 = param_4[9];
  puVar6[5] = param_4[5];
  puVar6[6] = uVar3;
  puVar6[7] = uVar5;
  puVar6[8] = uVar4;
  puVar6[9] = uVar8;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = uVar7;
  return;
}

