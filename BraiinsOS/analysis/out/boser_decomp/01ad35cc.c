// FUN_01ad35cc @ 01ad35cc size=180 calls_out=2 calls_in=3
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_01ad35cc(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  ushort uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_6 == param_2 + -1) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x5b2);
    if (uVar2 < 0xb) {
      uVar1 = (ushort)(uVar2 + 1);
      *(ushort *)(param_1 + 0x5b2) = uVar1;
      iVar4 = param_1 + uVar2 * 0xc;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      *(undefined4 *)(iVar4 + 0x52c) = *param_3;
      *(undefined4 *)(iVar4 + 0x530) = uVar6;
      *(undefined4 *)(iVar4 + 0x534) = uVar7;
      FUN_01bed4e2(param_1 + uVar2 * 0x78,param_4,0x78);
      *(int *)(param_1 + (uVar2 + 1) * 4 + 0x5b8) = param_5;
      *(ushort *)(param_5 + 0x5b0) = uVar1;
      *(int *)(param_5 + 0x528) = param_1;
      return;
    }
    uVar6 = 0x20;
    puVar5 = &DAT_01d305d8;
    pcVar3 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
  }
  else {
    uVar6 = 0x30;
    puVar5 = &DAT_01d305c8;
    pcVar3 = &DAT_00533a41;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec(pcVar3,uVar6,puVar5);
}

