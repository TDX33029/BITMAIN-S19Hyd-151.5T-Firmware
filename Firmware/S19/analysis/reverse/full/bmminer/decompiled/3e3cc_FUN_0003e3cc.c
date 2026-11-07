// FUN_0003e3cc @ 0003e3cc  size=120  callers=2
// program: bmminer


void FUN_0003e3cc(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_00722a00;
  uVar3 = DAT_00722a00 + 1;
  iVar1 = uVar3 * 8;
  (&DAT_00722a04)[uVar3 * 2] = *(undefined4 *)(param_1 + 4);
  *(byte *)(&DAT_00722a08 + uVar3 * 2) = param_1[3] & 0x1f;
  *(byte *)((int)&DAT_00722a08 + iVar1 + 1) = param_1[2];
  *(byte *)((int)&DAT_00722a08 + iVar1 + 2) = param_1[1];
  if (uVar2 < 0x1fe) {
    DAT_00722a00 = uVar3;
  }
  *(byte *)((int)&DAT_00722a08 + iVar1 + 3) = *param_1 & 0xf;
  if (0x1fd < uVar2) {
    DAT_00722a00 = 0;
  }
  if (DAT_00722a08 < 0x1ff) {
    DAT_00722a08 = DAT_00722a08 + 1;
  }
  else {
    DAT_00722a08 = 0x1ff;
  }
  return;
}

