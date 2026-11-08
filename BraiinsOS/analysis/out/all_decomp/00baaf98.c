// FUN_00baaf98 @ 00baaf98 size=524 calls_out=7 calls_in=4
// strings: a Display implementation returned an error unexpectedly

void FUN_00baaf98(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *local_258;
  undefined4 local_254;
  int local_250;
  int local_2c;
  undefined4 *local_28;
  
  param_3 = param_3 << 2;
  while( true ) {
    if (param_3 == 0) {
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    iVar8 = *param_2;
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar8 + 0x240) != 0) {
      local_258 = &local_2c;
      local_2c = iVar8;
      FUN_015eedc4(iVar8 + 0x240,1,&local_258,&DAT_01870f08,&DAT_018ac9b8);
    }
    local_250 = 0;
    local_254 = 1;
    local_258 = (int *)0x0;
    local_2c = *(int *)(iVar8 + 0x230) + 0xd8;
    local_28 = &DAT_006043a8;
    iVar4 = FUN_00fa948c(&local_258,&DAT_01870f94,&DAT_00590e71,&local_2c);
    uVar9 = local_254;
    piVar6 = local_258;
    if (iVar4 != 0) break;
    iVar4 = 0;
    if (local_250 == param_5) {
      iVar5 = thunk_FUN_016dd50a(local_254,param_4,param_5);
      iVar4 = iVar8;
      if (iVar5 != 0) {
        iVar4 = 0;
      }
    }
    if (piVar6 != (int *)0x0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    param_3 = param_3 + -4;
    param_2 = param_2 + 1;
    if (iVar4 != 0) {
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar4 + 0x240) != 0) {
        local_258 = &local_2c;
        local_2c = iVar4;
        FUN_015eedc4(iVar4 + 0x240,1,&local_258,&DAT_01870f08,&DAT_018ac9b8);
      }
      FUN_00ba1e84(&local_258,iVar4);
      uVar9 = *(undefined4 *)(iVar4 + 0x230);
      piVar6 = *(int **)(iVar4 + 0x234);
      do {
        iVar8 = *piVar6;
        bVar3 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar3);
      *piVar6 = iVar8 + 1;
      if (iVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xbab16c);
        (*pcVar1)();
      }
      uVar7 = *(undefined4 *)(iVar4 + 0x228);
      uVar10 = *(undefined4 *)(iVar4 + 0x22c);
      uVar2 = *(undefined2 *)(iVar4 + 0x238);
      FUN_016dd1aa(param_1,&local_258,0x228);
      *(undefined2 *)(param_1 + 0x8e) = uVar2;
      param_1[0x8a] = uVar7;
      param_1[0x8b] = uVar10;
      param_1[0x8c] = uVar9;
      param_1[0x8d] = piVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_2c,
               &DAT_01870fac,&DAT_018af130);
}

