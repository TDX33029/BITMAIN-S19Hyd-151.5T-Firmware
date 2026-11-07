// FUN_006547e8 @ 006547e8 size=536 calls_out=3 calls_in=2
// strings: 

void FUN_006547e8(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  uint local_228;
  undefined4 local_224;
  undefined1 uStack_220;
  undefined1 local_21f;
  undefined2 uStack_21e;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_12d;
  undefined1 local_128 [260];
  
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\0') {
    local_248 = 0x80000000;
  }
  else {
    local_224 = CONCAT31(0x20201,cVar1 != '\x01');
    uStack_220 = 2;
    local_230 = 0xffffffff;
    local_21f = 0;
    local_22c = 0;
    local_234 = 0;
    local_238 = 4;
    local_23c = 0;
    local_240 = 0;
    local_244 = 4;
    local_248 = 0;
    local_228 = local_228 & 0xffffff00;
  }
  FUN_018a7af8(&local_140,0x100);
  uVar13 = local_224;
  uVar12 = local_228;
  uVar11 = local_22c;
  uVar10 = local_230;
  uVar9 = local_234;
  uVar8 = local_238;
  uVar7 = local_23c;
  uVar6 = local_240;
  uVar5 = local_244;
  uVar4 = local_248;
  iVar14 = 0;
  local_134 = 0;
  local_130 = 0;
  uVar3 = CONCAT11(local_21f,uStack_220);
  uVar2 = *(undefined1 *)(param_2 + 6);
  FUN_01bed93e(local_128,0,0x100);
  do {
    local_128[iVar14] = (char)iVar14;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0x100);
  FUN_01bed4e2(&local_240,local_128,0x100);
  FUN_01bed93e(param_1,0,0x20);
  FUN_01bed93e(param_1 + 0x30,0,0x126);
  *(undefined4 *)(param_1 + 0x1cc) = 4;
  *(undefined4 *)(param_1 + 0x1d8) = 4;
  *(undefined4 *)(param_1 + 0x1a8) = 4;
  *(undefined4 *)(param_1 + 0x1c0) = 4;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 1;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  FUN_01bed4e2(param_1 + 0x1e4,&local_248,0x108);
  *(undefined4 *)(param_1 + 0x2ec) = 0xffffffff;
  FUN_01bed93e(param_1 + 0x2f0,0,0x14);
  *(char *)(param_1 + 0x304) = cVar1;
  *(undefined4 *)(param_1 + 0x20) = 0x80000000;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x157) = 1;
  *(undefined1 *)(param_1 + 0x156) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x15c) = uVar4;
  *(undefined4 *)(param_1 + 0x160) = uVar5;
  *(undefined4 *)(param_1 + 0x164) = uVar6;
  *(undefined4 *)(param_1 + 0x168) = uVar7;
  *(undefined4 *)(param_1 + 0x16c) = uVar8;
  *(undefined4 *)(param_1 + 0x170) = uVar9;
  *(undefined4 *)(param_1 + 0x174) = uVar10;
  *(undefined4 *)(param_1 + 0x178) = uVar11;
  *(uint *)(param_1 + 0x17c) = uVar12;
  *(undefined4 *)(param_1 + 0x180) = uVar13;
  *(uint *)(param_1 + 0x184) = CONCAT22(uStack_21e,uVar3);
  *(undefined4 *)(param_1 + 0x188) = local_140;
  *(undefined4 *)(param_1 + 0x18c) = uStack_13c;
  *(undefined4 *)(param_1 + 400) = uStack_138;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(int *)(param_1 + 0x1a0) = param_2;
  *(undefined1 *)(param_1 + 0x19d) = 1;
  *(undefined1 *)(param_1 + 0x19c) = uVar2;
  *(undefined1 *)(param_1 + 0x19b) = local_12d;
  *(undefined1 *)(param_1 + 0x19a) = uVar2;
  *(undefined2 *)(param_1 + 0x198) = 0;
  return;
}

