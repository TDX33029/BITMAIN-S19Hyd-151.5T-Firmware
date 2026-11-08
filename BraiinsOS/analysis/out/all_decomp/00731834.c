// FUN_00731834 @ 00731834 size=1656 calls_out=8 calls_in=1
// strings: InitiatorError | NoiseCodec | ResponderInitialError | ResponderErrorCoinBase1CoinBase2 | AuthError

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00731834(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 *local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  ppuVar2 = &local_40;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar6 = (undefined1 *)*param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar1 = (*pcVar5)(puVar6,&DAT_00412ee7,7);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_007f3104(param_1 + 1,param_2);
      goto joined_r0x0073197c;
    }
    iVar1 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar6;
    local_3c = iVar8;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_007f3104(param_1 + 1,&local_30);
    break;
  case 1:
    puVar6 = (undefined1 *)*param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar1 = (*pcVar5)(puVar6,&DAT_0040f9ac,5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00732498(param_1 + 1,param_2);
      goto joined_r0x0073197c;
    }
    iVar1 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar6;
    local_3c = iVar8;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00732498(param_1 + 1,&local_30);
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00731914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"ConnectionShutdown",0x12);
    return uVar3;
  case 3:
    puVar6 = (undefined1 *)*param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar1 = (*pcVar5)(puVar6,"NoiseCodec",10);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00787dc8(param_1 + 4,param_2);
      goto joined_r0x0073197c;
    }
    iVar1 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar6;
    local_3c = iVar8;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00787dc8(param_1 + 4,&local_30);
    goto LAB_00731e7c;
  case 4:
    puVar6 = (undefined1 *)*param_2;
    puVar7 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar7 + 0xc);
    pcVar4 = "InitiatorError";
    goto LAB_00731ad4;
  case 5:
    puVar6 = (undefined1 *)*param_2;
    puVar7 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar7 + 0xc);
    iVar1 = (*pcVar5)(puVar6,"ResponderInitialError",0x15);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00f5df14(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),*param_2,
                           param_2[1]);
      goto joined_r0x0073197c;
    }
    iVar1 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
    local_30 = puVar6;
    local_2c = puVar7;
    local_28 = (undefined1 *)&local_40;
    iVar1 = FUN_00f5df14(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_30,
                         &DAT_01880dc4);
    goto joined_r0x00731dec;
  case 6:
    puVar6 = (undefined1 *)*param_2;
    puVar7 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar7 + 0xc);
    pcVar4 = "ResponderErrorCoinBase1CoinBase2";
LAB_00731ad4:
    iVar1 = (*pcVar5)(puVar6,pcVar4,0xe);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),*param_2,
                           param_2[1]);
      goto joined_r0x0073197c;
    }
    iVar1 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
    local_30 = puVar6;
    local_2c = puVar7;
    local_28 = (undefined1 *)&local_40;
    iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30,
                         &DAT_01880dc4);
joined_r0x00731dec:
    if (iVar1 != 0) {
      return 1;
    }
    ppuVar2 = &local_30;
    goto LAB_00731dfc;
  case 7:
    puVar6 = (undefined1 *)*param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar1 = (*pcVar5)(puVar6,&DAT_00564ad0,0x10);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00787c9c(param_1 + 4,param_2);
      goto joined_r0x0073197c;
    }
    iVar1 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar6;
    local_3c = iVar8;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00787c9c(param_1 + 4,&local_30);
    break;
  case 8:
    puVar6 = (undefined1 *)*param_2;
    iVar8 = param_2[1];
    pcVar5 = *(code **)(iVar8 + 0xc);
    iVar1 = (*pcVar5)(puVar6,"AuthError",9);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00732a90(param_1 + 4,param_2);
      goto joined_r0x0073197c;
    }
    iVar1 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar6;
    local_3c = iVar8;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00732a90(param_1 + 4,&local_30);
LAB_00731e7c:
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
    goto joined_r0x0073197c;
  }
  if (iVar1 != 0) {
    return 1;
  }
LAB_00731dfc:
  iVar1 = FUN_00fb1f64(ppuVar2,&DAT_00414a81,2);
joined_r0x0073197c:
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

