// FUN_00f2c4fc @ 00f2c4fc size=264 calls_out=3 calls_in=3
// strings: 

void FUN_00f2c4fc(ushort *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  
  if (4 < *param_1) {
    param_1[1] = 0;
  }
  iVar1 = *(int *)(param_1 + 2);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_14 = iVar1 + *(int *)(param_1 + 4) * 0x14;
    local_18 = iVar1;
    FUN_00f30554(&local_18);
    uVar2 = *(undefined4 *)(param_1 + 2);
    param_1[2] = 0;
    param_1[3] = 0;
    uVar2 = FUN_00f2c6d0(uVar2,*(undefined4 *)(param_1 + 4));
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_00f36024(param_1 + 6);
  if (4 < *param_1) {
    param_1[1] = 0;
  }
  FUN_00f2c6d0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
  if (param_1[6] != 2) {
    if ((char)param_1[8] != '\x02') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 8) = 2;
    if (param_1[6] == 1) {
      param_1[7] = 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

