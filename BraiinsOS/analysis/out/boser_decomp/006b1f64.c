// FUN_006b1f64 @ 006b1f64 size=112 calls_out=1 calls_in=1
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_006b1f64(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar1 = *(ushort *)(param_2 + 0x29a);
  uVar8 = (uint)uVar1;
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x29a) = uVar1 + 1;
  uVar3 = param_3[1];
  uVar6 = param_3[2];
  iVar4 = param_2 + uVar8 * 0xc;
  puVar2 = (undefined4 *)(param_2 + uVar8 * 0x30);
  *(undefined4 *)(iVar4 + 0x214) = *param_3;
  *(undefined4 *)(iVar4 + 0x218) = uVar3;
  *(undefined4 *)(iVar4 + 0x21c) = uVar6;
  uVar3 = param_4[1];
  uVar6 = param_4[2];
  uVar5 = param_4[3];
  uVar7 = param_4[4];
  uVar9 = param_4[5];
  *puVar2 = *param_4;
  puVar2[1] = uVar3;
  puVar2[2] = uVar6;
  puVar2[3] = uVar5;
  puVar2[4] = uVar7;
  puVar2[5] = uVar9;
  uVar3 = param_4[7];
  uVar6 = param_4[8];
  uVar5 = param_4[9];
  uVar7 = param_4[10];
  uVar9 = param_4[0xb];
  puVar2[6] = param_4[6];
  puVar2[7] = uVar3;
  puVar2[8] = uVar6;
  puVar2[9] = uVar5;
  puVar2[10] = uVar7;
  puVar2[0xb] = uVar9;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = uVar8;
  return;
}

