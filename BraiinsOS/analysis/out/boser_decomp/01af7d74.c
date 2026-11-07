// FUN_01af7d74 @ 01af7d74 size=420 calls_out=3 calls_in=2
// strings: 

void FUN_01af7d74(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined2 uVar11;
  bool bVar12;
  uint local_30;
  undefined4 local_2c;
  
  uVar10 = 0;
  uVar5 = 0;
  uVar8 = 0;
  if (*(char *)(param_2 + 0xaa) == '\0') {
    uVar5 = *(undefined4 *)(param_2 + 0x48);
    uVar8 = *(undefined4 *)(param_2 + 0x40);
    if (*(int *)(param_2 + 0x44) != 0) {
      uVar8 = 0xffffffff;
    }
    if (*(int *)(param_2 + 0x4c) != 0) {
      uVar5 = 0xffffffff;
    }
    if (*(char *)(param_2 + 0xab) != '\0') {
      uVar5 = 0xffffffff;
      uVar8 = 0xffffffff;
    }
  }
  bVar12 = *(int *)(param_2 + 0x50) != 0;
  if (bVar12) {
    uVar10 = *(uint *)(param_2 + 0x54);
  }
  if (bVar12 && uVar10 >> 0x10 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0x1d;
    *(undefined2 *)(param_1 + 8) = 0x3cce;
    *(undefined4 *)(param_1 + 4) = 0x80000000;
    *(undefined2 *)(param_1 + 10) = 0x53;
LAB_01af7f08:
    uVar1 = 1;
  }
  else {
    if ((*(ushort *)(param_2 + 0xa0) & 1) == 0) {
      uVar9 = 0;
      uVar6 = 0x21;
    }
    else {
      uVar9 = *(undefined2 *)(param_2 + 0xa4);
      uVar6 = *(undefined2 *)(param_2 + 0xa2);
    }
    uVar2 = FUN_01af7f20(param_2);
    uVar3 = FUN_01af7fe8(param_2);
    uVar11 = 0;
    if (*(short *)(param_2 + 0x94) != 0) {
      if (*(short *)(param_2 + 0x94) == 1) {
        uVar11 = 8;
      }
      else {
        uVar11 = *(undefined2 *)(param_2 + 0x96);
      }
    }
    uVar4 = *(uint *)(param_2 + 0x34);
    uVar7 = *(undefined4 *)(param_2 + 0x98);
    if (uVar4 >> 0x10 != 0) {
      FUN_019a6b0c(&local_30,0x28,1,&DAT_01d30750);
      if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
        *(uint *)(param_1 + 8) = local_30;
        *(undefined4 *)(param_1 + 4) = 0x80000001;
        *(undefined4 *)(param_1 + 0xc) = local_2c;
        goto LAB_01af7f08;
      }
      uVar4 = local_30 >> 0x10;
    }
    *(undefined2 *)(param_1 + 9) = uVar6;
    *(undefined2 *)(param_1 + 1) = uVar2;
    uVar1 = 0;
    *(short *)(param_1 + 0x19) = (short)uVar10;
    *(short *)(param_1 + 0x17) = (short)uVar4;
    *(undefined4 *)(param_1 + 0x13) = uVar5;
    *(undefined4 *)(param_1 + 0xf) = uVar8;
    *(undefined4 *)(param_1 + 0xb) = uVar7;
    *(undefined2 *)(param_1 + 7) = uVar9;
    *(undefined2 *)(param_1 + 5) = uVar11;
    *(undefined2 *)(param_1 + 3) = uVar3;
  }
  *param_1 = uVar1;
  return;
}

