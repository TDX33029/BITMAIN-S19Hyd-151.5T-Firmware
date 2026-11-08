// FUN_00fb3f68 @ 00fb3f68 size=536 calls_out=3 calls_in=14
// strings: 

void FUN_00fb3f68(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ushort local_40 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  uVar7 = FUN_00fb418c(param_2,local_40,8);
  if ((int)uVar7 == 8) {
    *(ushort *)(param_1 + 0xb) = local_40[5] << 8 | local_40[5] >> 8;
    *param_1 = 1;
    *(ushort *)(param_1 + 9) = local_40[4] << 8 | local_40[4] >> 8;
    *(ushort *)(param_1 + 0xf) = local_40[7] << 8 | local_40[7] >> 8;
    *(ushort *)(param_1 + 7) = local_40[3] << 8 | local_40[3] >> 8;
    *(ushort *)(param_1 + 5) = local_40[2] << 8 | local_40[2] >> 8;
    *(ushort *)(param_1 + 3) = local_40[1] << 8 | local_40[1] >> 8;
    *(ushort *)(param_1 + 0xd) = local_40[6] << 8 | local_40[6] >> 8;
    *(ushort *)(param_1 + 1) = local_40[0] << 8 | local_40[0] >> 8;
    return;
  }
  if (((((uVar7 & 0x100000000) == 0) && (iVar2 = param_2[1], iVar2 != 0)) &&
      (pcVar3 = (char *)*param_2, *pcVar3 == ':')) && (iVar2 != 1)) {
    cVar1 = pcVar3[1];
    *param_2 = pcVar3 + 2;
    param_2[1] = iVar2 + -2;
    if (cVar1 == ':') {
      uVar4 = 7 - (int)uVar7;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      local_30 = 0;
      if (7 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar4,7,&DAT_01880e4c);
      }
      uVar4 = FUN_00fb418c(param_2,&local_30);
      if (8 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(8 - uVar4,8,8,&DAT_01880e3c);
      }
      if (uVar4 == 8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,8,7,&DAT_01880e2c);
      }
      FUN_016dd1aa(local_40 + (8 - uVar4),&local_30,uVar4 << 1);
      *(ushort *)(param_1 + 9) = local_40[4] << 8 | local_40[4] >> 8;
      *param_1 = 1;
      *(ushort *)(param_1 + 0xf) = local_40[7] << 8 | local_40[7] >> 8;
      *(ushort *)(param_1 + 7) = local_40[3] << 8 | local_40[3] >> 8;
      *(ushort *)(param_1 + 5) = local_40[2] << 8 | local_40[2] >> 8;
      *(ushort *)(param_1 + 3) = local_40[1] << 8 | local_40[1] >> 8;
      *(ushort *)(param_1 + 0xd) = local_40[6] << 8 | local_40[6] >> 8;
      *(ushort *)(param_1 + 0xb) = local_40[5] << 8 | local_40[5] >> 8;
      *(ushort *)(param_1 + 1) = local_40[0] << 8 | local_40[0] >> 8;
      return;
    }
  }
  *param_2 = uVar5;
  param_2[1] = uVar6;
  *param_1 = 0;
  return;
}

