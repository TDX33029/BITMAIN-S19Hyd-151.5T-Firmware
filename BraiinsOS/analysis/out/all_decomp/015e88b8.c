// FUN_015e88b8 @ 015e88b8 size=384 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_015e88b8(char *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint local_28;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_28 = param_2 & 0xff;
    uVar13 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_28 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar13 = 2;
    }
    else {
      bVar3 = (byte)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        bVar4 = bVar3 | 0xe0;
        local_28._1_3_ = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
        uVar13 = 3;
      }
      else {
        uVar13 = 4;
        bVar4 = (byte)(param_2 >> 0x12) | 0xf0;
        local_28._1_3_ = CONCAT21(CONCAT11(uVar1,uVar2),bVar3) & 0x3f3f3f | 0x808080;
      }
      local_28 = CONCAT31(local_28._1_3_,bVar4);
    }
  }
  piVar8 = *(int **)(param_1 + 8);
  uVar14 = 0;
  uVar5 = piVar8[1];
  uVar10 = piVar8[2];
  iVar12 = piVar8[3];
  uVar7 = uVar10;
  if (iVar12 != 0) {
    uVar7 = 0xffffffff;
  }
  uVar15 = uVar5 - uVar7;
  if (uVar5 < uVar7) {
    uVar15 = 0;
  }
  if ((uint)-iVar12 < (uint)(uVar10 <= uVar5)) {
    uVar5 = uVar10;
  }
  uVar7 = uVar13;
  if (uVar15 < uVar13) {
    uVar7 = uVar15;
  }
  FUN_016dd1aa(*piVar8 + uVar5,&local_28,uVar7);
  piVar8[2] = uVar10 + uVar7;
  piVar8[3] = iVar12 + (uint)CARRY4(uVar10,uVar7);
  if (uVar15 < uVar13) {
    if ((*param_1 != '\x04') && (*param_1 == '\x03')) {
      puVar11 = *(undefined4 **)(param_1 + 4);
      puVar9 = (undefined4 *)puVar11[1];
      uVar14 = *puVar11;
      pcVar6 = (code *)*puVar9;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar14);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar14);
      }
      thunk_FUN_016d3fb4(puVar11);
    }
    param_1[0] = '\x02';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    *(undefined4 **)(param_1 + 4) = &DAT_018aeae8;
    uVar14 = 1;
  }
  return uVar14;
}

