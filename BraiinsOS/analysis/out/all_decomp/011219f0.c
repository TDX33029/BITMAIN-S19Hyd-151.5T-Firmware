// FUN_011219f0 @ 011219f0 size=800 calls_out=12 calls_in=1
// strings: BUG: response handled as request

void FUN_011219f0(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  char cVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  char *pcVar13;
  char *pcVar14;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  char *pcStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  char *local_58;
  char *local_54;
  uint local_50;
  char *local_4c;
  char local_48 [8];
  int local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 uStack_25;
  
  if ((*param_2 & 1) != 0) {
    iVar4 = thunk_FUN_016d4a50(0x20);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x20);
    }
    FUN_016dd1aa(iVar4,"BUG: response handled as request",0x20);
    uVar6 = param_2[2];
    *param_1 = 0x80000006;
    param_1[1] = 1;
    param_1[2] = 0x20;
    param_1[3] = iVar4;
    param_1[4] = 0x20;
    if ((char)uVar6 != '\x06') {
      FUN_01120384();
    }
    if (param_2[8] != 0x80000000) {
      if (param_2[8] != 0) {
        thunk_FUN_016d3fb4(param_2[9]);
      }
      if ((param_2[0xb] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(param_2[0xc]);
        return;
      }
    }
    return;
  }
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  local_78 = param_2[10];
  uStack_74 = param_2[0xb];
  if ((char)local_78 != '\x03') {
    FUN_0111fd7c(&local_78,&DAT_0040c69b,&DAT_0188712c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1121cb8);
    (*pcVar1)();
  }
  puVar12 = param_2 + 4;
  local_70 = *puVar12;
  uVar8 = param_2[5];
  pcVar9 = (char *)param_2[6];
  uVar10 = param_2[7];
  uStack_60 = param_2[8];
  uStack_5c = param_2[9];
  local_6c = uVar8;
  pcStack_68 = pcVar9;
  uStack_64 = uVar10;
  if ((char)local_70 != '\x04') {
    uVar5 = FUN_00f36124(puVar12,&uStack_25,&DAT_01887578);
    FUN_01111ad8(puVar12);
    puVar11 = (undefined1 *)0x80000003;
    goto LAB_01121ce0;
  }
  pcVar14 = pcVar9 + uVar10 * 0x18;
  local_54 = pcVar9;
  local_58 = pcVar9;
  local_50 = uVar8;
  local_4c = pcVar14;
  if (uVar10 == 0) {
LAB_01121b38:
    pcVar13 = local_54;
    uVar5 = FUN_00f2c2f0(0,&uStack_25,&DAT_01887578);
LAB_01121b54:
    puVar11 = (undefined1 *)0x80000003;
  }
  else {
    pcVar13 = pcVar9 + 0x18;
    cVar2 = *pcVar9;
    local_54 = pcVar13;
    if (cVar2 == '\x06') goto LAB_01121b38;
    local_48[0] = cVar2;
    FUN_016dd1aa((uint)local_48 | 1,pcVar9 + 1,0x17);
    if (cVar2 != '\x02') {
      uVar5 = FUN_00f36124(local_48,&uStack_25,&DAT_01887508);
      FUN_01111ad8(local_48);
      goto LAB_01121b54;
    }
    local_30 = *(undefined4 *)(pcVar9 + 0x10);
    uStack_2c = *(undefined4 *)(pcVar9 + 0x14);
    dVar3 = *(double *)(pcVar9 + 0x10);
    if (local_40 == 0) {
      uVar5 = FUN_0184589c(local_30,uStack_2c);
joined_r0x01121be4:
      if (uVar10 != 1) {
LAB_01121c70:
        uVar5 = FUN_00f2c2f0(uVar10,&DAT_0188738c,&DAT_018ab990);
        goto LAB_01121b54;
      }
    }
    else {
      if (local_40 != 1) {
        uVar5 = 0xbf800000;
        if ((uint)((ulonglong)dVar3 >> 0x20) < 0x80000000) {
          uVar5 = 0;
        }
        uVar5 = (uint)ABS((float)dVar3) | uVar5 & 0x80000000;
        goto joined_r0x01121be4;
      }
      uVar5 = FUN_01845fc8(local_30,uStack_2c);
      if (uVar10 != 1) goto LAB_01121c70;
    }
    puVar11 = &DAT_8000000c;
  }
  FUN_01127284(pcVar13,((uint)((int)pcVar14 - (int)pcVar13) >> 3) * -0x55555555);
  if (uVar8 != 0) {
    thunk_FUN_016d3fb4(pcVar9);
  }
  if (puVar11 == &DAT_8000000c) {
    param_1[3] = uVar5;
    *param_1 = &DAT_8000000c;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    return;
  }
LAB_01121ce0:
  *param_1 = puVar11;
  param_1[1] = uVar5;
  return;
}

