// FUN_01122200 @ 01122200 size=704 calls_out=11 calls_in=1
// strings: BUG: response handled as request

void FUN_01122200(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  char *local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  char *local_50;
  char *local_4c;
  uint local_48;
  char *local_44;
  char local_40 [27];
  undefined1 uStack_25;
  
  if ((*param_2 & 1) != 0) {
    iVar2 = thunk_FUN_016d4a50(0x20);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x20);
    }
    FUN_016dd1aa(iVar2,"BUG: response handled as request",0x20);
    uVar4 = param_2[2];
    *param_1 = 0x80000006;
    param_1[1] = 1;
    param_1[2] = 0x20;
    param_1[3] = iVar2;
    param_1[4] = 0x20;
    if ((char)uVar4 != '\x06') {
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
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  local_70 = param_2[10];
  uStack_6c = param_2[0xb];
  if ((char)local_70 != '\b') {
    FUN_0111fd7c(&local_70,&DAT_0040c22f,&DAT_0188714c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1122470);
    (*pcVar1)();
  }
  puVar10 = param_2 + 4;
  local_68 = *puVar10;
  uVar6 = param_2[5];
  pcVar7 = (char *)param_2[6];
  uVar8 = param_2[7];
  uStack_58 = param_2[8];
  uStack_54 = param_2[9];
  local_64 = uVar6;
  local_60 = pcVar7;
  local_5c = uVar8;
  if ((char)local_68 != '\x04') {
    uVar3 = FUN_00f36124(puVar10,&uStack_25,&DAT_01887528);
    FUN_01111ad8(puVar10);
    *param_1 = 0x80000003;
    param_1[1] = uVar3;
    return;
  }
  pcVar11 = pcVar7 + uVar8 * 0x18;
  local_4c = pcVar7;
  local_50 = pcVar7;
  local_48 = uVar6;
  local_44 = pcVar11;
  if (uVar8 == 0) {
LAB_01122348:
    pcVar9 = local_4c;
    uVar3 = FUN_00f2c2f0(0,&uStack_25,&DAT_01887528);
  }
  else {
    pcVar9 = pcVar7 + 0x18;
    local_4c = pcVar9;
    if (*pcVar7 == '\x06') goto LAB_01122348;
    local_40[0] = *pcVar7;
    FUN_016dd1aa((uint)local_40 | 1,pcVar7 + 1,0x17);
    uVar12 = FUN_0111e0cc(local_40);
    uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 1) {
      if (uVar8 != 1) {
        uVar3 = FUN_00f2c2f0(uVar8,&DAT_0188738c,&DAT_018ab990);
      }
      FUN_01127284(pcVar9,(uVar8 * 0x18 - 0x18 >> 3) * -0x55555555);
      if (uVar6 != 0) {
        thunk_FUN_016d3fb4(pcVar7);
      }
      if (uVar8 == 1) {
        param_1[3] = uVar3;
        *param_1 = &DAT_8000000c;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        return;
      }
      goto LAB_0112238c;
    }
  }
  FUN_01127284(pcVar9,((uint)((int)pcVar11 - (int)pcVar9) >> 3) * -0x55555555);
  if (uVar6 != 0) {
    thunk_FUN_016d3fb4(pcVar7);
  }
LAB_0112238c:
  *param_1 = 0x80000003;
  param_1[1] = uVar3;
  return;
}

