// FUN_01551d6c @ 01551d6c size=292 calls_out=2 calls_in=0
// strings: 

void FUN_01551d6c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,short *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint local_4c;
  int local_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*param_5 != 4) {
    FUN_01551730();
    return;
  }
  uVar1 = *(ushort *)(param_2 + 0x9e);
  uVar2 = *(ushort *)(param_2 + 0x9c);
  FUN_01551730(&local_38);
  if (local_38 != -0x7fffffd7) {
    *param_1 = local_38;
    param_1[1] = iStack_34;
    param_1[2] = iStack_30;
    param_1[3] = uStack_2c;
    param_1[4] = uStack_28;
    param_1[5] = local_24;
    param_1[6] = local_20;
    param_1[7] = local_1c;
    return;
  }
  local_4c = uStack_28;
  if (((1 << (uVar2 & 0xff) & 0x7c1fU) == 0) &&
     (((1 << (uVar2 & 0xff) & 0x3e0U) != 0 || ((uVar1 & 0xff00) == 0x100)))) {
    if (uStack_2c < uStack_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uStack_28,uStack_2c,uStack_2c,&DAT_018a7c34);
    }
    iVar3 = 0;
    do {
      iVar4 = iVar3;
      iVar3 = uStack_2c - uStack_28;
      if (uStack_2c - uStack_28 == iVar4) goto LAB_01551e18;
      iVar3 = iVar4 + 1;
    } while (*(char *)(iStack_30 + uStack_28 + iVar4) == '\0');
    iVar3 = iVar4;
LAB_01551e18:
    local_4c = iVar3 + uStack_28;
  }
  *param_1 = -0x7fffffd7;
  param_1[1] = iStack_34;
  param_1[2] = iStack_30;
  param_1[3] = uStack_2c;
  param_1[4] = local_4c;
  return;
}

