// FUN_019b25ac @ 019b25ac size=928 calls_out=10 calls_in=1
// strings: 

undefined8 FUN_019b25ac(int *param_1,int param_2,char *param_3,uint param_4)

{
  ulonglong uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int iVar7;
  undefined4 *puVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  ulonglong uVar16;
  undefined4 *local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined2 local_1c4;
  uint local_1c0;
  undefined4 *local_1bc;
  undefined4 **local_1b4;
  char local_1b0 [4];
  undefined4 *local_1ac;
  uint local_30;
  undefined4 *local_2c;
  
  iVar4 = param_1[2];
  iVar2 = *param_1;
  iVar7 = 0;
  if (iVar4 == 0) {
    if (*param_3 == '/') {
      param_1[2] = 0;
    }
  }
  else {
    if (*param_3 != '/') {
      iVar6 = param_1[1];
      if (*(char *)(iVar6 + iVar4 + -1) == '/') {
        iVar7 = iVar4;
        goto LAB_019b2628;
      }
      if (iVar2 == iVar4) {
        FUN_0197ac30(param_1,iVar4,1,1,1);
        iVar4 = param_1[2];
        iVar2 = *param_1;
        iVar6 = param_1[1];
      }
      iVar7 = iVar4 + 1;
      *(undefined1 *)(iVar6 + iVar4) = 0x2f;
    }
    param_1[2] = iVar7;
  }
LAB_019b2628:
  if ((uint)(iVar2 - iVar7) < param_4) {
    FUN_0197ac30(param_1,iVar7,param_4,1,1);
    iVar7 = param_1[2];
  }
  FUN_01bed4e2(param_1[1] + iVar7,param_3,param_4);
  param_1[2] = iVar7 + param_4;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar10 = param_1[2];
  local_1cc = 0x1b6;
  local_1c8 = 1;
  local_1b4 = &local_1d0;
  local_1d0 = (undefined4 *)0x0;
  local_1c4 = 0;
  if (uVar10 >> 7 < 3) {
    FUN_01bed4e2(local_1b0,param_1[1],uVar10);
    local_1b0[uVar10] = '\0';
    FUN_012fbc58(&local_30,local_1b0,uVar10 + 1);
    if (local_30 == 1) {
      local_1c0 = 2;
      local_1bc = &DAT_01d27a70;
    }
    else {
      FUN_01980058(&local_1c0,local_2c,&local_1d0);
    }
  }
  else {
    FUN_019a0974(&local_1c0,param_1[1],uVar10,&local_1b4);
  }
  puVar14 = local_1bc;
  if ((char)local_1c0 == '\x04') {
    local_30 = CONCAT31(local_30._1_3_,4);
  }
  else {
    local_30 = local_1c0;
  }
  local_2c = local_1bc;
  FUN_019afed4(param_1);
  uVar10 = extraout_r3;
  puVar8 = puVar14;
  if (((local_30 & 0xff) != 4) && (puVar8 = (undefined4 *)&DAT_ffffffff, (local_30 & 0xff) == 3)) {
    uVar11 = *puVar14;
    puVar13 = (undefined4 *)puVar14[1];
    pcVar5 = (code *)*puVar13;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar11);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_01be4678(uVar11);
    }
    thunk_FUN_01be4678(puVar14);
    uVar10 = extraout_r3_00;
  }
  if (puVar8 != (undefined4 *)&DAT_ffffffff) {
    local_1d0 = puVar8;
    FUN_01980288(local_1b0,&local_1d0,param_2);
    if (local_1b0[0] == '\x04') {
      FUN_01bf01d6(puVar8);
      uVar16 = FUN_019b29cc(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
      iVar7 = (int)(uVar16 >> 0x20);
      pcVar3 = (char *)uVar16;
      uVar10 = extraout_r3_01;
      if (iVar7 == 0) {
        uVar11 = 0;
      }
      else {
        if (iVar7 == 1) {
          cVar9 = *pcVar3;
          uVar11 = 0;
          if ((cVar9 == '+') || (cVar9 == '-')) goto LAB_019b282c;
        }
        else {
          cVar9 = *pcVar3;
        }
        if (cVar9 == '+') {
          uVar16 = CONCAT44(iVar7 + -1,pcVar3 + 1);
        }
        iVar7 = (int)(uVar16 >> 0x20);
        if (uVar16 < 0x900000000) {
          uVar11 = 1;
          uVar10 = 0;
          while (iVar7 != 0) {
            uVar12 = *(byte *)uVar16 - 0x30;
            if (9 < uVar12) {
              uVar11 = 0;
              break;
            }
            iVar7 = (int)(uVar16 >> 0x20) + -1;
            uVar16 = CONCAT44(iVar7,(byte *)uVar16 + 1);
            uVar10 = uVar12 + uVar10 * 10;
          }
        }
        else {
          uVar10 = 0;
          while( true ) {
            iVar7 = (int)(uVar16 >> 0x20);
            if (iVar7 == 0) break;
            uVar1 = (ulonglong)uVar10;
            uVar10 = (uint)(uVar1 * 10);
            if ((int)(uVar1 * 10 >> 0x20) != 0) goto LAB_019b2828;
            uVar12 = *(byte *)uVar16 - 0x30;
            uVar11 = 0;
            bVar15 = CARRY4(uVar12,uVar10);
            uVar10 = uVar12 + uVar10;
            if ((9 < uVar12) || (uVar16 = CONCAT44(iVar7 + -1,(byte *)uVar16 + 1), bVar15))
            goto LAB_019b282c;
          }
          uVar11 = 1;
        }
      }
      goto LAB_019b282c;
    }
    if (local_1b0[0] == '\x03') {
      uVar11 = *local_1ac;
      puVar14 = (undefined4 *)local_1ac[1];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar11);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_01be4678(uVar11);
      }
      thunk_FUN_01be4678(local_1ac);
    }
    FUN_01bf01d6(puVar8);
    uVar10 = extraout_r3_02;
  }
LAB_019b2828:
  uVar11 = 0;
LAB_019b282c:
  return CONCAT44(uVar10,uVar11);
}

