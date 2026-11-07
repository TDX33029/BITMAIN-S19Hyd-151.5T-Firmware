// FUN_01af7f20 @ 01af7f20 size=196 calls_out=0 calls_in=4
// strings: 

ushort FUN_01af7f20(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint in_r12;
  bool bVar5;
  
  uVar4 = 0x33;
  if ((*(short *)(param_1 + 0x20) == 0) && (uVar4 = 10, *(char *)(param_1 + 0xa8) != '\0')) {
    uVar4 = 0x14;
  }
  uVar2 = 0x2d;
  if (*(char *)(param_1 + 0xab) != '\0') goto LAB_01af7fc0;
  uVar3 = *(uint *)(param_1 + 0x9c);
  bVar5 = false;
  if (uVar3 != 0) {
    in_r12 = uVar3 >> 0x10;
    if (in_r12 == 0) {
      if (*(char *)(param_1 + 0xac) != '\0') {
        bVar5 = *(char *)(param_1 + 0xac) == '\x03';
        if (bVar5) {
          in_r12 = 0;
        }
        goto LAB_01af7fa8;
      }
      in_r12 = 0x41fd;
      if ((uVar3 & 0x10) == 0) {
        in_r12 = 0;
      }
    }
    bVar5 = true;
  }
LAB_01af7fa8:
  uVar2 = 10;
  if ((in_r12 & 0x4000) != 0) {
    uVar2 = 0x14;
  }
  if (!bVar5) {
    uVar2 = 10;
  }
LAB_01af7fc0:
  uVar1 = *(ushort *)(&DAT_00539bc8 + (uint)*(ushort *)(param_1 + 0x94) * 2);
  if (*(ushort *)(&DAT_00539bc8 + (uint)*(ushort *)(param_1 + 0x94) * 2) < uVar4) {
    uVar1 = uVar4;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar2;
  }
  return uVar1;
}

