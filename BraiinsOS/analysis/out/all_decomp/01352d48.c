// FUN_01352d48 @ 01352d48 size=768 calls_out=2 calls_in=27
// strings: $schema | http://json-schema.org/draft-07/schema | http://json-schema.org/draft-06/schema | http://json-schema.org/draft-04/schema | http://json-schema.org/draft/2020-12/schema | http://json-schema.org/draft/2019-09/schema

undefined4 FUN_01352d48(undefined4 param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_28;
  
  if (*param_2 != '\x05') {
    return param_1;
  }
  iVar9 = *(int *)(param_2 + 4);
  if (iVar9 == 0) {
    return param_1;
  }
  local_28 = *(int *)(param_2 + 8);
  while( true ) {
    uVar13 = (uint)*(ushort *)(iVar9 + 0x192);
    iVar12 = iVar9 + 0x10c;
    uVar11 = 0xffffffff;
    iVar7 = uVar13 * 0xc;
    do {
      if (iVar7 == 0) goto LAB_01352e00;
      uVar8 = *(uint *)(iVar12 + 8);
      uVar4 = uVar8;
      if (6 < uVar8) {
        uVar4 = 7;
      }
      iVar3 = FUN_016dd50a("$schema",*(undefined4 *)(iVar12 + 4),uVar4);
      if (iVar3 == 0) {
        iVar3 = 7 - uVar8;
      }
      iVar7 = iVar7 + -0xc;
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 0xc;
    } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
    uVar13 = uVar11;
    if (0 < iVar3 == iVar3 < 0) break;
LAB_01352e00:
    if (local_28 == 0) {
      return param_1;
    }
    local_28 = local_28 + -1;
    iVar9 = *(int *)(iVar9 + uVar13 * 4 + 0x198);
  }
  pcVar10 = (char *)(iVar9 + uVar11 * 0x18);
  if (*pcVar10 != '\x03') {
    return param_1;
  }
  iVar7 = *(int *)(pcVar10 + 8);
  iVar9 = *(int *)(pcVar10 + 0xc);
  do {
    iVar12 = iVar9;
    if (iVar12 == 0) {
      return 5;
    }
    iVar9 = iVar7 + iVar12;
    pbVar5 = (byte *)(iVar9 + -1);
    uVar13 = (uint)(char)*pbVar5;
    if (0x7fffffff < uVar13) {
      pbVar5 = (byte *)(iVar9 + -2);
      bVar1 = *pbVar5;
      if ((char)bVar1 < -0x40) {
        pbVar5 = (byte *)(iVar9 + -3);
        bVar2 = *pbVar5;
        if ((char)bVar2 < -0x40) {
          pbVar5 = (byte *)(iVar9 + -4);
          uVar11 = (int)(char)bVar2 & 0x3fU | (*pbVar5 & 7) << 6;
        }
        else {
          uVar11 = bVar2 & 0xf;
        }
        uVar11 = (int)(char)bVar1 & 0x3fU | uVar11 << 6;
      }
      else {
        uVar11 = bVar1 & 0x1f;
      }
      uVar13 = uVar13 & 0x3f | uVar11 << 6;
    }
    iVar9 = (int)pbVar5 - iVar7;
  } while (uVar13 == 0x23);
  switch(iVar12) {
  case 0x26:
    iVar9 = thunk_FUN_016dd50a(iVar7,"http://json-schema.org/draft-07/schema",0x26);
    if (iVar9 == 0) {
      return 2;
    }
    iVar9 = thunk_FUN_016dd50a(iVar7,"http://json-schema.org/draft-06/schema",0x26);
    if (iVar9 == 0) {
      return 1;
    }
    uVar6 = 0x26;
    pcVar10 = "http://json-schema.org/draft-04/schema";
    break;
  case 0x27:
    iVar9 = thunk_FUN_016dd50a(iVar7,"https://json-schema.org/draft-07/schema",0x27);
    if (iVar9 == 0) {
      return 2;
    }
    iVar9 = thunk_FUN_016dd50a(iVar7,"https://json-schema.org/draft-06/schema",0x27);
    if (iVar9 == 0) {
      return 1;
    }
    uVar6 = 0x27;
    pcVar10 = "https://json-schema.org/draft-04/schema";
    break;
  default:
    return 5;
  case 0x2b:
    iVar9 = thunk_FUN_016dd50a(iVar7,"http://json-schema.org/draft/2020-12/schema",0x2b);
    if (iVar9 == 0) {
      return 4;
    }
    uVar6 = 0x2b;
    pcVar10 = "http://json-schema.org/draft/2019-09/schema";
    goto LAB_01353008;
  case 0x2c:
    iVar9 = thunk_FUN_016dd50a(iVar7,&DAT_003c6e42,0x2c);
    if (iVar9 == 0) {
      return 4;
    }
    uVar6 = 0x2c;
    pcVar10 = &DAT_003c6ce6;
LAB_01353008:
    iVar9 = thunk_FUN_016dd50a(iVar7,pcVar10,uVar6);
    uVar6 = 5;
    if (iVar9 == 0) {
      uVar6 = 3;
    }
    return uVar6;
  }
  iVar9 = thunk_FUN_016dd50a(iVar7,pcVar10,uVar6);
  uVar6 = 0;
  if (iVar9 != 0) {
    uVar6 = 5;
  }
  return uVar6;
}

