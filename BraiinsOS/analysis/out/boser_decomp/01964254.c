// FUN_01964254 @ 01964254 size=104 calls_out=1 calls_in=4
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_01964254(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

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
  
  uVar1 = *(ushort *)(param_2 + 0x192);
  uVar8 = (uint)uVar1;
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x192) = uVar1 + 1;
  uVar3 = param_3[1];
  uVar6 = param_3[2];
  iVar4 = param_2 + uVar8 * 0xc;
  puVar2 = (undefined4 *)(param_2 + uVar8 * 0x18);
  *(undefined4 *)(iVar4 + 0x10c) = *param_3;
  *(undefined4 *)(iVar4 + 0x110) = uVar3;
  *(undefined4 *)(iVar4 + 0x114) = uVar6;
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
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = uVar8;
  return;
}

