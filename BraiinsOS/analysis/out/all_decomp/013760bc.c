// FUN_013760bc @ 013760bc size=196 calls_out=2 calls_in=1
// strings: 

void FUN_013760bc(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018929d0);
  }
  iVar3 = *(int *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (iVar3 == *(int *)(param_2 + 0x34)) {
    FUN_013c40f0();
  }
  *(int *)(param_2 + 0x3c) = iVar3 + 1;
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar3 * 0x10);
  *puVar1 = 6;
  puVar1[1] = 0;
  puVar1[2] = 4;
  puVar1[3] = 0;
  if ((*(int *)(param_2 + 0x2c) == 1) &&
     (uVar2 = *(uint *)(param_2 + 0x30),
     uVar2 < (uint)(*(int *)(param_2 + 0x58) + (iVar3 + 1) * 0x10))) {
    *param_1 = 0x27;
    param_1[1] = uVar2;
  }
  else {
    *param_1 = 0x2a;
    param_1[1] = iVar3;
  }
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  return;
}

