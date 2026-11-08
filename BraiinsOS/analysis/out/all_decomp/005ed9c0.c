// FUN_005ed9c0 @ 005ed9c0 size=524 calls_out=4 calls_in=2
// strings: 

void FUN_005ed9c0(undefined4 *param_1,int param_2)

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
  int iVar15;
  undefined1 local_150 [256];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined1 uStack_28;
  undefined1 local_27;
  undefined2 uStack_26;
  
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\0') {
    local_50 = 0x80000000;
  }
  else {
    local_2c = CONCAT31(0x20201,cVar1 != '\x01');
    uStack_28 = 2;
    local_38 = 0xffffffff;
    local_27 = 0;
    local_30 = local_30 & 0xffffff00;
    local_34 = 0;
    local_3c = 0;
    local_40 = 4;
    local_44 = 0;
    local_48 = 0;
    local_4c = 4;
    local_50 = 0;
  }
  iVar14 = FUN_016d38c8(0x100,1);
  uVar13 = local_2c;
  uVar12 = local_30;
  uVar11 = local_34;
  uVar10 = local_38;
  uVar9 = local_3c;
  uVar8 = local_40;
  uVar7 = local_44;
  uVar6 = local_48;
  uVar5 = local_4c;
  uVar4 = local_50;
  if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x100);
  }
  uVar3 = CONCAT11(local_27,uStack_28);
  uVar2 = *(undefined1 *)(param_2 + 6);
  iVar15 = 0;
  FUN_016dd606(local_150,0,0x100);
  do {
    local_150[iVar15] = (char)iVar15;
    iVar15 = iVar15 + 1;
  } while (iVar15 != 0x100);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_016dd606(param_1 + 0xc,0,0x120);
  param_1[0x54] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0x80000000;
  *(undefined2 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(undefined1 *)((int)param_1 + 0x157) = 1;
  *(undefined1 *)((int)param_1 + 0x156) = uVar2;
  param_1[0x57] = uVar4;
  param_1[0x58] = uVar5;
  param_1[0x59] = uVar6;
  param_1[0x5a] = uVar7;
  param_1[0x5b] = uVar8;
  param_1[0x5c] = uVar9;
  param_1[0x5d] = uVar10;
  param_1[0x5e] = uVar11;
  param_1[0x5f] = uVar12;
  param_1[0x60] = uVar13;
  param_1[0x61] = CONCAT22(uStack_26,uVar3);
  param_1[99] = iVar14;
  param_1[0x62] = 0x100;
  param_1[100] = 0x100;
  param_1[0x68] = param_2;
  param_1[0x70] = 4;
  param_1[0x73] = 4;
  param_1[0x76] = 4;
  param_1[0x6a] = 4;
  param_1[0x65] = 0;
  *(undefined2 *)(param_1 + 0x66) = 0;
  param_1[0x78] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 1;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)((int)param_1 + 0x19d) = 1;
  *(undefined1 *)(param_1 + 0x67) = uVar2;
  *(undefined1 *)((int)param_1 + 0x19a) = uVar2;
  FUN_016dd1aa(param_1 + 0x7b,local_150,0x100);
  param_1[0xbc] = 0;
  param_1[0xbb] = 0xffffffff;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(char *)(param_1 + 0xc1) = cVar1;
  return;
}

