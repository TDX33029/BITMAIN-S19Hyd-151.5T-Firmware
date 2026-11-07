// FUN_00975d10 @ 00975d10 size=128 calls_out=2 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_00975d10(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_2 + 0x1422);
  uVar5 = (uint)uVar1;
  if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x1422) = uVar1 + 1;
  iVar2 = param_2 + uVar5 * 0xc;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  *(undefined4 *)(iVar2 + 0x139c) = *param_3;
  *(undefined4 *)(iVar2 + 0x13a0) = uVar3;
  *(undefined4 *)(iVar2 + 0x13a4) = uVar4;
  FUN_01bed4e2(uVar5 * 0x1c8 + param_2,param_4,0x1c8);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = uVar5;
  return;
}

