// FUN_00929c64 @ 00929c64 size=1400 calls_out=17 calls_in=1
// strings: Bosminer.try_resume | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00929c64(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
  undefined4 ***pppuVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 ***pppuVar7;
  undefined4 uVar8;
  undefined4 ***pppuVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  int local_a84;
  undefined4 ***local_a70;
  undefined4 ***local_a6c;
  undefined4 ***local_a68;
  undefined4 ***pppuStack_a64;
  undefined4 ***pppuStack_a60;
  undefined1 auStack_a5c [52];
  undefined4 local_a28;
  undefined1 auStack_a08 [88];
  undefined4 ***local_9b0;
  undefined4 ***pppuStack_9ac;
  undefined4 ***pppuStack_9a8;
  undefined4 ***local_9a0;
  undefined4 ***local_99c;
  undefined4 ***pppuStack_998;
  undefined4 ***pppuStack_994;
  undefined4 ***local_990;
  undefined1 auStack_98c [84];
  undefined1 auStack_938 [88];
  undefined4 ***local_8e0;
  undefined4 ***pppuStack_8dc;
  undefined4 ***pppuStack_8d8;
  undefined4 ***pppuStack_8d4;
  undefined4 ***pppuStack_8d0;
  undefined4 ***pppuStack_8cc;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 ***local_8b0;
  undefined4 ***local_8ac;
  undefined4 ***local_8a8;
  undefined4 ***local_8a4;
  undefined4 ***local_8a0;
  undefined4 ***local_89c;
  undefined1 auStack_898 [712];
  undefined4 ***local_5d0;
  undefined4 ***local_5cc;
  undefined4 ***local_5c8;
  undefined4 ***local_5c4;
  undefined4 ***local_5c0;
  undefined4 ***local_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 ***local_2f0;
  undefined4 ***local_2ec;
  undefined4 ***local_2e8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    uVar8 = *(undefined4 *)(param_2 + 0x90);
    *(undefined1 *)(param_2 + 0x95) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    FUN_00a2b4fc(*(undefined4 *)(param_2 + 0x88));
    *(undefined1 *)(param_2 + 0x160) = 0;
    *(undefined4 *)(param_2 + 0x98) = uVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0bfa0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0bfa0);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x644)) {
    case 0:
      puVar10 = *(undefined4 **)(param_2 + 0x640);
      goto LAB_00929de0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19d4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19d4c);
    }
    goto switchD_00929d44_caseD_3;
  }
  puVar10 = (undefined4 *)(param_2 + 0x98);
  FUN_00926834(&local_5d0,puVar10,param_3);
  pppuVar2 = local_5cc;
  pppuVar7 = local_5d0;
  if (local_5d0 == (undefined4 ***)&SUB_00000004 && local_5cc == (undefined4 ***)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar5 = 3;
    goto LAB_0092a164;
  }
  local_9b0 = local_5c8;
  pppuStack_9ac = local_5c4;
  pppuStack_9a8 = local_5c0;
  FUN_01bed4e2(auStack_a08,&local_5bc,0x54);
  cVar1 = *(char *)(param_2 + 0x160);
  bVar12 = cVar1 == '\x03';
  if (bVar12) {
    cVar1 = *(char *)(param_2 + 0x15c);
  }
  if (bVar12 && cVar1 == '\x03') {
    FUN_009267f4(param_2 + 0xa0);
  }
  if (pppuVar7 == (undefined4 ***)&DAT_00000003 && pppuVar2 == (undefined4 ***)0x0) {
    *puVar10 = local_9b0;
    *(undefined4 ****)(param_2 + 0x9c) = pppuStack_9ac;
    *(undefined4 ****)(param_2 + 0xa0) = pppuStack_9a8;
    *(undefined1 *)(param_2 + 0x644) = 0;
    *(undefined4 **)(param_2 + 0x640) = puVar10;
LAB_00929de0:
    FUN_019cfcf0(&local_5d0);
    local_8e0 = local_5d0;
    pppuStack_8dc = local_5cc;
    pppuStack_8d8 = local_5c8;
    pppuStack_8d4 = local_5c4;
    pppuStack_8d0 = local_5c0;
    pppuStack_8cc = local_5bc;
    local_8c8 = local_5b8;
    uStack_8c4 = uStack_5b4;
    uStack_8c0 = uStack_5b0;
    uStack_8bc = uStack_5ac;
    uStack_8b8 = uStack_5a8;
    uStack_8b4 = uStack_5a4;
    *(undefined4 *)(param_2 + 0x104) = 0x13;
    *(undefined4 *)(param_2 + 200) = 0x80000006;
    *(char **)(param_2 + 0x100) = "Bosminer.try_resume";
    *(undefined4 ****)(param_2 + 0x108) = local_5d0;
    *(undefined4 ****)(param_2 + 0x10c) = local_5cc;
    *(undefined4 ****)(param_2 + 0x110) = local_5c8;
    *(undefined4 ****)(param_2 + 0x114) = local_5c4;
    *(undefined4 ****)(param_2 + 0x118) = local_5c0;
    *(undefined4 ****)(param_2 + 0x11c) = local_5bc;
    *(undefined4 *)(param_2 + 0x120) = local_5b8;
    *(undefined4 *)(param_2 + 0x124) = uStack_5b4;
    *(undefined4 *)(param_2 + 0x128) = uStack_5b0;
    *(undefined4 *)(param_2 + 300) = uStack_5ac;
    *(undefined4 *)(param_2 + 0x130) = uStack_5a8;
    *(undefined4 *)(param_2 + 0x134) = uStack_5a4;
    *(undefined1 *)(param_2 + 0x638) = 0;
    *(undefined1 *)(param_2 + 0x13f) = 0;
    *(undefined4 **)(param_2 + 0x138) = puVar10;
switchD_00929d44_caseD_3:
    local_a84 = param_2 + 0xa8;
    puVar11 = (undefined1 *)(param_2 + 0x644);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x638)) {
    case 0:
      FUN_01bed4e2(param_2 + 0x370,local_a84,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
    FUN_00926b64(&local_5d0,param_2 + 0x370,param_3);
    pppuVar4 = local_5c0;
    pppuVar3 = local_5c4;
    pppuVar9 = local_5c8;
    pppuVar2 = local_5cc;
    pppuVar7 = local_5d0;
    if (local_5d0 == (undefined4 ***)&DAT_0000001e && local_5cc == (undefined4 ***)0x0) {
      *(undefined1 *)(param_2 + 0x638) = 3;
LAB_00929ea8:
      *puVar11 = 3;
LAB_00929eb0:
      uVar5 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_0092a164;
    }
    FUN_01bed4e2(&local_2f0,&local_5b8,0x2c8);
    FUN_00926ab4(param_2 + 0x370);
    if (pppuVar7 == (undefined4 ***)&DAT_0000001d && pppuVar2 == (undefined4 ***)0x0) {
      *(undefined1 *)(param_2 + 0x638) = 1;
      if (pppuVar9 == (undefined4 ***)&DAT_80000004) {
        pppuVar7 = pppuVar4;
        local_5c0 = local_5bc;
        pppuVar9 = pppuVar3;
        goto LAB_0092a0a4;
      }
      if (pppuVar9 == (undefined4 ***)&DAT_80000005) goto LAB_00929ea8;
      *puVar11 = 1;
      if (pppuVar9 == (undefined4 ***)0x80000006) goto LAB_00929eb0;
      local_8a8 = pppuVar4;
      local_2ec = (undefined4 ***)&DAT_00000001;
      local_8ac = pppuVar3;
      local_8a4 = local_5bc;
      local_8b0 = pppuVar9;
      local_2e8 = (undefined4 ***)0x0;
      local_2f0 = (undefined4 ***)0x0;
      local_5c4 = (undefined4 ***)0x0;
      local_5c8 = (undefined4 ***)0x60000020;
      local_5cc = (undefined4 ***)&DAT_01c0c0b0;
      local_5d0 = &local_2f0;
      iVar6 = FUN_00aeeb78(&local_8b0,&local_5d0);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_8e0,&DAT_01c0c0d8,&DAT_01d30334);
      }
      local_8e0 = local_2f0;
      pppuStack_8dc = local_2ec;
      pppuStack_8d8 = local_2e8;
      FUN_01a70fd4(&local_5d0,0xd);
      FUN_00927378(&local_8b0);
      pppuVar7 = local_5c4;
      pppuVar9 = local_5c8;
      pppuVar3 = local_5cc;
      pppuVar2 = local_5d0;
      FUN_01bed4e2(auStack_938,&local_5bc,0x54);
      if (pppuVar2 == (undefined4 ***)&DAT_00000003 && pppuVar3 == (undefined4 ***)0x0)
      goto LAB_0092a0ac;
      local_99c = pppuVar3;
      pppuStack_998 = pppuVar9;
      pppuStack_994 = pppuVar7;
      local_9a0 = pppuVar2;
      local_990 = local_5c0;
      FUN_01bed4e2(auStack_98c,auStack_938,0x54);
LAB_0092a130:
      FUN_01bed4e2(&local_a70,&local_9a0,0x68);
    }
    else {
      FUN_01bed4e2(auStack_898,&local_2f0,0x2c8);
      local_8ac = pppuVar2;
      local_8a0 = pppuVar4;
      local_8a4 = pppuVar3;
      local_89c = local_5bc;
      local_8b0 = pppuVar7;
      local_8a8 = pppuVar9;
      if (pppuVar7 != (undefined4 ***)&DAT_0000000a || pppuVar2 != (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      *(undefined1 *)(param_2 + 0x638) = 1;
      pppuVar7 = pppuVar3;
      local_5c0 = pppuVar4;
LAB_0092a0a4:
      *puVar11 = 1;
LAB_0092a0ac:
      if (-0x7fffffff < (int)pppuVar9) {
        local_5d0 = pppuVar9;
        local_5cc = pppuVar7;
        local_5c8 = local_5c0;
        FUN_01a70fd4(&local_9a0,0xd,&local_5d0);
        if (local_9a0 != (undefined4 ***)&DAT_00000003 || local_99c != (undefined4 ***)0x0)
        goto LAB_0092a130;
      }
      FUN_0160aaa4(&local_a68,0);
      local_a6c = (undefined4 ***)0x0;
      local_a70 = (undefined4 ***)&DAT_00000003;
      local_a28 = 0;
    }
    FUN_00927390(param_2 + 0x98);
    FUN_00f9604c(param_2 + 0x48);
  }
  else {
    FUN_01bed4e2(auStack_a5c,auStack_a08,0x54);
    local_a68 = local_9b0;
    pppuStack_a64 = pppuStack_9ac;
    pppuStack_a60 = pppuStack_9a8;
    local_a6c = pppuVar2;
    local_a70 = pppuVar7;
    FUN_00f9604c(param_2 + 0x48);
    if (*(char *)(param_2 + 0x95) != '\0') {
      FUN_00f9604c(param_2);
    }
  }
  FUN_01bed4e2(param_1,&local_a70,0x68);
  uVar5 = 1;
LAB_0092a164:
  *(undefined1 *)(param_2 + 0x94) = uVar5;
  return;
}

