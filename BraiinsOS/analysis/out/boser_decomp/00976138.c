// FUN_00976138 @ 00976138 size=188 calls_out=2 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_00976138(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,
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
    uVar4 = (uint)*(ushort *)(param_1 + 0x1422);
    if (uVar4 < 0xb) {
      uVar1 = (ushort)(uVar4 + 1);
      *(ushort *)(param_1 + 0x1422) = uVar1;
      iVar3 = param_1 + uVar4 * 0xc;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      *(undefined4 *)(iVar3 + 0x139c) = *param_3;
      *(undefined4 *)(iVar3 + 0x13a0) = uVar6;
      *(undefined4 *)(iVar3 + 0x13a4) = uVar7;
      FUN_01bed4e2(uVar4 * 0x1c8 + param_1,param_4,0x1c8);
      *(int *)(param_1 + (uVar4 + 1) * 4 + 0x1428) = param_5;
      *(int *)(&DAT_00001398 + param_5) = param_1;
      *(ushort *)(&DAT_00001420 + param_5) = uVar1;
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

