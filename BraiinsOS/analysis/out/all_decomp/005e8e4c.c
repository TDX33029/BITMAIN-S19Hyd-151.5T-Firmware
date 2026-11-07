// FUN_005e8e4c @ 005e8e4c size=504 calls_out=6 calls_in=1
// strings: 

void FUN_005e8e4c(uint *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_2c;
  uint local_28;
  
  if (param_3 == 0) {
LAB_005e8ebc:
    iVar1 = FUN_005e9044(param_2,param_3);
    if (iVar1 == 0) {
      uVar7 = param_1[1];
      uVar8 = param_1[2];
      iVar1 = FUN_005e9044(uVar7,uVar8);
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        cVar5 = '/';
        if (iVar1 != 0) {
          cVar5 = '\\';
        }
        if (cVar5 != *(char *)(uVar7 + uVar8 + -1)) {
          uVar2 = uVar8;
          if (*param_1 == uVar8) {
            FUN_005e8e24(param_1,uVar8,1);
            uVar7 = param_1[1];
            uVar2 = param_1[2];
          }
          uVar8 = uVar8 + 1;
          *(char *)(uVar7 + uVar2) = cVar5;
          param_1[2] = uVar8;
        }
      }
      if (*param_1 - uVar8 < param_3) {
        FUN_005e8e24(param_1,uVar8,param_3);
        uVar7 = param_1[1];
        uVar8 = param_1[2];
      }
      FUN_016dd1aa(uVar7 + uVar8,param_2,param_3);
      param_1[2] = param_1[2] + param_3;
      return;
    }
  }
  else if (*param_2 != '/') {
    if ((param_3 != 1) && (-0x41 < (char)*(short *)(param_2 + 1))) {
      if (param_3 < 4) {
        if (param_3 == 3) {
LAB_005e8eac:
          if (*(short *)(param_2 + 1) == 0x2f3a) goto LAB_005e8ed0;
        }
      }
      else if (-0x41 < param_2[3]) goto LAB_005e8eac;
    }
    goto LAB_005e8ebc;
  }
LAB_005e8ed0:
  uVar6 = 0;
  if ((int)param_3 < 0) {
LAB_005e8edc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,param_3);
  }
  uVar8 = 0;
  if (param_3 == 0) {
    uVar2 = 1;
    uVar7 = 0;
  }
  else {
    uVar6 = 1;
    uVar2 = FUN_0063f47c(param_3,1);
    uVar7 = param_3;
    if (uVar2 == 0) goto LAB_005e8edc;
  }
  uVar3 = FUN_016dd1aa(uVar2,param_2,param_3);
  if (*param_1 == 0) {
    puVar4 = &local_28;
  }
  else {
    uVar3 = param_1[1];
    local_28 = 1;
    puVar4 = &local_2c;
    uVar8 = *param_1;
  }
  *puVar4 = uVar8;
  uVar8 = 0;
  if (local_28 != 0) {
    uVar8 = local_2c;
  }
  if (local_28 != 0 && uVar8 != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  *param_1 = uVar7;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

