// FUN_006f6928 @ 006f6928 size=468 calls_out=5 calls_in=2
// strings: 

uint FUN_006f6928(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_e8;
  code *local_e4;
  undefined4 local_e0;
  uint local_2c;
  int local_28;
  
  iVar4 = *param_5;
  uVar3 = param_5[1];
  iVar6 = param_5[2];
  local_2c = uVar3;
  local_28 = iVar6;
  if (((*(uint *)(iVar4 + 0x38) <= uVar3) ||
      (piVar2 = (int *)(*(int *)(iVar4 + 0x34) + uVar3 * 0xf8), *piVar2 == 3 && piVar2[1] == 0)) ||
     (piVar2[0x35] != iVar6)) {
    local_e4 = FUN_0101a4ac;
    local_e8 = &local_28;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882550);
  }
  bVar1 = *(byte *)(piVar2 + 8);
  iVar5 = piVar2[0x1b];
  if (5 < bVar1 != (bVar1 != 3)) {
    return (uint)DAT_018dd947;
  }
  FUN_01020dac(piVar2);
  if ((bVar1 < 6) && (iVar5 == 0)) {
    return (uint)DAT_018dd947;
  }
  param_1 = param_1 + 8;
  FUN_0075746c(param_1,param_4,param_5);
  if (((*(uint *)(iVar4 + 0x38) <= uVar3) ||
      (piVar2 = (int *)(*(int *)(iVar4 + 0x34) + uVar3 * 0xf8), *piVar2 == 3 && piVar2[1] == 0)) ||
     (piVar2[0x35] != iVar6)) {
    local_e4 = FUN_0101a4ac;
    local_e8 = &local_28;
    local_2c = uVar3;
    local_28 = iVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882550);
  }
  local_e8 = (int *)CONCAT31(local_e8._1_3_,8);
  local_e4 = (code *)iVar6;
  local_e0 = param_2;
  local_2c = uVar3;
  local_28 = iVar6;
  FUN_00757a80(param_1,&local_e8,param_4,param_5,param_7);
  uVar3 = FUN_0101d80c(param_1,param_5,param_6);
  return uVar3;
}

