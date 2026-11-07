// FUN_00f02228 @ 00f02228 size=1064 calls_out=7 calls_in=2
// strings: 

void FUN_00f02228(char param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte in_Q;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  byte local_6f;
  byte local_6e;
  byte local_6d [3];
  undefined1 local_6a;
  undefined1 local_69;
  
  local_6f = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_6f,1);
  uVar2 = FUN_00f01ff0(param_2);
  iVar9 = 10;
  do {
    if (uVar2 >> 7 == 0) {
      local_6d[0] = (byte)uVar2;
      FUN_01284394(param_3,local_6d,1);
      break;
    }
    local_6e = (byte)uVar2 | 0x80;
    FUN_01284394(param_3,&local_6e,1);
    iVar9 = iVar9 + -1;
    uVar2 = uVar2 >> 7;
  } while (iVar9 != 0);
  uVar2 = param_2[8];
  if (uVar2 != 2 || param_2[9] != 0) {
    local_6d[1] = 10;
    FUN_01284394(param_3,local_6d + 1,1);
    dVar15 = *(double *)(param_2 + 10);
    local_6d[2] = '\x02';
    dVar21 = *(double *)(param_2 + 0xe);
    cVar3 = '\x02';
    uVar13 = param_2[0xc];
    uVar8 = param_2[0x10];
    cVar1 = '\x02';
    uVar11 = param_2[0x14];
    uVar5 = param_2[0x18];
    uVar10 = param_2[0x1c];
    dVar17 = *(double *)(param_2 + 0x12);
    dVar22 = *(double *)(param_2 + 0x16);
    dVar14 = *(double *)(param_2 + 0x1a);
    dVar20 = *(double *)(param_2 + 0x1e);
    dVar19 = *(double *)(param_2 + 0x22);
    dVar18 = *(double *)(param_2 + 0x26);
    dVar16 = *(double *)(param_2 + 0x2a);
    if (dVar15 != 0.0) {
      local_6d[2] = '\v';
    }
    uVar2 = uVar2 & 1;
    if (uVar2 == 0) {
      local_6d[2] = '\0';
    }
    if (dVar21 != 0.0) {
      cVar3 = '\v';
    }
    if ((uVar13 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar3;
    }
    cVar3 = '\x02';
    dVar23 = *(double *)(param_2 + 0x2e);
    if (dVar17 != 0.0) {
      cVar3 = '\v';
    }
    if ((uVar8 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar3;
    }
    cVar3 = '\x02';
    if (dVar22 != 0.0) {
      cVar3 = '\v';
    }
    if ((uVar11 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar3;
    }
    cVar3 = '\x02';
    uVar12 = param_2[0x20];
    if (dVar14 != 0.0) {
      cVar3 = '\v';
    }
    if ((uVar5 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar3;
    }
    cVar3 = '\x02';
    uVar6 = param_2[0x24];
    if (dVar20 != 0.0) {
      cVar3 = '\v';
    }
    if ((uVar10 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar3;
    }
    cVar3 = '\x02';
    if (dVar19 != 0.0) {
      cVar3 = '\v';
    }
    if ((uVar12 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar3;
    }
    cVar3 = '\x02';
    if (dVar18 != 0.0) {
      cVar3 = '\v';
    }
    if ((uVar6 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar3;
    }
    uVar7 = param_2[0x28];
    cVar3 = '\x02';
    if (dVar16 != 0.0) {
      cVar3 = '\v';
    }
    if ((uVar7 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar3;
    }
    uVar4 = param_2[0x2c];
    if (dVar23 != 0.0) {
      cVar1 = '\v';
    }
    if ((uVar4 & 1) != 0) {
      local_6d[2] = local_6d[2] + cVar1;
    }
    FUN_01284394(param_3,local_6d + 2,1);
    if (uVar2 != 0) {
      FUN_00efee40(SUB84(dVar15,0),1,param_3);
    }
    if ((uVar13 & 1) != 0) {
      FUN_00efee40(SUB84(dVar21,0),2,param_3);
    }
    if ((uVar8 & 1) != 0) {
      FUN_00efee40(SUB84(dVar17,0),3,param_3);
    }
    if ((uVar11 & 1) != 0) {
      FUN_00efee40(SUB84(dVar22,0),4,param_3);
    }
    if ((uVar5 & 1) != 0) {
      FUN_00efee40(SUB84(dVar14,0),5,param_3);
    }
    if ((uVar10 & 1) != 0) {
      FUN_00efee40(SUB84(dVar20,0),6,param_3);
    }
    if ((uVar12 & 1) != 0) {
      FUN_00efee40(SUB84(dVar19,0),7,param_3);
    }
    if ((uVar6 & 1) != 0) {
      FUN_00efee40(SUB84(dVar18,0),8,param_3);
    }
    if ((uVar7 & 1) != 0) {
      FUN_00efee40(SUB84(dVar16,0),9,param_3);
    }
    if ((uVar4 & 1) != 0) {
      FUN_00efee40(SUB84(dVar23,0),10,param_3);
    }
  }
  if ((*param_2 & 1) != 0) {
    FUN_00efee40((int)*(undefined8 *)(param_2 + 2),2,param_3);
  }
  if ((param_2[4] & 1) != 0) {
    local_6a = 0x1a;
    FUN_01284394(param_3,&local_6a,1);
    dVar14 = *(double *)(param_2 + 6);
    local_69 = 0;
    if (dVar14 != 0.0) {
      local_69 = 9;
    }
    FUN_01284394(param_3,&local_69,1);
    if ((((byte)((dVar14 == 0.0) << 3 | in_Q) & 0x1f) >> 3 & 1) == 0) {
      FUN_01016b28(SUB84(dVar14,0),1,param_3);
    }
  }
  if (param_2[0x35] != 0) {
    FUN_00efc9fc(4,param_2[0x35],param_3);
  }
  uVar2 = param_2[0x31];
  if (param_2[0x30] != 0 || uVar2 != 0) {
    FUN_00efe2f8(5,uVar2,param_2[0x30],uVar2,param_3);
  }
  if (param_2[0x34] == 0) {
    return;
  }
  FUN_01016f10(6,param_2[0x33],param_2[0x34],param_3);
  return;
}

