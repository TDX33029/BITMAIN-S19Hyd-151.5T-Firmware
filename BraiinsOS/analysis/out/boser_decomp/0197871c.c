// FUN_0197871c @ 0197871c size=112 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_0197871c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(ushort *)(param_2 + 0x10e);
  uVar2 = (uint)uVar1;
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x10e) = uVar1 + 1;
  param_1[2] = uVar2;
  puVar3 = (undefined4 *)(param_2 + uVar2 * 0x10);
  *puVar3 = param_3;
  *param_1 = param_2;
  param_1[1] = 0;
  param_2 = param_2 + uVar2 * 8;
  puVar3[1] = param_4;
  puVar3[2] = param_5;
  puVar3[3] = param_6;
  *(undefined4 *)(param_2 + 0xb0) = param_7;
  *(undefined4 *)(param_2 + 0xb4) = param_8;
  return;
}

