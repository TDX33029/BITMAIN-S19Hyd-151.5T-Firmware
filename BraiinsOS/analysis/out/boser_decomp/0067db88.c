// FUN_0067db88 @ 0067db88 size=108 calls_out=1 calls_in=2
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_0067db88(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(ushort *)(param_2 + 0x10e);
  uVar2 = (uint)uVar1;
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x10e) = uVar1 + 1;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  iVar3 = param_2 + uVar2 * 0xc;
  *(undefined4 *)(iVar3 + 4) = *param_3;
  *(undefined4 *)(iVar3 + 8) = uVar4;
  *(undefined4 *)(iVar3 + 0xc) = uVar5;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  *(undefined4 *)(iVar3 + 0x88) = *param_4;
  *(undefined4 *)(iVar3 + 0x8c) = uVar4;
  *(undefined4 *)(iVar3 + 0x90) = uVar5;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = uVar2;
  return;
}

