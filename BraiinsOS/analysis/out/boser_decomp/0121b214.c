// FUN_0121b214 @ 0121b214 size=232 calls_out=2 calls_in=0
// strings: 

void FUN_0121b214(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  uVar1 = *(uint *)(param_2 + 0x68);
  uVar2 = *(uint *)(param_2 + 0x6c);
  if (*(uint *)(param_2 + 0x6c) <= uVar1) {
    local_28 = *(undefined4 *)(param_2 + 0x60);
    local_24 = *(uint *)(param_2 + 100);
    local_20 = 0;
    local_1c = local_24;
    FUN_01348c70(&local_18,param_2 + 0x10,*param_3,&local_28);
    if ((char)local_18 == '\x05') {
      *param_1 = 2;
      return;
    }
    if ((local_18 & 0xff) != 4) {
      *param_1 = 1;
      goto LAB_0121b258;
    }
    if (local_24 < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_20,local_24,&DAT_01d2e4e0);
    }
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(uint *)(param_2 + 0x6c) = local_20;
    uVar2 = local_20;
  }
  if ((uVar2 < uVar1) || (*(uint *)(param_2 + 100) < uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4();
  }
  iVar3 = *(int *)(param_2 + 0x60);
  local_14 = uVar2 - uVar1;
  *param_1 = 0;
  local_18 = iVar3 + uVar1;
LAB_0121b258:
  param_1[1] = local_18;
  param_1[2] = local_14;
  return;
}

