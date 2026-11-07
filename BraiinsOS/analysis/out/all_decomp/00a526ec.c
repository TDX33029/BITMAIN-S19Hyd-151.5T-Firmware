// FUN_00a526ec @ 00a526ec size=260 calls_out=3 calls_in=0
// strings: 

void FUN_00a526ec(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r9;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint local_2c;
  undefined2 local_28;
  
  uVar5 = param_2[6];
  uVar6 = param_2[5];
  if (uVar5 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = thunk_FUN_016d4a50(uVar5);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar5);
    }
  }
  FUN_016dd1aa(uVar1,uVar6,uVar5);
  bVar9 = (short)param_2[7] == 1;
  uVar6 = param_2[2];
  if (bVar9) {
    local_28 = *(undefined2 *)((int)param_2 + 0x1e);
  }
  uVar2 = *param_2;
  bVar10 = uVar2 == 1;
  if (bVar10) {
    uVar2 = param_2[1];
  }
  if (bVar10) {
    local_2c = uVar2;
  }
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar7 = param_2[0xb];
  uVar8 = param_2[0xc];
  if (uVar6 == 1) {
    unaff_r9 = param_2[3];
  }
  param_1[6] = uVar5;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar7;
  param_1[5] = uVar1;
  param_1[4] = uVar5;
  uVar5 = param_2[0xe];
  uVar1 = param_2[0xf];
  uVar2 = param_2[0x10];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  *(undefined2 *)((int)param_1 + 0x1e) = local_28;
  uVar5 = param_2[0x11];
  param_1[0xc] = uVar8;
  *(ushort *)(param_1 + 7) = (ushort)bVar9;
  param_1[3] = unaff_r9;
  param_1[2] = (uint)(uVar6 == 1);
  param_1[1] = local_2c;
  *param_1 = (uint)bVar10;
  *(char *)(param_1 + 0x11) = (char)uVar5;
  return;
}

