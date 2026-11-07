// FUN_0069863c @ 0069863c size=908 calls_out=5 calls_in=2
// strings: internal error: entered unreachable code

undefined4 FUN_0069863c(char *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  undefined8 uVar16;
  int local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  puVar10 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    FUN_01ac6cbc(*puVar10,",",1);
  }
  uVar4 = *puVar10;
  param_1[1] = '\x02';
  FUN_006bc51c(&local_50,uVar4,param_2,4);
  if ((char)local_50 != '\x04') {
    uVar4 = FUN_01966f50(local_50,local_4c);
    return uVar4;
  }
  FUN_01ac6cbc(*puVar10,":",1);
  puVar8 = (uint *)*param_3;
  local_5c = param_3[3];
  uVar4 = *puVar10;
  puVar7 = puVar8 + 1;
  uVar12 = *puVar8;
  FUN_01ac6cbc(uVar4,"{",1);
  bVar15 = local_5c != 0;
  if (!bVar15) {
    FUN_01ac6cbc(uVar4,"}",1);
  }
  bVar5 = !bVar15;
  uVar12 = ~uVar12 & 0x80808080;
  while( true ) {
    if (local_5c == 0) {
      if (!bVar5) {
        FUN_01ac6cbc(*puVar10,"}",1);
      }
      return 0;
    }
    puVar9 = puVar7;
    if (uVar12 == 0) {
      do {
        puVar7 = puVar9 + 1;
        uVar12 = *puVar9;
        puVar8 = puVar8 + -0x30;
        puVar9 = puVar7;
      } while ((uVar12 & 0x80808080) == 0x80808080);
      uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
    }
    if (!bVar15) {
      FUN_01ac6cbc(*puVar10,",",1);
    }
    uVar1 = LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                    uVar12 >> 0x18);
    iVar2 = (uVar1 >> 3) * -2 - (uVar1 >> 3);
    FUN_006bc51c(&local_50,*puVar10,puVar8[iVar2 * 4 + -0xb],puVar8[iVar2 * 4 + -10]);
    if ((char)local_50 != '\x04') break;
    FUN_01ac6cbc(*puVar10,":",1);
    puVar9 = (uint *)puVar8[iVar2 * 4 + -8];
    uVar1 = puVar8[iVar2 * 4 + -5];
    uVar4 = *puVar10;
    puVar14 = puVar9 + 1;
    uVar11 = *puVar9;
    FUN_01ac6cbc(uVar4,"{",1);
    bVar15 = uVar1 != 0;
    if (!bVar15) {
      FUN_01ac6cbc(uVar4,"}",1);
    }
    bVar6 = !bVar15;
    uVar12 = uVar12 - 1 & uVar12;
    uVar11 = ~uVar11 & 0x80808080;
    local_5c = local_5c + -1;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      puVar13 = puVar14;
      if (uVar11 == 0) {
        do {
          puVar14 = puVar13 + 1;
          uVar11 = *puVar13;
          puVar9 = puVar9 + -0x18;
          puVar13 = puVar14;
        } while ((uVar11 & 0x80808080) == 0x80808080);
        uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
      }
      if (!bVar15) {
        FUN_01ac6cbc(*puVar10,",",1);
      }
      uVar3 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                      uVar11 >> 0x18);
      iVar2 = (uVar3 >> 3) * -2 - (uVar3 >> 3);
      FUN_006bc51c(&local_50,*puVar10,puVar9[iVar2 * 2 + -5],puVar9[iVar2 * 2 + -4]);
      if ((char)local_50 != '\x04') goto LAB_0069895c;
      uVar11 = uVar11 - 1 & uVar11;
      FUN_01ac6cbc(*puVar10,":",1);
      uVar16 = FUN_01415f98(&local_50,extraout_r1,puVar9[iVar2 * 2 + -2],puVar9[iVar2 * 2 + -1]);
      FUN_01ac6cbc(*puVar10,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      bVar15 = false;
      bVar6 = false;
    }
    bVar15 = false;
    bVar5 = false;
    if (!bVar6) {
      FUN_01ac6cbc(*puVar10,"}",1);
      bVar5 = false;
    }
  }
LAB_0069895c:
  uVar4 = FUN_01966f50(local_50,local_4c);
  return uVar4;
}

