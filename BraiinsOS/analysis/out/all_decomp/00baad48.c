// FUN_00baad48 @ 00baad48 size=512 calls_out=7 calls_in=2
// strings: a Display implementation returned an error unexpectedly

void FUN_00baad48(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
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
    if (*(int *)(iVar8 + 0x238) != 0) {
      local_258 = &local_2c;
      local_2c = iVar8;
      FUN_015eedc4(iVar8 + 0x238,1,&local_258,&DAT_01870f6c,&DAT_018ac9b8);
    }
    local_250 = 0;
    local_254 = 1;
    local_258 = (int *)0x0;
    local_2c = *(int *)(iVar8 + 0x230) + 0xd8;
    local_28 = &DAT_006043a8;
    iVar3 = FUN_00fa948c(&local_258,&DAT_01870f94,&DAT_00590e71,&local_2c);
    uVar9 = local_254;
    piVar6 = local_258;
    if (iVar3 != 0) break;
    iVar3 = 0;
    if (local_250 == param_5) {
      iVar4 = thunk_FUN_016dd50a(local_254,param_4,param_5);
      iVar3 = iVar8;
      if (iVar4 != 0) {
        iVar3 = 0;
      }
    }
    if (piVar6 != (int *)0x0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    param_3 = param_3 + -4;
    param_2 = param_2 + 1;
    if (iVar3 != 0) {
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar3 + 0x238) != 0) {
        local_258 = &local_2c;
        local_2c = iVar3;
        FUN_015eedc4(iVar3 + 0x238,1,&local_258,&DAT_01870f6c,&DAT_018ac9b8);
      }
      FUN_00ba1e84(&local_258,iVar3);
      uVar9 = *(undefined4 *)(iVar3 + 0x230);
      piVar6 = *(int **)(iVar3 + 0x234);
      do {
        iVar8 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar8 + 1;
      if (iVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xbaaf10);
        (*pcVar1)();
      }
      uVar7 = *(undefined4 *)(iVar3 + 0x228);
      uVar5 = *(undefined4 *)(iVar3 + 0x22c);
      FUN_016dd1aa(param_1,&local_258,0x228);
      param_1[0x8a] = uVar7;
      param_1[0x8b] = uVar5;
      param_1[0x8c] = uVar9;
      param_1[0x8d] = piVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_2c,
               &DAT_01870fac,&DAT_018af130);
}

