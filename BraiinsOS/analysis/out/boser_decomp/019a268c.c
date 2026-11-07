// FUN_019a268c @ 019a268c size=324 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_019a268c(char *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint local_28;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_28 = param_2 & 0xff;
    uVar12 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_28 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar12 = 2;
    }
    else {
      bVar3 = (byte)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        bVar4 = bVar3 | 0xe0;
        local_28._1_3_ = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
        uVar12 = 3;
      }
      else {
        uVar12 = 4;
        bVar4 = (byte)(param_2 >> 0x12) | 0xf0;
        local_28._1_3_ = CONCAT21(CONCAT11(uVar1,uVar2),bVar3) & 0x3f3f3f | 0x808080;
      }
      local_28 = CONCAT31(local_28._1_3_,bVar4);
    }
  }
  piVar7 = *(int **)(param_1 + 8);
  uVar11 = 0;
  uVar5 = piVar7[1];
  uVar8 = piVar7[2];
  iVar9 = piVar7[3];
  uVar6 = uVar8;
  if (iVar9 != 0) {
    uVar6 = 0xffffffff;
  }
  uVar10 = uVar5 - uVar6;
  if (uVar5 < uVar6) {
    uVar10 = 0;
  }
  if ((uint)-iVar9 < (uint)(uVar8 <= uVar5)) {
    uVar5 = uVar8;
  }
  uVar6 = uVar12;
  if (uVar10 < uVar12) {
    uVar6 = uVar10;
  }
  FUN_01bed4e2(*piVar7 + uVar5,&local_28,uVar6);
  piVar7[2] = uVar8 + uVar6;
  piVar7[3] = iVar9 + (uint)CARRY4(uVar8,uVar6);
  if (uVar10 < uVar12) {
    if (*param_1 != '\x04') {
      FUN_0197acb4(param_1);
    }
    uVar11 = 1;
    param_1[0] = '\x02';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    *(undefined4 **)(param_1 + 4) = &DAT_01d2e7b8;
  }
  return uVar11;
}

