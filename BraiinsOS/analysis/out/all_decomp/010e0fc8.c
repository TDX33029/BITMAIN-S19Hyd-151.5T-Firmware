// FUN_010e0fc8 @ 010e0fc8 size=356 calls_out=0 calls_in=1
// strings: 

void FUN_010e0fc8(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[0x10];
  uVar6 = param_2[0x11];
  uVar7 = param_2[0x12];
  uVar17 = param_2[4];
  uVar16 = param_2[5];
  uVar14 = param_2[6];
  uVar13 = param_2[7];
  uVar12 = param_2[8];
  uVar11 = param_2[9];
  uVar10 = param_2[10];
  uVar19 = param_2[0xb];
  uVar18 = param_2[0xc];
  uVar9 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar15 = param_2[0x13];
  *(undefined4 *)(param_1 + 0x41) = param_2[0xf];
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)(param_1 + 0x3d) = uVar8;
  *(undefined4 *)(param_1 + 0x39) = uVar9;
  *(undefined4 *)(param_1 + 0x21) = uVar13;
  *(undefined4 *)(param_1 + 0x35) = uVar18;
  *(undefined4 *)(param_1 + 0x31) = uVar19;
  *(uint *)(param_1 + 0x4d) =
       (uVar15 >> 0x10 & 0xff) << 0x10 | uVar15 & 0xff000000 | (uVar15 >> 8 & 0xff) << 8 |
       uVar15 & 0xff;
  *(undefined4 *)(param_1 + 0x2d) = uVar10;
  *(undefined4 *)(param_1 + 0x29) = uVar11;
  *(undefined4 *)(param_1 + 0x25) = uVar12;
  *(undefined4 *)(param_1 + 0x1d) = uVar14;
  *(undefined4 *)(param_1 + 0x19) = uVar16;
  *(undefined4 *)(param_1 + 0x15) = uVar17;
  *(uint *)(param_1 + 0x49) =
       (uVar7 >> 0x10 & 0xff) << 0x10 | uVar7 & 0xff000000 | (uVar7 >> 8 & 0xff) << 8 | uVar7 & 0xff
  ;
  *(uint *)(param_1 + 0x45) =
       (uVar6 >> 0x10 & 0xff) << 0x10 | uVar6 & 0xff000000 | (uVar6 >> 8 & 0xff) << 8 | uVar6 & 0xff
  ;
  *(uint *)(param_1 + 1) =
       (uVar5 >> 0x10 & 0xff) << 0x10 | uVar5 & 0xff000000 | (uVar5 >> 8 & 0xff) << 8 | uVar5 & 0xff
  ;
  *param_1 = 0;
  return;
}

