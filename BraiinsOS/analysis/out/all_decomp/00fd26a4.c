// FUN_00fd26a4 @ 00fd26a4 size=416 calls_out=1 calls_in=1
// strings: 

void FUN_00fd26a4(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_50 [7];
  uint local_34;
  
  uVar9 = 0;
  FUN_016dd606(param_1,0,0x100);
  FUN_016dd606(local_50,0,0x28);
  local_50[0] = *param_2;
  local_50[1] = param_2[1];
  local_50[2] = param_2[2];
  local_50[3] = param_2[3];
  local_50[4] = param_2[4];
  local_50[5] = param_2[5];
  uVar5 = param_3 - 0x20;
  local_50[6] = param_2[6];
  uVar1 = 1 >> (0x20 - param_3 & 0xff);
  if (-1 < (int)uVar5) {
    uVar1 = 1 << (uVar5 & 0xff);
  }
  uVar2 = 1 << (param_3 & 0xff);
  if (-1 < (int)uVar5) {
    uVar2 = 0;
  }
  uVar5 = 0;
  local_34 = param_2[7];
  do {
    uVar10 = -uVar9;
    while( true ) {
      uVar3 = uVar9 >> 3 & 0xfffffff8;
      uVar4 = uVar9 & 0x3f;
      uVar6 = *(uint *)((int)local_50 + uVar3 + 4);
      uVar11 = *(uint *)((int)local_50 + uVar3) >> uVar4 | uVar6 << (0x20 - uVar4 & 0xff);
      uVar12 = uVar6 >> uVar4;
      if (-1 < (int)(uVar4 - 0x20)) {
        uVar12 = 0;
        uVar11 = uVar6 >> (uVar4 - 0x20 & 0xff);
      }
      if (0x40 - param_3 <= uVar4) {
        uVar7 = *(uint *)((int)local_50 + uVar3 + 8);
        uVar6 = uVar10 & 0x3f;
        uVar8 = uVar6 - 0x20;
        uVar4 = uVar7 << uVar6;
        if (-1 < (int)uVar8) {
          uVar4 = 0;
        }
        uVar11 = uVar4 | uVar11;
        uVar3 = uVar7 >> (0x20 - uVar6 & 0xff) | *(int *)((int)local_50 + uVar3 + 0xc) << uVar6;
        if (-1 < (int)uVar8) {
          uVar3 = uVar7 << (uVar8 & 0xff);
        }
        uVar12 = uVar3 | uVar12;
      }
      uVar11 = uVar11 & uVar2 - 1;
      uVar3 = uVar11 + uVar5;
      uVar12 = (uVar12 & uVar1 - (uVar2 == 0)) + (uint)CARRY4(uVar11,uVar5);
      if ((uVar3 & 1) != 0) break;
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 - 1;
      if (uVar9 == 0x100) {
        return;
      }
    }
    uVar5 = (uint)(uVar1 >> 1 < uVar12 ||
                  uVar12 - (uVar1 >> 1) <
                  (uint)(((uint)((byte)uVar1 & 1) << 0x1f | uVar2 >> 1) <= uVar3));
    if (uVar5 != 0) {
      uVar3 = uVar3 - uVar2;
    }
    *(char *)(param_1 + uVar9) = (char)uVar3;
    uVar9 = uVar9 + param_3;
  } while (uVar9 < 0x100);
  return;
}

