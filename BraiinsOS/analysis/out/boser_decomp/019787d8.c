// FUN_019787d8 @ 019787d8 size=164 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_019787d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  
  if (param_10 == param_2 + -1) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x10e);
    if (uVar3 < 0xb) {
      uVar1 = (ushort)(uVar3 + 1);
      *(ushort *)(param_1 + 0x10e) = uVar1;
      puVar7 = (undefined4 *)(param_1 + uVar3 * 0x10);
      *puVar7 = param_3;
      iVar4 = param_1 + uVar3 * 8;
      puVar7[1] = param_4;
      puVar7[2] = param_5;
      puVar7[3] = param_6;
      *(undefined4 *)(iVar4 + 0xb0) = param_7;
      *(undefined4 *)(iVar4 + 0xb4) = param_8;
      *(int *)(param_1 + (uVar3 + 1) * 4 + 0x110) = param_9;
      *(ushort *)(param_9 + 0x10c) = uVar1;
      *(int *)(param_9 + 0x108) = param_1;
      return;
    }
    uVar5 = 0x20;
    puVar6 = &DAT_01d305d8;
    pcVar2 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
  }
  else {
    uVar5 = 0x30;
    puVar6 = &DAT_01d305c8;
    pcVar2 = &DAT_00533a41;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec(pcVar2,uVar5,puVar6);
}

