// FUN_0196081c @ 0196081c size=84 calls_out=1 calls_in=3
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_0196081c(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x8a);
  if (10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                 &DAT_01d305b8);
  }
  *(ushort *)(param_2 + 0x8a) = *(ushort *)(param_2 + 0x8a) + 1;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  iVar2 = param_2 + uVar1 * 0xc;
  *(undefined4 *)(iVar2 + 4) = *param_3;
  *(undefined4 *)(iVar2 + 8) = uVar3;
  *(undefined4 *)(iVar2 + 0xc) = uVar4;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = uVar1;
  return;
}

