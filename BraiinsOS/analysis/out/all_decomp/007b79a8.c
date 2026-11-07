// FUN_007b79a8 @ 007b79a8 size=300 calls_out=4 calls_in=2
// strings: assertion failed: interval.as_secs() > 0

void FUN_007b79a8(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint in_fpscr;
  int iVar5;
  double dVar6;
  double dVar7;
  uint local_34;
  
  uVar1 = (uint)((int)param_3 - (int)param_2) >> 4;
  iVar5 = uVar1 * 0x28;
  if (0x33333330 < (uint)((int)param_3 - (int)param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (iVar5 == 0) {
    uVar2 = 8;
    local_34 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(iVar5);
    local_34 = uVar1;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar5);
    }
  }
  if (param_2 != param_3) {
    puVar3 = (undefined4 *)(uVar2 + 0x20);
    uVar4 = uVar1;
    do {
      if (*param_2 == 0 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: interval.as_secs() > 0",0x28,&DAT_018870dc);
      }
      dVar7 = (double)FUN_01845f30();
      iVar5 = param_2[2];
      puVar3[-6] = 0;
      param_2 = param_2 + 4;
      dVar6 = (double)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      puVar3[-5] = 0;
      puVar3[-4] = 0;
      uVar4 = uVar4 - 1;
      puVar3[-3] = 0;
      *puVar3 = &DAT_3b9aca00;
      *(double *)(puVar3 + -8) = dVar6 / 1000000000.0 + dVar7;
      puVar3 = puVar3 + 10;
    } while (uVar4 != 0);
  }
  param_1[2] = uVar1;
  *param_1 = local_34;
  param_1[1] = uVar2;
  return;
}

