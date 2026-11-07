// FUN_01572950 @ 01572950 size=504 calls_out=3 calls_in=2
// strings: 

void FUN_01572950(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort local_48 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  
  uVar8 = *param_2;
  uVar7 = param_2[1];
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar13 = FUN_01572b54(param_2,local_48,8);
  if ((int)uVar13 == 8) {
    uVar11 = local_48[7] << 8 | local_48[7] >> 8;
    uVar12 = local_48[6] << 8 | local_48[6] >> 8;
    uVar9 = local_48[5] << 8 | local_48[5] >> 8;
    uVar2 = local_48[1] << 8 | local_48[1] >> 8;
    uVar10 = local_48[4] << 8 | local_48[4] >> 8;
    uVar3 = local_48[3] << 8 | local_48[3] >> 8;
    uVar6 = local_48[2] << 8 | local_48[2] >> 8;
LAB_015729d0:
    if (param_2[1] == 0) {
      *(ushort *)(param_1 + 3) = uVar2;
      *(ushort *)(param_1 + 0xf) = uVar11;
      *(ushort *)(param_1 + 0xd) = uVar12;
      *(ushort *)(param_1 + 0xb) = uVar9;
      *(ushort *)(param_1 + 9) = uVar10;
      *(ushort *)(param_1 + 7) = uVar3;
      *(ushort *)(param_1 + 5) = uVar6;
      *(ushort *)(param_1 + 1) = local_48[0] << 8 | local_48[0] >> 8;
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((((uVar13 & 0x100000000) == 0) && (1 < (uint)param_2[1])) &&
       (pcVar4 = (char *)*param_2, *pcVar4 == ':')) {
      cVar1 = pcVar4[1];
      *param_2 = pcVar4 + 2;
      param_2[1] = param_2[1] - 2;
      if (cVar1 == ':') {
        uVar5 = 7 - (int)uVar13;
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        if (7 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar5,7,&DAT_018a90c0);
        }
        uVar5 = FUN_01572b54(param_2,&local_38);
        if (8 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(8 - uVar5,8,8,&DAT_018a90b0);
        }
        if (uVar5 == 8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,8,7,&DAT_018a90a0);
        }
        FUN_016dd1aa(local_48 + (8 - uVar5),&local_38,uVar5 << 1);
        uVar11 = local_48[7] << 8 | local_48[7] >> 8;
        uVar12 = local_48[6] << 8 | local_48[6] >> 8;
        uVar9 = local_48[5] << 8 | local_48[5] >> 8;
        uVar2 = local_48[1] << 8 | local_48[1] >> 8;
        uVar10 = local_48[4] << 8 | local_48[4] >> 8;
        uVar3 = local_48[3] << 8 | local_48[3] >> 8;
        uVar6 = local_48[2] << 8 | local_48[2] >> 8;
        goto LAB_015729d0;
      }
    }
    *param_2 = uVar8;
    param_2[1] = uVar7;
  }
  param_1[1] = 1;
  *param_1 = 1;
  return;
}

