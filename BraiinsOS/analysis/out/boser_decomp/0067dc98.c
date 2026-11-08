// FUN_0067dc98 @ 0067dc98 size=156 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_0067dc98(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int *param_5,
                 int param_6)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_6 == param_2 + -1) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x10e);
    if (uVar4 < 0xb) {
      uVar1 = (ushort)(uVar4 + 1);
      *(ushort *)(param_1 + 0x10e) = uVar1;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      iVar3 = param_1 + uVar4 * 0xc;
      *(undefined4 *)(iVar3 + 4) = *param_3;
      *(undefined4 *)(iVar3 + 8) = uVar6;
      *(undefined4 *)(iVar3 + 0xc) = uVar7;
      uVar6 = param_4[1];
      uVar7 = param_4[2];
      *(undefined4 *)(iVar3 + 0x88) = *param_4;
      *(undefined4 *)(iVar3 + 0x8c) = uVar6;
      *(undefined4 *)(iVar3 + 0x90) = uVar7;
      *(int **)(param_1 + (uVar4 + 1) * 4 + 0x110) = param_5;
      *param_5 = param_1;
      *(ushort *)(param_5 + 0x43) = uVar1;
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

