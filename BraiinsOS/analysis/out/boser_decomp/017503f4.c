// FUN_017503f4 @ 017503f4 size=792 calls_out=8 calls_in=3
// strings: 

undefined8 FUN_017503f4(int param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined *puVar8;
  char *local_344;
  undefined4 local_340;
  undefined *local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined *puStack_320;
  int *piStack_31c;
  uint local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  
  if (*param_2 == '\0') {
    puVar6 = (undefined4 *)thunk_FUN_01be5118(1);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(1,1);
    }
    puVar8 = &UNK_01d19a4c;
    *(undefined1 *)puVar6 = 0;
  }
  else {
    iVar4 = FUN_014146a0(param_2,&DAT_00570850);
    if ((iVar4 != 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      local_338 = *(undefined4 *)param_2;
      local_334 = *(undefined4 *)(param_2 + 4);
      local_330 = *(undefined4 *)(param_2 + 8);
      local_32c = *(undefined4 *)(param_2 + 0xc);
      local_328 = *(undefined4 *)(param_2 + 0x10);
      local_324 = *(undefined4 *)(param_2 + 0x14);
      puStack_320 = *(undefined **)(param_2 + 0x18);
      piStack_31c = *(int **)(param_2 + 0x1c);
      local_318 = *(uint *)(param_2 + 0x20);
      uStack_314 = *(undefined4 *)(param_2 + 0x24);
      uStack_310 = *(undefined4 *)(param_2 + 0x28);
      uVar5 = FUN_01824410(param_1);
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0x14);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x14);
      }
      *(undefined1 *)(puVar6 + 4) = 0;
      puVar8 = &UNK_01d19a5c;
      *puVar6 = uVar5;
      puVar6[1] = &DAT_01d19884;
      goto LAB_017505f0;
    }
    iVar4 = FUN_014146a0(param_2,&DAT_00570360);
    if (iVar4 == 0) {
      local_33c = &DAT_014142c0;
      local_340 = &local_344;
      local_344 = param_2;
      FUN_00664898(&local_338,&DAT_0057ec38,&local_340);
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      *puVar6 = local_338;
      puVar8 = &UNK_01d19a8c;
      *(undefined1 *)(puVar6 + 3) = 0;
      puVar6[1] = local_334;
      puVar6[2] = local_330;
    }
    else {
      piVar7 = *(int **)(param_1 + 0xc);
      do {
        iVar4 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar4 + 1;
      if (iVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1750718);
        (*pcVar1)();
      }
      (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                (&local_338,
                 *(int *)(param_1 + 0x10) +
                 (*(int *)(*(int *)(param_1 + 0x14) + 8) - 1U & 0xfffffff8) + 8,param_2);
      cVar3 = (char)local_338;
      if ((char)local_338 != '\x02') {
        local_340._0_3_ = (undefined3)((uint)local_338 >> 8);
        local_338 = *(undefined4 *)param_2;
        local_334 = *(undefined4 *)(param_2 + 4);
        local_330 = *(undefined4 *)(param_2 + 8);
        local_32c = *(undefined4 *)(param_2 + 0xc);
        local_328 = *(undefined4 *)(param_2 + 0x10);
        local_324 = *(undefined4 *)(param_2 + 0x14);
        puStack_320 = *(undefined **)(param_2 + 0x18);
        piStack_31c = *(int **)(param_2 + 0x1c);
        local_318 = *(uint *)(param_2 + 0x20);
        uStack_314 = *(undefined4 *)(param_2 + 0x24);
        uStack_310 = *(undefined4 *)(param_2 + 0x28);
        local_324 = FUN_01824410(param_1,&local_338);
        puStack_320 = &DAT_01d19884;
        local_318 = local_318 & 0xffffff00;
        local_338 = CONCAT13(local_340._2_1_,CONCAT21((undefined2)local_340,cVar3));
        piStack_31c = piVar7;
        puVar6 = (undefined4 *)thunk_FUN_01be5118(0x310);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x310);
        }
        FUN_01bed4e2(puVar6,&local_338,0x310);
        puVar8 = &UNK_01d19a6c;
        goto LAB_017505f0;
      }
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *(undefined1 *)(puVar6 + 2) = 0;
      *puVar6 = local_334;
      puVar6[1] = local_330;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar4 + -1;
      puVar8 = &UNK_01d19a7c;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018fa168(piVar7);
      }
    }
  }
  FUN_01435814(param_2);
LAB_017505f0:
  return CONCAT44(puVar8,puVar6);
}

