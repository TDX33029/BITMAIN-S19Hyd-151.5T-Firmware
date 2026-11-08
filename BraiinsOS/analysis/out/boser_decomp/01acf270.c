// FUN_01acf270 @ 01acf270 size=516 calls_out=2 calls_in=2
// strings: 

int FUN_01acf270(ushort *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  ushort *puVar8;
  ushort local_3c [4];
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  ushort *local_2c;
  code *local_28;
  
  local_2e = param_1[7] << 8 | param_1[7] >> 8;
  local_30 = param_1[6] << 8 | param_1[6] >> 8;
  local_32 = param_1[5] << 8 | param_1[5] >> 8;
  local_34 = param_1[4] << 8 | param_1[4] >> 8;
  local_3c[3] = param_1[3] << 8 | param_1[3] >> 8;
  local_3c[2] = param_1[2] << 8 | param_1[2] >> 8;
  local_3c[1] = param_1[1] << 8 | param_1[1] >> 8;
  local_3c[0] = *param_1 << 8 | *param_1 >> 8;
  uVar3 = 0;
  uVar1 = 0xffffffff;
  iVar2 = -1;
  uVar5 = 0xffffffff;
  puVar8 = local_3c;
  do {
    if (*puVar8 == 0) {
      if ((int)uVar5 < 0) {
        uVar5 = uVar3;
      }
    }
    else {
      if ((-1 < (int)uVar5) && (iVar2 < (int)(uVar3 - uVar5))) {
        uVar1 = uVar5;
        iVar2 = uVar3 - uVar5;
      }
      uVar5 = 0xffffffff;
    }
    uVar3 = uVar3 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar3 != 8);
  iVar4 = 8 - uVar5;
  uVar3 = 0;
  if (iVar2 < iVar4) {
    uVar7 = uVar5;
  }
  else {
    uVar7 = uVar1;
    iVar4 = iVar2;
  }
  if (0x7fffffff < uVar5) {
    iVar4 = iVar2;
    uVar7 = uVar1;
  }
  uVar5 = uVar7 + iVar4;
  uVar1 = uVar5;
  if (iVar4 < 2) {
    uVar7 = 0xffffffff;
    uVar1 = 0xfffffffe;
  }
  while( true ) {
    if (uVar3 == uVar7) {
      pcVar6 = *(code **)(param_3 + 0xc);
      iVar2 = (*pcVar6)(param_2,":",1);
      if (iVar2 != 0) {
        return 1;
      }
      if (uVar7 == 0) {
        iVar2 = (*pcVar6)(param_2,":",1);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (7 < (int)uVar1) {
          return 0;
        }
      }
      else if (7 < (int)uVar1) {
        return 0;
      }
      uVar3 = uVar5;
      if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,8,&DAT_01d2fd08);
      }
    }
    local_2c = local_3c + uVar3;
    local_28 = FUN_012fd958;
    iVar2 = FUN_012fa178(param_2,param_3,&DAT_00590e5f,&local_2c);
    if (iVar2 != 0) {
      return 1;
    }
    if (uVar3 == 7) break;
    iVar2 = (**(code **)(param_3 + 0xc))(param_2,":",1);
    if (iVar2 != 0) {
      return 1;
    }
    uVar3 = uVar3 + 1;
  }
  return 0;
}

