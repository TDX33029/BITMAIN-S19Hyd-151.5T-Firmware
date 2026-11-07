// FUN_0118ef9c @ 0118ef9c size=832 calls_out=12 calls_in=1
// strings: Map must not be polled after it returned `Poll::Ready` | internal error: entered unreachable code

void FUN_0118ef9c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_368 [72];
  int local_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int local_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int local_300;
  int local_2fc;
  undefined1 auStack_2f8 [136];
  uint local_270;
  int local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 *local_25c;
  undefined4 local_258;
  undefined1 auStack_218 [80];
  undefined1 auStack_1c8 [80];
  undefined1 auStack_178 [80];
  int local_128;
  int local_124;
  undefined1 auStack_120 [64];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 auStack_d8 [144];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x165]) {
  case '\0':
    iVar5 = param_2[0x160];
    param_2[0x161] = iVar5;
    local_320 = param_2[0x2a];
    iStack_31c = param_2[0x2b];
    iStack_318 = param_2[0x2c];
    iStack_314 = param_2[0x2d];
    local_310 = param_2[0x2e];
    iStack_30c = param_2[0x2f];
    iStack_308 = param_2[0x30];
    iStack_304 = param_2[0x31];
    param_2[0x32] = param_2[0x26];
    param_2[0x33] = param_2[0x27];
    param_2[0x34] = param_2[0x28];
    param_2[0x35] = param_2[0x29];
    *(undefined1 *)((int)param_2 + 0x595) = 1;
    FUN_01bed4e2(&local_300,param_2 + 2,0x90);
    if ((char)param_2[0x35] != '\0') {
      FUN_006666fc(param_2 + 0x162,param_2[0x33],param_2[0x34]);
      iVar3 = param_2[0x163];
      *(undefined1 *)((int)param_2 + 0x595) = 0;
      iVar9 = param_2[0x164];
      FUN_01bed4e2(auStack_d8,&local_300,0x90);
      local_48 = local_320;
      iStack_44 = iStack_31c;
      iStack_40 = iStack_318;
      iStack_3c = iStack_314;
      local_38 = local_310;
      iStack_34 = iStack_30c;
      iStack_30 = iStack_308;
      iStack_2c = iStack_304;
      FUN_01bed4e2(param_2 + 0x36,auStack_d8,0xb0);
      param_2[99] = iVar9;
      *(undefined1 *)(param_2 + 0x15e) = 0;
      param_2[0x15a] = iVar5 + 0x1b4;
      param_2[0x62] = iVar3;
      goto switchD_0118efcc_caseD_3;
    }
    local_270 = CONCAT22(local_270._2_2_,0x133);
    local_26c = 0;
    uStack_268 = 0x2e;
    uStack_264 = 0;
    uStack_260 = 0;
    local_258 = 1;
    local_25c = &DAT_005327c4;
    FUN_0116be4c(&local_128);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1b59c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1b59c);
  case '\x03':
switchD_0118efcc_caseD_3:
    FUN_00f80fe0(&local_270,param_2 + 0x36,param_3);
    uVar2 = local_270;
    if (local_270 == 2 && local_26c == 0) {
      *(undefined1 *)(param_2 + 0x165) = 3;
      goto LAB_0118f228;
    }
    FUN_01bed4e2(auStack_218,&uStack_268,0x50);
    FUN_00f80f90(param_2 + 0x36);
    puVar6 = auStack_1c8;
    if ((uVar2 & 1) != 0) {
      puVar6 = auStack_178;
    }
    FUN_01bed4e2(puVar6,auStack_218,0x50);
    uVar10 = *(undefined4 *)(puVar6 + 0x48);
    uVar7 = *(undefined4 *)(puVar6 + 0x4c);
    FUN_01bed4e2(&local_128,auStack_218,0x48);
    local_e0 = uVar10;
    local_dc = uVar7;
    FUN_019bb7e0(param_2[0x162],param_2[0x163]);
  }
  if (*(char *)((int)param_2 + 0x595) != '\0') {
    FUN_00ebabdc(&local_300);
  }
  *(undefined1 *)((int)param_2 + 0x595) = 0;
  FUN_019bb7e0(param_2[0x32],param_2[0x33]);
  piVar4 = (int *)param_2[0x161];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_2[0x161]);
  }
  FUN_01bed4e2(auStack_368,auStack_120,0x48);
  *(undefined1 *)(param_2 + 0x165) = 1;
  if (local_128 != 3 || local_124 != 0) {
    FUN_01bed4e2(auStack_2f8,auStack_368,0x48);
    local_2fc = local_124;
    local_300 = local_128;
    if (*param_2 != 0) {
      *param_2 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
    }
    pcVar8 = (code *)param_2[1];
    FUN_00f84bbc(param_2 + 2);
    *param_2 = 1;
    FUN_01bed4e2(auStack_d8,&local_300,0x50);
    (*pcVar8)(param_1,auStack_d8);
    return;
  }
LAB_0118f228:
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

