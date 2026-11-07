// FUN_00b14658 @ 00b14658 size=880 calls_out=14 calls_in=0
// strings: 

void FUN_00b14658(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_218;
  uint local_214;
  uint local_210;
  undefined4 uStack_20c;
  uint uStack_208;
  undefined4 uStack_204;
  uint local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 auStack_1f0 [104];
  uint local_188;
  uint local_184;
  uint local_180;
  undefined4 local_17c;
  uint local_178;
  undefined4 local_174;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [104];
  undefined1 auStack_f8 [104];
  uint local_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [76];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x14)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x51) = 1;
    param_2[0x10] = param_2[0xf];
    param_2[0x11] = param_2[0xc];
    param_2[0x12] = param_2[0xd];
    param_2[0x13] = param_2[0xe];
    param_2[6] = *param_2;
    param_2[7] = param_2[1];
    param_2[8] = param_2[2];
    param_2[9] = param_2[3];
    param_2[10] = param_2[4];
    param_2[0xb] = param_2[5];
    if (param_2[0x13] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0034ebf5,0x11,&DAT_0186f950);
    }
    *(undefined1 *)(param_2 + 0x54) = 0;
    param_2[0x16] = &DAT_0034ec06;
    param_2[0x17] = 0x1e;
    param_2[0x50] = param_2[0xf];
    param_2[0x51] = param_2[0x12] + 0x20;
    param_2[0x52] = 7;
  case 3:
    puVar7 = param_2 + 0x16;
    iVar2 = FUN_00b14ab8(puVar7,param_3);
    if (iVar2 != 0) {
      *param_1 = 6;
      param_1[1] = 0;
      *(undefined1 *)(param_2 + 0x14) = 3;
      return;
    }
    if (*(char *)(param_2 + 0x54) == '\x03') {
      cVar1 = *(char *)(param_2 + 0x4f);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_2 + 0x4d);
      }
      if ((bVar8 && cVar1 == '\x03') && (param_2[0x4a] != 0)) {
        FUN_00c81a4c(param_2[0x4a],param_2[0x4b],1);
      }
    }
    iVar2 = 0;
    local_188 = param_2[0x11];
    local_184 = param_2[0x12];
    local_180 = param_2[0x13];
    *(undefined1 *)((int)param_2 + 0x51) = 0;
    FUN_00c6fa14(puVar7,&local_188);
    local_174 = 0;
    local_180 = param_2[0x16];
    local_17c = param_2[0x17];
    local_168 = param_2[0x18];
    if (local_180 == 0) {
      local_168 = 0;
    }
    local_188 = (uint)(local_180 != 0);
    local_184 = 0;
    local_178 = local_188;
    local_170 = local_180;
    local_16c = local_17c;
    while( true ) {
      uVar9 = FUN_00c3901c(&local_188);
      iVar4 = (int)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 == 0 || iVar4 == 0) break;
      iVar2 = *(int *)(iVar4 + 0x28) + iVar2;
    }
    param_2[0x1e] = 0x47ae147b;
    *(undefined1 *)(param_2 + 0x21) = 1;
    param_2[0x1f] = 0x3f747ae1;
    param_2[0x20] = iVar2;
    param_2[0x1a] = 300;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x22] = param_2[6];
    param_2[0x23] = param_2[7];
    param_2[0x24] = param_2[8];
    param_2[0x25] = param_2[9];
    param_2[0x26] = param_2[10];
    param_2[0x27] = param_2[0xb];
    param_2[0x3a] = param_2[0x10];
    *(undefined1 *)(param_2 + 0x3e) = 0;
    param_2[0x3b] = puVar7;
    param_2[0x28] = 0x80000001;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f960);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f960);
  case 4:
  }
  FUN_00b15538(&local_188,param_2 + 0x1a,param_3);
  uVar6 = local_184;
  uVar5 = local_188;
  if (local_188 == 3 && local_184 == 0) {
    *param_1 = 6;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 0x14) = 4;
    return;
  }
  local_90 = local_180;
  uStack_8c = local_17c;
  uStack_88 = local_178;
  uStack_84 = local_174;
  local_80 = local_170;
  uStack_7c = local_16c;
  uStack_78 = local_168;
  uStack_74 = uStack_164;
  FUN_016dd1aa(auStack_f8,auStack_160,0x68);
  FUN_00b1545c(param_2 + 0x1a);
  if (uVar5 == 2 && uVar6 == 0) {
    uVar3 = FUN_00c79b64(&local_90);
    FUN_00c48cbc(param_2 + 0x16);
    uVar6 = 0;
    uVar5 = 5;
  }
  else {
    FUN_016dd1aa(auStack_1f0,auStack_f8,0x68);
    local_210 = local_90;
    uStack_20c = uStack_8c;
    uStack_208 = uStack_88;
    uStack_204 = uStack_84;
    local_200 = local_80;
    uStack_1fc = uStack_7c;
    uStack_1f8 = uStack_78;
    uStack_1f4 = uStack_74;
    local_214 = uVar6;
    local_218 = uVar5;
    FUN_00c6eaa4(&local_188,&local_218);
    uVar3 = local_180;
    uVar6 = local_184;
    uVar5 = local_188;
    FUN_016dd1aa(auStack_70,&local_17c,0x4c);
    FUN_00ad1570(&local_218);
    FUN_00c48cbc(param_2 + 0x16);
  }
  *(undefined1 *)((int)param_2 + 0x51) = 0;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar3;
  FUN_016dd1aa(param_1 + 3,auStack_70,0x4c);
  *(undefined1 *)(param_2 + 0x14) = 1;
  return;
}

