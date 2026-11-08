// FUN_00059e50 @ 00059e50  size=120  callers=2
// program: bmminer


void FUN_00059e50(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_00a5f350;
  uVar3 = DAT_00a5f350 + 1;
  iVar1 = uVar3 * 8;
  (&DAT_00a5f354)[uVar3 * 2] = *(undefined4 *)(param_1 + 4);
  *(byte *)(&DAT_00a5f358 + uVar3 * 2) = param_1[3] & 0x1f;
  *(byte *)((int)&DAT_00a5f358 + iVar1 + 1) = param_1[2];
  *(byte *)((int)&DAT_00a5f358 + iVar1 + 2) = param_1[1];
  if (uVar2 < 0xffe) {
    DAT_00a5f350 = uVar3;
  }
  *(byte *)((int)&DAT_00a5f358 + iVar1 + 3) = *param_1 & 0xf;
  if (0xffd < uVar2) {
    DAT_00a5f350 = 0;
  }
  if (DAT_00a5f358 < 0xfff) {
    DAT_00a5f358 = DAT_00a5f358 + 1;
  }
  else {
    DAT_00a5f358 = 0xfff;
  }
  return;
}

