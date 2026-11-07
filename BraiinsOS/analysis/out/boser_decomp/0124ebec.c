// FUN_0124ebec @ 0124ebec size=168 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_0124ebec(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
                 int param_6)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_6 == param_2 + -1) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x242);
    if (uVar3 < 0xb) {
      uVar1 = (ushort)(uVar3 + 1);
      *(ushort *)(param_1 + 0x242) = uVar1;
      uVar7 = param_3[1];
      uVar9 = param_3[2];
      iVar5 = param_1 + uVar3 * 0xc;
      puVar4 = (undefined4 *)(param_1 + uVar3 * 0x28);
      *(undefined4 *)(iVar5 + 0x1bc) = *param_3;
      *(undefined4 *)(iVar5 + 0x1c0) = uVar7;
      *(undefined4 *)(iVar5 + 0x1c4) = uVar9;
      uVar7 = param_4[1];
      uVar9 = param_4[2];
      uVar8 = param_4[3];
      uVar10 = param_4[4];
      *puVar4 = *param_4;
      puVar4[1] = uVar7;
      puVar4[2] = uVar9;
      puVar4[3] = uVar8;
      puVar4[4] = uVar10;
      uVar7 = param_4[6];
      uVar9 = param_4[7];
      uVar8 = param_4[8];
      uVar10 = param_4[9];
      puVar4[5] = param_4[5];
      puVar4[6] = uVar7;
      puVar4[7] = uVar9;
      puVar4[8] = uVar8;
      puVar4[9] = uVar10;
      *(int *)(param_1 + (uVar3 + 1) * 4 + 0x248) = param_5;
      *(ushort *)(param_5 + 0x240) = uVar1;
      *(int *)(param_5 + 0x1b8) = param_1;
      return;
    }
    uVar7 = 0x20;
    puVar6 = &DAT_01d305d8;
    pcVar2 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
  }
  else {
    uVar7 = 0x30;
    puVar6 = &DAT_01d305c8;
    pcVar2 = &DAT_00533a41;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec(pcVar2,uVar7,puVar6);
}

