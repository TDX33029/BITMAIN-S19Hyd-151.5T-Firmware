// FUN_016d2964 @ 016d2964 size=286 calls_out=3 calls_in=1
// strings: /dev/null

/* WARNING: Removing unreachable block (ram,0x016d2a76) */

void FUN_016d2964(int param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  char *pcVar7;
  char *pcVar6;
  int iVar8;
  uint uVar9;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint auStack_b0 [6];
  undefined4 local_98;
  int local_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  undefined4 local_70;
  int local_54;
  undefined4 local_4c;
  char *local_34;
  int local_30;
  
  FUN_016dd606(auStack_b0,0,0x98);
  piVar5 = (int *)(param_1 + -4);
  iVar8 = 0;
  do {
    piVar5 = piVar5 + 1;
    iVar8 = iVar8 + 1;
  } while (*piVar5 != 0);
  DAT_018ddb10 = (uint *)(param_1 + iVar8 * 4);
  puVar3 = DAT_018ddb10;
  DAT_018dda24 = param_1;
  while( true ) {
    puVar4 = puVar3;
    uVar9 = *puVar4;
    if (uVar9 == 0) break;
    puVar3 = puVar4 + 2;
    if (uVar9 < 0x26) {
      auStack_b0[uVar9] = puVar4[1];
    }
  }
  DAT_018ddb04 = local_70;
  if (local_30 != 0) {
    DAT_018ddb00 = local_30;
  }
  DAT_018ddb24 = local_98;
  if ((param_2 == (char *)0x0) && (param_2 = local_34, local_34 == (char *)0x0)) {
    param_2 = "";
  }
  pcVar7 = param_2;
  DAT_018ddb40 = param_2;
  while( true ) {
    pcVar6 = pcVar7 + 1;
    cVar2 = *pcVar7;
    if (cVar2 == '\0') break;
    pcVar7 = pcVar6;
    if (cVar2 == '/') {
      DAT_018ddb40 = pcVar6;
    }
  }
  DAT_018ddb44 = param_2;
  FUN_016d2828(auStack_b0);
  FUN_016d2b2c(local_4c);
  if (((local_84 != iStack_80) || (local_7c != iStack_78)) || (local_54 != 0)) {
    local_c0 = 1;
    local_c4 = 0;
    local_bc = 0;
    local_c8 = 0;
    local_b4 = 0;
    local_b8 = 2;
    software_interrupt(0);
    if ((int)&local_c8 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d2a4e);
      (*pcVar1)();
    }
    iVar8 = 0;
    do {
      if ((int)((uint)*(ushort *)((int)auStack_b0 + iVar8 * 8 + -0x12) << 0x1a) < 0) {
        software_interrupt(0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 3);
    DAT_018ddb0a = 1;
  }
  return;
}

