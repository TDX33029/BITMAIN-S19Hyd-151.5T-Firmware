// FUN_006b227c @ 006b227c size=168 calls_out=1 calls_in=1
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_006b227c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
                 int param_6)

{
  ushort uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_6 == param_2 + -1) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x29a);
    if (uVar4 < 0xb) {
      uVar1 = (ushort)(uVar4 + 1);
      *(ushort *)(param_1 + 0x29a) = uVar1;
      uVar7 = param_3[1];
      uVar10 = param_3[2];
      iVar5 = param_1 + uVar4 * 0xc;
      puVar3 = (undefined4 *)(param_1 + uVar4 * 0x30);
      *(undefined4 *)(iVar5 + 0x214) = *param_3;
      *(undefined4 *)(iVar5 + 0x218) = uVar7;
      *(undefined4 *)(iVar5 + 0x21c) = uVar10;
      uVar7 = param_4[1];
      uVar10 = param_4[2];
      uVar8 = param_4[3];
      uVar9 = param_4[4];
      uVar11 = param_4[5];
      *puVar3 = *param_4;
      puVar3[1] = uVar7;
      puVar3[2] = uVar10;
      puVar3[3] = uVar8;
      puVar3[4] = uVar9;
      puVar3[5] = uVar11;
      uVar7 = param_4[7];
      uVar10 = param_4[8];
      uVar8 = param_4[9];
      uVar9 = param_4[10];
      uVar11 = param_4[0xb];
      puVar3[6] = param_4[6];
      puVar3[7] = uVar7;
      puVar3[8] = uVar10;
      puVar3[9] = uVar8;
      puVar3[10] = uVar9;
      puVar3[0xb] = uVar11;
      *(int *)(param_1 + (uVar4 + 1) * 4 + 0x2a0) = param_5;
      *(ushort *)(param_5 + 0x298) = uVar1;
      *(int *)(param_5 + 0x210) = param_1;
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

