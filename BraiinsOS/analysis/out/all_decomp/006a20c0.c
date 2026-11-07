// FUN_006a20c0 @ 006a20c0 size=1000 calls_out=7 calls_in=1
// strings: header_read_timeout

/* WARNING: Removing unreachable block (ram,0x006a2228) */
/* WARNING: Removing unreachable block (ram,0x006a222c) */
/* WARNING: Removing unreachable block (ram,0x006a2234) */
/* WARNING: Removing unreachable block (ram,0x006a2238) */
/* WARNING: Removing unreachable block (ram,0x006a2240) */
/* WARNING: Removing unreachable block (ram,0x006a2248) */
/* WARNING: Removing unreachable block (ram,0x006a2288) */

void FUN_006a20c0(int param_1,uint *param_2,undefined4 *param_3,char **param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int *piVar10;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_2d8;
  undefined4 local_2d4;
  uint local_298;
  uint local_294;
  undefined4 local_290;
  undefined4 local_288;
  uint local_270;
  uint uStack_26c;
  undefined1 *local_268;
  undefined4 local_260;
  int *local_258;
  uint local_254;
  undefined4 local_250;
  undefined1 local_248;
  undefined4 local_234;
  int local_230;
  undefined1 local_22c;
  undefined3 uStack_22b;
  undefined2 local_228;
  undefined4 local_226;
  undefined1 local_222;
  undefined2 local_221;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  uint local_1d0;
  char local_1cc;
  undefined2 uStack_1c8;
  undefined4 local_1c4;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  ushort local_1ac;
  char **local_1a8;
  undefined4 *local_1a4;
  char *local_34;
  char **local_30;
  undefined4 local_2c;
  
  local_1ec = thunk_FUN_016d4a50(0x2000);
  if (local_1ec == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  local_218 = *param_3;
  uStack_214 = param_3[1];
  uStack_210 = param_3[2];
  uStack_20c = param_3[3];
  local_208 = param_3[4];
  uStack_204 = param_3[5];
  uStack_200 = param_3[6];
  uStack_1fc = param_3[7];
  local_1ac = 0;
  uStack_1c8 = 0;
  piVar10 = (int *)param_2[10];
  local_318 = 3;
  local_288 = 3;
  local_248 = 0xb;
  local_1b0 = 1;
  local_1bc = 1;
  local_1cc = '\x01';
  local_1c4 = 0x2000;
  local_1f0 = 0x2000;
  local_1dc = 4;
  local_228 = 0x100;
  local_1b4 = 0;
  local_1b8 = 0;
  local_1d4 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e4 = 0;
  local_1e8 = 0;
  local_1f8 = 0;
  local_2d8 = 0;
  local_2d4 = 0;
  local_314 = 0;
  local_298 = 0;
  local_290 = 0;
  local_260 = 0;
  local_258 = (int *)0x0;
  local_250 = 0;
  local_234 = 0;
  local_222 = 0;
  local_226 = 0;
  uVar3 = param_2[0xc];
  local_1c0 = 0x66000;
  local_1d0 = 0x66000;
  local_268 = &DAT_3b9aca00;
  local_221 = 0x201;
  local_230 = uVar3 << 8;
  uStack_22b = (undefined3)((uint)*(undefined4 *)((int)param_2 + 0x33) >> 8);
  local_22c = (undefined1)(uVar3 >> 0x18);
  local_254 = uStack_1fc;
  if (piVar10 != (int *)0x0) {
    do {
      iVar4 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x6a24b0);
      (*pcVar1)();
    }
    local_254 = param_2[0xb];
  }
  if ((char)param_2[0xe] == '\0') {
    local_221 = 0x202;
  }
  if (*(char *)((int)param_2 + 0x37) != '\0') {
    local_230 = CONCAT31((int3)uVar3,1);
  }
  if (*(char *)((int)param_2 + 0x39) != '\0') {
    local_226 = 0x100;
  }
  if (*(char *)((int)param_2 + 0x3a) != '\0') {
    local_226 = CONCAT31(local_226._1_3_,1);
  }
  if (param_2[6] != 0) {
    local_294 = param_2[7];
  }
  local_298 = (uint)(param_2[6] != 0);
  puVar5 = (undefined1 *)param_2[4];
  local_30 = (char **)0x13;
  local_34 = "header_read_timeout";
  local_258 = piVar10;
  if ((*param_2 & 1) == 0) {
    if (puVar5 != &DAT_3b9aca00 && param_2[10] != 0) goto LAB_006a233c;
  }
  else if (puVar5 != &DAT_3b9aca00) {
    if (param_2[10] == 0) {
      local_1a8 = &local_34;
      puVar9 = &DAT_01884b84;
      puVar6 = &DAT_0056cf12;
      local_1a4 = &DAT_0157d360;
      goto LAB_006a2490;
    }
LAB_006a233c:
    local_270 = param_2[2];
    uStack_26c = param_2[3];
    local_268 = puVar5;
  }
  if (*(char *)((int)param_2 + 0x3d) != '\x02') {
    local_1cc = *(char *)((int)param_2 + 0x3d);
  }
  local_1ac = (ushort)*(byte *)((int)param_2 + 0x3b);
  if (*(byte *)((int)param_2 + 0x3b) != 0) {
    local_1cc = '\0';
  }
  if (param_2[8] != 0) {
    if (param_2[9] >> 0xd == 0) {
      local_1a8 = (char **)&DAT_00567380;
      puVar9 = &DAT_018a66f0;
      puVar6 = &DAT_00571dc8;
      local_1a4 = (undefined4 *)&LAB_00fac484;
LAB_006a2490:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(puVar6,&local_1a8,puVar9);
    }
    local_1c0 = param_2[9];
  }
  local_1c4 = 0x2000;
  uStack_1c8 = 0;
  local_1a4 = (undefined4 *)param_5;
  if ((char)param_2[0xf] == '\0') {
    local_228 = 0;
  }
  local_1d0 = local_1c0;
  local_1a8 = param_4;
  pcVar7 = (char *)thunk_FUN_016d4a50(0xc0);
  if (pcVar7 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xc0);
  }
  pcVar7[0] = '\0';
  pcVar7[1] = '\0';
  pcVar7[2] = '\0';
  pcVar7[3] = '\0';
  pcVar7[4] = '\0';
  pcVar7[5] = '\0';
  pcVar7[6] = '\0';
  pcVar7[7] = '\0';
  FUN_016dd1aa(&local_1a8,&local_318,0x170);
  local_2c = param_5;
  local_34 = pcVar7;
  local_30 = param_4;
  puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar8 = 0;
  FUN_016dd1aa(param_1,&local_318,0x170);
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(char **)(param_1 + 0x184) = pcVar7;
  *(char ***)(param_1 + 0x188) = param_4;
  *(undefined4 *)(param_1 + 0x18c) = param_5;
  *(undefined4 **)(param_1 + 400) = puVar8;
  *(undefined1 *)(param_1 + 0x180) = 3;
  return;
}

