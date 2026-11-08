// FUN_01960890 @ 01960890 size=128 calls_out=1 calls_in=3
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_01960890(int param_1,int param_2,undefined4 *param_3,int *param_4,int param_5)

{
  undefined2 uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_5 == param_2 + -1) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x8a);
    if (uVar3 < 0xb) {
      uVar1 = (undefined2)(uVar3 + 1);
      *(undefined2 *)(param_1 + 0x8a) = uVar1;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      iVar4 = param_1 + uVar3 * 0xc;
      *(undefined4 *)(iVar4 + 4) = *param_3;
      *(undefined4 *)(iVar4 + 8) = uVar6;
      *(undefined4 *)(iVar4 + 0xc) = uVar7;
      *(int **)(param_1 + (uVar3 + 1) * 4 + 0x8c) = param_4;
      *(undefined2 *)(param_4 + 0x22) = uVar1;
      *param_4 = param_1;
      return;
    }
    uVar6 = 0x20;
    puVar5 = &DAT_01d305d8;
    pcVar2 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
  }
  else {
    uVar6 = 0x30;
    puVar5 = &DAT_01d305c8;
    pcVar2 = &DAT_00533a41;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec(pcVar2,uVar6,puVar5);
}

