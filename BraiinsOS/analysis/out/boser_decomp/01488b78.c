// FUN_01488b78 @ 01488b78 size=108 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_01488b78(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(ushort *)(param_2 + 0x13a);
  uVar2 = (uint)uVar1;
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x13a) = uVar1 + 1;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  iVar3 = param_2 + uVar2 * 0xc;
  *(undefined4 *)(iVar3 + 0xb4) = *param_3;
  *(undefined4 *)(iVar3 + 0xb8) = uVar5;
  *(undefined4 *)(iVar3 + 0xbc) = uVar6;
  puVar4 = (undefined4 *)(param_2 + uVar2 * 0x10);
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *puVar4 = *param_4;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = uVar2;
  return;
}

