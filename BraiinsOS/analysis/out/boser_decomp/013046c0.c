// FUN_013046c0 @ 013046c0 size=528 calls_out=3 calls_in=8
// strings: 

void FUN_013046c0(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ushort local_40 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  uVar6 = *param_2;
  uVar7 = param_2[1];
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  uVar8 = FUN_013048dc(param_2,local_40,8);
  if ((int)uVar8 == 8) {
    *(ushort *)(param_1 + 0xb) = local_40[5] << 8 | local_40[5] >> 8;
    *param_1 = 1;
    *(ushort *)(param_1 + 9) = local_40[4] << 8 | local_40[4] >> 8;
    *(ushort *)(param_1 + 0xf) = local_40[7] << 8 | local_40[7] >> 8;
    *(ushort *)(param_1 + 7) = local_40[3] << 8 | local_40[3] >> 8;
    *(ushort *)(param_1 + 5) = local_40[2] << 8 | local_40[2] >> 8;
    *(ushort *)(param_1 + 3) = local_40[1] << 8 | local_40[1] >> 8;
    uVar2 = local_40[0] << 8 | local_40[0] >> 8;
    *(ushort *)(param_1 + 0xd) = local_40[6] << 8 | local_40[6] >> 8;
LAB_0130476c:
    *(ushort *)(param_1 + 1) = uVar2;
    return;
  }
  if (((((uVar8 & 0x100000000) == 0) && (iVar3 = param_2[1], iVar3 != 0)) &&
      (pcVar4 = (char *)*param_2, *pcVar4 == ':')) && (iVar3 != 1)) {
    cVar1 = pcVar4[1];
    *param_2 = pcVar4 + 2;
    param_2[1] = iVar3 + -2;
    if (cVar1 == ':') {
      uVar5 = 7 - (int)uVar8;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      local_30 = 0;
      if (7 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar5,7,&DAT_01ce4680);
      }
      uVar5 = FUN_013048dc(param_2,&local_30);
      if (8 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(8 - uVar5,8,8,&DAT_01ce4670);
      }
      if (uVar5 == 8) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,8,7,&DAT_01ce4660);
      }
      FUN_01bed4e2(local_40 + (8 - uVar5),&local_30,uVar5 << 1);
      *(ushort *)(param_1 + 9) = local_40[4] << 8 | local_40[4] >> 8;
      *param_1 = 1;
      *(ushort *)(param_1 + 0xf) = local_40[7] << 8 | local_40[7] >> 8;
      *(ushort *)(param_1 + 7) = local_40[3] << 8 | local_40[3] >> 8;
      *(ushort *)(param_1 + 5) = local_40[2] << 8 | local_40[2] >> 8;
      *(ushort *)(param_1 + 3) = local_40[1] << 8 | local_40[1] >> 8;
      uVar2 = local_40[0] << 8 | local_40[0] >> 8;
      *(ushort *)(param_1 + 0xd) = local_40[6] << 8 | local_40[6] >> 8;
      *(ushort *)(param_1 + 0xb) = local_40[5] << 8 | local_40[5] >> 8;
      goto LAB_0130476c;
    }
  }
  *param_2 = uVar6;
  param_2[1] = uVar7;
  *param_1 = 0;
  return;
}

