// FUN_01447dac @ 01447dac size=532 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01447dac(int param_1,uint param_2,uint param_3,uint *param_4,uint param_5)

{
  uint3 uVar1;
  uint uVar2;
  uint uVar3;
  uint3 *puVar4;
  uint *extraout_r3;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint3 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  
  puVar5 = (undefined1 *)0xfffd;
  uVar9 = param_3 + ((param_2 & 0xffff) >> 0xd) + 1;
  puVar8 = (uint3 *)&DAT_00000001;
  uVar2 = 0;
  if ((param_3 <= uVar9) && (uVar9 <= param_5)) {
    param_4 = (uint *)((int)param_4 + param_3 * 3);
    if ((undefined1 *)(uint)(uint3)*param_4 != &DAT_00110000) {
      puVar8 = (uint3 *)((int)param_4 + 3);
      uVar2 = (param_2 & 0xffff) >> 0xd;
      puVar5 = (undefined1 *)(uint)(uint3)*param_4;
    }
  }
  puVar4 = (uint3 *)((int)puVar8 + uVar2 * 3);
  if ((param_2 & 0x1000) == 0) {
    puVar14 = (uint *)(param_1 + 4);
    iVar11 = 0;
    iVar12 = 1;
    while( true ) {
      bVar15 = puVar8 == puVar4;
      if (bVar15) {
        uVar2 = 0;
      }
      else {
        uVar1 = *puVar8;
        puVar8 = (uint3 *)((int)puVar8 + 3);
        uVar2 = (uint)uVar1 << 8;
      }
      if (uVar2 == 0x11000000 || bVar15) break;
      puVar6 = *(uint **)(param_1 + 0x60);
      uVar9 = uVar2 >> 8;
      uVar3 = 0xffff;
      if ((char)puVar6[0xb] != '\0') {
        uVar3 = 0xfff;
      }
      if (uVar3 < uVar9) {
        if (uVar9 < puVar6[7]) {
          uVar2 = FUN_01449040(puVar6,uVar9);
          param_4 = extraout_r3;
        }
        else {
          uVar2 = puVar6[5] - 2;
        }
      }
      else if (uVar2 >> 0xe < puVar6[2]) {
        uVar2 = (uVar9 & 0x3f) + (uint)*(ushort *)(puVar6[1] + (uVar2 >> 0xe) * 2);
      }
      else {
        uVar2 = puVar6[5] - 1;
      }
      uVar3 = *(uint *)(param_1 + 0x48);
      if (uVar2 < puVar6[5]) {
        param_4 = (uint *)puVar6[4];
      }
      uVar7 = *puVar6;
      if (uVar2 < puVar6[5]) {
        uVar7 = param_4[uVar2];
      }
      if ((uVar7 & 0xffffff00) == 0xd800) {
        uVar9 = uVar9 | uVar7 << 0x18;
      }
      if (uVar3 < 0x12) {
        uVar10 = 0x11;
        uVar2 = uVar3;
        puVar6 = puVar14;
        param_4 = (uint *)(param_1 + 0x48);
      }
      else {
        uVar2 = *(uint *)(param_1 + 4);
        puVar6 = *(uint **)(param_1 + 8);
        param_4 = puVar14;
        uVar10 = uVar3;
      }
      if (uVar2 == uVar10) {
        FUN_01448a38(param_1);
        uVar2 = *(uint *)(param_1 + 4);
        puVar6 = *(uint **)(param_1 + 8);
        param_4 = puVar14;
      }
      puVar6[uVar2] = uVar9;
      *param_4 = *param_4 + 1;
      iVar13 = iVar12;
      if ((uVar7 & 0xffffff00) == 0xd800) {
        iVar13 = iVar11;
      }
      if (uVar7 != 2) {
        iVar11 = iVar13;
      }
      iVar12 = iVar12 + 1;
    }
  }
  else {
    FUN_01448c30(param_1,puVar8);
    iVar11 = 0;
  }
  return CONCAT44(iVar11,puVar5);
}

