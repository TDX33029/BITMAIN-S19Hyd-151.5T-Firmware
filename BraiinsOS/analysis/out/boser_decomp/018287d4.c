// FUN_018287d4 @ 018287d4 size=868 calls_out=8 calls_in=1
// strings: 

undefined8 FUN_018287d4(undefined4 *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined *puVar9;
  char *local_47c;
  undefined4 local_478;
  undefined *local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  int *local_45c;
  int *local_458;
  undefined4 local_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  int *local_440;
  undefined4 local_43c;
  undefined1 local_3d6;
  undefined1 local_3be;
  undefined1 local_338;
  undefined1 local_320;
  undefined1 local_31c;
  undefined1 local_1f8;
  
  if (*param_2 == '\0') {
    puVar5 = (undefined4 *)thunk_FUN_01be5118(1);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(1,1);
    }
    puVar9 = &UNK_01d1e05c;
    *(undefined1 *)puVar5 = 0;
  }
  else {
    iVar4 = FUN_014146a0(param_2,&DAT_00570850);
    if ((iVar4 != 0) && ((*(byte *)(param_1 + 5) & 1) == 0)) {
      local_470 = *(undefined4 *)param_2;
      local_46c = *(undefined4 *)(param_2 + 4);
      local_468 = *(undefined4 *)(param_2 + 8);
      local_464 = *(undefined4 *)(param_2 + 0xc);
      local_460 = *(undefined4 *)(param_2 + 0x10);
      local_45c = *(int **)(param_2 + 0x14);
      local_458 = *(int **)(param_2 + 0x18);
      local_454 = *(undefined4 *)(param_2 + 0x1c);
      uStack_450 = *(undefined4 *)(param_2 + 0x20);
      uStack_44c = *(undefined4 *)(param_2 + 0x24);
      uStack_448 = *(undefined4 *)(param_2 + 0x28);
      piVar6 = (int *)*param_1;
      uVar7 = param_1[1];
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_01828b44;
      FUN_01435814(&local_470);
      local_1f8 = 0;
      local_338 = 0;
      local_3d6 = 0;
      local_458 = piVar6;
      local_454 = uVar7;
      puVar5 = (undefined4 *)thunk_FUN_01be5118(0x27c);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x27c);
      }
      FUN_01bed4e2(puVar5,&local_470,0x27c);
      puVar9 = &UNK_01d1e06c;
      goto LAB_018289fc;
    }
    iVar4 = FUN_014146a0(param_2,&DAT_00570360);
    if (iVar4 == 0) {
      local_474 = &DAT_014142c0;
      local_478 = &local_47c;
      local_47c = param_2;
      FUN_00664898(&local_470,&DAT_0057ec38,&local_478);
      puVar5 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      *puVar5 = local_470;
      puVar9 = &UNK_01d1e09c;
      *(undefined1 *)(puVar5 + 3) = 0;
      puVar5[1] = local_46c;
      puVar5[2] = local_468;
    }
    else {
      piVar6 = (int *)param_1[2];
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + 1;
      if (iVar4 < 0) {
LAB_01828b44:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1828b44);
        (*pcVar1)();
      }
      (**(code **)(param_1[4] + 0xc))
                (&local_470,param_1[3] + (*(int *)(param_1[4] + 8) - 1U & 0xfffffff8) + 8,param_2);
      cVar3 = (char)local_470;
      if ((char)local_470 != '\x02') {
        local_478 = (char **)CONCAT22(CONCAT11(local_478._3_1_,local_470._3_1_),local_470._1_2_);
        local_470 = *(undefined4 *)param_2;
        local_46c = *(undefined4 *)(param_2 + 4);
        local_468 = *(undefined4 *)(param_2 + 8);
        local_464 = *(undefined4 *)(param_2 + 0xc);
        local_460 = *(undefined4 *)(param_2 + 0x10);
        local_45c = *(int **)(param_2 + 0x14);
        local_458 = *(int **)(param_2 + 0x18);
        local_454 = *(undefined4 *)(param_2 + 0x1c);
        uStack_450 = *(undefined4 *)(param_2 + 0x20);
        uStack_44c = *(undefined4 *)(param_2 + 0x24);
        uStack_448 = *(undefined4 *)(param_2 + 0x28);
        piVar8 = (int *)*param_1;
        uVar7 = param_1[1];
        do {
          iVar4 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar4 + 1;
        if (-1 < iVar4) {
          FUN_01435814(&local_470);
          local_320 = 0;
          local_3be = 0;
          local_470._0_3_ = CONCAT21((undefined2)local_478,cVar3);
          local_470 = CONCAT13((char)((uint)local_478 >> 0x10),(undefined3)local_470);
          local_31c = 0;
          local_45c = piVar6;
          local_440 = piVar8;
          local_43c = uVar7;
          puVar5 = (undefined4 *)thunk_FUN_01be5118(0x448);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x448);
          }
          FUN_01bed4e2(puVar5,&local_470,0x448);
          puVar9 = &UNK_01d1e07c;
          goto LAB_018289fc;
        }
        goto LAB_01828b44;
      }
      puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *(undefined1 *)(puVar5 + 2) = 0;
      *puVar5 = local_46c;
      puVar5[1] = local_468;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + -1;
      puVar9 = &UNK_01d1e08c;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018fa168(piVar6);
      }
    }
  }
  FUN_01a8c248(param_2);
LAB_018289fc:
  return CONCAT44(puVar9,puVar5);
}

