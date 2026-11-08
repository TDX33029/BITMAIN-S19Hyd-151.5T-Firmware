// FUN_01340e44 @ 01340e44 size=296 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01340e44(uint *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  param_2 = param_2 + param_3 * -0x10;
  puVar7 = *(uint **)(param_2 + -0xc);
  uVar9 = *(uint *)(param_2 + -8);
  uVar5 = param_1[1] >> (uVar9 & 0x1f) | param_1[1] << 0x20 - (uVar9 & 0x1f);
  uVar4 = *param_1 >> (uVar9 & 0x1f) | *param_1 << 0x20 - (uVar9 & 0x1f);
  if (0x10 < uVar9) {
    uVar10 = FUN_0100dde8(puVar7,uVar9,uVar4,uVar5,&DAT_018dd8f0);
    goto LAB_01340eec;
  }
  if (uVar9 < 8) {
    uVar3 = DAT_018dd8fc;
    if (3 < uVar9) {
      uVar6 = *puVar7;
      uVar8 = *(uint *)((int)puVar7 + (uVar9 - 4));
      goto LAB_01340eb4;
    }
    uVar6 = DAT_018dd8f8;
    if (uVar9 != 0) {
      uVar4 = uVar4 ^ (byte)*puVar7;
      uVar6 = CONCAT11(*(byte *)((int)puVar7 + (uVar9 - 1)),*(byte *)((int)puVar7 + (uVar9 >> 1))) ^
              DAT_018dd8f8;
    }
  }
  else {
    uVar6 = *puVar7;
    uVar8 = *(uint *)((int)puVar7 + (uVar9 - 8));
    uVar5 = puVar7[1] ^ uVar5;
    uVar3 = *(uint *)((int)puVar7 + (uVar9 - 4)) ^ DAT_018dd8fc;
LAB_01340eb4:
    uVar4 = uVar6 ^ uVar4;
    uVar6 = uVar8 ^ DAT_018dd8f8;
  }
  uVar2 = (ulonglong)uVar6 * (ulonglong)uVar5 ^ (ulonglong)uVar3 * (ulonglong)uVar4;
  uVar1 = (ulonglong)uVar3 * (ulonglong)uVar5 ^ (ulonglong)uVar6 * (ulonglong)uVar4;
  uVar10 = CONCAT44((uint)(uVar1 >> 0x20) ^ (uint)uVar2,(uint)uVar1 ^ (uint)(uVar2 >> 0x20));
LAB_01340eec:
  uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar5 = (uint)uVar10 ^ 0xff;
  uVar1 = (ulonglong)uVar4 * (ulonglong)DAT_018dd8f0 ^ (ulonglong)DAT_018dd8f4 * (ulonglong)uVar5;
  uVar2 = (ulonglong)DAT_018dd8f0 * (ulonglong)uVar5 ^ (ulonglong)uVar4 * (ulonglong)DAT_018dd8f4;
  return CONCAT44((uint)(uVar2 >> 0x20) ^ (uint)uVar1,(uint)uVar2 ^ (uint)(uVar1 >> 0x20));
}

