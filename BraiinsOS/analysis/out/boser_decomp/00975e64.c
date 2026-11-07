// FUN_00975e64 @ 00975e64 size=120 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_00975e64(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar1 = *(ushort *)(param_2 + 0x34a);
  uVar8 = (uint)uVar1;
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x34a) = uVar1 + 1;
  uVar4 = param_3[1];
  uVar6 = param_3[2];
  iVar2 = param_2 + uVar8 * 0xc;
  *(undefined4 *)(iVar2 + 0x2c4) = *param_3;
  *(undefined4 *)(iVar2 + 0x2c8) = uVar4;
  *(undefined4 *)(iVar2 + 0x2cc) = uVar6;
  puVar3 = (undefined4 *)(param_2 + uVar8 * 0x40);
  uVar4 = param_4[1];
  uVar6 = param_4[2];
  uVar5 = param_4[3];
  uVar7 = param_4[4];
  *puVar3 = *param_4;
  puVar3[1] = uVar4;
  puVar3[2] = uVar6;
  puVar3[3] = uVar5;
  puVar3[4] = uVar7;
  uVar4 = param_4[6];
  uVar6 = param_4[7];
  uVar5 = param_4[8];
  uVar7 = param_4[9];
  puVar3[5] = param_4[5];
  puVar3[6] = uVar4;
  puVar3[7] = uVar6;
  puVar3[8] = uVar5;
  puVar3[9] = uVar7;
  uVar4 = param_4[0xb];
  uVar6 = param_4[0xc];
  uVar5 = param_4[0xd];
  uVar7 = param_4[0xe];
  uVar9 = param_4[0xf];
  puVar3[10] = param_4[10];
  puVar3[0xb] = uVar4;
  puVar3[0xc] = uVar6;
  puVar3[0xd] = uVar5;
  puVar3[0xe] = uVar7;
  puVar3[0xf] = uVar9;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = uVar8;
  return;
}

