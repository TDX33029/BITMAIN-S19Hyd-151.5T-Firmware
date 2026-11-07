// FUN_0126d620 @ 0126d620 size=1340 calls_out=24 calls_in=2
// strings: BUG: SettingSchema must be JSON-serializablestruct SchemaDependsOnstruct ExperimentalConfigRaw

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0126d620(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  code *pcVar9;
  code *pcVar10;
  undefined1 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  char local_268;
  undefined2 local_267;
  undefined1 local_265;
  undefined *local_264;
  int local_260;
  undefined *puStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined *local_24c;
  int iStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  char local_23c;
  undefined2 local_23b;
  undefined1 local_239;
  int local_238;
  undefined *local_234;
  int local_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  char local_224;
  undefined2 local_223;
  undefined1 local_221;
  char *local_220;
  int *local_21c;
  char *local_218;
  undefined4 local_210;
  undefined *local_20c;
  int local_208;
  undefined *local_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1e0;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  char *local_50;
  int *piStack_4c;
  char *pcStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char *local_38;
  int *local_34;
  char *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0126eb40(&local_210,param_1);
  if ((char)local_210 == '\x06') {
    FUN_019b9f84(&local_38);
    local_50 = local_38;
    piStack_4c = local_34;
    pcStack_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    local_34 = (int *)0x2c;
    local_30 = local_20c;
    local_38 = 
    "BUG: SettingSchema must be JSON-serializablestruct SchemaDependsOnstruct ExperimentalConfigRaw"
    ;
    uVar3 = FUN_01274920(&local_38);
    return uVar3;
  }
  local_250 = CONCAT22(CONCAT11(local_250._3_1_,local_210._3_1_),local_210._1_2_);
  local_238 = local_208;
  local_234 = local_204;
  local_230 = iStack_200;
  local_22c = uStack_1fc;
  local_267 = local_210._1_2_;
  local_265 = local_210._3_1_;
  local_260 = local_208;
  puStack_25c = local_204;
  iStack_258 = iStack_200;
  uStack_254 = uStack_1fc;
  local_264 = local_20c;
  local_268 = (char)local_210;
  FUN_0153a8a8(&local_210);
  FUN_01567288(&local_238,&local_210,&local_268);
  FUN_015634ac(&local_210);
  if (local_224 == '\x06') {
    uVar3 = FUN_0126dc78();
    goto LAB_0126d8d4;
  }
  local_24c = local_234;
  iStack_248 = local_230;
  uStack_244 = local_22c;
  uStack_240 = uStack_228;
  local_239 = local_221;
  local_250 = local_238;
  local_23c = local_224;
  local_23b = local_223;
  local_1a8 = 0;
  local_1ac = 4;
  local_1b0 = 0;
  local_1e0 = 0;
  local_210 = (int *)0x0;
  iVar4 = FUN_01577618(&local_250,param_2,&local_210);
  FUN_0156af84(&local_210);
  if (iVar4 != 0) {
    FUN_0126dcd4(&local_250);
    FUN_00e0febc(&local_268);
    return 0;
  }
  local_1a8 = 0;
  local_1b0 = 0;
  local_1e0 = 0;
  local_210 = (int *)0x0;
  local_22c = 0;
  local_234 = (undefined *)0x0;
  local_1ac = 4;
  local_238 = -0x7fffffff;
  uVar15 = FUN_01576990(&local_250,param_2,&local_238,0,&local_210);
  iVar4 = (int)((ulonglong)uVar15 >> 0x20);
  uVar3 = (undefined4)uVar15;
  FUN_0156af84(&local_210);
  pcVar9 = *(code **)(iVar4 + 0xc);
  local_220 = (char *)(*pcVar9)(uVar3);
  if (local_220 == (char *)0x0) {
LAB_0126d834:
    local_218 = (char *)0x0;
    local_21c = (int *)&SUB_00000004;
    local_220 = (char *)0x0;
    FUN_012755b0(uVar3,iVar4);
    pcVar6 = (char *)0x0;
    piVar12 = (int *)&SUB_00000004;
  }
  else {
    local_230 = 0;
    local_238 = 0;
    local_204 = (undefined *)0x0;
    local_234 = (undefined *)0x1;
    local_208 = 0x60000020;
    local_210 = &local_238;
    local_20c = &DAT_01c25768;
    iVar5 = FUN_01592e4c(&local_220,&local_210);
    iVar1 = local_230;
    puVar2 = local_234;
    iVar13 = local_238;
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,(int)&uStack_28 + 3,&DAT_01c25780,&DAT_01d30334);
    }
    FUN_0127560c(&local_220);
    if (iVar13 == -0x80000000) goto LAB_0126d834;
    pcVar10 = *(code **)(iVar4 + 0x10);
    (*pcVar10)(&local_210,uVar3);
    piVar12 = (int *)&SUB_00000004;
    uVar14 = 0;
    pcVar6 = (char *)((int)local_210 + 1);
    if (local_210 == (int *)&DAT_ffffffff) {
      pcVar6 = &DAT_ffffffff;
    }
    pcVar7 = &SUB_00000004;
    if (&SUB_00000004 < pcVar6) {
      pcVar7 = pcVar6;
    }
    iVar5 = (int)pcVar7 * 0xc;
    if ((char *)0xaaaaaaa < pcVar6) {
LAB_0126d93c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,iVar5);
    }
    local_38 = (char *)0x0;
    if (iVar5 != 0) {
      uVar14 = 4;
      piVar12 = (int *)FUN_01298504(iVar5,4);
      local_38 = pcVar7;
      if (piVar12 == (int *)0x0) goto LAB_0126d93c;
    }
    *piVar12 = iVar13;
    piVar12[1] = (int)puVar2;
    piVar12[2] = iVar1;
    local_30 = &DAT_00000001;
    iVar13 = 0;
    local_34 = piVar12;
    while (pcVar6 = local_30, pcVar7 = (char *)(*pcVar9)(uVar3), pcVar7 != (char *)0x0) {
      local_234 = (undefined *)0x1;
      local_230 = 0;
      local_238 = 0;
      local_204 = (undefined *)0x0;
      local_208 = 0x60000020;
      local_20c = &DAT_01c25768;
      local_210 = &local_238;
      local_220 = pcVar7;
      iVar8 = FUN_01592e4c(&local_220,&local_210);
      iVar5 = local_230;
      puVar2 = local_234;
      iVar1 = local_238;
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,(int)&uStack_28 + 3,&DAT_01c25780,&DAT_01d30334);
      }
      FUN_0127560c(&local_220);
      if (iVar1 == -0x80000000) break;
      if (pcVar6 == local_38) {
        (*pcVar10)(&local_210,uVar3);
        puVar11 = (undefined1 *)((int)local_210 + 1);
        if (local_210 == (int *)&DAT_ffffffff) {
          puVar11 = (undefined1 *)0xffffffff;
        }
        FUN_006520b4(&local_38,pcVar6,puVar11,4,0xc);
        piVar12 = local_34;
      }
      local_30 = pcVar6 + 1;
      *(int *)((int)piVar12 + iVar13 + 0xc) = iVar1;
      *(undefined **)((int)piVar12 + iVar13 + 0x10) = puVar2;
      *(int *)((int)piVar12 + iVar13 + 0x14) = iVar5;
      iVar13 = iVar13 + 0xc;
    }
    FUN_012755b0(uVar3,iVar4);
    local_220 = local_38;
    local_21c = local_34;
    local_218 = local_30;
    pcVar6 = local_30;
    piVar12 = local_34;
  }
  FUN_01a4a6cc(&local_210,piVar12,pcVar6,"; ",2);
  local_34 = (int *)&LAB_00632348;
  local_38 = (char *)&local_210;
  FUN_00664898(&local_238,&DAT_00590e5f,&local_38);
  FUN_019bb7e0(local_210,local_20c);
  local_210 = (int *)local_238;
  local_20c = local_234;
  local_208 = local_230;
  uVar3 = FUN_006679ac(&local_210);
  FUN_006a41c0(&local_220);
  FUN_0126dcd4(&local_250);
LAB_0126d8d4:
  FUN_00e0febc(&local_268);
  return uVar3;
}

